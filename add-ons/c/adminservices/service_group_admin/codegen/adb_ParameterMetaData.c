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


        /**
         * adb_ParameterMetaData.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_ParameterMetaData.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = ParameterMetaData
                 * Namespace URI = http://mgt.service.carbon.wso2.org/xsd
                 * Namespace Prefix = ns1
                 */
           


        struct adb_ParameterMetaData
        {
            axis2_char_t *property_Type;

            axis2_bool_t property_editable;

                
                axis2_bool_t is_valid_editable;
            axis2_bool_t property_locked;

                
                axis2_bool_t is_valid_locked;
            axis2_char_t* property_name;

                
                axis2_bool_t is_valid_name;
            int property_type;

                
                axis2_bool_t is_valid_type;
            axis2_char_t* property_value;

                
                axis2_bool_t is_valid_value;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_ParameterMetaData_set_editable_nil(
                        adb_ParameterMetaData_t* _ParameterMetaData,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_ParameterMetaData_set_locked_nil(
                        adb_ParameterMetaData_t* _ParameterMetaData,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_ParameterMetaData_set_type_nil(
                        adb_ParameterMetaData_t* _ParameterMetaData,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_ParameterMetaData_t* AXIS2_CALL
        adb_ParameterMetaData_create(
            const axutil_env_t *env)
        {
            adb_ParameterMetaData_t *_ParameterMetaData = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _ParameterMetaData = (adb_ParameterMetaData_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_ParameterMetaData_t));

            if(NULL == _ParameterMetaData)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_ParameterMetaData, 0, sizeof(adb_ParameterMetaData_t));

            _ParameterMetaData->property_Type = axutil_strdup(env, "adb_ParameterMetaData");
            _ParameterMetaData->is_valid_editable  = AXIS2_FALSE;
            _ParameterMetaData->is_valid_locked  = AXIS2_FALSE;
            _ParameterMetaData->property_name  = NULL;
                  _ParameterMetaData->is_valid_name  = AXIS2_FALSE;
            _ParameterMetaData->is_valid_type  = AXIS2_FALSE;
            _ParameterMetaData->property_value  = NULL;
                  _ParameterMetaData->is_valid_value  = AXIS2_FALSE;
            

            return _ParameterMetaData;
        }

        adb_ParameterMetaData_t* AXIS2_CALL
        adb_ParameterMetaData_create_with_values(
            const axutil_env_t *env,
                axis2_bool_t _editable,
                axis2_bool_t _locked,
                axis2_char_t* _name,
                int _type,
                axis2_char_t* _value)
        {
            adb_ParameterMetaData_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_ParameterMetaData_create(env);

            
              status = adb_ParameterMetaData_set_editable(
                                     adb_obj,
                                     env,
                                     _editable);
              if(status == AXIS2_FAILURE) {
                  adb_ParameterMetaData_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_ParameterMetaData_set_locked(
                                     adb_obj,
                                     env,
                                     _locked);
              if(status == AXIS2_FAILURE) {
                  adb_ParameterMetaData_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_ParameterMetaData_set_name(
                                     adb_obj,
                                     env,
                                     _name);
              if(status == AXIS2_FAILURE) {
                  adb_ParameterMetaData_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_ParameterMetaData_set_type(
                                     adb_obj,
                                     env,
                                     _type);
              if(status == AXIS2_FAILURE) {
                  adb_ParameterMetaData_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_ParameterMetaData_set_value(
                                     adb_obj,
                                     env,
                                     _value);
              if(status == AXIS2_FAILURE) {
                  adb_ParameterMetaData_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axis2_bool_t AXIS2_CALL
                adb_ParameterMetaData_free_popping_value(
                        adb_ParameterMetaData_t* _ParameterMetaData,
                        const axutil_env_t *env)
                {
                    axis2_bool_t value;

                    
                    
                    value = _ParameterMetaData->property_editable;

                    adb_ParameterMetaData_free(_ParameterMetaData, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_ParameterMetaData_free(
                adb_ParameterMetaData_t* _ParameterMetaData,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_type_t*) _ParameterMetaData,
                env,
                "adb_ParameterMetaData");
            
        }

        axis2_status_t AXIS2_CALL
        adb_ParameterMetaData_free_obj(
                adb_ParameterMetaData_t* _ParameterMetaData,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _ParameterMetaData, AXIS2_FAILURE);

            if (_ParameterMetaData->property_Type != NULL)
            {
              AXIS2_FREE(env->allocator, _ParameterMetaData->property_Type);
            }

            adb_ParameterMetaData_reset_editable(_ParameterMetaData, env);
            adb_ParameterMetaData_reset_locked(_ParameterMetaData, env);
            adb_ParameterMetaData_reset_name(_ParameterMetaData, env);
            adb_ParameterMetaData_reset_type(_ParameterMetaData, env);
            adb_ParameterMetaData_reset_value(_ParameterMetaData, env);
            

            if(_ParameterMetaData)
            {
                AXIS2_FREE(env->allocator, _ParameterMetaData);
                _ParameterMetaData = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_ParameterMetaData_deserialize(
                adb_ParameterMetaData_t* _ParameterMetaData,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_type_t*) _ParameterMetaData,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_ParameterMetaData");
            
        }

        axis2_status_t AXIS2_CALL
        adb_ParameterMetaData_deserialize_obj(
                adb_ParameterMetaData_t* _ParameterMetaData,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
          axiom_node_t *parent = *dp_parent;
          
          axis2_status_t status = AXIS2_SUCCESS;
           
             const axis2_char_t* text_value = NULL;
             axutil_qname_t *qname = NULL;
          
            axutil_qname_t *element_qname = NULL; 
            
               axiom_node_t *first_node = NULL;
               axis2_bool_t is_early_node_valid = AXIS2_TRUE;
               axiom_node_t *current_node = NULL;
               axiom_element_t *current_element = NULL;
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _ParameterMetaData, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for ParameterMetaData : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    

                     
                     /*
                      * building editable element
                      */
                     
                     
                     
                                   current_node = first_node;
                                   is_early_node_valid = AXIS2_FALSE;
                                   
                                   
                                    while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                    {
                                        current_node = axiom_node_get_next_sibling(current_node, env);
                                    }
                                    if(current_node != NULL)
                                    {
                                        current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                        qname = axiom_element_get_qname(current_element, env, current_node);
                                    }
                                   
                                 element_qname = axutil_qname_create(env, "editable", "http://mgt.service.carbon.wso2.org/xsd", NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            if (!axutil_strcasecmp(text_value , "true"))
                                            {
                                                status = adb_ParameterMetaData_set_editable(_ParameterMetaData, env,
                                                                 AXIS2_TRUE);
                                            }
                                            else
                                            {
                                                status = adb_ParameterMetaData_set_editable(_ParameterMetaData, env,
                                                                      AXIS2_FALSE);
                                            }
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element editable");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for editable ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building locked element
                      */
                     
                     
                     
                                    /*
                                     * because elements are ordered this works fine
                                     */
                                  
                                   
                                   if(current_node != NULL && is_early_node_valid)
                                   {
                                       current_node = axiom_node_get_next_sibling(current_node, env);
                                       
                                       
                                        while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                        {
                                            current_node = axiom_node_get_next_sibling(current_node, env);
                                        }
                                        if(current_node != NULL)
                                        {
                                            current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                            qname = axiom_element_get_qname(current_element, env, current_node);
                                        }
                                       
                                   }
                                   is_early_node_valid = AXIS2_FALSE;
                                 
                                 element_qname = axutil_qname_create(env, "locked", "http://mgt.service.carbon.wso2.org/xsd", NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            if (!axutil_strcasecmp(text_value , "true"))
                                            {
                                                status = adb_ParameterMetaData_set_locked(_ParameterMetaData, env,
                                                                 AXIS2_TRUE);
                                            }
                                            else
                                            {
                                                status = adb_ParameterMetaData_set_locked(_ParameterMetaData, env,
                                                                      AXIS2_FALSE);
                                            }
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element locked");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for locked ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building name element
                      */
                     
                     
                     
                                    /*
                                     * because elements are ordered this works fine
                                     */
                                  
                                   
                                   if(current_node != NULL && is_early_node_valid)
                                   {
                                       current_node = axiom_node_get_next_sibling(current_node, env);
                                       
                                       
                                        while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                        {
                                            current_node = axiom_node_get_next_sibling(current_node, env);
                                        }
                                        if(current_node != NULL)
                                        {
                                            current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                            qname = axiom_element_get_qname(current_element, env, current_node);
                                        }
                                       
                                   }
                                   is_early_node_valid = AXIS2_FALSE;
                                 
                                 element_qname = axutil_qname_create(env, "name", "http://mgt.service.carbon.wso2.org/xsd", NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            status = adb_ParameterMetaData_set_name(_ParameterMetaData, env,
                                                               text_value);
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for name ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building type element
                      */
                     
                     
                     
                                    /*
                                     * because elements are ordered this works fine
                                     */
                                  
                                   
                                   if(current_node != NULL && is_early_node_valid)
                                   {
                                       current_node = axiom_node_get_next_sibling(current_node, env);
                                       
                                       
                                        while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                        {
                                            current_node = axiom_node_get_next_sibling(current_node, env);
                                        }
                                        if(current_node != NULL)
                                        {
                                            current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                            qname = axiom_element_get_qname(current_element, env, current_node);
                                        }
                                       
                                   }
                                   is_early_node_valid = AXIS2_FALSE;
                                 
                                 element_qname = axutil_qname_create(env, "type", "http://mgt.service.carbon.wso2.org/xsd", NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            status = adb_ParameterMetaData_set_type(_ParameterMetaData, env,
                                                                   atoi(text_value));
                                      }
                                      
                                      else
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element type");
                                          status = AXIS2_FAILURE;
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for type ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building value element
                      */
                     
                     
                     
                                    /*
                                     * because elements are ordered this works fine
                                     */
                                  
                                   
                                   if(current_node != NULL && is_early_node_valid)
                                   {
                                       current_node = axiom_node_get_next_sibling(current_node, env);
                                       
                                       
                                        while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                        {
                                            current_node = axiom_node_get_next_sibling(current_node, env);
                                        }
                                        if(current_node != NULL)
                                        {
                                            current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                            qname = axiom_element_get_qname(current_element, env, current_node);
                                        }
                                       
                                   }
                                   is_early_node_valid = AXIS2_FALSE;
                                 
                                 element_qname = axutil_qname_create(env, "value", "http://mgt.service.carbon.wso2.org/xsd", NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            status = adb_ParameterMetaData_set_value(_ParameterMetaData, env,
                                                               text_value);
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for value ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_ParameterMetaData_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_ParameterMetaData_declare_parent_namespaces(
                    adb_ParameterMetaData_t* _ParameterMetaData,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_ParameterMetaData_serialize(
                adb_ParameterMetaData_t* _ParameterMetaData,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_ParameterMetaData == NULL)
            {
                return adb_ParameterMetaData_serialize_obj(
                    _ParameterMetaData, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_type_t*) _ParameterMetaData, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_ParameterMetaData");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_ParameterMetaData_serialize_obj(
                adb_ParameterMetaData_t* _ParameterMetaData,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
             axis2_char_t *string_to_stream;
            
         
         axiom_node_t* current_node = NULL;
         int tag_closed = 0;
         
         axis2_char_t* xsi_prefix = NULL;
         
         axis2_char_t* type_attrib = NULL;
         axiom_namespace_t* xsi_ns = NULL;
         axiom_attribute_t* xsi_type_attri = NULL;
         
                axiom_namespace_t *ns1 = NULL;

                axis2_char_t *qname_uri = NULL;
                axis2_char_t *qname_prefix = NULL;
                axis2_char_t *p_prefix = NULL;
                axis2_bool_t ns_already_defined;
            
                    axis2_char_t text_value_1[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_2[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t *text_value_3;
                    axis2_char_t *text_value_3_temp;
                    
                    axis2_char_t text_value_4[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t *text_value_5;
                    axis2_char_t *text_value_5_temp;
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _ParameterMetaData, NULL);
            
            
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
            {
            
              
 
              if(!(xsi_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING)))
              {
                  /* it is better to stick with the standard prefix */
                  xsi_prefix = (axis2_char_t*)axutil_strdup(env, "xsi");
                  
                  axutil_hash_set(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING, xsi_prefix);

                  if(parent_element)
                  {
                        axiom_namespace_t *element_ns = NULL;
                        element_ns = axiom_namespace_create(env, "http://www.w3.org/2001/XMLSchema-instance",
                                                            xsi_prefix);
                        axiom_element_declare_namespace_assume_param_ownership(parent_element, env, element_ns);
                  }
              }
              type_attrib = axutil_strcat(env, " ", xsi_prefix, ":type=\"ParameterMetaData\"", NULL);
              axutil_stream_write(stream, env, type_attrib, axutil_strlen(type_attrib));

              AXIS2_FREE(env->allocator, type_attrib);
                
              string_to_stream = ">"; 
              axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
              tag_closed = 1;
            
            }
            else {
              /* if the parent tag closed we would be able to declare the type directly on the parent element */ 
              if(!(xsi_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING)))
              {
                  /* it is better to stick with the standard prefix */
                  xsi_prefix = (axis2_char_t*)axutil_strdup(env, "xsi");
                  
                  axutil_hash_set(namespaces, "http://www.w3.org/2001/XMLSchema-instance", AXIS2_HASH_KEY_STRING, xsi_prefix);

                  if(parent_element)
                  {
                        axiom_namespace_t *element_ns = NULL;
                        element_ns = axiom_namespace_create(env, "http://www.w3.org/2001/XMLSchema-instance",
                                                            xsi_prefix);
                        axiom_element_declare_namespace_assume_param_ownership(parent_element, env, element_ns);
                  }
              }
            }
            xsi_ns = axiom_namespace_create (env,
                                 "http://mgt.service.carbon.wso2.org/xsd",
                                 xsi_prefix);
            xsi_type_attri = axiom_attribute_create (env, "type", "ParameterMetaData", xsi_ns);
            
            axiom_element_add_attribute (parent_element, env, xsi_type_attri, parent);
        
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://mgt.service.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://mgt.service.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://mgt.service.carbon.wso2.org/xsd",
                                            p_prefix));
                       }
                      

                   if (!_ParameterMetaData->is_valid_editable)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("editable"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("editable")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing editable element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%seditable>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%seditable>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           strcpy(text_value_1, (_ParameterMetaData->property_editable)?"true":"false");
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_1, axutil_strlen(text_value_1));
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://mgt.service.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://mgt.service.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://mgt.service.carbon.wso2.org/xsd",
                                            p_prefix));
                       }
                      

                   if (!_ParameterMetaData->is_valid_locked)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("locked"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("locked")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing locked element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%slocked>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%slocked>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           strcpy(text_value_2, (_ParameterMetaData->property_locked)?"true":"false");
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_2, axutil_strlen(text_value_2));
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://mgt.service.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://mgt.service.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://mgt.service.carbon.wso2.org/xsd",
                                            p_prefix));
                       }
                      

                   if (!_ParameterMetaData->is_valid_name)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("name"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("name")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing name element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sname>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sname>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_3 = _ParameterMetaData->property_name;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_3_temp = axutil_xml_quote_string(env, text_value_3, AXIS2_TRUE);
                           if (text_value_3_temp)
                           {
                               axutil_stream_write(stream, env, text_value_3_temp, axutil_strlen(text_value_3_temp));
                               AXIS2_FREE(env->allocator, text_value_3_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_3, axutil_strlen(text_value_3));
                           }
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://mgt.service.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://mgt.service.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://mgt.service.carbon.wso2.org/xsd",
                                            p_prefix));
                       }
                      

                   if (!_ParameterMetaData->is_valid_type)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("type"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("type")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing type element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%stype>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%stype>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                               sprintf (text_value_4, AXIS2_PRINTF_INT32_FORMAT_SPECIFIER, _ParameterMetaData->property_type);
                             
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                           axutil_stream_write(stream, env, text_value_4, axutil_strlen(text_value_4));
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://mgt.service.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://mgt.service.carbon.wso2.org/xsd", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://mgt.service.carbon.wso2.org/xsd",
                                            p_prefix));
                       }
                      

                   if (!_ParameterMetaData->is_valid_value)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("value"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("value")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing value element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%svalue>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%svalue>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_5 = _ParameterMetaData->property_value;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_5_temp = axutil_xml_quote_string(env, text_value_5, AXIS2_TRUE);
                           if (text_value_5_temp)
                           {
                               axutil_stream_write(stream, env, text_value_5_temp, axutil_strlen(text_value_5_temp));
                               AXIS2_FREE(env->allocator, text_value_5_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_5, axutil_strlen(text_value_5));
                           }
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 

            return parent;
        }


        

            /**
             * Getter for editable by  Property Number 1
             */
            axis2_bool_t AXIS2_CALL
            adb_ParameterMetaData_get_property1(
                adb_ParameterMetaData_t* _ParameterMetaData,
                const axutil_env_t *env)
            {
                return adb_ParameterMetaData_get_editable(_ParameterMetaData,
                                             env);
            }

            /**
             * getter for editable.
             */
            axis2_bool_t AXIS2_CALL
            adb_ParameterMetaData_get_editable(
                    adb_ParameterMetaData_t* _ParameterMetaData,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (axis2_bool_t)0);
                    AXIS2_PARAM_CHECK(env->error, _ParameterMetaData, (axis2_bool_t)0);
                  

                return _ParameterMetaData->property_editable;
             }

            /**
             * setter for editable
             */
            axis2_status_t AXIS2_CALL
            adb_ParameterMetaData_set_editable(
                    adb_ParameterMetaData_t* _ParameterMetaData,
                    const axutil_env_t *env,
                    axis2_bool_t  arg_editable)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ParameterMetaData, AXIS2_FAILURE);
                
                if(_ParameterMetaData->is_valid_editable &&
                        arg_editable == _ParameterMetaData->property_editable)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_ParameterMetaData_reset_editable(_ParameterMetaData, env);

                _ParameterMetaData->property_editable = arg_editable;
                        _ParameterMetaData->is_valid_editable = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for editable
            */
           axis2_status_t AXIS2_CALL
           adb_ParameterMetaData_reset_editable(
                   adb_ParameterMetaData_t* _ParameterMetaData,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _ParameterMetaData, AXIS2_FAILURE);
               

               _ParameterMetaData->is_valid_editable = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether editable is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_ParameterMetaData_is_editable_nil(
                   adb_ParameterMetaData_t* _ParameterMetaData,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _ParameterMetaData, AXIS2_TRUE);
               
               return !_ParameterMetaData->is_valid_editable;
           }

           /**
            * Set editable to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_ParameterMetaData_set_editable_nil(
                   adb_ParameterMetaData_t* _ParameterMetaData,
                   const axutil_env_t *env)
           {
               return adb_ParameterMetaData_reset_editable(_ParameterMetaData, env);
           }

           

            /**
             * Getter for locked by  Property Number 2
             */
            axis2_bool_t AXIS2_CALL
            adb_ParameterMetaData_get_property2(
                adb_ParameterMetaData_t* _ParameterMetaData,
                const axutil_env_t *env)
            {
                return adb_ParameterMetaData_get_locked(_ParameterMetaData,
                                             env);
            }

            /**
             * getter for locked.
             */
            axis2_bool_t AXIS2_CALL
            adb_ParameterMetaData_get_locked(
                    adb_ParameterMetaData_t* _ParameterMetaData,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (axis2_bool_t)0);
                    AXIS2_PARAM_CHECK(env->error, _ParameterMetaData, (axis2_bool_t)0);
                  

                return _ParameterMetaData->property_locked;
             }

            /**
             * setter for locked
             */
            axis2_status_t AXIS2_CALL
            adb_ParameterMetaData_set_locked(
                    adb_ParameterMetaData_t* _ParameterMetaData,
                    const axutil_env_t *env,
                    axis2_bool_t  arg_locked)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ParameterMetaData, AXIS2_FAILURE);
                
                if(_ParameterMetaData->is_valid_locked &&
                        arg_locked == _ParameterMetaData->property_locked)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_ParameterMetaData_reset_locked(_ParameterMetaData, env);

                _ParameterMetaData->property_locked = arg_locked;
                        _ParameterMetaData->is_valid_locked = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for locked
            */
           axis2_status_t AXIS2_CALL
           adb_ParameterMetaData_reset_locked(
                   adb_ParameterMetaData_t* _ParameterMetaData,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _ParameterMetaData, AXIS2_FAILURE);
               

               _ParameterMetaData->is_valid_locked = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether locked is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_ParameterMetaData_is_locked_nil(
                   adb_ParameterMetaData_t* _ParameterMetaData,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _ParameterMetaData, AXIS2_TRUE);
               
               return !_ParameterMetaData->is_valid_locked;
           }

           /**
            * Set locked to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_ParameterMetaData_set_locked_nil(
                   adb_ParameterMetaData_t* _ParameterMetaData,
                   const axutil_env_t *env)
           {
               return adb_ParameterMetaData_reset_locked(_ParameterMetaData, env);
           }

           

            /**
             * Getter for name by  Property Number 3
             */
            axis2_char_t* AXIS2_CALL
            adb_ParameterMetaData_get_property3(
                adb_ParameterMetaData_t* _ParameterMetaData,
                const axutil_env_t *env)
            {
                return adb_ParameterMetaData_get_name(_ParameterMetaData,
                                             env);
            }

            /**
             * getter for name.
             */
            axis2_char_t* AXIS2_CALL
            adb_ParameterMetaData_get_name(
                    adb_ParameterMetaData_t* _ParameterMetaData,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _ParameterMetaData, NULL);
                  

                return _ParameterMetaData->property_name;
             }

            /**
             * setter for name
             */
            axis2_status_t AXIS2_CALL
            adb_ParameterMetaData_set_name(
                    adb_ParameterMetaData_t* _ParameterMetaData,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_name)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ParameterMetaData, AXIS2_FAILURE);
                
                if(_ParameterMetaData->is_valid_name &&
                        arg_name == _ParameterMetaData->property_name)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_ParameterMetaData_reset_name(_ParameterMetaData, env);

                
                if(NULL == arg_name)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _ParameterMetaData->property_name = (axis2_char_t *)axutil_strdup(env, arg_name);
                        if(NULL == _ParameterMetaData->property_name)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for name");
                            return AXIS2_FAILURE;
                        }
                        _ParameterMetaData->is_valid_name = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for name
            */
           axis2_status_t AXIS2_CALL
           adb_ParameterMetaData_reset_name(
                   adb_ParameterMetaData_t* _ParameterMetaData,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _ParameterMetaData, AXIS2_FAILURE);
               

               
            
                
                if(_ParameterMetaData->property_name != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _ParameterMetaData->property_name);
                     _ParameterMetaData->property_name = NULL;
                }
            
                
                
                _ParameterMetaData->is_valid_name = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether name is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_ParameterMetaData_is_name_nil(
                   adb_ParameterMetaData_t* _ParameterMetaData,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _ParameterMetaData, AXIS2_TRUE);
               
               return !_ParameterMetaData->is_valid_name;
           }

           /**
            * Set name to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_ParameterMetaData_set_name_nil(
                   adb_ParameterMetaData_t* _ParameterMetaData,
                   const axutil_env_t *env)
           {
               return adb_ParameterMetaData_reset_name(_ParameterMetaData, env);
           }

           

            /**
             * Getter for type by  Property Number 4
             */
            int AXIS2_CALL
            adb_ParameterMetaData_get_property4(
                adb_ParameterMetaData_t* _ParameterMetaData,
                const axutil_env_t *env)
            {
                return adb_ParameterMetaData_get_type(_ParameterMetaData,
                                             env);
            }

            /**
             * getter for type.
             */
            int AXIS2_CALL
            adb_ParameterMetaData_get_type(
                    adb_ParameterMetaData_t* _ParameterMetaData,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, (int)0);
                    AXIS2_PARAM_CHECK(env->error, _ParameterMetaData, (int)0);
                  

                return _ParameterMetaData->property_type;
             }

            /**
             * setter for type
             */
            axis2_status_t AXIS2_CALL
            adb_ParameterMetaData_set_type(
                    adb_ParameterMetaData_t* _ParameterMetaData,
                    const axutil_env_t *env,
                    const int  arg_type)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ParameterMetaData, AXIS2_FAILURE);
                
                if(_ParameterMetaData->is_valid_type &&
                        arg_type == _ParameterMetaData->property_type)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_ParameterMetaData_reset_type(_ParameterMetaData, env);

                _ParameterMetaData->property_type = arg_type;
                        _ParameterMetaData->is_valid_type = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for type
            */
           axis2_status_t AXIS2_CALL
           adb_ParameterMetaData_reset_type(
                   adb_ParameterMetaData_t* _ParameterMetaData,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _ParameterMetaData, AXIS2_FAILURE);
               

               _ParameterMetaData->is_valid_type = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether type is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_ParameterMetaData_is_type_nil(
                   adb_ParameterMetaData_t* _ParameterMetaData,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _ParameterMetaData, AXIS2_TRUE);
               
               return !_ParameterMetaData->is_valid_type;
           }

           /**
            * Set type to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_ParameterMetaData_set_type_nil(
                   adb_ParameterMetaData_t* _ParameterMetaData,
                   const axutil_env_t *env)
           {
               return adb_ParameterMetaData_reset_type(_ParameterMetaData, env);
           }

           

            /**
             * Getter for value by  Property Number 5
             */
            axis2_char_t* AXIS2_CALL
            adb_ParameterMetaData_get_property5(
                adb_ParameterMetaData_t* _ParameterMetaData,
                const axutil_env_t *env)
            {
                return adb_ParameterMetaData_get_value(_ParameterMetaData,
                                             env);
            }

            /**
             * getter for value.
             */
            axis2_char_t* AXIS2_CALL
            adb_ParameterMetaData_get_value(
                    adb_ParameterMetaData_t* _ParameterMetaData,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _ParameterMetaData, NULL);
                  

                return _ParameterMetaData->property_value;
             }

            /**
             * setter for value
             */
            axis2_status_t AXIS2_CALL
            adb_ParameterMetaData_set_value(
                    adb_ParameterMetaData_t* _ParameterMetaData,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_value)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _ParameterMetaData, AXIS2_FAILURE);
                
                if(_ParameterMetaData->is_valid_value &&
                        arg_value == _ParameterMetaData->property_value)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_ParameterMetaData_reset_value(_ParameterMetaData, env);

                
                if(NULL == arg_value)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _ParameterMetaData->property_value = (axis2_char_t *)axutil_strdup(env, arg_value);
                        if(NULL == _ParameterMetaData->property_value)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for value");
                            return AXIS2_FAILURE;
                        }
                        _ParameterMetaData->is_valid_value = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for value
            */
           axis2_status_t AXIS2_CALL
           adb_ParameterMetaData_reset_value(
                   adb_ParameterMetaData_t* _ParameterMetaData,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _ParameterMetaData, AXIS2_FAILURE);
               

               
            
                
                if(_ParameterMetaData->property_value != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _ParameterMetaData->property_value);
                     _ParameterMetaData->property_value = NULL;
                }
            
                
                
                _ParameterMetaData->is_valid_value = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether value is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_ParameterMetaData_is_value_nil(
                   adb_ParameterMetaData_t* _ParameterMetaData,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _ParameterMetaData, AXIS2_TRUE);
               
               return !_ParameterMetaData->is_valid_value;
           }

           /**
            * Set value to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_ParameterMetaData_set_value_nil(
                   adb_ParameterMetaData_t* _ParameterMetaData,
                   const axutil_env_t *env)
           {
               return adb_ParameterMetaData_reset_value(_ParameterMetaData, env);
           }

           

