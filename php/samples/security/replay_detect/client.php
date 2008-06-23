<?php
/*
 * Copyright 2005,2008 WSO2, Inc. http://wso2.com
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


$reqPayloadString = <<<XML
<ns1:echo xmlns:ns1="http://php.axis2.org/samples"><text>Hello World!</text></ns1:echo>
XML;

function replay_detect_callback($msg_id, $time_created) {
	$max_duration = 5;
	$lock_file = "/tmp/indicator";
	$replay_file = "/tmp/replay.content";

	$list_of_records = array();	

	/* Wait till other process who aquired the lock to releasing it */
	do {
    	clearstatcache();
        usleep(rand(5,70));
    } while(file_exists($lock_file));

	/* Aquiring the lock to replay.content file */
	$fp = fopen2($lock_file, "wb");
    fwrite($fp, "/tmp/replay.content lock aquired.");
    fclose($fp);
	
	/* Reading the content of replay.content file 
	 * Check for replays.
	 */
	if(file_exists($replay_file)) {
		$content = file_get_contents($replay_file);
		$tok_rec = strtok($content, "@");
		while($tok_rec) {
			$list_of_records[] = $tok_rec;
			$tok_rec = strtok($content, "@");
		}
	} else {
		$fp_to_write = fopen($replay_file, "w" ) or die ("Cannot open the file");
		fwrite($fp_to_write, $msg_id.$time_created."@");
		fclose($fp_to_write);
		unlink($lock_file); /* Releasing the lock */
		return FALSE;
	}

	if (array_key_exists($msg_id.$time_created, $list_of_records)) {
		unlink($lock_file); /* Releasing the lock */
		return TRUE;
	} else {
		$elements = count($list_of_records);
		if($elements == $max_duration) {
			$new_rcd_list = array_splice($list_of_records, 1);
			$new_rcd_list[] = $msg_id.$time_created;
			$fp_to_write = fopen($replay_file, "w") or die ("Cannot open the file");
			foreach($new_rcd_list as $value) {
				fwrite($fp_to_write, $value."@");
			}
			fclose($fp_to_write);
		} else {
			$list_of_records[] = $msg_id.$time_created;
			$fp_to_write = fopen($replay_file, "w") or die ("Cannot open the file");
			foreach($list_of_records as $value) {
				fwrite($fp_to_write, $value."@");
			}
			fclose($fp_to_write);
		}
	}	
	
	/* Releasing the lock */
	unlink($lock_file);
	return FALSE;	
}


try {

    $reqMessage = new WSMessage($reqPayloadString,
                                array("to"=>"http://localhost/samples/security/replay_detect/service.php",
                                      "action" => "http://php.axis2.org/samples/echoString"));
    
    $sec_array = array("includeTimeStamp" => TRUE );
    $policy = new WSPolicy(array("security" => $sec_array));
    $sec_token = new WSSecurityToken(array("ttl" => 60));
    
    $client = new WSClient(array("useWSA" => TRUE,
                                 "policy" => $policy,
                                 "securityToken" => $sec_token));
				
    $resMessage = $client->request($reqMessage);
    
    printf("Response = %s \n", $resMessage->str);

} catch (Exception $e) {

	if ($e instanceof WSFault) {
		printf("Soap Fault: %s\n", $e->Reason);
	} else {
		printf("Message = %s\n",$e->getMessage());
	}

}
?>
