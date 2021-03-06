/*
* Copyright 2009-2010 WSO2, Inc. http://wso2.com
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


        #ifndef ADB_APPLYSECURITY_H
        #define ADB_APPLYSECURITY_H

       /**
        * adb_applySecurity.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: #axisVersion# #today#
        */

       /**
        *  adb_applySecurity class
        */

        

        #include <stdio.h>
        #include <axiom.h>
        #include <axis2_util.h>
        #include <axiom_soap.h>
        #include <axis2_client.h>

        #include "axis2_extension_mapper.h"

        #ifdef __cplusplus
        extern "C"
        {
        #endif

        #define ADB_DEFAULT_DIGIT_LIMIT 1024
        #define ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT 64
        

        typedef struct adb_applySecurity adb_applySecurity_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_applySecurity_t
         * @param env pointer to environment struct
         * @return newly created adb_applySecurity_t object
         */
        adb_applySecurity_t* AXIS2_CALL
        adb_applySecurity_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _applySecurity adb_applySecurity_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_applySecurity_free (
            adb_applySecurity_t* _applySecurity,
            const axutil_env_t *env);

        /**
         * Free adb_applySecurity_t object
         * @param  _applySecurity adb_applySecurity_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_applySecurity_free_obj (
            adb_applySecurity_t* _applySecurity,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        /******** Deprecated for array types, Use 'Getters and Setters for Arrays' instead ***********/
        

        /**
         * Getter for serviceName. 
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_applySecurity_get_serviceName(
            adb_applySecurity_t* _applySecurity,
            const axutil_env_t *env);

        /**
         * Setter for serviceName.
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @param arg_serviceName axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_applySecurity_set_serviceName(
            adb_applySecurity_t* _applySecurity,
            const axutil_env_t *env,
            const axis2_char_t*  arg_serviceName);

        /**
         * Resetter for serviceName
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_applySecurity_reset_serviceName(
            adb_applySecurity_t* _applySecurity,
            const axutil_env_t *env);

        
        

        /**
         * Getter for policyId. 
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_applySecurity_get_policyId(
            adb_applySecurity_t* _applySecurity,
            const axutil_env_t *env);

        /**
         * Setter for policyId.
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @param arg_policyId axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_applySecurity_set_policyId(
            adb_applySecurity_t* _applySecurity,
            const axutil_env_t *env,
            const axis2_char_t*  arg_policyId);

        /**
         * Resetter for policyId
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_applySecurity_reset_policyId(
            adb_applySecurity_t* _applySecurity,
            const axutil_env_t *env);

        
        

        /**
         * Getter for trustedStores. Deprecated for array types, Use adb_applySecurity_get_trustedStores_at instead
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @return Array of axis2_char_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_applySecurity_get_trustedStores(
            adb_applySecurity_t* _applySecurity,
            const axutil_env_t *env);

        /**
         * Setter for trustedStores.Deprecated for array types, Use adb_applySecurity_set_trustedStores_at
         * or adb_applySecurity_add_trustedStores instead.
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @param arg_trustedStores Array of axis2_char_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_applySecurity_set_trustedStores(
            adb_applySecurity_t* _applySecurity,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_trustedStores);

        /**
         * Resetter for trustedStores
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_applySecurity_reset_trustedStores(
            adb_applySecurity_t* _applySecurity,
            const axutil_env_t *env);

        
        

        /**
         * Getter for privateStore. 
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_applySecurity_get_privateStore(
            adb_applySecurity_t* _applySecurity,
            const axutil_env_t *env);

        /**
         * Setter for privateStore.
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @param arg_privateStore axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_applySecurity_set_privateStore(
            adb_applySecurity_t* _applySecurity,
            const axutil_env_t *env,
            const axis2_char_t*  arg_privateStore);

        /**
         * Resetter for privateStore
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_applySecurity_reset_privateStore(
            adb_applySecurity_t* _applySecurity,
            const axutil_env_t *env);

        
        

        /**
         * Getter for userGroupNames. Deprecated for array types, Use adb_applySecurity_get_userGroupNames_at instead
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @return Array of axis2_char_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_applySecurity_get_userGroupNames(
            adb_applySecurity_t* _applySecurity,
            const axutil_env_t *env);

        /**
         * Setter for userGroupNames.Deprecated for array types, Use adb_applySecurity_set_userGroupNames_at
         * or adb_applySecurity_add_userGroupNames instead.
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @param arg_userGroupNames Array of axis2_char_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_applySecurity_set_userGroupNames(
            adb_applySecurity_t* _applySecurity,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_userGroupNames);

        /**
         * Resetter for userGroupNames
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_applySecurity_reset_userGroupNames(
            adb_applySecurity_t* _applySecurity,
            const axutil_env_t *env);

        
        /****************************** Getters and Setters For Arrays **********************************/
        /************ Array Specific Operations: get_at, set_at, add, remove_at, sizeof *****************/

        /**
         * E.g. use of get_at, set_at, add and sizeof
         *
         * for(i = 0; i < adb_element_sizeof_property(adb_object, env); i ++ )
         * {
         *     // Getting ith value to property_object variable
         *     property_object = adb_element_get_property_at(adb_object, env, i);
         *
         *     // Setting ith value from property_object variable
         *     adb_element_set_property_at(adb_object, env, i, property_object);
         *
         *     // Appending the value to the end of the array from property_object variable
         *     adb_element_add_property(adb_object, env, property_object);
         *
         *     // Removing the ith value from an array
         *     adb_element_remove_property_at(adb_object, env, i);
         *     
         * }
         *
         */

        
        
        /**
         * Get the ith element of trustedStores.
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith axis2_char_t* of the array
         */
        axis2_char_t* AXIS2_CALL
        adb_applySecurity_get_trustedStores_at(
                adb_applySecurity_t* _applySecurity,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of trustedStores. (If the ith already exist, it will be replaced)
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_trustedStores element to set axis2_char_t* to the array
         * @return ith axis2_char_t* of the array
         */
        axis2_status_t AXIS2_CALL
        adb_applySecurity_set_trustedStores_at(
                adb_applySecurity_t* _applySecurity,
                const axutil_env_t *env, int i,
                const axis2_char_t* arg_trustedStores);


        /**
         * Add to trustedStores.
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @param arg_trustedStores element to add axis2_char_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_applySecurity_add_trustedStores(
                adb_applySecurity_t* _applySecurity,
                const axutil_env_t *env,
                const axis2_char_t* arg_trustedStores);

        /**
         * Get the size of the trustedStores array.
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct.
         * @return the size of the trustedStores array.
         */
        int AXIS2_CALL
        adb_applySecurity_sizeof_trustedStores(
                    adb_applySecurity_t* _applySecurity,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of trustedStores.
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_applySecurity_remove_trustedStores_at(
                adb_applySecurity_t* _applySecurity,
                const axutil_env_t *env, int i);

        
        
        /**
         * Get the ith element of userGroupNames.
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith axis2_char_t* of the array
         */
        axis2_char_t* AXIS2_CALL
        adb_applySecurity_get_userGroupNames_at(
                adb_applySecurity_t* _applySecurity,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of userGroupNames. (If the ith already exist, it will be replaced)
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_userGroupNames element to set axis2_char_t* to the array
         * @return ith axis2_char_t* of the array
         */
        axis2_status_t AXIS2_CALL
        adb_applySecurity_set_userGroupNames_at(
                adb_applySecurity_t* _applySecurity,
                const axutil_env_t *env, int i,
                const axis2_char_t* arg_userGroupNames);


        /**
         * Add to userGroupNames.
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @param arg_userGroupNames element to add axis2_char_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_applySecurity_add_userGroupNames(
                adb_applySecurity_t* _applySecurity,
                const axutil_env_t *env,
                const axis2_char_t* arg_userGroupNames);

        /**
         * Get the size of the userGroupNames array.
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct.
         * @return the size of the userGroupNames array.
         */
        int AXIS2_CALL
        adb_applySecurity_sizeof_userGroupNames(
                    adb_applySecurity_t* _applySecurity,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of userGroupNames.
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_applySecurity_remove_userGroupNames_at(
                adb_applySecurity_t* _applySecurity,
                const axutil_env_t *env, int i);

        


        /******************************* Checking and Setting NIL values *********************************/
        /* Use 'Checking and Setting NIL values for Arrays' to check and set nil for individual elements */

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether serviceName is nill
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_applySecurity_is_serviceName_nil(
                adb_applySecurity_t* _applySecurity,
                const axutil_env_t *env);


        
        /**
         * Set serviceName to nill (currently the same as reset)
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_applySecurity_set_serviceName_nil(
                adb_applySecurity_t* _applySecurity,
                const axutil_env_t *env);
        

        /**
         * Check whether policyId is nill
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_applySecurity_is_policyId_nil(
                adb_applySecurity_t* _applySecurity,
                const axutil_env_t *env);


        
        /**
         * Set policyId to nill (currently the same as reset)
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_applySecurity_set_policyId_nil(
                adb_applySecurity_t* _applySecurity,
                const axutil_env_t *env);
        

        /**
         * Check whether trustedStores is nill
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_applySecurity_is_trustedStores_nil(
                adb_applySecurity_t* _applySecurity,
                const axutil_env_t *env);


        
        /**
         * Set trustedStores to nill (currently the same as reset)
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_applySecurity_set_trustedStores_nil(
                adb_applySecurity_t* _applySecurity,
                const axutil_env_t *env);
        

        /**
         * Check whether privateStore is nill
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_applySecurity_is_privateStore_nil(
                adb_applySecurity_t* _applySecurity,
                const axutil_env_t *env);


        
        /**
         * Set privateStore to nill (currently the same as reset)
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_applySecurity_set_privateStore_nil(
                adb_applySecurity_t* _applySecurity,
                const axutil_env_t *env);
        

        /**
         * Check whether userGroupNames is nill
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_applySecurity_is_userGroupNames_nil(
                adb_applySecurity_t* _applySecurity,
                const axutil_env_t *env);


        
        /**
         * Set userGroupNames to nill (currently the same as reset)
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_applySecurity_set_userGroupNames_nil(
                adb_applySecurity_t* _applySecurity,
                const axutil_env_t *env);
        
        /*************************** Checking and Setting 'NIL' values in Arrays *****************************/

        /**
         * NOTE: You may set this to remove specific elements in the array
         *       But you can not remove elements, if the specific property is declared to be non-nillable or sizeof(array) < minOccurs
         */
        
        /**
         * Check whether trustedStores is nill at i
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_applySecurity_is_trustedStores_nil_at(
                adb_applySecurity_t* _applySecurity,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set trustedStores to nill at i
         * @param  _applySecurity _ adb_applySecurity_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_applySecurity_set_trustedStores_nil_at(
                adb_applySecurity_t* _applySecurity, 
                const axutil_env_t *env, int i);

        
        /**
         * Check whether userGroupNames is nill at i
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_applySecurity_is_userGroupNames_nil_at(
                adb_applySecurity_t* _applySecurity,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set userGroupNames to nill at i
         * @param  _applySecurity _ adb_applySecurity_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_applySecurity_set_userGroupNames_nil_at(
                adb_applySecurity_t* _applySecurity, 
                const axutil_env_t *env, int i);

        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_applySecurity_deserialize(
            adb_applySecurity_t* _applySecurity,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_applySecurity_deserialize_obj(
            adb_applySecurity_t* _applySecurity,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_applySecurity_declare_parent_namespaces(
                    adb_applySecurity_t* _applySecurity,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @param applySecurity_om_node node to serialize from
         * @param applySecurity_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_applySecurity_serialize(
            adb_applySecurity_t* _applySecurity,
            const axutil_env_t *env,
            axiom_node_t* applySecurity_om_node, axiom_element_t *applySecurity_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @param applySecurity_om_node node to serialize from
         * @param applySecurity_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_applySecurity_serialize_obj(
            adb_applySecurity_t* _applySecurity,
            const axutil_env_t *env,
            axiom_node_t* applySecurity_om_node, axiom_element_t *applySecurity_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_applySecurity is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_applySecurity_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_applySecurity_t
         * @param env pointer to environment struct
         * @param _serviceName axis2_char_t*
         * @param _policyId axis2_char_t*
         * @param _trustedStores axutil_array_list_t*
         * @param _privateStore axis2_char_t*
         * @param _userGroupNames axutil_array_list_t*
         * @return newly created adb_applySecurity_t object
         */
        adb_applySecurity_t* AXIS2_CALL
        adb_applySecurity_create_with_values(
            const axutil_env_t *env,
                axis2_char_t* _serviceName,
                axis2_char_t* _policyId,
                axutil_array_list_t* _trustedStores,
                axis2_char_t* _privateStore,
                axutil_array_list_t* _userGroupNames);

        


                /**
                 * Free adb_applySecurity_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _applySecurity adb_applySecurity_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                axis2_char_t* AXIS2_CALL
                adb_applySecurity_free_popping_value(
                        adb_applySecurity_t* _applySecurity,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for serviceName by property number (1)
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_applySecurity_get_property1(
            adb_applySecurity_t* _applySecurity,
            const axutil_env_t *env);

    
        

        /**
         * Getter for policyId by property number (2)
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_applySecurity_get_property2(
            adb_applySecurity_t* _applySecurity,
            const axutil_env_t *env);

    
        

        /**
         * Getter for trustedStores by property number (3)
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @return Array of axis2_char_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_applySecurity_get_property3(
            adb_applySecurity_t* _applySecurity,
            const axutil_env_t *env);

    
        

        /**
         * Getter for privateStore by property number (4)
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_applySecurity_get_property4(
            adb_applySecurity_t* _applySecurity,
            const axutil_env_t *env);

    
        

        /**
         * Getter for userGroupNames by property number (5)
         * @param  _applySecurity adb_applySecurity_t object
         * @param env pointer to environment struct
         * @return Array of axis2_char_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_applySecurity_get_property5(
            adb_applySecurity_t* _applySecurity,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_APPLYSECURITY_H */
    

