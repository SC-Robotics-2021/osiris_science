
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PushButton_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <string.h>

#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif

#ifndef osapi_type_h
#include "osapi/osapi_type.h"
#endif
#ifndef osapi_heap_h
#include "osapi/osapi_heap.h"
#endif

#ifndef osapi_utility_h
#include "osapi/osapi_utility.h"
#endif

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif

#ifndef cdr_type_object_h
#include "cdr/cdr_typeObject.h"
#endif

#ifndef cdr_encapsulation_h
#include "cdr/cdr_encapsulation.h"
#endif

#ifndef cdr_stream_h
#include "cdr/cdr_stream.h"
#endif

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#define RTI_CDR_CURRENT_SUBMODULE RTI_CDR_SUBMODULE_MASK_STREAM

#include <new>

#include "PushButton_Plugin.h"

namespace push_button_interface {
    namespace action {
        namespace dds_ {

            /* ----------------------------------------------------------------------------
            *  Type PushButton_Goal_
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            PushButton_Goal_*
            PushButton_Goal_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params) 
            {
                PushButton_Goal_ *sample = NULL;

                sample = new (std::nothrow) PushButton_Goal_ ;
                if (sample == NULL) {
                    return NULL;
                }

                if (!push_button_interface::action::dds_::PushButton_Goal__initialize_w_params(sample,alloc_params)) {
                    delete  sample;
                    sample=NULL;
                }
                return sample; 
            } 

            PushButton_Goal_ *
            PushButton_Goal_PluginSupport_create_data_ex(RTIBool allocate_pointers) 
            {
                PushButton_Goal_ *sample = NULL;

                sample = new (std::nothrow) PushButton_Goal_ ;

                if(sample == NULL) {
                    return NULL;
                }

                if (!push_button_interface::action::dds_::PushButton_Goal__initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    delete  sample;
                    sample=NULL;
                }

                return sample; 
            }

            PushButton_Goal_ *
            PushButton_Goal_PluginSupport_create_data(void)
            {
                return push_button_interface::action::dds_::PushButton_Goal_PluginSupport_create_data_ex(RTI_TRUE);
            }

            void 
            PushButton_Goal_PluginSupport_destroy_data_w_params(
                PushButton_Goal_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params) {

                push_button_interface::action::dds_::PushButton_Goal__finalize_w_params(sample,dealloc_params);

                delete  sample;
                sample=NULL;
            }

            void 
            PushButton_Goal_PluginSupport_destroy_data_ex(
                PushButton_Goal_ *sample,RTIBool deallocate_pointers) {

                push_button_interface::action::dds_::PushButton_Goal__finalize_ex(sample,deallocate_pointers);

                delete  sample;
                sample=NULL;
            }

            void 
            PushButton_Goal_PluginSupport_destroy_data(
                PushButton_Goal_ *sample) {

                push_button_interface::action::dds_::PushButton_Goal_PluginSupport_destroy_data_ex(sample,RTI_TRUE);

            }

            RTIBool 
            PushButton_Goal_PluginSupport_copy_data(
                PushButton_Goal_ *dst,
                const PushButton_Goal_ *src)
            {
                return push_button_interface::action::dds_::PushButton_Goal__copy(dst,(const PushButton_Goal_*) src);
            }

            void 
            PushButton_Goal_PluginSupport_print_data(
                const PushButton_Goal_ *sample,
                const char *desc,
                unsigned int indent_level)
            {

                RTICdrType_printIndent(indent_level);

                if (desc != NULL) {
                    RTILog_debug("%s:\n", desc);
                } else {
                    RTILog_debug("\n");
                }

                if (sample == NULL) {
                    RTILog_debug("NULL\n");
                    return;
                }

                RTICdrType_printBoolean(
                    &sample->msg_, "msg_", indent_level + 1);    

            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            PushButton_Goal_Plugin_on_participant_attached(
                void *registration_data,
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration,
                void *container_plugin_context,
                RTICdrTypeCode *type_code)
            {
                if (registration_data) {} /* To avoid warnings */
                if (participant_info) {} /* To avoid warnings */
                if (top_level_registration) {} /* To avoid warnings */
                if (container_plugin_context) {} /* To avoid warnings */
                if (type_code) {} /* To avoid warnings */

                return PRESTypePluginDefaultParticipantData_new(participant_info);

            }

            void 
            PushButton_Goal_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data)
            {

                PRESTypePluginDefaultParticipantData_delete(participant_data);
            }

            PRESTypePluginEndpointData
            PushButton_Goal_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *containerPluginContext)
            {
                PRESTypePluginEndpointData epd = NULL;

                unsigned int serializedSampleMaxSize;

                if (top_level_registration) {} /* To avoid warnings */
                if (containerPluginContext) {} /* To avoid warnings */

                epd = PRESTypePluginDefaultEndpointData_new(
                    participant_data,
                    endpoint_info,
                    (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                    push_button_interface::action::dds_::PushButton_Goal_PluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    push_button_interface::action::dds_::PushButton_Goal_PluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = push_button_interface::action::dds_::PushButton_Goal_Plugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        push_button_interface::action::dds_::PushButton_Goal_Plugin_get_serialized_sample_max_size, epd,
                        (PRESTypePluginGetSerializedSampleSizeFunction)
                        push_button_interface::action::dds_::PushButton_Goal_Plugin_get_serialized_sample_size,
                        epd) == RTI_FALSE) {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }
                }

                return epd;    
            }

            void 
            PushButton_Goal_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  

                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            PushButton_Goal_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_Goal_ *sample,
                void *handle)
            {

                PushButton_Goal__finalize_optional_members(sample, RTI_TRUE);

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            PushButton_Goal_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_Goal_ *dst,
                const PushButton_Goal_ *src)
            {
                if (endpoint_data) {} /* To avoid warnings */
                return push_button_interface::action::dds_::PushButton_Goal_PluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            PushButton_Goal_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool 
            PushButton_Goal_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const PushButton_Goal_ *sample, 
                struct RTICdrStream *stream,    
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;
                RTIBool retval = RTI_TRUE;

                if (endpoint_data) {} /* To avoid warnings */
                if (endpoint_plugin_qos) {} /* To avoid warnings */

                if(serialize_encapsulation) {
                    if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if(serialize_sample) {

                    if (!RTICdrStream_serializeBoolean(
                        stream, &sample->msg_)) {
                        return RTI_FALSE;
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return retval;
            }

            RTIBool 
            PushButton_Goal_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_Goal_ *sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                char * position = NULL;

                RTIBool done = RTI_FALSE;

                try {

                    if (endpoint_data) {} /* To avoid warnings */
                    if (endpoint_plugin_qos) {} /* To avoid warnings */
                    if(deserialize_encapsulation) {

                        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                            return RTI_FALSE;
                        }

                        position = RTICdrStream_resetAlignment(stream);
                    }
                    if(deserialize_sample) {

                        push_button_interface::action::dds_::PushButton_Goal__initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                        if (!RTICdrStream_deserializeBoolean(
                            stream, &sample->msg_)) {
                            goto fin; 
                        }
                    }

                    done = RTI_TRUE;
                  fin:
                    if (done != RTI_TRUE && 
                    RTICdrStream_getRemainder(stream) >=
                    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        return RTI_FALSE;   
                    }
                    if(deserialize_encapsulation) {
                        RTICdrStream_restoreAlignment(stream,position);
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            RTIBool
            PushButton_Goal_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PushButton_Goal_ *sample)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                PushButton_Goal_Plugin_get_serialized_sample_max_size(
                    NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

                if (buffer == NULL) {
                    *length = 
                    PushButton_Goal_Plugin_get_serialized_sample_size(
                        (PRESTypePluginEndpointData)&epd,
                        RTI_TRUE,
                        RTICdrEncapsulation_getNativeCdrEncapsulationId(),
                        0,
                        sample);

                    if (*length == 0) {
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;
                }    

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, *length);

                result = push_button_interface::action::dds_::PushButton_Goal_Plugin_serialize(
                    (PRESTypePluginEndpointData)&epd, sample, &stream, 
                    RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
                    RTI_TRUE, NULL);  

                *length = RTICdrStream_getCurrentPositionOffset(&stream);
                return result;     
            }

            RTIBool
            PushButton_Goal_Plugin_deserialize_from_cdr_buffer(
                PushButton_Goal_ *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                PushButton_Goal__finalize_optional_members(sample, RTI_TRUE);
                return PushButton_Goal_Plugin_deserialize_sample( 
                    NULL, sample,
                    &stream, RTI_TRUE, RTI_TRUE, 
                    NULL);
            }

            DDS_ReturnCode_t
            PushButton_Goal_Plugin_data_to_string(
                const PushButton_Goal_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property)
            {
                DDS_DynamicData *data = NULL;
                char *buffer = NULL;
                unsigned int length = 0;
                struct DDS_PrintFormat printFormat;
                DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

                if (sample == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (str_size == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (property == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (!PushButton_Goal_Plugin_serialize_to_cdr_buffer(
                    NULL, 
                    &length, 
                    sample)) {
                    return DDS_RETCODE_ERROR;
                }

                RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
                if (buffer == NULL) {
                    return DDS_RETCODE_ERROR;
                }

                if (!PushButton_Goal_Plugin_serialize_to_cdr_buffer(
                    buffer, 
                    &length, 
                    sample)) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                data = DDS_DynamicData_new(
                    PushButton_Goal__get_typecode(), 
                    &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
                if (data == NULL) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_PrintFormatProperty_to_print_format(
                    property, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_DynamicDataFormatter_to_string_w_format(
                    data, 
                    str,
                    str_size, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                RTIOsapiHeap_freeBuffer(buffer);
                DDS_DynamicData_delete(data);
                return DDS_RETCODE_OK;
            }

            RTIBool 
            PushButton_Goal_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_Goal_ **sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                RTIBool result;
                const char *METHOD_NAME = "PushButton_Goal_Plugin_deserialize";
                if (drop_sample) {} /* To avoid warnings */

                stream->_xTypesState.unassignable = RTI_FALSE;
                result= push_button_interface::action::dds_::PushButton_Goal_Plugin_deserialize_sample( 
                    endpoint_data, (sample != NULL)?*sample:NULL,
                    stream, deserialize_encapsulation, deserialize_sample, 
                    endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }
                if (!result && stream->_xTypesState.unassignable ) {

                    RTICdrLog_exception(
                        METHOD_NAME, 
                        &RTI_CDR_LOG_UNASSIGNABLE_SAMPLE_OF_TYPE_s, 
                        "PushButton_Goal_");

                }

                return result;

            }

            RTIBool PushButton_Goal_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream,   
                RTIBool skip_encapsulation,
                RTIBool skip_sample, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                RTIBool done = RTI_FALSE;

                if (endpoint_data) {} /* To avoid warnings */
                if (endpoint_plugin_qos) {} /* To avoid warnings */

                if(skip_encapsulation) {
                    if (!RTICdrStream_skipEncapsulation(stream)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if (skip_sample) {

                    if (!RTICdrStream_skipBoolean (stream)) {
                        goto fin; 
                    }
                }

                done = RTI_TRUE;
              fin:
                if (done != RTI_TRUE && 
                RTICdrStream_getRemainder(stream) >=
                RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                    return RTI_FALSE;   
                }
                if(skip_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            unsigned int 
            PushButton_Goal_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */ 
                if (overflow) {} /* To avoid warnings */

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment +=RTICdrType_getBooleanMaxSizeSerialized(
                    current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return  current_alignment - initial_alignment;
            }

            unsigned int 
            PushButton_Goal_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PushButton_Goal_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            unsigned int 
            PushButton_Goal_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */ 

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment +=RTICdrType_getBooleanMaxSizeSerialized(
                    current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return  current_alignment - initial_alignment;
            }

            /* Returns the size of the sample in its serialized form (in bytes).
            * It can also be an estimation in excess of the real buffer needed 
            * during a call to the serialize() function.
            * The value reported does not have to include the space for the
            * encapsulation flags.
            */
            unsigned int
            PushButton_Goal_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const PushButton_Goal_ * sample) 
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;
                struct PRESTypePluginDefaultEndpointData epd;   

                if (sample==NULL) {
                    return 0;
                }
                if (endpoint_data == NULL) {
                    endpoint_data = (PRESTypePluginEndpointData) &epd;
                    PRESTypePluginDefaultEndpointData_setBaseAlignment(
                        endpoint_data,
                        current_alignment);        
                }

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                    PRESTypePluginDefaultEndpointData_setBaseAlignment(
                        endpoint_data,
                        current_alignment);
                }

                current_alignment += RTICdrType_getBooleanMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            PRESTypePluginKeyKind 
            PushButton_Goal_Plugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_NO_KEY;
            }

            RTIBool 
            PushButton_Goal_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const PushButton_Goal_ *sample, 
                struct RTICdrStream *stream,    
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                if(serialize_encapsulation) {
                    if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if(serialize_key) {

                    if (!push_button_interface::action::dds_::PushButton_Goal_Plugin_serialize(
                        endpoint_data,
                        sample,
                        stream,
                        RTI_FALSE, encapsulation_id,
                        RTI_TRUE,
                        endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            RTIBool PushButton_Goal_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_Goal_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                try {

                    char * position = NULL;

                    if (endpoint_data) {} /* To avoid warnings */
                    if (endpoint_plugin_qos) {} /* To avoid warnings */

                    if(deserialize_encapsulation) {

                        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                            return RTI_FALSE;
                        }

                        position = RTICdrStream_resetAlignment(stream);
                    }
                    if (deserialize_key) {

                        if (!push_button_interface::action::dds_::PushButton_Goal_Plugin_deserialize_sample(
                            endpoint_data, sample, stream, 
                            RTI_FALSE, RTI_TRUE, 
                            endpoint_plugin_qos)) {
                            return RTI_FALSE;
                        }
                    }

                    if(deserialize_encapsulation) {
                        RTICdrStream_restoreAlignment(stream,position);
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            RTIBool PushButton_Goal_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_Goal_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                RTIBool result;
                if (drop_sample) {} /* To avoid warnings */
                stream->_xTypesState.unassignable = RTI_FALSE;
                result= push_button_interface::action::dds_::PushButton_Goal_Plugin_deserialize_key_sample(
                    endpoint_data, (sample != NULL)?*sample:NULL, stream,
                    deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }

                return result;    

            }

            unsigned int
            PushButton_Goal_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */
                if (overflow) {} /* To avoid warnings */

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment += push_button_interface::action::dds_::PushButton_Goal_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            unsigned int
            PushButton_Goal_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PushButton_Goal_Plugin_get_serialized_key_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            RTIBool 
            PushButton_Goal_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_Goal_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                RTIBool done = RTI_FALSE;
                RTIBool error = RTI_FALSE;

                if (stream == NULL) {
                    error = RTI_TRUE;
                    goto fin;
                }
                if(deserialize_encapsulation) {
                    if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                        return RTI_FALSE;
                    }
                    position = RTICdrStream_resetAlignment(stream);
                }

                if (deserialize_key) {

                    if (!push_button_interface::action::dds_::PushButton_Goal_Plugin_deserialize_sample(
                        endpoint_data, sample, stream, RTI_FALSE, 
                        RTI_TRUE, endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                done = RTI_TRUE;
              fin:
                if(!error) {
                    if (done != RTI_TRUE && 
                    RTICdrStream_getRemainder(stream) >=
                    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        return RTI_FALSE;   
                    }
                } else {
                    return RTI_FALSE;
                }       

                if(deserialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            /* ------------------------------------------------------------------------
            * Plug-in Installation Methods
            * ------------------------------------------------------------------------ */
            struct PRESTypePlugin *PushButton_Goal_Plugin_new(void) 
            { 
                struct PRESTypePlugin *plugin = NULL;
                const struct PRESTypePluginVersion PLUGIN_VERSION = 
                PRES_TYPE_PLUGIN_VERSION_2_0;

                RTIOsapiHeap_allocateStructure(
                    &plugin, struct PRESTypePlugin);

                if (plugin == NULL) {
                    return NULL;
                }

                plugin->version = PLUGIN_VERSION;

                /* set up parent's function pointers */
                plugin->onParticipantAttached =
                (PRESTypePluginOnParticipantAttachedCallback)
                push_button_interface::action::dds_::PushButton_Goal_Plugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                push_button_interface::action::dds_::PushButton_Goal_Plugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                push_button_interface::action::dds_::PushButton_Goal_Plugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                push_button_interface::action::dds_::PushButton_Goal_Plugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                push_button_interface::action::dds_::PushButton_Goal_Plugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                PushButton_Goal_Plugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                PushButton_Goal_Plugin_destroy_sample;
                plugin->finalizeOptionalMembersFnc =
                (PRESTypePluginFinalizeOptionalMembersFunction)
                PushButton_Goal__finalize_optional_members;

                plugin->serializeFnc =
                (PRESTypePluginSerializeFunction)
                push_button_interface::action::dds_::PushButton_Goal_Plugin_serialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction)
                push_button_interface::action::dds_::PushButton_Goal_Plugin_deserialize;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                push_button_interface::action::dds_::PushButton_Goal_Plugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                push_button_interface::action::dds_::PushButton_Goal_Plugin_get_serialized_sample_min_size;

                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                PushButton_Goal_Plugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                PushButton_Goal_Plugin_return_sample;

                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                push_button_interface::action::dds_::PushButton_Goal_Plugin_get_key_kind;

                /* These functions are only used for keyed types. As this is not a keyed
                type they are all set to NULL
                */
                plugin->serializeKeyFnc = NULL ;    
                plugin->deserializeKeyFnc = NULL;  
                plugin->getKeyFnc = NULL;
                plugin->returnKeyFnc = NULL;
                plugin->instanceToKeyFnc = NULL;
                plugin->keyToInstanceFnc = NULL;
                plugin->getSerializedKeyMaxSizeFnc = NULL;
                plugin->instanceToKeyHashFnc = NULL;
                plugin->serializedSampleToKeyHashFnc = NULL;
                plugin->serializedKeyToKeyHashFnc = NULL;    
                plugin->typeCode =  (struct RTICdrTypeCode *)push_button_interface::action::dds_::PushButton_Goal__get_typecode();

                plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                PushButton_Goal_Plugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                PushButton_Goal_Plugin_return_buffer;
                plugin->getSerializedSampleSizeFnc =
                (PRESTypePluginGetSerializedSampleSizeFunction)
                push_button_interface::action::dds_::PushButton_Goal_Plugin_get_serialized_sample_size;

                plugin->endpointTypeName = PushButton_Goal_TYPENAME;

                return plugin;
            }

            void
            PushButton_Goal_Plugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace push_button_interface  */
namespace push_button_interface {
    namespace action {
        namespace dds_ {

            /* ----------------------------------------------------------------------------
            *  Type PushButton_SendGoal_Request_
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            PushButton_SendGoal_Request_*
            PushButton_SendGoal_Request_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params) 
            {
                PushButton_SendGoal_Request_ *sample = NULL;

                sample = new (std::nothrow) PushButton_SendGoal_Request_ ;
                if (sample == NULL) {
                    return NULL;
                }

                if (!push_button_interface::action::dds_::PushButton_SendGoal_Request__initialize_w_params(sample,alloc_params)) {
                    delete  sample;
                    sample=NULL;
                }
                return sample; 
            } 

            PushButton_SendGoal_Request_ *
            PushButton_SendGoal_Request_PluginSupport_create_data_ex(RTIBool allocate_pointers) 
            {
                PushButton_SendGoal_Request_ *sample = NULL;

                sample = new (std::nothrow) PushButton_SendGoal_Request_ ;

                if(sample == NULL) {
                    return NULL;
                }

                if (!push_button_interface::action::dds_::PushButton_SendGoal_Request__initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    delete  sample;
                    sample=NULL;
                }

                return sample; 
            }

            PushButton_SendGoal_Request_ *
            PushButton_SendGoal_Request_PluginSupport_create_data(void)
            {
                return push_button_interface::action::dds_::PushButton_SendGoal_Request_PluginSupport_create_data_ex(RTI_TRUE);
            }

            void 
            PushButton_SendGoal_Request_PluginSupport_destroy_data_w_params(
                PushButton_SendGoal_Request_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params) {

                push_button_interface::action::dds_::PushButton_SendGoal_Request__finalize_w_params(sample,dealloc_params);

                delete  sample;
                sample=NULL;
            }

            void 
            PushButton_SendGoal_Request_PluginSupport_destroy_data_ex(
                PushButton_SendGoal_Request_ *sample,RTIBool deallocate_pointers) {

                push_button_interface::action::dds_::PushButton_SendGoal_Request__finalize_ex(sample,deallocate_pointers);

                delete  sample;
                sample=NULL;
            }

            void 
            PushButton_SendGoal_Request_PluginSupport_destroy_data(
                PushButton_SendGoal_Request_ *sample) {

                push_button_interface::action::dds_::PushButton_SendGoal_Request_PluginSupport_destroy_data_ex(sample,RTI_TRUE);

            }

            RTIBool 
            PushButton_SendGoal_Request_PluginSupport_copy_data(
                PushButton_SendGoal_Request_ *dst,
                const PushButton_SendGoal_Request_ *src)
            {
                return push_button_interface::action::dds_::PushButton_SendGoal_Request__copy(dst,(const PushButton_SendGoal_Request_*) src);
            }

            void 
            PushButton_SendGoal_Request_PluginSupport_print_data(
                const PushButton_SendGoal_Request_ *sample,
                const char *desc,
                unsigned int indent_level)
            {

                RTICdrType_printIndent(indent_level);

                if (desc != NULL) {
                    RTILog_debug("%s:\n", desc);
                } else {
                    RTILog_debug("\n");
                }

                if (sample == NULL) {
                    RTILog_debug("NULL\n");
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID_PluginSupport_print_data(
                    (const unique_identifier_msgs::msg::dds_::UUID_*) &sample->goal_id_, "goal_id_", indent_level + 1);

                push_button_interface::action::dds_::PushButton_Goal_PluginSupport_print_data(
                    (const push_button_interface::action::dds_::PushButton_Goal_*) &sample->goal_, "goal_", indent_level + 1);

            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            PushButton_SendGoal_Request_Plugin_on_participant_attached(
                void *registration_data,
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration,
                void *container_plugin_context,
                RTICdrTypeCode *type_code)
            {
                if (registration_data) {} /* To avoid warnings */
                if (participant_info) {} /* To avoid warnings */
                if (top_level_registration) {} /* To avoid warnings */
                if (container_plugin_context) {} /* To avoid warnings */
                if (type_code) {} /* To avoid warnings */

                return PRESTypePluginDefaultParticipantData_new(participant_info);

            }

            void 
            PushButton_SendGoal_Request_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data)
            {

                PRESTypePluginDefaultParticipantData_delete(participant_data);
            }

            PRESTypePluginEndpointData
            PushButton_SendGoal_Request_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *containerPluginContext)
            {
                PRESTypePluginEndpointData epd = NULL;

                unsigned int serializedSampleMaxSize;

                if (top_level_registration) {} /* To avoid warnings */
                if (containerPluginContext) {} /* To avoid warnings */

                epd = PRESTypePluginDefaultEndpointData_new(
                    participant_data,
                    endpoint_info,
                    (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                    push_button_interface::action::dds_::PushButton_SendGoal_Request_PluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    push_button_interface::action::dds_::PushButton_SendGoal_Request_PluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = push_button_interface::action::dds_::PushButton_SendGoal_Request_Plugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        push_button_interface::action::dds_::PushButton_SendGoal_Request_Plugin_get_serialized_sample_max_size, epd,
                        (PRESTypePluginGetSerializedSampleSizeFunction)
                        push_button_interface::action::dds_::PushButton_SendGoal_Request_Plugin_get_serialized_sample_size,
                        epd) == RTI_FALSE) {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }
                }

                return epd;    
            }

            void 
            PushButton_SendGoal_Request_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  

                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            PushButton_SendGoal_Request_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_SendGoal_Request_ *sample,
                void *handle)
            {

                PushButton_SendGoal_Request__finalize_optional_members(sample, RTI_TRUE);

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            PushButton_SendGoal_Request_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_SendGoal_Request_ *dst,
                const PushButton_SendGoal_Request_ *src)
            {
                if (endpoint_data) {} /* To avoid warnings */
                return push_button_interface::action::dds_::PushButton_SendGoal_Request_PluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            PushButton_SendGoal_Request_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool 
            PushButton_SendGoal_Request_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const PushButton_SendGoal_Request_ *sample, 
                struct RTICdrStream *stream,    
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;
                RTIBool retval = RTI_TRUE;

                if (endpoint_data) {} /* To avoid warnings */
                if (endpoint_plugin_qos) {} /* To avoid warnings */

                if(serialize_encapsulation) {
                    if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if(serialize_sample) {

                    if(!unique_identifier_msgs::msg::dds_::UUID_Plugin_serialize(
                        endpoint_data,
                        (const unique_identifier_msgs::msg::dds_::UUID_*) &sample->goal_id_,
                        stream,
                        RTI_FALSE, encapsulation_id,
                        RTI_TRUE,
                        endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                    if(!push_button_interface::action::dds_::PushButton_Goal_Plugin_serialize(
                        endpoint_data,
                        (const push_button_interface::action::dds_::PushButton_Goal_*) &sample->goal_,
                        stream,
                        RTI_FALSE, encapsulation_id,
                        RTI_TRUE,
                        endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return retval;
            }

            RTIBool 
            PushButton_SendGoal_Request_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_SendGoal_Request_ *sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                char * position = NULL;

                RTIBool done = RTI_FALSE;

                try {

                    if (endpoint_data) {} /* To avoid warnings */
                    if (endpoint_plugin_qos) {} /* To avoid warnings */
                    if(deserialize_encapsulation) {

                        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                            return RTI_FALSE;
                        }

                        position = RTICdrStream_resetAlignment(stream);
                    }
                    if(deserialize_sample) {

                        push_button_interface::action::dds_::PushButton_SendGoal_Request__initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                        if(!unique_identifier_msgs::msg::dds_::UUID_Plugin_deserialize_sample(
                            endpoint_data,
                            &sample->goal_id_,
                            stream,
                            RTI_FALSE, RTI_TRUE,
                            endpoint_plugin_qos)) {
                            goto fin; 
                        }
                        if(!push_button_interface::action::dds_::PushButton_Goal_Plugin_deserialize_sample(
                            endpoint_data,
                            &sample->goal_,
                            stream,
                            RTI_FALSE, RTI_TRUE,
                            endpoint_plugin_qos)) {
                            goto fin; 
                        }
                    }

                    done = RTI_TRUE;
                  fin:
                    if (done != RTI_TRUE && 
                    RTICdrStream_getRemainder(stream) >=
                    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        return RTI_FALSE;   
                    }
                    if(deserialize_encapsulation) {
                        RTICdrStream_restoreAlignment(stream,position);
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            RTIBool
            PushButton_SendGoal_Request_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PushButton_SendGoal_Request_ *sample)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                PushButton_SendGoal_Request_Plugin_get_serialized_sample_max_size(
                    NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

                if (buffer == NULL) {
                    *length = 
                    PushButton_SendGoal_Request_Plugin_get_serialized_sample_size(
                        (PRESTypePluginEndpointData)&epd,
                        RTI_TRUE,
                        RTICdrEncapsulation_getNativeCdrEncapsulationId(),
                        0,
                        sample);

                    if (*length == 0) {
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;
                }    

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, *length);

                result = push_button_interface::action::dds_::PushButton_SendGoal_Request_Plugin_serialize(
                    (PRESTypePluginEndpointData)&epd, sample, &stream, 
                    RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
                    RTI_TRUE, NULL);  

                *length = RTICdrStream_getCurrentPositionOffset(&stream);
                return result;     
            }

            RTIBool
            PushButton_SendGoal_Request_Plugin_deserialize_from_cdr_buffer(
                PushButton_SendGoal_Request_ *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                PushButton_SendGoal_Request__finalize_optional_members(sample, RTI_TRUE);
                return PushButton_SendGoal_Request_Plugin_deserialize_sample( 
                    NULL, sample,
                    &stream, RTI_TRUE, RTI_TRUE, 
                    NULL);
            }

            DDS_ReturnCode_t
            PushButton_SendGoal_Request_Plugin_data_to_string(
                const PushButton_SendGoal_Request_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property)
            {
                DDS_DynamicData *data = NULL;
                char *buffer = NULL;
                unsigned int length = 0;
                struct DDS_PrintFormat printFormat;
                DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

                if (sample == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (str_size == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (property == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (!PushButton_SendGoal_Request_Plugin_serialize_to_cdr_buffer(
                    NULL, 
                    &length, 
                    sample)) {
                    return DDS_RETCODE_ERROR;
                }

                RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
                if (buffer == NULL) {
                    return DDS_RETCODE_ERROR;
                }

                if (!PushButton_SendGoal_Request_Plugin_serialize_to_cdr_buffer(
                    buffer, 
                    &length, 
                    sample)) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                data = DDS_DynamicData_new(
                    PushButton_SendGoal_Request__get_typecode(), 
                    &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
                if (data == NULL) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_PrintFormatProperty_to_print_format(
                    property, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_DynamicDataFormatter_to_string_w_format(
                    data, 
                    str,
                    str_size, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                RTIOsapiHeap_freeBuffer(buffer);
                DDS_DynamicData_delete(data);
                return DDS_RETCODE_OK;
            }

            RTIBool 
            PushButton_SendGoal_Request_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_SendGoal_Request_ **sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                RTIBool result;
                const char *METHOD_NAME = "PushButton_SendGoal_Request_Plugin_deserialize";
                if (drop_sample) {} /* To avoid warnings */

                stream->_xTypesState.unassignable = RTI_FALSE;
                result= push_button_interface::action::dds_::PushButton_SendGoal_Request_Plugin_deserialize_sample( 
                    endpoint_data, (sample != NULL)?*sample:NULL,
                    stream, deserialize_encapsulation, deserialize_sample, 
                    endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }
                if (!result && stream->_xTypesState.unassignable ) {

                    RTICdrLog_exception(
                        METHOD_NAME, 
                        &RTI_CDR_LOG_UNASSIGNABLE_SAMPLE_OF_TYPE_s, 
                        "PushButton_SendGoal_Request_");

                }

                return result;

            }

            RTIBool PushButton_SendGoal_Request_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream,   
                RTIBool skip_encapsulation,
                RTIBool skip_sample, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                RTIBool done = RTI_FALSE;

                if (endpoint_data) {} /* To avoid warnings */
                if (endpoint_plugin_qos) {} /* To avoid warnings */

                if(skip_encapsulation) {
                    if (!RTICdrStream_skipEncapsulation(stream)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if (skip_sample) {

                    if (!unique_identifier_msgs::msg::dds_::UUID_Plugin_skip(
                        endpoint_data,
                        stream, 
                        RTI_FALSE, RTI_TRUE, 
                        endpoint_plugin_qos)) {
                        goto fin; 
                    }
                    if (!push_button_interface::action::dds_::PushButton_Goal_Plugin_skip(
                        endpoint_data,
                        stream, 
                        RTI_FALSE, RTI_TRUE, 
                        endpoint_plugin_qos)) {
                        goto fin; 
                    }
                }

                done = RTI_TRUE;
              fin:
                if (done != RTI_TRUE && 
                RTICdrStream_getRemainder(stream) >=
                RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                    return RTI_FALSE;   
                }
                if(skip_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            unsigned int 
            PushButton_SendGoal_Request_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment +=unique_identifier_msgs::msg::dds_::UUID_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

                current_alignment +=push_button_interface::action::dds_::PushButton_Goal_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return  current_alignment - initial_alignment;
            }

            unsigned int 
            PushButton_SendGoal_Request_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PushButton_SendGoal_Request_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            unsigned int 
            PushButton_SendGoal_Request_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */ 

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment +=unique_identifier_msgs::msg::dds_::UUID_Plugin_get_serialized_sample_min_size(
                    endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
                current_alignment +=push_button_interface::action::dds_::PushButton_Goal_Plugin_get_serialized_sample_min_size(
                    endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return  current_alignment - initial_alignment;
            }

            /* Returns the size of the sample in its serialized form (in bytes).
            * It can also be an estimation in excess of the real buffer needed 
            * during a call to the serialize() function.
            * The value reported does not have to include the space for the
            * encapsulation flags.
            */
            unsigned int
            PushButton_SendGoal_Request_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const PushButton_SendGoal_Request_ * sample) 
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;
                struct PRESTypePluginDefaultEndpointData epd;   

                if (sample==NULL) {
                    return 0;
                }
                if (endpoint_data == NULL) {
                    endpoint_data = (PRESTypePluginEndpointData) &epd;
                    PRESTypePluginDefaultEndpointData_setBaseAlignment(
                        endpoint_data,
                        current_alignment);        
                }

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                    PRESTypePluginDefaultEndpointData_setBaseAlignment(
                        endpoint_data,
                        current_alignment);
                }

                current_alignment += unique_identifier_msgs::msg::dds_::UUID_Plugin_get_serialized_sample_size(
                    endpoint_data,RTI_FALSE, encapsulation_id,
                    current_alignment, (const unique_identifier_msgs::msg::dds_::UUID_*) &sample->goal_id_);

                current_alignment += push_button_interface::action::dds_::PushButton_Goal_Plugin_get_serialized_sample_size(
                    endpoint_data,RTI_FALSE, encapsulation_id,
                    current_alignment, (const push_button_interface::action::dds_::PushButton_Goal_*) &sample->goal_);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            PRESTypePluginKeyKind 
            PushButton_SendGoal_Request_Plugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_NO_KEY;
            }

            RTIBool 
            PushButton_SendGoal_Request_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const PushButton_SendGoal_Request_ *sample, 
                struct RTICdrStream *stream,    
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                if(serialize_encapsulation) {
                    if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if(serialize_key) {

                    if (!push_button_interface::action::dds_::PushButton_SendGoal_Request_Plugin_serialize(
                        endpoint_data,
                        sample,
                        stream,
                        RTI_FALSE, encapsulation_id,
                        RTI_TRUE,
                        endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            RTIBool PushButton_SendGoal_Request_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_SendGoal_Request_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                try {

                    char * position = NULL;

                    if (endpoint_data) {} /* To avoid warnings */
                    if (endpoint_plugin_qos) {} /* To avoid warnings */

                    if(deserialize_encapsulation) {

                        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                            return RTI_FALSE;
                        }

                        position = RTICdrStream_resetAlignment(stream);
                    }
                    if (deserialize_key) {

                        if (!push_button_interface::action::dds_::PushButton_SendGoal_Request_Plugin_deserialize_sample(
                            endpoint_data, sample, stream, 
                            RTI_FALSE, RTI_TRUE, 
                            endpoint_plugin_qos)) {
                            return RTI_FALSE;
                        }
                    }

                    if(deserialize_encapsulation) {
                        RTICdrStream_restoreAlignment(stream,position);
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            RTIBool PushButton_SendGoal_Request_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_SendGoal_Request_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                RTIBool result;
                if (drop_sample) {} /* To avoid warnings */
                stream->_xTypesState.unassignable = RTI_FALSE;
                result= push_button_interface::action::dds_::PushButton_SendGoal_Request_Plugin_deserialize_key_sample(
                    endpoint_data, (sample != NULL)?*sample:NULL, stream,
                    deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }

                return result;    

            }

            unsigned int
            PushButton_SendGoal_Request_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */
                if (overflow) {} /* To avoid warnings */

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment += push_button_interface::action::dds_::PushButton_SendGoal_Request_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            unsigned int
            PushButton_SendGoal_Request_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PushButton_SendGoal_Request_Plugin_get_serialized_key_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            RTIBool 
            PushButton_SendGoal_Request_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_SendGoal_Request_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                RTIBool done = RTI_FALSE;
                RTIBool error = RTI_FALSE;

                if (stream == NULL) {
                    error = RTI_TRUE;
                    goto fin;
                }
                if(deserialize_encapsulation) {
                    if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                        return RTI_FALSE;
                    }
                    position = RTICdrStream_resetAlignment(stream);
                }

                if (deserialize_key) {

                    if (!push_button_interface::action::dds_::PushButton_SendGoal_Request_Plugin_deserialize_sample(
                        endpoint_data, sample, stream, RTI_FALSE, 
                        RTI_TRUE, endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                done = RTI_TRUE;
              fin:
                if(!error) {
                    if (done != RTI_TRUE && 
                    RTICdrStream_getRemainder(stream) >=
                    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        return RTI_FALSE;   
                    }
                } else {
                    return RTI_FALSE;
                }       

                if(deserialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            /* ------------------------------------------------------------------------
            * Plug-in Installation Methods
            * ------------------------------------------------------------------------ */
            struct PRESTypePlugin *PushButton_SendGoal_Request_Plugin_new(void) 
            { 
                struct PRESTypePlugin *plugin = NULL;
                const struct PRESTypePluginVersion PLUGIN_VERSION = 
                PRES_TYPE_PLUGIN_VERSION_2_0;

                RTIOsapiHeap_allocateStructure(
                    &plugin, struct PRESTypePlugin);

                if (plugin == NULL) {
                    return NULL;
                }

                plugin->version = PLUGIN_VERSION;

                /* set up parent's function pointers */
                plugin->onParticipantAttached =
                (PRESTypePluginOnParticipantAttachedCallback)
                push_button_interface::action::dds_::PushButton_SendGoal_Request_Plugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                push_button_interface::action::dds_::PushButton_SendGoal_Request_Plugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                push_button_interface::action::dds_::PushButton_SendGoal_Request_Plugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                push_button_interface::action::dds_::PushButton_SendGoal_Request_Plugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                push_button_interface::action::dds_::PushButton_SendGoal_Request_Plugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                PushButton_SendGoal_Request_Plugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                PushButton_SendGoal_Request_Plugin_destroy_sample;
                plugin->finalizeOptionalMembersFnc =
                (PRESTypePluginFinalizeOptionalMembersFunction)
                PushButton_SendGoal_Request__finalize_optional_members;

                plugin->serializeFnc =
                (PRESTypePluginSerializeFunction)
                push_button_interface::action::dds_::PushButton_SendGoal_Request_Plugin_serialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction)
                push_button_interface::action::dds_::PushButton_SendGoal_Request_Plugin_deserialize;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                push_button_interface::action::dds_::PushButton_SendGoal_Request_Plugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                push_button_interface::action::dds_::PushButton_SendGoal_Request_Plugin_get_serialized_sample_min_size;

                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                PushButton_SendGoal_Request_Plugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                PushButton_SendGoal_Request_Plugin_return_sample;

                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                push_button_interface::action::dds_::PushButton_SendGoal_Request_Plugin_get_key_kind;

                /* These functions are only used for keyed types. As this is not a keyed
                type they are all set to NULL
                */
                plugin->serializeKeyFnc = NULL ;    
                plugin->deserializeKeyFnc = NULL;  
                plugin->getKeyFnc = NULL;
                plugin->returnKeyFnc = NULL;
                plugin->instanceToKeyFnc = NULL;
                plugin->keyToInstanceFnc = NULL;
                plugin->getSerializedKeyMaxSizeFnc = NULL;
                plugin->instanceToKeyHashFnc = NULL;
                plugin->serializedSampleToKeyHashFnc = NULL;
                plugin->serializedKeyToKeyHashFnc = NULL;    
                plugin->typeCode =  (struct RTICdrTypeCode *)push_button_interface::action::dds_::PushButton_SendGoal_Request__get_typecode();

                plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                PushButton_SendGoal_Request_Plugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                PushButton_SendGoal_Request_Plugin_return_buffer;
                plugin->getSerializedSampleSizeFnc =
                (PRESTypePluginGetSerializedSampleSizeFunction)
                push_button_interface::action::dds_::PushButton_SendGoal_Request_Plugin_get_serialized_sample_size;

                plugin->endpointTypeName = PushButton_SendGoal_Request_TYPENAME;

                return plugin;
            }

            void
            PushButton_SendGoal_Request_Plugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace push_button_interface  */
namespace push_button_interface {
    namespace action {
        namespace dds_ {

            /* ----------------------------------------------------------------------------
            *  Type PushButton_SendGoal_Response_
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            PushButton_SendGoal_Response_*
            PushButton_SendGoal_Response_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params) 
            {
                PushButton_SendGoal_Response_ *sample = NULL;

                sample = new (std::nothrow) PushButton_SendGoal_Response_ ;
                if (sample == NULL) {
                    return NULL;
                }

                if (!push_button_interface::action::dds_::PushButton_SendGoal_Response__initialize_w_params(sample,alloc_params)) {
                    delete  sample;
                    sample=NULL;
                }
                return sample; 
            } 

            PushButton_SendGoal_Response_ *
            PushButton_SendGoal_Response_PluginSupport_create_data_ex(RTIBool allocate_pointers) 
            {
                PushButton_SendGoal_Response_ *sample = NULL;

                sample = new (std::nothrow) PushButton_SendGoal_Response_ ;

                if(sample == NULL) {
                    return NULL;
                }

                if (!push_button_interface::action::dds_::PushButton_SendGoal_Response__initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    delete  sample;
                    sample=NULL;
                }

                return sample; 
            }

            PushButton_SendGoal_Response_ *
            PushButton_SendGoal_Response_PluginSupport_create_data(void)
            {
                return push_button_interface::action::dds_::PushButton_SendGoal_Response_PluginSupport_create_data_ex(RTI_TRUE);
            }

            void 
            PushButton_SendGoal_Response_PluginSupport_destroy_data_w_params(
                PushButton_SendGoal_Response_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params) {

                push_button_interface::action::dds_::PushButton_SendGoal_Response__finalize_w_params(sample,dealloc_params);

                delete  sample;
                sample=NULL;
            }

            void 
            PushButton_SendGoal_Response_PluginSupport_destroy_data_ex(
                PushButton_SendGoal_Response_ *sample,RTIBool deallocate_pointers) {

                push_button_interface::action::dds_::PushButton_SendGoal_Response__finalize_ex(sample,deallocate_pointers);

                delete  sample;
                sample=NULL;
            }

            void 
            PushButton_SendGoal_Response_PluginSupport_destroy_data(
                PushButton_SendGoal_Response_ *sample) {

                push_button_interface::action::dds_::PushButton_SendGoal_Response_PluginSupport_destroy_data_ex(sample,RTI_TRUE);

            }

            RTIBool 
            PushButton_SendGoal_Response_PluginSupport_copy_data(
                PushButton_SendGoal_Response_ *dst,
                const PushButton_SendGoal_Response_ *src)
            {
                return push_button_interface::action::dds_::PushButton_SendGoal_Response__copy(dst,(const PushButton_SendGoal_Response_*) src);
            }

            void 
            PushButton_SendGoal_Response_PluginSupport_print_data(
                const PushButton_SendGoal_Response_ *sample,
                const char *desc,
                unsigned int indent_level)
            {

                RTICdrType_printIndent(indent_level);

                if (desc != NULL) {
                    RTILog_debug("%s:\n", desc);
                } else {
                    RTILog_debug("\n");
                }

                if (sample == NULL) {
                    RTILog_debug("NULL\n");
                    return;
                }

                RTICdrType_printBoolean(
                    &sample->accepted_, "accepted_", indent_level + 1);    

                builtin_interfaces::msg::dds_::Time_PluginSupport_print_data(
                    (const builtin_interfaces::msg::dds_::Time_*) &sample->stamp_, "stamp_", indent_level + 1);

            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            PushButton_SendGoal_Response_Plugin_on_participant_attached(
                void *registration_data,
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration,
                void *container_plugin_context,
                RTICdrTypeCode *type_code)
            {
                if (registration_data) {} /* To avoid warnings */
                if (participant_info) {} /* To avoid warnings */
                if (top_level_registration) {} /* To avoid warnings */
                if (container_plugin_context) {} /* To avoid warnings */
                if (type_code) {} /* To avoid warnings */

                return PRESTypePluginDefaultParticipantData_new(participant_info);

            }

            void 
            PushButton_SendGoal_Response_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data)
            {

                PRESTypePluginDefaultParticipantData_delete(participant_data);
            }

            PRESTypePluginEndpointData
            PushButton_SendGoal_Response_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *containerPluginContext)
            {
                PRESTypePluginEndpointData epd = NULL;

                unsigned int serializedSampleMaxSize;

                if (top_level_registration) {} /* To avoid warnings */
                if (containerPluginContext) {} /* To avoid warnings */

                epd = PRESTypePluginDefaultEndpointData_new(
                    participant_data,
                    endpoint_info,
                    (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                    push_button_interface::action::dds_::PushButton_SendGoal_Response_PluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    push_button_interface::action::dds_::PushButton_SendGoal_Response_PluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = push_button_interface::action::dds_::PushButton_SendGoal_Response_Plugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        push_button_interface::action::dds_::PushButton_SendGoal_Response_Plugin_get_serialized_sample_max_size, epd,
                        (PRESTypePluginGetSerializedSampleSizeFunction)
                        push_button_interface::action::dds_::PushButton_SendGoal_Response_Plugin_get_serialized_sample_size,
                        epd) == RTI_FALSE) {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }
                }

                return epd;    
            }

            void 
            PushButton_SendGoal_Response_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  

                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            PushButton_SendGoal_Response_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_SendGoal_Response_ *sample,
                void *handle)
            {

                PushButton_SendGoal_Response__finalize_optional_members(sample, RTI_TRUE);

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            PushButton_SendGoal_Response_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_SendGoal_Response_ *dst,
                const PushButton_SendGoal_Response_ *src)
            {
                if (endpoint_data) {} /* To avoid warnings */
                return push_button_interface::action::dds_::PushButton_SendGoal_Response_PluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            PushButton_SendGoal_Response_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool 
            PushButton_SendGoal_Response_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const PushButton_SendGoal_Response_ *sample, 
                struct RTICdrStream *stream,    
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;
                RTIBool retval = RTI_TRUE;

                if (endpoint_data) {} /* To avoid warnings */
                if (endpoint_plugin_qos) {} /* To avoid warnings */

                if(serialize_encapsulation) {
                    if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if(serialize_sample) {

                    if (!RTICdrStream_serializeBoolean(
                        stream, &sample->accepted_)) {
                        return RTI_FALSE;
                    }

                    if(!builtin_interfaces::msg::dds_::Time_Plugin_serialize(
                        endpoint_data,
                        (const builtin_interfaces::msg::dds_::Time_*) &sample->stamp_,
                        stream,
                        RTI_FALSE, encapsulation_id,
                        RTI_TRUE,
                        endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return retval;
            }

            RTIBool 
            PushButton_SendGoal_Response_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_SendGoal_Response_ *sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                char * position = NULL;

                RTIBool done = RTI_FALSE;

                try {

                    if (endpoint_data) {} /* To avoid warnings */
                    if (endpoint_plugin_qos) {} /* To avoid warnings */
                    if(deserialize_encapsulation) {

                        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                            return RTI_FALSE;
                        }

                        position = RTICdrStream_resetAlignment(stream);
                    }
                    if(deserialize_sample) {

                        push_button_interface::action::dds_::PushButton_SendGoal_Response__initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                        if (!RTICdrStream_deserializeBoolean(
                            stream, &sample->accepted_)) {
                            goto fin; 
                        }
                        if(!builtin_interfaces::msg::dds_::Time_Plugin_deserialize_sample(
                            endpoint_data,
                            &sample->stamp_,
                            stream,
                            RTI_FALSE, RTI_TRUE,
                            endpoint_plugin_qos)) {
                            goto fin; 
                        }
                    }

                    done = RTI_TRUE;
                  fin:
                    if (done != RTI_TRUE && 
                    RTICdrStream_getRemainder(stream) >=
                    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        return RTI_FALSE;   
                    }
                    if(deserialize_encapsulation) {
                        RTICdrStream_restoreAlignment(stream,position);
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            RTIBool
            PushButton_SendGoal_Response_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PushButton_SendGoal_Response_ *sample)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                PushButton_SendGoal_Response_Plugin_get_serialized_sample_max_size(
                    NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

                if (buffer == NULL) {
                    *length = 
                    PushButton_SendGoal_Response_Plugin_get_serialized_sample_size(
                        (PRESTypePluginEndpointData)&epd,
                        RTI_TRUE,
                        RTICdrEncapsulation_getNativeCdrEncapsulationId(),
                        0,
                        sample);

                    if (*length == 0) {
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;
                }    

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, *length);

                result = push_button_interface::action::dds_::PushButton_SendGoal_Response_Plugin_serialize(
                    (PRESTypePluginEndpointData)&epd, sample, &stream, 
                    RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
                    RTI_TRUE, NULL);  

                *length = RTICdrStream_getCurrentPositionOffset(&stream);
                return result;     
            }

            RTIBool
            PushButton_SendGoal_Response_Plugin_deserialize_from_cdr_buffer(
                PushButton_SendGoal_Response_ *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                PushButton_SendGoal_Response__finalize_optional_members(sample, RTI_TRUE);
                return PushButton_SendGoal_Response_Plugin_deserialize_sample( 
                    NULL, sample,
                    &stream, RTI_TRUE, RTI_TRUE, 
                    NULL);
            }

            DDS_ReturnCode_t
            PushButton_SendGoal_Response_Plugin_data_to_string(
                const PushButton_SendGoal_Response_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property)
            {
                DDS_DynamicData *data = NULL;
                char *buffer = NULL;
                unsigned int length = 0;
                struct DDS_PrintFormat printFormat;
                DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

                if (sample == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (str_size == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (property == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (!PushButton_SendGoal_Response_Plugin_serialize_to_cdr_buffer(
                    NULL, 
                    &length, 
                    sample)) {
                    return DDS_RETCODE_ERROR;
                }

                RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
                if (buffer == NULL) {
                    return DDS_RETCODE_ERROR;
                }

                if (!PushButton_SendGoal_Response_Plugin_serialize_to_cdr_buffer(
                    buffer, 
                    &length, 
                    sample)) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                data = DDS_DynamicData_new(
                    PushButton_SendGoal_Response__get_typecode(), 
                    &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
                if (data == NULL) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_PrintFormatProperty_to_print_format(
                    property, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_DynamicDataFormatter_to_string_w_format(
                    data, 
                    str,
                    str_size, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                RTIOsapiHeap_freeBuffer(buffer);
                DDS_DynamicData_delete(data);
                return DDS_RETCODE_OK;
            }

            RTIBool 
            PushButton_SendGoal_Response_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_SendGoal_Response_ **sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                RTIBool result;
                const char *METHOD_NAME = "PushButton_SendGoal_Response_Plugin_deserialize";
                if (drop_sample) {} /* To avoid warnings */

                stream->_xTypesState.unassignable = RTI_FALSE;
                result= push_button_interface::action::dds_::PushButton_SendGoal_Response_Plugin_deserialize_sample( 
                    endpoint_data, (sample != NULL)?*sample:NULL,
                    stream, deserialize_encapsulation, deserialize_sample, 
                    endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }
                if (!result && stream->_xTypesState.unassignable ) {

                    RTICdrLog_exception(
                        METHOD_NAME, 
                        &RTI_CDR_LOG_UNASSIGNABLE_SAMPLE_OF_TYPE_s, 
                        "PushButton_SendGoal_Response_");

                }

                return result;

            }

            RTIBool PushButton_SendGoal_Response_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream,   
                RTIBool skip_encapsulation,
                RTIBool skip_sample, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                RTIBool done = RTI_FALSE;

                if (endpoint_data) {} /* To avoid warnings */
                if (endpoint_plugin_qos) {} /* To avoid warnings */

                if(skip_encapsulation) {
                    if (!RTICdrStream_skipEncapsulation(stream)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if (skip_sample) {

                    if (!RTICdrStream_skipBoolean (stream)) {
                        goto fin; 
                    }
                    if (!builtin_interfaces::msg::dds_::Time_Plugin_skip(
                        endpoint_data,
                        stream, 
                        RTI_FALSE, RTI_TRUE, 
                        endpoint_plugin_qos)) {
                        goto fin; 
                    }
                }

                done = RTI_TRUE;
              fin:
                if (done != RTI_TRUE && 
                RTICdrStream_getRemainder(stream) >=
                RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                    return RTI_FALSE;   
                }
                if(skip_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            unsigned int 
            PushButton_SendGoal_Response_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment +=RTICdrType_getBooleanMaxSizeSerialized(
                    current_alignment);

                current_alignment +=builtin_interfaces::msg::dds_::Time_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return  current_alignment - initial_alignment;
            }

            unsigned int 
            PushButton_SendGoal_Response_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PushButton_SendGoal_Response_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            unsigned int 
            PushButton_SendGoal_Response_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */ 

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment +=RTICdrType_getBooleanMaxSizeSerialized(
                    current_alignment);
                current_alignment +=builtin_interfaces::msg::dds_::Time_Plugin_get_serialized_sample_min_size(
                    endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return  current_alignment - initial_alignment;
            }

            /* Returns the size of the sample in its serialized form (in bytes).
            * It can also be an estimation in excess of the real buffer needed 
            * during a call to the serialize() function.
            * The value reported does not have to include the space for the
            * encapsulation flags.
            */
            unsigned int
            PushButton_SendGoal_Response_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const PushButton_SendGoal_Response_ * sample) 
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;
                struct PRESTypePluginDefaultEndpointData epd;   

                if (sample==NULL) {
                    return 0;
                }
                if (endpoint_data == NULL) {
                    endpoint_data = (PRESTypePluginEndpointData) &epd;
                    PRESTypePluginDefaultEndpointData_setBaseAlignment(
                        endpoint_data,
                        current_alignment);        
                }

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                    PRESTypePluginDefaultEndpointData_setBaseAlignment(
                        endpoint_data,
                        current_alignment);
                }

                current_alignment += RTICdrType_getBooleanMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += builtin_interfaces::msg::dds_::Time_Plugin_get_serialized_sample_size(
                    endpoint_data,RTI_FALSE, encapsulation_id,
                    current_alignment, (const builtin_interfaces::msg::dds_::Time_*) &sample->stamp_);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            PRESTypePluginKeyKind 
            PushButton_SendGoal_Response_Plugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_NO_KEY;
            }

            RTIBool 
            PushButton_SendGoal_Response_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const PushButton_SendGoal_Response_ *sample, 
                struct RTICdrStream *stream,    
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                if(serialize_encapsulation) {
                    if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if(serialize_key) {

                    if (!push_button_interface::action::dds_::PushButton_SendGoal_Response_Plugin_serialize(
                        endpoint_data,
                        sample,
                        stream,
                        RTI_FALSE, encapsulation_id,
                        RTI_TRUE,
                        endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            RTIBool PushButton_SendGoal_Response_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_SendGoal_Response_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                try {

                    char * position = NULL;

                    if (endpoint_data) {} /* To avoid warnings */
                    if (endpoint_plugin_qos) {} /* To avoid warnings */

                    if(deserialize_encapsulation) {

                        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                            return RTI_FALSE;
                        }

                        position = RTICdrStream_resetAlignment(stream);
                    }
                    if (deserialize_key) {

                        if (!push_button_interface::action::dds_::PushButton_SendGoal_Response_Plugin_deserialize_sample(
                            endpoint_data, sample, stream, 
                            RTI_FALSE, RTI_TRUE, 
                            endpoint_plugin_qos)) {
                            return RTI_FALSE;
                        }
                    }

                    if(deserialize_encapsulation) {
                        RTICdrStream_restoreAlignment(stream,position);
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            RTIBool PushButton_SendGoal_Response_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_SendGoal_Response_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                RTIBool result;
                if (drop_sample) {} /* To avoid warnings */
                stream->_xTypesState.unassignable = RTI_FALSE;
                result= push_button_interface::action::dds_::PushButton_SendGoal_Response_Plugin_deserialize_key_sample(
                    endpoint_data, (sample != NULL)?*sample:NULL, stream,
                    deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }

                return result;    

            }

            unsigned int
            PushButton_SendGoal_Response_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */
                if (overflow) {} /* To avoid warnings */

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment += push_button_interface::action::dds_::PushButton_SendGoal_Response_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            unsigned int
            PushButton_SendGoal_Response_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PushButton_SendGoal_Response_Plugin_get_serialized_key_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            RTIBool 
            PushButton_SendGoal_Response_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_SendGoal_Response_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                RTIBool done = RTI_FALSE;
                RTIBool error = RTI_FALSE;

                if (stream == NULL) {
                    error = RTI_TRUE;
                    goto fin;
                }
                if(deserialize_encapsulation) {
                    if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                        return RTI_FALSE;
                    }
                    position = RTICdrStream_resetAlignment(stream);
                }

                if (deserialize_key) {

                    if (!push_button_interface::action::dds_::PushButton_SendGoal_Response_Plugin_deserialize_sample(
                        endpoint_data, sample, stream, RTI_FALSE, 
                        RTI_TRUE, endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                done = RTI_TRUE;
              fin:
                if(!error) {
                    if (done != RTI_TRUE && 
                    RTICdrStream_getRemainder(stream) >=
                    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        return RTI_FALSE;   
                    }
                } else {
                    return RTI_FALSE;
                }       

                if(deserialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            /* ------------------------------------------------------------------------
            * Plug-in Installation Methods
            * ------------------------------------------------------------------------ */
            struct PRESTypePlugin *PushButton_SendGoal_Response_Plugin_new(void) 
            { 
                struct PRESTypePlugin *plugin = NULL;
                const struct PRESTypePluginVersion PLUGIN_VERSION = 
                PRES_TYPE_PLUGIN_VERSION_2_0;

                RTIOsapiHeap_allocateStructure(
                    &plugin, struct PRESTypePlugin);

                if (plugin == NULL) {
                    return NULL;
                }

                plugin->version = PLUGIN_VERSION;

                /* set up parent's function pointers */
                plugin->onParticipantAttached =
                (PRESTypePluginOnParticipantAttachedCallback)
                push_button_interface::action::dds_::PushButton_SendGoal_Response_Plugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                push_button_interface::action::dds_::PushButton_SendGoal_Response_Plugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                push_button_interface::action::dds_::PushButton_SendGoal_Response_Plugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                push_button_interface::action::dds_::PushButton_SendGoal_Response_Plugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                push_button_interface::action::dds_::PushButton_SendGoal_Response_Plugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                PushButton_SendGoal_Response_Plugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                PushButton_SendGoal_Response_Plugin_destroy_sample;
                plugin->finalizeOptionalMembersFnc =
                (PRESTypePluginFinalizeOptionalMembersFunction)
                PushButton_SendGoal_Response__finalize_optional_members;

                plugin->serializeFnc =
                (PRESTypePluginSerializeFunction)
                push_button_interface::action::dds_::PushButton_SendGoal_Response_Plugin_serialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction)
                push_button_interface::action::dds_::PushButton_SendGoal_Response_Plugin_deserialize;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                push_button_interface::action::dds_::PushButton_SendGoal_Response_Plugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                push_button_interface::action::dds_::PushButton_SendGoal_Response_Plugin_get_serialized_sample_min_size;

                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                PushButton_SendGoal_Response_Plugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                PushButton_SendGoal_Response_Plugin_return_sample;

                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                push_button_interface::action::dds_::PushButton_SendGoal_Response_Plugin_get_key_kind;

                /* These functions are only used for keyed types. As this is not a keyed
                type they are all set to NULL
                */
                plugin->serializeKeyFnc = NULL ;    
                plugin->deserializeKeyFnc = NULL;  
                plugin->getKeyFnc = NULL;
                plugin->returnKeyFnc = NULL;
                plugin->instanceToKeyFnc = NULL;
                plugin->keyToInstanceFnc = NULL;
                plugin->getSerializedKeyMaxSizeFnc = NULL;
                plugin->instanceToKeyHashFnc = NULL;
                plugin->serializedSampleToKeyHashFnc = NULL;
                plugin->serializedKeyToKeyHashFnc = NULL;    
                plugin->typeCode =  (struct RTICdrTypeCode *)push_button_interface::action::dds_::PushButton_SendGoal_Response__get_typecode();

                plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                PushButton_SendGoal_Response_Plugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                PushButton_SendGoal_Response_Plugin_return_buffer;
                plugin->getSerializedSampleSizeFnc =
                (PRESTypePluginGetSerializedSampleSizeFunction)
                push_button_interface::action::dds_::PushButton_SendGoal_Response_Plugin_get_serialized_sample_size;

                plugin->endpointTypeName = PushButton_SendGoal_Response_TYPENAME;

                return plugin;
            }

            void
            PushButton_SendGoal_Response_Plugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace push_button_interface  */
namespace push_button_interface {
    namespace action {
        namespace dds_ {

            /* ----------------------------------------------------------------------------
            *  Type PushButton_Result_
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            PushButton_Result_*
            PushButton_Result_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params) 
            {
                PushButton_Result_ *sample = NULL;

                sample = new (std::nothrow) PushButton_Result_ ;
                if (sample == NULL) {
                    return NULL;
                }

                if (!push_button_interface::action::dds_::PushButton_Result__initialize_w_params(sample,alloc_params)) {
                    delete  sample;
                    sample=NULL;
                }
                return sample; 
            } 

            PushButton_Result_ *
            PushButton_Result_PluginSupport_create_data_ex(RTIBool allocate_pointers) 
            {
                PushButton_Result_ *sample = NULL;

                sample = new (std::nothrow) PushButton_Result_ ;

                if(sample == NULL) {
                    return NULL;
                }

                if (!push_button_interface::action::dds_::PushButton_Result__initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    delete  sample;
                    sample=NULL;
                }

                return sample; 
            }

            PushButton_Result_ *
            PushButton_Result_PluginSupport_create_data(void)
            {
                return push_button_interface::action::dds_::PushButton_Result_PluginSupport_create_data_ex(RTI_TRUE);
            }

            void 
            PushButton_Result_PluginSupport_destroy_data_w_params(
                PushButton_Result_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params) {

                push_button_interface::action::dds_::PushButton_Result__finalize_w_params(sample,dealloc_params);

                delete  sample;
                sample=NULL;
            }

            void 
            PushButton_Result_PluginSupport_destroy_data_ex(
                PushButton_Result_ *sample,RTIBool deallocate_pointers) {

                push_button_interface::action::dds_::PushButton_Result__finalize_ex(sample,deallocate_pointers);

                delete  sample;
                sample=NULL;
            }

            void 
            PushButton_Result_PluginSupport_destroy_data(
                PushButton_Result_ *sample) {

                push_button_interface::action::dds_::PushButton_Result_PluginSupport_destroy_data_ex(sample,RTI_TRUE);

            }

            RTIBool 
            PushButton_Result_PluginSupport_copy_data(
                PushButton_Result_ *dst,
                const PushButton_Result_ *src)
            {
                return push_button_interface::action::dds_::PushButton_Result__copy(dst,(const PushButton_Result_*) src);
            }

            void 
            PushButton_Result_PluginSupport_print_data(
                const PushButton_Result_ *sample,
                const char *desc,
                unsigned int indent_level)
            {

                RTICdrType_printIndent(indent_level);

                if (desc != NULL) {
                    RTILog_debug("%s:\n", desc);
                } else {
                    RTILog_debug("\n");
                }

                if (sample == NULL) {
                    RTILog_debug("NULL\n");
                    return;
                }

                RTICdrType_printBoolean(
                    &sample->result_, "result_", indent_level + 1);    

            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            PushButton_Result_Plugin_on_participant_attached(
                void *registration_data,
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration,
                void *container_plugin_context,
                RTICdrTypeCode *type_code)
            {
                if (registration_data) {} /* To avoid warnings */
                if (participant_info) {} /* To avoid warnings */
                if (top_level_registration) {} /* To avoid warnings */
                if (container_plugin_context) {} /* To avoid warnings */
                if (type_code) {} /* To avoid warnings */

                return PRESTypePluginDefaultParticipantData_new(participant_info);

            }

            void 
            PushButton_Result_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data)
            {

                PRESTypePluginDefaultParticipantData_delete(participant_data);
            }

            PRESTypePluginEndpointData
            PushButton_Result_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *containerPluginContext)
            {
                PRESTypePluginEndpointData epd = NULL;

                unsigned int serializedSampleMaxSize;

                if (top_level_registration) {} /* To avoid warnings */
                if (containerPluginContext) {} /* To avoid warnings */

                epd = PRESTypePluginDefaultEndpointData_new(
                    participant_data,
                    endpoint_info,
                    (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                    push_button_interface::action::dds_::PushButton_Result_PluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    push_button_interface::action::dds_::PushButton_Result_PluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = push_button_interface::action::dds_::PushButton_Result_Plugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        push_button_interface::action::dds_::PushButton_Result_Plugin_get_serialized_sample_max_size, epd,
                        (PRESTypePluginGetSerializedSampleSizeFunction)
                        push_button_interface::action::dds_::PushButton_Result_Plugin_get_serialized_sample_size,
                        epd) == RTI_FALSE) {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }
                }

                return epd;    
            }

            void 
            PushButton_Result_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  

                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            PushButton_Result_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_Result_ *sample,
                void *handle)
            {

                PushButton_Result__finalize_optional_members(sample, RTI_TRUE);

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            PushButton_Result_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_Result_ *dst,
                const PushButton_Result_ *src)
            {
                if (endpoint_data) {} /* To avoid warnings */
                return push_button_interface::action::dds_::PushButton_Result_PluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            PushButton_Result_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool 
            PushButton_Result_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const PushButton_Result_ *sample, 
                struct RTICdrStream *stream,    
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;
                RTIBool retval = RTI_TRUE;

                if (endpoint_data) {} /* To avoid warnings */
                if (endpoint_plugin_qos) {} /* To avoid warnings */

                if(serialize_encapsulation) {
                    if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if(serialize_sample) {

                    if (!RTICdrStream_serializeBoolean(
                        stream, &sample->result_)) {
                        return RTI_FALSE;
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return retval;
            }

            RTIBool 
            PushButton_Result_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_Result_ *sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                char * position = NULL;

                RTIBool done = RTI_FALSE;

                try {

                    if (endpoint_data) {} /* To avoid warnings */
                    if (endpoint_plugin_qos) {} /* To avoid warnings */
                    if(deserialize_encapsulation) {

                        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                            return RTI_FALSE;
                        }

                        position = RTICdrStream_resetAlignment(stream);
                    }
                    if(deserialize_sample) {

                        push_button_interface::action::dds_::PushButton_Result__initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                        if (!RTICdrStream_deserializeBoolean(
                            stream, &sample->result_)) {
                            goto fin; 
                        }
                    }

                    done = RTI_TRUE;
                  fin:
                    if (done != RTI_TRUE && 
                    RTICdrStream_getRemainder(stream) >=
                    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        return RTI_FALSE;   
                    }
                    if(deserialize_encapsulation) {
                        RTICdrStream_restoreAlignment(stream,position);
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            RTIBool
            PushButton_Result_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PushButton_Result_ *sample)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                PushButton_Result_Plugin_get_serialized_sample_max_size(
                    NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

                if (buffer == NULL) {
                    *length = 
                    PushButton_Result_Plugin_get_serialized_sample_size(
                        (PRESTypePluginEndpointData)&epd,
                        RTI_TRUE,
                        RTICdrEncapsulation_getNativeCdrEncapsulationId(),
                        0,
                        sample);

                    if (*length == 0) {
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;
                }    

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, *length);

                result = push_button_interface::action::dds_::PushButton_Result_Plugin_serialize(
                    (PRESTypePluginEndpointData)&epd, sample, &stream, 
                    RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
                    RTI_TRUE, NULL);  

                *length = RTICdrStream_getCurrentPositionOffset(&stream);
                return result;     
            }

            RTIBool
            PushButton_Result_Plugin_deserialize_from_cdr_buffer(
                PushButton_Result_ *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                PushButton_Result__finalize_optional_members(sample, RTI_TRUE);
                return PushButton_Result_Plugin_deserialize_sample( 
                    NULL, sample,
                    &stream, RTI_TRUE, RTI_TRUE, 
                    NULL);
            }

            DDS_ReturnCode_t
            PushButton_Result_Plugin_data_to_string(
                const PushButton_Result_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property)
            {
                DDS_DynamicData *data = NULL;
                char *buffer = NULL;
                unsigned int length = 0;
                struct DDS_PrintFormat printFormat;
                DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

                if (sample == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (str_size == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (property == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (!PushButton_Result_Plugin_serialize_to_cdr_buffer(
                    NULL, 
                    &length, 
                    sample)) {
                    return DDS_RETCODE_ERROR;
                }

                RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
                if (buffer == NULL) {
                    return DDS_RETCODE_ERROR;
                }

                if (!PushButton_Result_Plugin_serialize_to_cdr_buffer(
                    buffer, 
                    &length, 
                    sample)) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                data = DDS_DynamicData_new(
                    PushButton_Result__get_typecode(), 
                    &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
                if (data == NULL) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_PrintFormatProperty_to_print_format(
                    property, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_DynamicDataFormatter_to_string_w_format(
                    data, 
                    str,
                    str_size, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                RTIOsapiHeap_freeBuffer(buffer);
                DDS_DynamicData_delete(data);
                return DDS_RETCODE_OK;
            }

            RTIBool 
            PushButton_Result_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_Result_ **sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                RTIBool result;
                const char *METHOD_NAME = "PushButton_Result_Plugin_deserialize";
                if (drop_sample) {} /* To avoid warnings */

                stream->_xTypesState.unassignable = RTI_FALSE;
                result= push_button_interface::action::dds_::PushButton_Result_Plugin_deserialize_sample( 
                    endpoint_data, (sample != NULL)?*sample:NULL,
                    stream, deserialize_encapsulation, deserialize_sample, 
                    endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }
                if (!result && stream->_xTypesState.unassignable ) {

                    RTICdrLog_exception(
                        METHOD_NAME, 
                        &RTI_CDR_LOG_UNASSIGNABLE_SAMPLE_OF_TYPE_s, 
                        "PushButton_Result_");

                }

                return result;

            }

            RTIBool PushButton_Result_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream,   
                RTIBool skip_encapsulation,
                RTIBool skip_sample, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                RTIBool done = RTI_FALSE;

                if (endpoint_data) {} /* To avoid warnings */
                if (endpoint_plugin_qos) {} /* To avoid warnings */

                if(skip_encapsulation) {
                    if (!RTICdrStream_skipEncapsulation(stream)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if (skip_sample) {

                    if (!RTICdrStream_skipBoolean (stream)) {
                        goto fin; 
                    }
                }

                done = RTI_TRUE;
              fin:
                if (done != RTI_TRUE && 
                RTICdrStream_getRemainder(stream) >=
                RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                    return RTI_FALSE;   
                }
                if(skip_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            unsigned int 
            PushButton_Result_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */ 
                if (overflow) {} /* To avoid warnings */

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment +=RTICdrType_getBooleanMaxSizeSerialized(
                    current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return  current_alignment - initial_alignment;
            }

            unsigned int 
            PushButton_Result_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PushButton_Result_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            unsigned int 
            PushButton_Result_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */ 

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment +=RTICdrType_getBooleanMaxSizeSerialized(
                    current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return  current_alignment - initial_alignment;
            }

            /* Returns the size of the sample in its serialized form (in bytes).
            * It can also be an estimation in excess of the real buffer needed 
            * during a call to the serialize() function.
            * The value reported does not have to include the space for the
            * encapsulation flags.
            */
            unsigned int
            PushButton_Result_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const PushButton_Result_ * sample) 
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;
                struct PRESTypePluginDefaultEndpointData epd;   

                if (sample==NULL) {
                    return 0;
                }
                if (endpoint_data == NULL) {
                    endpoint_data = (PRESTypePluginEndpointData) &epd;
                    PRESTypePluginDefaultEndpointData_setBaseAlignment(
                        endpoint_data,
                        current_alignment);        
                }

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                    PRESTypePluginDefaultEndpointData_setBaseAlignment(
                        endpoint_data,
                        current_alignment);
                }

                current_alignment += RTICdrType_getBooleanMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            PRESTypePluginKeyKind 
            PushButton_Result_Plugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_NO_KEY;
            }

            RTIBool 
            PushButton_Result_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const PushButton_Result_ *sample, 
                struct RTICdrStream *stream,    
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                if(serialize_encapsulation) {
                    if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if(serialize_key) {

                    if (!push_button_interface::action::dds_::PushButton_Result_Plugin_serialize(
                        endpoint_data,
                        sample,
                        stream,
                        RTI_FALSE, encapsulation_id,
                        RTI_TRUE,
                        endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            RTIBool PushButton_Result_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_Result_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                try {

                    char * position = NULL;

                    if (endpoint_data) {} /* To avoid warnings */
                    if (endpoint_plugin_qos) {} /* To avoid warnings */

                    if(deserialize_encapsulation) {

                        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                            return RTI_FALSE;
                        }

                        position = RTICdrStream_resetAlignment(stream);
                    }
                    if (deserialize_key) {

                        if (!push_button_interface::action::dds_::PushButton_Result_Plugin_deserialize_sample(
                            endpoint_data, sample, stream, 
                            RTI_FALSE, RTI_TRUE, 
                            endpoint_plugin_qos)) {
                            return RTI_FALSE;
                        }
                    }

                    if(deserialize_encapsulation) {
                        RTICdrStream_restoreAlignment(stream,position);
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            RTIBool PushButton_Result_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_Result_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                RTIBool result;
                if (drop_sample) {} /* To avoid warnings */
                stream->_xTypesState.unassignable = RTI_FALSE;
                result= push_button_interface::action::dds_::PushButton_Result_Plugin_deserialize_key_sample(
                    endpoint_data, (sample != NULL)?*sample:NULL, stream,
                    deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }

                return result;    

            }

            unsigned int
            PushButton_Result_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */
                if (overflow) {} /* To avoid warnings */

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment += push_button_interface::action::dds_::PushButton_Result_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            unsigned int
            PushButton_Result_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PushButton_Result_Plugin_get_serialized_key_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            RTIBool 
            PushButton_Result_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_Result_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                RTIBool done = RTI_FALSE;
                RTIBool error = RTI_FALSE;

                if (stream == NULL) {
                    error = RTI_TRUE;
                    goto fin;
                }
                if(deserialize_encapsulation) {
                    if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                        return RTI_FALSE;
                    }
                    position = RTICdrStream_resetAlignment(stream);
                }

                if (deserialize_key) {

                    if (!push_button_interface::action::dds_::PushButton_Result_Plugin_deserialize_sample(
                        endpoint_data, sample, stream, RTI_FALSE, 
                        RTI_TRUE, endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                done = RTI_TRUE;
              fin:
                if(!error) {
                    if (done != RTI_TRUE && 
                    RTICdrStream_getRemainder(stream) >=
                    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        return RTI_FALSE;   
                    }
                } else {
                    return RTI_FALSE;
                }       

                if(deserialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            /* ------------------------------------------------------------------------
            * Plug-in Installation Methods
            * ------------------------------------------------------------------------ */
            struct PRESTypePlugin *PushButton_Result_Plugin_new(void) 
            { 
                struct PRESTypePlugin *plugin = NULL;
                const struct PRESTypePluginVersion PLUGIN_VERSION = 
                PRES_TYPE_PLUGIN_VERSION_2_0;

                RTIOsapiHeap_allocateStructure(
                    &plugin, struct PRESTypePlugin);

                if (plugin == NULL) {
                    return NULL;
                }

                plugin->version = PLUGIN_VERSION;

                /* set up parent's function pointers */
                plugin->onParticipantAttached =
                (PRESTypePluginOnParticipantAttachedCallback)
                push_button_interface::action::dds_::PushButton_Result_Plugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                push_button_interface::action::dds_::PushButton_Result_Plugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                push_button_interface::action::dds_::PushButton_Result_Plugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                push_button_interface::action::dds_::PushButton_Result_Plugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                push_button_interface::action::dds_::PushButton_Result_Plugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                PushButton_Result_Plugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                PushButton_Result_Plugin_destroy_sample;
                plugin->finalizeOptionalMembersFnc =
                (PRESTypePluginFinalizeOptionalMembersFunction)
                PushButton_Result__finalize_optional_members;

                plugin->serializeFnc =
                (PRESTypePluginSerializeFunction)
                push_button_interface::action::dds_::PushButton_Result_Plugin_serialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction)
                push_button_interface::action::dds_::PushButton_Result_Plugin_deserialize;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                push_button_interface::action::dds_::PushButton_Result_Plugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                push_button_interface::action::dds_::PushButton_Result_Plugin_get_serialized_sample_min_size;

                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                PushButton_Result_Plugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                PushButton_Result_Plugin_return_sample;

                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                push_button_interface::action::dds_::PushButton_Result_Plugin_get_key_kind;

                /* These functions are only used for keyed types. As this is not a keyed
                type they are all set to NULL
                */
                plugin->serializeKeyFnc = NULL ;    
                plugin->deserializeKeyFnc = NULL;  
                plugin->getKeyFnc = NULL;
                plugin->returnKeyFnc = NULL;
                plugin->instanceToKeyFnc = NULL;
                plugin->keyToInstanceFnc = NULL;
                plugin->getSerializedKeyMaxSizeFnc = NULL;
                plugin->instanceToKeyHashFnc = NULL;
                plugin->serializedSampleToKeyHashFnc = NULL;
                plugin->serializedKeyToKeyHashFnc = NULL;    
                plugin->typeCode =  (struct RTICdrTypeCode *)push_button_interface::action::dds_::PushButton_Result__get_typecode();

                plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                PushButton_Result_Plugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                PushButton_Result_Plugin_return_buffer;
                plugin->getSerializedSampleSizeFnc =
                (PRESTypePluginGetSerializedSampleSizeFunction)
                push_button_interface::action::dds_::PushButton_Result_Plugin_get_serialized_sample_size;

                plugin->endpointTypeName = PushButton_Result_TYPENAME;

                return plugin;
            }

            void
            PushButton_Result_Plugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace push_button_interface  */
namespace push_button_interface {
    namespace action {
        namespace dds_ {

            /* ----------------------------------------------------------------------------
            *  Type PushButton_GetResult_Request_
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            PushButton_GetResult_Request_*
            PushButton_GetResult_Request_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params) 
            {
                PushButton_GetResult_Request_ *sample = NULL;

                sample = new (std::nothrow) PushButton_GetResult_Request_ ;
                if (sample == NULL) {
                    return NULL;
                }

                if (!push_button_interface::action::dds_::PushButton_GetResult_Request__initialize_w_params(sample,alloc_params)) {
                    delete  sample;
                    sample=NULL;
                }
                return sample; 
            } 

            PushButton_GetResult_Request_ *
            PushButton_GetResult_Request_PluginSupport_create_data_ex(RTIBool allocate_pointers) 
            {
                PushButton_GetResult_Request_ *sample = NULL;

                sample = new (std::nothrow) PushButton_GetResult_Request_ ;

                if(sample == NULL) {
                    return NULL;
                }

                if (!push_button_interface::action::dds_::PushButton_GetResult_Request__initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    delete  sample;
                    sample=NULL;
                }

                return sample; 
            }

            PushButton_GetResult_Request_ *
            PushButton_GetResult_Request_PluginSupport_create_data(void)
            {
                return push_button_interface::action::dds_::PushButton_GetResult_Request_PluginSupport_create_data_ex(RTI_TRUE);
            }

            void 
            PushButton_GetResult_Request_PluginSupport_destroy_data_w_params(
                PushButton_GetResult_Request_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params) {

                push_button_interface::action::dds_::PushButton_GetResult_Request__finalize_w_params(sample,dealloc_params);

                delete  sample;
                sample=NULL;
            }

            void 
            PushButton_GetResult_Request_PluginSupport_destroy_data_ex(
                PushButton_GetResult_Request_ *sample,RTIBool deallocate_pointers) {

                push_button_interface::action::dds_::PushButton_GetResult_Request__finalize_ex(sample,deallocate_pointers);

                delete  sample;
                sample=NULL;
            }

            void 
            PushButton_GetResult_Request_PluginSupport_destroy_data(
                PushButton_GetResult_Request_ *sample) {

                push_button_interface::action::dds_::PushButton_GetResult_Request_PluginSupport_destroy_data_ex(sample,RTI_TRUE);

            }

            RTIBool 
            PushButton_GetResult_Request_PluginSupport_copy_data(
                PushButton_GetResult_Request_ *dst,
                const PushButton_GetResult_Request_ *src)
            {
                return push_button_interface::action::dds_::PushButton_GetResult_Request__copy(dst,(const PushButton_GetResult_Request_*) src);
            }

            void 
            PushButton_GetResult_Request_PluginSupport_print_data(
                const PushButton_GetResult_Request_ *sample,
                const char *desc,
                unsigned int indent_level)
            {

                RTICdrType_printIndent(indent_level);

                if (desc != NULL) {
                    RTILog_debug("%s:\n", desc);
                } else {
                    RTILog_debug("\n");
                }

                if (sample == NULL) {
                    RTILog_debug("NULL\n");
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID_PluginSupport_print_data(
                    (const unique_identifier_msgs::msg::dds_::UUID_*) &sample->goal_id_, "goal_id_", indent_level + 1);

            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            PushButton_GetResult_Request_Plugin_on_participant_attached(
                void *registration_data,
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration,
                void *container_plugin_context,
                RTICdrTypeCode *type_code)
            {
                if (registration_data) {} /* To avoid warnings */
                if (participant_info) {} /* To avoid warnings */
                if (top_level_registration) {} /* To avoid warnings */
                if (container_plugin_context) {} /* To avoid warnings */
                if (type_code) {} /* To avoid warnings */

                return PRESTypePluginDefaultParticipantData_new(participant_info);

            }

            void 
            PushButton_GetResult_Request_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data)
            {

                PRESTypePluginDefaultParticipantData_delete(participant_data);
            }

            PRESTypePluginEndpointData
            PushButton_GetResult_Request_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *containerPluginContext)
            {
                PRESTypePluginEndpointData epd = NULL;

                unsigned int serializedSampleMaxSize;

                if (top_level_registration) {} /* To avoid warnings */
                if (containerPluginContext) {} /* To avoid warnings */

                epd = PRESTypePluginDefaultEndpointData_new(
                    participant_data,
                    endpoint_info,
                    (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                    push_button_interface::action::dds_::PushButton_GetResult_Request_PluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    push_button_interface::action::dds_::PushButton_GetResult_Request_PluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = push_button_interface::action::dds_::PushButton_GetResult_Request_Plugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        push_button_interface::action::dds_::PushButton_GetResult_Request_Plugin_get_serialized_sample_max_size, epd,
                        (PRESTypePluginGetSerializedSampleSizeFunction)
                        push_button_interface::action::dds_::PushButton_GetResult_Request_Plugin_get_serialized_sample_size,
                        epd) == RTI_FALSE) {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }
                }

                return epd;    
            }

            void 
            PushButton_GetResult_Request_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  

                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            PushButton_GetResult_Request_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_GetResult_Request_ *sample,
                void *handle)
            {

                PushButton_GetResult_Request__finalize_optional_members(sample, RTI_TRUE);

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            PushButton_GetResult_Request_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_GetResult_Request_ *dst,
                const PushButton_GetResult_Request_ *src)
            {
                if (endpoint_data) {} /* To avoid warnings */
                return push_button_interface::action::dds_::PushButton_GetResult_Request_PluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            PushButton_GetResult_Request_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool 
            PushButton_GetResult_Request_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const PushButton_GetResult_Request_ *sample, 
                struct RTICdrStream *stream,    
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;
                RTIBool retval = RTI_TRUE;

                if (endpoint_data) {} /* To avoid warnings */
                if (endpoint_plugin_qos) {} /* To avoid warnings */

                if(serialize_encapsulation) {
                    if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if(serialize_sample) {

                    if(!unique_identifier_msgs::msg::dds_::UUID_Plugin_serialize(
                        endpoint_data,
                        (const unique_identifier_msgs::msg::dds_::UUID_*) &sample->goal_id_,
                        stream,
                        RTI_FALSE, encapsulation_id,
                        RTI_TRUE,
                        endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return retval;
            }

            RTIBool 
            PushButton_GetResult_Request_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_GetResult_Request_ *sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                char * position = NULL;

                RTIBool done = RTI_FALSE;

                try {

                    if (endpoint_data) {} /* To avoid warnings */
                    if (endpoint_plugin_qos) {} /* To avoid warnings */
                    if(deserialize_encapsulation) {

                        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                            return RTI_FALSE;
                        }

                        position = RTICdrStream_resetAlignment(stream);
                    }
                    if(deserialize_sample) {

                        push_button_interface::action::dds_::PushButton_GetResult_Request__initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                        if(!unique_identifier_msgs::msg::dds_::UUID_Plugin_deserialize_sample(
                            endpoint_data,
                            &sample->goal_id_,
                            stream,
                            RTI_FALSE, RTI_TRUE,
                            endpoint_plugin_qos)) {
                            goto fin; 
                        }
                    }

                    done = RTI_TRUE;
                  fin:
                    if (done != RTI_TRUE && 
                    RTICdrStream_getRemainder(stream) >=
                    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        return RTI_FALSE;   
                    }
                    if(deserialize_encapsulation) {
                        RTICdrStream_restoreAlignment(stream,position);
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            RTIBool
            PushButton_GetResult_Request_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PushButton_GetResult_Request_ *sample)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                PushButton_GetResult_Request_Plugin_get_serialized_sample_max_size(
                    NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

                if (buffer == NULL) {
                    *length = 
                    PushButton_GetResult_Request_Plugin_get_serialized_sample_size(
                        (PRESTypePluginEndpointData)&epd,
                        RTI_TRUE,
                        RTICdrEncapsulation_getNativeCdrEncapsulationId(),
                        0,
                        sample);

                    if (*length == 0) {
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;
                }    

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, *length);

                result = push_button_interface::action::dds_::PushButton_GetResult_Request_Plugin_serialize(
                    (PRESTypePluginEndpointData)&epd, sample, &stream, 
                    RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
                    RTI_TRUE, NULL);  

                *length = RTICdrStream_getCurrentPositionOffset(&stream);
                return result;     
            }

            RTIBool
            PushButton_GetResult_Request_Plugin_deserialize_from_cdr_buffer(
                PushButton_GetResult_Request_ *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                PushButton_GetResult_Request__finalize_optional_members(sample, RTI_TRUE);
                return PushButton_GetResult_Request_Plugin_deserialize_sample( 
                    NULL, sample,
                    &stream, RTI_TRUE, RTI_TRUE, 
                    NULL);
            }

            DDS_ReturnCode_t
            PushButton_GetResult_Request_Plugin_data_to_string(
                const PushButton_GetResult_Request_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property)
            {
                DDS_DynamicData *data = NULL;
                char *buffer = NULL;
                unsigned int length = 0;
                struct DDS_PrintFormat printFormat;
                DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

                if (sample == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (str_size == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (property == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (!PushButton_GetResult_Request_Plugin_serialize_to_cdr_buffer(
                    NULL, 
                    &length, 
                    sample)) {
                    return DDS_RETCODE_ERROR;
                }

                RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
                if (buffer == NULL) {
                    return DDS_RETCODE_ERROR;
                }

                if (!PushButton_GetResult_Request_Plugin_serialize_to_cdr_buffer(
                    buffer, 
                    &length, 
                    sample)) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                data = DDS_DynamicData_new(
                    PushButton_GetResult_Request__get_typecode(), 
                    &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
                if (data == NULL) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_PrintFormatProperty_to_print_format(
                    property, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_DynamicDataFormatter_to_string_w_format(
                    data, 
                    str,
                    str_size, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                RTIOsapiHeap_freeBuffer(buffer);
                DDS_DynamicData_delete(data);
                return DDS_RETCODE_OK;
            }

            RTIBool 
            PushButton_GetResult_Request_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_GetResult_Request_ **sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                RTIBool result;
                const char *METHOD_NAME = "PushButton_GetResult_Request_Plugin_deserialize";
                if (drop_sample) {} /* To avoid warnings */

                stream->_xTypesState.unassignable = RTI_FALSE;
                result= push_button_interface::action::dds_::PushButton_GetResult_Request_Plugin_deserialize_sample( 
                    endpoint_data, (sample != NULL)?*sample:NULL,
                    stream, deserialize_encapsulation, deserialize_sample, 
                    endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }
                if (!result && stream->_xTypesState.unassignable ) {

                    RTICdrLog_exception(
                        METHOD_NAME, 
                        &RTI_CDR_LOG_UNASSIGNABLE_SAMPLE_OF_TYPE_s, 
                        "PushButton_GetResult_Request_");

                }

                return result;

            }

            RTIBool PushButton_GetResult_Request_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream,   
                RTIBool skip_encapsulation,
                RTIBool skip_sample, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                RTIBool done = RTI_FALSE;

                if (endpoint_data) {} /* To avoid warnings */
                if (endpoint_plugin_qos) {} /* To avoid warnings */

                if(skip_encapsulation) {
                    if (!RTICdrStream_skipEncapsulation(stream)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if (skip_sample) {

                    if (!unique_identifier_msgs::msg::dds_::UUID_Plugin_skip(
                        endpoint_data,
                        stream, 
                        RTI_FALSE, RTI_TRUE, 
                        endpoint_plugin_qos)) {
                        goto fin; 
                    }
                }

                done = RTI_TRUE;
              fin:
                if (done != RTI_TRUE && 
                RTICdrStream_getRemainder(stream) >=
                RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                    return RTI_FALSE;   
                }
                if(skip_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            unsigned int 
            PushButton_GetResult_Request_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment +=unique_identifier_msgs::msg::dds_::UUID_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return  current_alignment - initial_alignment;
            }

            unsigned int 
            PushButton_GetResult_Request_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PushButton_GetResult_Request_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            unsigned int 
            PushButton_GetResult_Request_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */ 

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment +=unique_identifier_msgs::msg::dds_::UUID_Plugin_get_serialized_sample_min_size(
                    endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return  current_alignment - initial_alignment;
            }

            /* Returns the size of the sample in its serialized form (in bytes).
            * It can also be an estimation in excess of the real buffer needed 
            * during a call to the serialize() function.
            * The value reported does not have to include the space for the
            * encapsulation flags.
            */
            unsigned int
            PushButton_GetResult_Request_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const PushButton_GetResult_Request_ * sample) 
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;
                struct PRESTypePluginDefaultEndpointData epd;   

                if (sample==NULL) {
                    return 0;
                }
                if (endpoint_data == NULL) {
                    endpoint_data = (PRESTypePluginEndpointData) &epd;
                    PRESTypePluginDefaultEndpointData_setBaseAlignment(
                        endpoint_data,
                        current_alignment);        
                }

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                    PRESTypePluginDefaultEndpointData_setBaseAlignment(
                        endpoint_data,
                        current_alignment);
                }

                current_alignment += unique_identifier_msgs::msg::dds_::UUID_Plugin_get_serialized_sample_size(
                    endpoint_data,RTI_FALSE, encapsulation_id,
                    current_alignment, (const unique_identifier_msgs::msg::dds_::UUID_*) &sample->goal_id_);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            PRESTypePluginKeyKind 
            PushButton_GetResult_Request_Plugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_NO_KEY;
            }

            RTIBool 
            PushButton_GetResult_Request_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const PushButton_GetResult_Request_ *sample, 
                struct RTICdrStream *stream,    
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                if(serialize_encapsulation) {
                    if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if(serialize_key) {

                    if (!push_button_interface::action::dds_::PushButton_GetResult_Request_Plugin_serialize(
                        endpoint_data,
                        sample,
                        stream,
                        RTI_FALSE, encapsulation_id,
                        RTI_TRUE,
                        endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            RTIBool PushButton_GetResult_Request_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_GetResult_Request_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                try {

                    char * position = NULL;

                    if (endpoint_data) {} /* To avoid warnings */
                    if (endpoint_plugin_qos) {} /* To avoid warnings */

                    if(deserialize_encapsulation) {

                        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                            return RTI_FALSE;
                        }

                        position = RTICdrStream_resetAlignment(stream);
                    }
                    if (deserialize_key) {

                        if (!push_button_interface::action::dds_::PushButton_GetResult_Request_Plugin_deserialize_sample(
                            endpoint_data, sample, stream, 
                            RTI_FALSE, RTI_TRUE, 
                            endpoint_plugin_qos)) {
                            return RTI_FALSE;
                        }
                    }

                    if(deserialize_encapsulation) {
                        RTICdrStream_restoreAlignment(stream,position);
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            RTIBool PushButton_GetResult_Request_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_GetResult_Request_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                RTIBool result;
                if (drop_sample) {} /* To avoid warnings */
                stream->_xTypesState.unassignable = RTI_FALSE;
                result= push_button_interface::action::dds_::PushButton_GetResult_Request_Plugin_deserialize_key_sample(
                    endpoint_data, (sample != NULL)?*sample:NULL, stream,
                    deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }

                return result;    

            }

            unsigned int
            PushButton_GetResult_Request_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */
                if (overflow) {} /* To avoid warnings */

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment += push_button_interface::action::dds_::PushButton_GetResult_Request_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            unsigned int
            PushButton_GetResult_Request_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PushButton_GetResult_Request_Plugin_get_serialized_key_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            RTIBool 
            PushButton_GetResult_Request_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_GetResult_Request_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                RTIBool done = RTI_FALSE;
                RTIBool error = RTI_FALSE;

                if (stream == NULL) {
                    error = RTI_TRUE;
                    goto fin;
                }
                if(deserialize_encapsulation) {
                    if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                        return RTI_FALSE;
                    }
                    position = RTICdrStream_resetAlignment(stream);
                }

                if (deserialize_key) {

                    if (!push_button_interface::action::dds_::PushButton_GetResult_Request_Plugin_deserialize_sample(
                        endpoint_data, sample, stream, RTI_FALSE, 
                        RTI_TRUE, endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                done = RTI_TRUE;
              fin:
                if(!error) {
                    if (done != RTI_TRUE && 
                    RTICdrStream_getRemainder(stream) >=
                    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        return RTI_FALSE;   
                    }
                } else {
                    return RTI_FALSE;
                }       

                if(deserialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            /* ------------------------------------------------------------------------
            * Plug-in Installation Methods
            * ------------------------------------------------------------------------ */
            struct PRESTypePlugin *PushButton_GetResult_Request_Plugin_new(void) 
            { 
                struct PRESTypePlugin *plugin = NULL;
                const struct PRESTypePluginVersion PLUGIN_VERSION = 
                PRES_TYPE_PLUGIN_VERSION_2_0;

                RTIOsapiHeap_allocateStructure(
                    &plugin, struct PRESTypePlugin);

                if (plugin == NULL) {
                    return NULL;
                }

                plugin->version = PLUGIN_VERSION;

                /* set up parent's function pointers */
                plugin->onParticipantAttached =
                (PRESTypePluginOnParticipantAttachedCallback)
                push_button_interface::action::dds_::PushButton_GetResult_Request_Plugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                push_button_interface::action::dds_::PushButton_GetResult_Request_Plugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                push_button_interface::action::dds_::PushButton_GetResult_Request_Plugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                push_button_interface::action::dds_::PushButton_GetResult_Request_Plugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                push_button_interface::action::dds_::PushButton_GetResult_Request_Plugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                PushButton_GetResult_Request_Plugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                PushButton_GetResult_Request_Plugin_destroy_sample;
                plugin->finalizeOptionalMembersFnc =
                (PRESTypePluginFinalizeOptionalMembersFunction)
                PushButton_GetResult_Request__finalize_optional_members;

                plugin->serializeFnc =
                (PRESTypePluginSerializeFunction)
                push_button_interface::action::dds_::PushButton_GetResult_Request_Plugin_serialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction)
                push_button_interface::action::dds_::PushButton_GetResult_Request_Plugin_deserialize;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                push_button_interface::action::dds_::PushButton_GetResult_Request_Plugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                push_button_interface::action::dds_::PushButton_GetResult_Request_Plugin_get_serialized_sample_min_size;

                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                PushButton_GetResult_Request_Plugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                PushButton_GetResult_Request_Plugin_return_sample;

                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                push_button_interface::action::dds_::PushButton_GetResult_Request_Plugin_get_key_kind;

                /* These functions are only used for keyed types. As this is not a keyed
                type they are all set to NULL
                */
                plugin->serializeKeyFnc = NULL ;    
                plugin->deserializeKeyFnc = NULL;  
                plugin->getKeyFnc = NULL;
                plugin->returnKeyFnc = NULL;
                plugin->instanceToKeyFnc = NULL;
                plugin->keyToInstanceFnc = NULL;
                plugin->getSerializedKeyMaxSizeFnc = NULL;
                plugin->instanceToKeyHashFnc = NULL;
                plugin->serializedSampleToKeyHashFnc = NULL;
                plugin->serializedKeyToKeyHashFnc = NULL;    
                plugin->typeCode =  (struct RTICdrTypeCode *)push_button_interface::action::dds_::PushButton_GetResult_Request__get_typecode();

                plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                PushButton_GetResult_Request_Plugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                PushButton_GetResult_Request_Plugin_return_buffer;
                plugin->getSerializedSampleSizeFnc =
                (PRESTypePluginGetSerializedSampleSizeFunction)
                push_button_interface::action::dds_::PushButton_GetResult_Request_Plugin_get_serialized_sample_size;

                plugin->endpointTypeName = PushButton_GetResult_Request_TYPENAME;

                return plugin;
            }

            void
            PushButton_GetResult_Request_Plugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace push_button_interface  */
namespace push_button_interface {
    namespace action {
        namespace dds_ {

            /* ----------------------------------------------------------------------------
            *  Type PushButton_GetResult_Response_
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            PushButton_GetResult_Response_*
            PushButton_GetResult_Response_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params) 
            {
                PushButton_GetResult_Response_ *sample = NULL;

                sample = new (std::nothrow) PushButton_GetResult_Response_ ;
                if (sample == NULL) {
                    return NULL;
                }

                if (!push_button_interface::action::dds_::PushButton_GetResult_Response__initialize_w_params(sample,alloc_params)) {
                    delete  sample;
                    sample=NULL;
                }
                return sample; 
            } 

            PushButton_GetResult_Response_ *
            PushButton_GetResult_Response_PluginSupport_create_data_ex(RTIBool allocate_pointers) 
            {
                PushButton_GetResult_Response_ *sample = NULL;

                sample = new (std::nothrow) PushButton_GetResult_Response_ ;

                if(sample == NULL) {
                    return NULL;
                }

                if (!push_button_interface::action::dds_::PushButton_GetResult_Response__initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    delete  sample;
                    sample=NULL;
                }

                return sample; 
            }

            PushButton_GetResult_Response_ *
            PushButton_GetResult_Response_PluginSupport_create_data(void)
            {
                return push_button_interface::action::dds_::PushButton_GetResult_Response_PluginSupport_create_data_ex(RTI_TRUE);
            }

            void 
            PushButton_GetResult_Response_PluginSupport_destroy_data_w_params(
                PushButton_GetResult_Response_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params) {

                push_button_interface::action::dds_::PushButton_GetResult_Response__finalize_w_params(sample,dealloc_params);

                delete  sample;
                sample=NULL;
            }

            void 
            PushButton_GetResult_Response_PluginSupport_destroy_data_ex(
                PushButton_GetResult_Response_ *sample,RTIBool deallocate_pointers) {

                push_button_interface::action::dds_::PushButton_GetResult_Response__finalize_ex(sample,deallocate_pointers);

                delete  sample;
                sample=NULL;
            }

            void 
            PushButton_GetResult_Response_PluginSupport_destroy_data(
                PushButton_GetResult_Response_ *sample) {

                push_button_interface::action::dds_::PushButton_GetResult_Response_PluginSupport_destroy_data_ex(sample,RTI_TRUE);

            }

            RTIBool 
            PushButton_GetResult_Response_PluginSupport_copy_data(
                PushButton_GetResult_Response_ *dst,
                const PushButton_GetResult_Response_ *src)
            {
                return push_button_interface::action::dds_::PushButton_GetResult_Response__copy(dst,(const PushButton_GetResult_Response_*) src);
            }

            void 
            PushButton_GetResult_Response_PluginSupport_print_data(
                const PushButton_GetResult_Response_ *sample,
                const char *desc,
                unsigned int indent_level)
            {

                RTICdrType_printIndent(indent_level);

                if (desc != NULL) {
                    RTILog_debug("%s:\n", desc);
                } else {
                    RTILog_debug("\n");
                }

                if (sample == NULL) {
                    RTILog_debug("NULL\n");
                    return;
                }

                RTICdrType_printOctet(
                    &sample->status_, "status_", indent_level + 1);    

                push_button_interface::action::dds_::PushButton_Result_PluginSupport_print_data(
                    (const push_button_interface::action::dds_::PushButton_Result_*) &sample->result_, "result_", indent_level + 1);

            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            PushButton_GetResult_Response_Plugin_on_participant_attached(
                void *registration_data,
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration,
                void *container_plugin_context,
                RTICdrTypeCode *type_code)
            {
                if (registration_data) {} /* To avoid warnings */
                if (participant_info) {} /* To avoid warnings */
                if (top_level_registration) {} /* To avoid warnings */
                if (container_plugin_context) {} /* To avoid warnings */
                if (type_code) {} /* To avoid warnings */

                return PRESTypePluginDefaultParticipantData_new(participant_info);

            }

            void 
            PushButton_GetResult_Response_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data)
            {

                PRESTypePluginDefaultParticipantData_delete(participant_data);
            }

            PRESTypePluginEndpointData
            PushButton_GetResult_Response_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *containerPluginContext)
            {
                PRESTypePluginEndpointData epd = NULL;

                unsigned int serializedSampleMaxSize;

                if (top_level_registration) {} /* To avoid warnings */
                if (containerPluginContext) {} /* To avoid warnings */

                epd = PRESTypePluginDefaultEndpointData_new(
                    participant_data,
                    endpoint_info,
                    (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                    push_button_interface::action::dds_::PushButton_GetResult_Response_PluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    push_button_interface::action::dds_::PushButton_GetResult_Response_PluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = push_button_interface::action::dds_::PushButton_GetResult_Response_Plugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        push_button_interface::action::dds_::PushButton_GetResult_Response_Plugin_get_serialized_sample_max_size, epd,
                        (PRESTypePluginGetSerializedSampleSizeFunction)
                        push_button_interface::action::dds_::PushButton_GetResult_Response_Plugin_get_serialized_sample_size,
                        epd) == RTI_FALSE) {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }
                }

                return epd;    
            }

            void 
            PushButton_GetResult_Response_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  

                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            PushButton_GetResult_Response_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_GetResult_Response_ *sample,
                void *handle)
            {

                PushButton_GetResult_Response__finalize_optional_members(sample, RTI_TRUE);

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            PushButton_GetResult_Response_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_GetResult_Response_ *dst,
                const PushButton_GetResult_Response_ *src)
            {
                if (endpoint_data) {} /* To avoid warnings */
                return push_button_interface::action::dds_::PushButton_GetResult_Response_PluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            PushButton_GetResult_Response_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool 
            PushButton_GetResult_Response_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const PushButton_GetResult_Response_ *sample, 
                struct RTICdrStream *stream,    
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;
                RTIBool retval = RTI_TRUE;

                if (endpoint_data) {} /* To avoid warnings */
                if (endpoint_plugin_qos) {} /* To avoid warnings */

                if(serialize_encapsulation) {
                    if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if(serialize_sample) {

                    if (!RTICdrStream_serializeOctet(
                        stream, &sample->status_)) {
                        return RTI_FALSE;
                    }

                    if(!push_button_interface::action::dds_::PushButton_Result_Plugin_serialize(
                        endpoint_data,
                        (const push_button_interface::action::dds_::PushButton_Result_*) &sample->result_,
                        stream,
                        RTI_FALSE, encapsulation_id,
                        RTI_TRUE,
                        endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return retval;
            }

            RTIBool 
            PushButton_GetResult_Response_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_GetResult_Response_ *sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                char * position = NULL;

                RTIBool done = RTI_FALSE;

                try {

                    if (endpoint_data) {} /* To avoid warnings */
                    if (endpoint_plugin_qos) {} /* To avoid warnings */
                    if(deserialize_encapsulation) {

                        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                            return RTI_FALSE;
                        }

                        position = RTICdrStream_resetAlignment(stream);
                    }
                    if(deserialize_sample) {

                        push_button_interface::action::dds_::PushButton_GetResult_Response__initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                        if (!RTICdrStream_deserializeOctet(
                            stream, &sample->status_)) {
                            goto fin; 
                        }
                        if(!push_button_interface::action::dds_::PushButton_Result_Plugin_deserialize_sample(
                            endpoint_data,
                            &sample->result_,
                            stream,
                            RTI_FALSE, RTI_TRUE,
                            endpoint_plugin_qos)) {
                            goto fin; 
                        }
                    }

                    done = RTI_TRUE;
                  fin:
                    if (done != RTI_TRUE && 
                    RTICdrStream_getRemainder(stream) >=
                    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        return RTI_FALSE;   
                    }
                    if(deserialize_encapsulation) {
                        RTICdrStream_restoreAlignment(stream,position);
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            RTIBool
            PushButton_GetResult_Response_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PushButton_GetResult_Response_ *sample)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                PushButton_GetResult_Response_Plugin_get_serialized_sample_max_size(
                    NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

                if (buffer == NULL) {
                    *length = 
                    PushButton_GetResult_Response_Plugin_get_serialized_sample_size(
                        (PRESTypePluginEndpointData)&epd,
                        RTI_TRUE,
                        RTICdrEncapsulation_getNativeCdrEncapsulationId(),
                        0,
                        sample);

                    if (*length == 0) {
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;
                }    

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, *length);

                result = push_button_interface::action::dds_::PushButton_GetResult_Response_Plugin_serialize(
                    (PRESTypePluginEndpointData)&epd, sample, &stream, 
                    RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
                    RTI_TRUE, NULL);  

                *length = RTICdrStream_getCurrentPositionOffset(&stream);
                return result;     
            }

            RTIBool
            PushButton_GetResult_Response_Plugin_deserialize_from_cdr_buffer(
                PushButton_GetResult_Response_ *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                PushButton_GetResult_Response__finalize_optional_members(sample, RTI_TRUE);
                return PushButton_GetResult_Response_Plugin_deserialize_sample( 
                    NULL, sample,
                    &stream, RTI_TRUE, RTI_TRUE, 
                    NULL);
            }

            DDS_ReturnCode_t
            PushButton_GetResult_Response_Plugin_data_to_string(
                const PushButton_GetResult_Response_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property)
            {
                DDS_DynamicData *data = NULL;
                char *buffer = NULL;
                unsigned int length = 0;
                struct DDS_PrintFormat printFormat;
                DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

                if (sample == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (str_size == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (property == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (!PushButton_GetResult_Response_Plugin_serialize_to_cdr_buffer(
                    NULL, 
                    &length, 
                    sample)) {
                    return DDS_RETCODE_ERROR;
                }

                RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
                if (buffer == NULL) {
                    return DDS_RETCODE_ERROR;
                }

                if (!PushButton_GetResult_Response_Plugin_serialize_to_cdr_buffer(
                    buffer, 
                    &length, 
                    sample)) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                data = DDS_DynamicData_new(
                    PushButton_GetResult_Response__get_typecode(), 
                    &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
                if (data == NULL) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_PrintFormatProperty_to_print_format(
                    property, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_DynamicDataFormatter_to_string_w_format(
                    data, 
                    str,
                    str_size, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                RTIOsapiHeap_freeBuffer(buffer);
                DDS_DynamicData_delete(data);
                return DDS_RETCODE_OK;
            }

            RTIBool 
            PushButton_GetResult_Response_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_GetResult_Response_ **sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                RTIBool result;
                const char *METHOD_NAME = "PushButton_GetResult_Response_Plugin_deserialize";
                if (drop_sample) {} /* To avoid warnings */

                stream->_xTypesState.unassignable = RTI_FALSE;
                result= push_button_interface::action::dds_::PushButton_GetResult_Response_Plugin_deserialize_sample( 
                    endpoint_data, (sample != NULL)?*sample:NULL,
                    stream, deserialize_encapsulation, deserialize_sample, 
                    endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }
                if (!result && stream->_xTypesState.unassignable ) {

                    RTICdrLog_exception(
                        METHOD_NAME, 
                        &RTI_CDR_LOG_UNASSIGNABLE_SAMPLE_OF_TYPE_s, 
                        "PushButton_GetResult_Response_");

                }

                return result;

            }

            RTIBool PushButton_GetResult_Response_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream,   
                RTIBool skip_encapsulation,
                RTIBool skip_sample, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                RTIBool done = RTI_FALSE;

                if (endpoint_data) {} /* To avoid warnings */
                if (endpoint_plugin_qos) {} /* To avoid warnings */

                if(skip_encapsulation) {
                    if (!RTICdrStream_skipEncapsulation(stream)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if (skip_sample) {

                    if (!RTICdrStream_skipOctet (stream)) {
                        goto fin; 
                    }
                    if (!push_button_interface::action::dds_::PushButton_Result_Plugin_skip(
                        endpoint_data,
                        stream, 
                        RTI_FALSE, RTI_TRUE, 
                        endpoint_plugin_qos)) {
                        goto fin; 
                    }
                }

                done = RTI_TRUE;
              fin:
                if (done != RTI_TRUE && 
                RTICdrStream_getRemainder(stream) >=
                RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                    return RTI_FALSE;   
                }
                if(skip_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            unsigned int 
            PushButton_GetResult_Response_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
                    current_alignment);

                current_alignment +=push_button_interface::action::dds_::PushButton_Result_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return  current_alignment - initial_alignment;
            }

            unsigned int 
            PushButton_GetResult_Response_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PushButton_GetResult_Response_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            unsigned int 
            PushButton_GetResult_Response_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */ 

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
                    current_alignment);
                current_alignment +=push_button_interface::action::dds_::PushButton_Result_Plugin_get_serialized_sample_min_size(
                    endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return  current_alignment - initial_alignment;
            }

            /* Returns the size of the sample in its serialized form (in bytes).
            * It can also be an estimation in excess of the real buffer needed 
            * during a call to the serialize() function.
            * The value reported does not have to include the space for the
            * encapsulation flags.
            */
            unsigned int
            PushButton_GetResult_Response_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const PushButton_GetResult_Response_ * sample) 
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;
                struct PRESTypePluginDefaultEndpointData epd;   

                if (sample==NULL) {
                    return 0;
                }
                if (endpoint_data == NULL) {
                    endpoint_data = (PRESTypePluginEndpointData) &epd;
                    PRESTypePluginDefaultEndpointData_setBaseAlignment(
                        endpoint_data,
                        current_alignment);        
                }

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                    PRESTypePluginDefaultEndpointData_setBaseAlignment(
                        endpoint_data,
                        current_alignment);
                }

                current_alignment += RTICdrType_getOctetMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += push_button_interface::action::dds_::PushButton_Result_Plugin_get_serialized_sample_size(
                    endpoint_data,RTI_FALSE, encapsulation_id,
                    current_alignment, (const push_button_interface::action::dds_::PushButton_Result_*) &sample->result_);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            PRESTypePluginKeyKind 
            PushButton_GetResult_Response_Plugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_NO_KEY;
            }

            RTIBool 
            PushButton_GetResult_Response_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const PushButton_GetResult_Response_ *sample, 
                struct RTICdrStream *stream,    
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                if(serialize_encapsulation) {
                    if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if(serialize_key) {

                    if (!push_button_interface::action::dds_::PushButton_GetResult_Response_Plugin_serialize(
                        endpoint_data,
                        sample,
                        stream,
                        RTI_FALSE, encapsulation_id,
                        RTI_TRUE,
                        endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            RTIBool PushButton_GetResult_Response_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_GetResult_Response_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                try {

                    char * position = NULL;

                    if (endpoint_data) {} /* To avoid warnings */
                    if (endpoint_plugin_qos) {} /* To avoid warnings */

                    if(deserialize_encapsulation) {

                        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                            return RTI_FALSE;
                        }

                        position = RTICdrStream_resetAlignment(stream);
                    }
                    if (deserialize_key) {

                        if (!push_button_interface::action::dds_::PushButton_GetResult_Response_Plugin_deserialize_sample(
                            endpoint_data, sample, stream, 
                            RTI_FALSE, RTI_TRUE, 
                            endpoint_plugin_qos)) {
                            return RTI_FALSE;
                        }
                    }

                    if(deserialize_encapsulation) {
                        RTICdrStream_restoreAlignment(stream,position);
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            RTIBool PushButton_GetResult_Response_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_GetResult_Response_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                RTIBool result;
                if (drop_sample) {} /* To avoid warnings */
                stream->_xTypesState.unassignable = RTI_FALSE;
                result= push_button_interface::action::dds_::PushButton_GetResult_Response_Plugin_deserialize_key_sample(
                    endpoint_data, (sample != NULL)?*sample:NULL, stream,
                    deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }

                return result;    

            }

            unsigned int
            PushButton_GetResult_Response_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */
                if (overflow) {} /* To avoid warnings */

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment += push_button_interface::action::dds_::PushButton_GetResult_Response_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            unsigned int
            PushButton_GetResult_Response_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PushButton_GetResult_Response_Plugin_get_serialized_key_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            RTIBool 
            PushButton_GetResult_Response_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_GetResult_Response_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                RTIBool done = RTI_FALSE;
                RTIBool error = RTI_FALSE;

                if (stream == NULL) {
                    error = RTI_TRUE;
                    goto fin;
                }
                if(deserialize_encapsulation) {
                    if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                        return RTI_FALSE;
                    }
                    position = RTICdrStream_resetAlignment(stream);
                }

                if (deserialize_key) {

                    if (!push_button_interface::action::dds_::PushButton_GetResult_Response_Plugin_deserialize_sample(
                        endpoint_data, sample, stream, RTI_FALSE, 
                        RTI_TRUE, endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                done = RTI_TRUE;
              fin:
                if(!error) {
                    if (done != RTI_TRUE && 
                    RTICdrStream_getRemainder(stream) >=
                    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        return RTI_FALSE;   
                    }
                } else {
                    return RTI_FALSE;
                }       

                if(deserialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            /* ------------------------------------------------------------------------
            * Plug-in Installation Methods
            * ------------------------------------------------------------------------ */
            struct PRESTypePlugin *PushButton_GetResult_Response_Plugin_new(void) 
            { 
                struct PRESTypePlugin *plugin = NULL;
                const struct PRESTypePluginVersion PLUGIN_VERSION = 
                PRES_TYPE_PLUGIN_VERSION_2_0;

                RTIOsapiHeap_allocateStructure(
                    &plugin, struct PRESTypePlugin);

                if (plugin == NULL) {
                    return NULL;
                }

                plugin->version = PLUGIN_VERSION;

                /* set up parent's function pointers */
                plugin->onParticipantAttached =
                (PRESTypePluginOnParticipantAttachedCallback)
                push_button_interface::action::dds_::PushButton_GetResult_Response_Plugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                push_button_interface::action::dds_::PushButton_GetResult_Response_Plugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                push_button_interface::action::dds_::PushButton_GetResult_Response_Plugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                push_button_interface::action::dds_::PushButton_GetResult_Response_Plugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                push_button_interface::action::dds_::PushButton_GetResult_Response_Plugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                PushButton_GetResult_Response_Plugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                PushButton_GetResult_Response_Plugin_destroy_sample;
                plugin->finalizeOptionalMembersFnc =
                (PRESTypePluginFinalizeOptionalMembersFunction)
                PushButton_GetResult_Response__finalize_optional_members;

                plugin->serializeFnc =
                (PRESTypePluginSerializeFunction)
                push_button_interface::action::dds_::PushButton_GetResult_Response_Plugin_serialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction)
                push_button_interface::action::dds_::PushButton_GetResult_Response_Plugin_deserialize;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                push_button_interface::action::dds_::PushButton_GetResult_Response_Plugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                push_button_interface::action::dds_::PushButton_GetResult_Response_Plugin_get_serialized_sample_min_size;

                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                PushButton_GetResult_Response_Plugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                PushButton_GetResult_Response_Plugin_return_sample;

                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                push_button_interface::action::dds_::PushButton_GetResult_Response_Plugin_get_key_kind;

                /* These functions are only used for keyed types. As this is not a keyed
                type they are all set to NULL
                */
                plugin->serializeKeyFnc = NULL ;    
                plugin->deserializeKeyFnc = NULL;  
                plugin->getKeyFnc = NULL;
                plugin->returnKeyFnc = NULL;
                plugin->instanceToKeyFnc = NULL;
                plugin->keyToInstanceFnc = NULL;
                plugin->getSerializedKeyMaxSizeFnc = NULL;
                plugin->instanceToKeyHashFnc = NULL;
                plugin->serializedSampleToKeyHashFnc = NULL;
                plugin->serializedKeyToKeyHashFnc = NULL;    
                plugin->typeCode =  (struct RTICdrTypeCode *)push_button_interface::action::dds_::PushButton_GetResult_Response__get_typecode();

                plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                PushButton_GetResult_Response_Plugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                PushButton_GetResult_Response_Plugin_return_buffer;
                plugin->getSerializedSampleSizeFnc =
                (PRESTypePluginGetSerializedSampleSizeFunction)
                push_button_interface::action::dds_::PushButton_GetResult_Response_Plugin_get_serialized_sample_size;

                plugin->endpointTypeName = PushButton_GetResult_Response_TYPENAME;

                return plugin;
            }

            void
            PushButton_GetResult_Response_Plugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace push_button_interface  */
namespace push_button_interface {
    namespace action {
        namespace dds_ {

            /* ----------------------------------------------------------------------------
            *  Type PushButton_Feedback_
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            PushButton_Feedback_*
            PushButton_Feedback_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params) 
            {
                PushButton_Feedback_ *sample = NULL;

                sample = new (std::nothrow) PushButton_Feedback_ ;
                if (sample == NULL) {
                    return NULL;
                }

                if (!push_button_interface::action::dds_::PushButton_Feedback__initialize_w_params(sample,alloc_params)) {
                    delete  sample;
                    sample=NULL;
                }
                return sample; 
            } 

            PushButton_Feedback_ *
            PushButton_Feedback_PluginSupport_create_data_ex(RTIBool allocate_pointers) 
            {
                PushButton_Feedback_ *sample = NULL;

                sample = new (std::nothrow) PushButton_Feedback_ ;

                if(sample == NULL) {
                    return NULL;
                }

                if (!push_button_interface::action::dds_::PushButton_Feedback__initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    delete  sample;
                    sample=NULL;
                }

                return sample; 
            }

            PushButton_Feedback_ *
            PushButton_Feedback_PluginSupport_create_data(void)
            {
                return push_button_interface::action::dds_::PushButton_Feedback_PluginSupport_create_data_ex(RTI_TRUE);
            }

            void 
            PushButton_Feedback_PluginSupport_destroy_data_w_params(
                PushButton_Feedback_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params) {

                push_button_interface::action::dds_::PushButton_Feedback__finalize_w_params(sample,dealloc_params);

                delete  sample;
                sample=NULL;
            }

            void 
            PushButton_Feedback_PluginSupport_destroy_data_ex(
                PushButton_Feedback_ *sample,RTIBool deallocate_pointers) {

                push_button_interface::action::dds_::PushButton_Feedback__finalize_ex(sample,deallocate_pointers);

                delete  sample;
                sample=NULL;
            }

            void 
            PushButton_Feedback_PluginSupport_destroy_data(
                PushButton_Feedback_ *sample) {

                push_button_interface::action::dds_::PushButton_Feedback_PluginSupport_destroy_data_ex(sample,RTI_TRUE);

            }

            RTIBool 
            PushButton_Feedback_PluginSupport_copy_data(
                PushButton_Feedback_ *dst,
                const PushButton_Feedback_ *src)
            {
                return push_button_interface::action::dds_::PushButton_Feedback__copy(dst,(const PushButton_Feedback_*) src);
            }

            void 
            PushButton_Feedback_PluginSupport_print_data(
                const PushButton_Feedback_ *sample,
                const char *desc,
                unsigned int indent_level)
            {

                RTICdrType_printIndent(indent_level);

                if (desc != NULL) {
                    RTILog_debug("%s:\n", desc);
                } else {
                    RTILog_debug("\n");
                }

                if (sample == NULL) {
                    RTILog_debug("NULL\n");
                    return;
                }

                RTICdrType_printBoolean(
                    &sample->feedback_, "feedback_", indent_level + 1);    

            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            PushButton_Feedback_Plugin_on_participant_attached(
                void *registration_data,
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration,
                void *container_plugin_context,
                RTICdrTypeCode *type_code)
            {
                if (registration_data) {} /* To avoid warnings */
                if (participant_info) {} /* To avoid warnings */
                if (top_level_registration) {} /* To avoid warnings */
                if (container_plugin_context) {} /* To avoid warnings */
                if (type_code) {} /* To avoid warnings */

                return PRESTypePluginDefaultParticipantData_new(participant_info);

            }

            void 
            PushButton_Feedback_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data)
            {

                PRESTypePluginDefaultParticipantData_delete(participant_data);
            }

            PRESTypePluginEndpointData
            PushButton_Feedback_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *containerPluginContext)
            {
                PRESTypePluginEndpointData epd = NULL;

                unsigned int serializedSampleMaxSize;

                if (top_level_registration) {} /* To avoid warnings */
                if (containerPluginContext) {} /* To avoid warnings */

                epd = PRESTypePluginDefaultEndpointData_new(
                    participant_data,
                    endpoint_info,
                    (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                    push_button_interface::action::dds_::PushButton_Feedback_PluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    push_button_interface::action::dds_::PushButton_Feedback_PluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = push_button_interface::action::dds_::PushButton_Feedback_Plugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        push_button_interface::action::dds_::PushButton_Feedback_Plugin_get_serialized_sample_max_size, epd,
                        (PRESTypePluginGetSerializedSampleSizeFunction)
                        push_button_interface::action::dds_::PushButton_Feedback_Plugin_get_serialized_sample_size,
                        epd) == RTI_FALSE) {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }
                }

                return epd;    
            }

            void 
            PushButton_Feedback_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  

                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            PushButton_Feedback_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_Feedback_ *sample,
                void *handle)
            {

                PushButton_Feedback__finalize_optional_members(sample, RTI_TRUE);

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            PushButton_Feedback_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_Feedback_ *dst,
                const PushButton_Feedback_ *src)
            {
                if (endpoint_data) {} /* To avoid warnings */
                return push_button_interface::action::dds_::PushButton_Feedback_PluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            PushButton_Feedback_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool 
            PushButton_Feedback_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const PushButton_Feedback_ *sample, 
                struct RTICdrStream *stream,    
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;
                RTIBool retval = RTI_TRUE;

                if (endpoint_data) {} /* To avoid warnings */
                if (endpoint_plugin_qos) {} /* To avoid warnings */

                if(serialize_encapsulation) {
                    if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if(serialize_sample) {

                    if (!RTICdrStream_serializeBoolean(
                        stream, &sample->feedback_)) {
                        return RTI_FALSE;
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return retval;
            }

            RTIBool 
            PushButton_Feedback_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_Feedback_ *sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                char * position = NULL;

                RTIBool done = RTI_FALSE;

                try {

                    if (endpoint_data) {} /* To avoid warnings */
                    if (endpoint_plugin_qos) {} /* To avoid warnings */
                    if(deserialize_encapsulation) {

                        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                            return RTI_FALSE;
                        }

                        position = RTICdrStream_resetAlignment(stream);
                    }
                    if(deserialize_sample) {

                        push_button_interface::action::dds_::PushButton_Feedback__initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                        if (!RTICdrStream_deserializeBoolean(
                            stream, &sample->feedback_)) {
                            goto fin; 
                        }
                    }

                    done = RTI_TRUE;
                  fin:
                    if (done != RTI_TRUE && 
                    RTICdrStream_getRemainder(stream) >=
                    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        return RTI_FALSE;   
                    }
                    if(deserialize_encapsulation) {
                        RTICdrStream_restoreAlignment(stream,position);
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            RTIBool
            PushButton_Feedback_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PushButton_Feedback_ *sample)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                PushButton_Feedback_Plugin_get_serialized_sample_max_size(
                    NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

                if (buffer == NULL) {
                    *length = 
                    PushButton_Feedback_Plugin_get_serialized_sample_size(
                        (PRESTypePluginEndpointData)&epd,
                        RTI_TRUE,
                        RTICdrEncapsulation_getNativeCdrEncapsulationId(),
                        0,
                        sample);

                    if (*length == 0) {
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;
                }    

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, *length);

                result = push_button_interface::action::dds_::PushButton_Feedback_Plugin_serialize(
                    (PRESTypePluginEndpointData)&epd, sample, &stream, 
                    RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
                    RTI_TRUE, NULL);  

                *length = RTICdrStream_getCurrentPositionOffset(&stream);
                return result;     
            }

            RTIBool
            PushButton_Feedback_Plugin_deserialize_from_cdr_buffer(
                PushButton_Feedback_ *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                PushButton_Feedback__finalize_optional_members(sample, RTI_TRUE);
                return PushButton_Feedback_Plugin_deserialize_sample( 
                    NULL, sample,
                    &stream, RTI_TRUE, RTI_TRUE, 
                    NULL);
            }

            DDS_ReturnCode_t
            PushButton_Feedback_Plugin_data_to_string(
                const PushButton_Feedback_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property)
            {
                DDS_DynamicData *data = NULL;
                char *buffer = NULL;
                unsigned int length = 0;
                struct DDS_PrintFormat printFormat;
                DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

                if (sample == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (str_size == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (property == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (!PushButton_Feedback_Plugin_serialize_to_cdr_buffer(
                    NULL, 
                    &length, 
                    sample)) {
                    return DDS_RETCODE_ERROR;
                }

                RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
                if (buffer == NULL) {
                    return DDS_RETCODE_ERROR;
                }

                if (!PushButton_Feedback_Plugin_serialize_to_cdr_buffer(
                    buffer, 
                    &length, 
                    sample)) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                data = DDS_DynamicData_new(
                    PushButton_Feedback__get_typecode(), 
                    &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
                if (data == NULL) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_PrintFormatProperty_to_print_format(
                    property, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_DynamicDataFormatter_to_string_w_format(
                    data, 
                    str,
                    str_size, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                RTIOsapiHeap_freeBuffer(buffer);
                DDS_DynamicData_delete(data);
                return DDS_RETCODE_OK;
            }

            RTIBool 
            PushButton_Feedback_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_Feedback_ **sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                RTIBool result;
                const char *METHOD_NAME = "PushButton_Feedback_Plugin_deserialize";
                if (drop_sample) {} /* To avoid warnings */

                stream->_xTypesState.unassignable = RTI_FALSE;
                result= push_button_interface::action::dds_::PushButton_Feedback_Plugin_deserialize_sample( 
                    endpoint_data, (sample != NULL)?*sample:NULL,
                    stream, deserialize_encapsulation, deserialize_sample, 
                    endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }
                if (!result && stream->_xTypesState.unassignable ) {

                    RTICdrLog_exception(
                        METHOD_NAME, 
                        &RTI_CDR_LOG_UNASSIGNABLE_SAMPLE_OF_TYPE_s, 
                        "PushButton_Feedback_");

                }

                return result;

            }

            RTIBool PushButton_Feedback_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream,   
                RTIBool skip_encapsulation,
                RTIBool skip_sample, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                RTIBool done = RTI_FALSE;

                if (endpoint_data) {} /* To avoid warnings */
                if (endpoint_plugin_qos) {} /* To avoid warnings */

                if(skip_encapsulation) {
                    if (!RTICdrStream_skipEncapsulation(stream)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if (skip_sample) {

                    if (!RTICdrStream_skipBoolean (stream)) {
                        goto fin; 
                    }
                }

                done = RTI_TRUE;
              fin:
                if (done != RTI_TRUE && 
                RTICdrStream_getRemainder(stream) >=
                RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                    return RTI_FALSE;   
                }
                if(skip_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            unsigned int 
            PushButton_Feedback_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */ 
                if (overflow) {} /* To avoid warnings */

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment +=RTICdrType_getBooleanMaxSizeSerialized(
                    current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return  current_alignment - initial_alignment;
            }

            unsigned int 
            PushButton_Feedback_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PushButton_Feedback_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            unsigned int 
            PushButton_Feedback_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */ 

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment +=RTICdrType_getBooleanMaxSizeSerialized(
                    current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return  current_alignment - initial_alignment;
            }

            /* Returns the size of the sample in its serialized form (in bytes).
            * It can also be an estimation in excess of the real buffer needed 
            * during a call to the serialize() function.
            * The value reported does not have to include the space for the
            * encapsulation flags.
            */
            unsigned int
            PushButton_Feedback_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const PushButton_Feedback_ * sample) 
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;
                struct PRESTypePluginDefaultEndpointData epd;   

                if (sample==NULL) {
                    return 0;
                }
                if (endpoint_data == NULL) {
                    endpoint_data = (PRESTypePluginEndpointData) &epd;
                    PRESTypePluginDefaultEndpointData_setBaseAlignment(
                        endpoint_data,
                        current_alignment);        
                }

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                    PRESTypePluginDefaultEndpointData_setBaseAlignment(
                        endpoint_data,
                        current_alignment);
                }

                current_alignment += RTICdrType_getBooleanMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            PRESTypePluginKeyKind 
            PushButton_Feedback_Plugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_NO_KEY;
            }

            RTIBool 
            PushButton_Feedback_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const PushButton_Feedback_ *sample, 
                struct RTICdrStream *stream,    
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                if(serialize_encapsulation) {
                    if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if(serialize_key) {

                    if (!push_button_interface::action::dds_::PushButton_Feedback_Plugin_serialize(
                        endpoint_data,
                        sample,
                        stream,
                        RTI_FALSE, encapsulation_id,
                        RTI_TRUE,
                        endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            RTIBool PushButton_Feedback_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_Feedback_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                try {

                    char * position = NULL;

                    if (endpoint_data) {} /* To avoid warnings */
                    if (endpoint_plugin_qos) {} /* To avoid warnings */

                    if(deserialize_encapsulation) {

                        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                            return RTI_FALSE;
                        }

                        position = RTICdrStream_resetAlignment(stream);
                    }
                    if (deserialize_key) {

                        if (!push_button_interface::action::dds_::PushButton_Feedback_Plugin_deserialize_sample(
                            endpoint_data, sample, stream, 
                            RTI_FALSE, RTI_TRUE, 
                            endpoint_plugin_qos)) {
                            return RTI_FALSE;
                        }
                    }

                    if(deserialize_encapsulation) {
                        RTICdrStream_restoreAlignment(stream,position);
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            RTIBool PushButton_Feedback_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_Feedback_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                RTIBool result;
                if (drop_sample) {} /* To avoid warnings */
                stream->_xTypesState.unassignable = RTI_FALSE;
                result= push_button_interface::action::dds_::PushButton_Feedback_Plugin_deserialize_key_sample(
                    endpoint_data, (sample != NULL)?*sample:NULL, stream,
                    deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }

                return result;    

            }

            unsigned int
            PushButton_Feedback_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */
                if (overflow) {} /* To avoid warnings */

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment += push_button_interface::action::dds_::PushButton_Feedback_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            unsigned int
            PushButton_Feedback_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PushButton_Feedback_Plugin_get_serialized_key_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            RTIBool 
            PushButton_Feedback_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_Feedback_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                RTIBool done = RTI_FALSE;
                RTIBool error = RTI_FALSE;

                if (stream == NULL) {
                    error = RTI_TRUE;
                    goto fin;
                }
                if(deserialize_encapsulation) {
                    if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                        return RTI_FALSE;
                    }
                    position = RTICdrStream_resetAlignment(stream);
                }

                if (deserialize_key) {

                    if (!push_button_interface::action::dds_::PushButton_Feedback_Plugin_deserialize_sample(
                        endpoint_data, sample, stream, RTI_FALSE, 
                        RTI_TRUE, endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                done = RTI_TRUE;
              fin:
                if(!error) {
                    if (done != RTI_TRUE && 
                    RTICdrStream_getRemainder(stream) >=
                    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        return RTI_FALSE;   
                    }
                } else {
                    return RTI_FALSE;
                }       

                if(deserialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            /* ------------------------------------------------------------------------
            * Plug-in Installation Methods
            * ------------------------------------------------------------------------ */
            struct PRESTypePlugin *PushButton_Feedback_Plugin_new(void) 
            { 
                struct PRESTypePlugin *plugin = NULL;
                const struct PRESTypePluginVersion PLUGIN_VERSION = 
                PRES_TYPE_PLUGIN_VERSION_2_0;

                RTIOsapiHeap_allocateStructure(
                    &plugin, struct PRESTypePlugin);

                if (plugin == NULL) {
                    return NULL;
                }

                plugin->version = PLUGIN_VERSION;

                /* set up parent's function pointers */
                plugin->onParticipantAttached =
                (PRESTypePluginOnParticipantAttachedCallback)
                push_button_interface::action::dds_::PushButton_Feedback_Plugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                push_button_interface::action::dds_::PushButton_Feedback_Plugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                push_button_interface::action::dds_::PushButton_Feedback_Plugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                push_button_interface::action::dds_::PushButton_Feedback_Plugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                push_button_interface::action::dds_::PushButton_Feedback_Plugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                PushButton_Feedback_Plugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                PushButton_Feedback_Plugin_destroy_sample;
                plugin->finalizeOptionalMembersFnc =
                (PRESTypePluginFinalizeOptionalMembersFunction)
                PushButton_Feedback__finalize_optional_members;

                plugin->serializeFnc =
                (PRESTypePluginSerializeFunction)
                push_button_interface::action::dds_::PushButton_Feedback_Plugin_serialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction)
                push_button_interface::action::dds_::PushButton_Feedback_Plugin_deserialize;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                push_button_interface::action::dds_::PushButton_Feedback_Plugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                push_button_interface::action::dds_::PushButton_Feedback_Plugin_get_serialized_sample_min_size;

                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                PushButton_Feedback_Plugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                PushButton_Feedback_Plugin_return_sample;

                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                push_button_interface::action::dds_::PushButton_Feedback_Plugin_get_key_kind;

                /* These functions are only used for keyed types. As this is not a keyed
                type they are all set to NULL
                */
                plugin->serializeKeyFnc = NULL ;    
                plugin->deserializeKeyFnc = NULL;  
                plugin->getKeyFnc = NULL;
                plugin->returnKeyFnc = NULL;
                plugin->instanceToKeyFnc = NULL;
                plugin->keyToInstanceFnc = NULL;
                plugin->getSerializedKeyMaxSizeFnc = NULL;
                plugin->instanceToKeyHashFnc = NULL;
                plugin->serializedSampleToKeyHashFnc = NULL;
                plugin->serializedKeyToKeyHashFnc = NULL;    
                plugin->typeCode =  (struct RTICdrTypeCode *)push_button_interface::action::dds_::PushButton_Feedback__get_typecode();

                plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                PushButton_Feedback_Plugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                PushButton_Feedback_Plugin_return_buffer;
                plugin->getSerializedSampleSizeFnc =
                (PRESTypePluginGetSerializedSampleSizeFunction)
                push_button_interface::action::dds_::PushButton_Feedback_Plugin_get_serialized_sample_size;

                plugin->endpointTypeName = PushButton_Feedback_TYPENAME;

                return plugin;
            }

            void
            PushButton_Feedback_Plugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace push_button_interface  */
namespace push_button_interface {
    namespace action {
        namespace dds_ {

            /* ----------------------------------------------------------------------------
            *  Type PushButton_FeedbackMessage_
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            PushButton_FeedbackMessage_*
            PushButton_FeedbackMessage_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params) 
            {
                PushButton_FeedbackMessage_ *sample = NULL;

                sample = new (std::nothrow) PushButton_FeedbackMessage_ ;
                if (sample == NULL) {
                    return NULL;
                }

                if (!push_button_interface::action::dds_::PushButton_FeedbackMessage__initialize_w_params(sample,alloc_params)) {
                    delete  sample;
                    sample=NULL;
                }
                return sample; 
            } 

            PushButton_FeedbackMessage_ *
            PushButton_FeedbackMessage_PluginSupport_create_data_ex(RTIBool allocate_pointers) 
            {
                PushButton_FeedbackMessage_ *sample = NULL;

                sample = new (std::nothrow) PushButton_FeedbackMessage_ ;

                if(sample == NULL) {
                    return NULL;
                }

                if (!push_button_interface::action::dds_::PushButton_FeedbackMessage__initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    delete  sample;
                    sample=NULL;
                }

                return sample; 
            }

            PushButton_FeedbackMessage_ *
            PushButton_FeedbackMessage_PluginSupport_create_data(void)
            {
                return push_button_interface::action::dds_::PushButton_FeedbackMessage_PluginSupport_create_data_ex(RTI_TRUE);
            }

            void 
            PushButton_FeedbackMessage_PluginSupport_destroy_data_w_params(
                PushButton_FeedbackMessage_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params) {

                push_button_interface::action::dds_::PushButton_FeedbackMessage__finalize_w_params(sample,dealloc_params);

                delete  sample;
                sample=NULL;
            }

            void 
            PushButton_FeedbackMessage_PluginSupport_destroy_data_ex(
                PushButton_FeedbackMessage_ *sample,RTIBool deallocate_pointers) {

                push_button_interface::action::dds_::PushButton_FeedbackMessage__finalize_ex(sample,deallocate_pointers);

                delete  sample;
                sample=NULL;
            }

            void 
            PushButton_FeedbackMessage_PluginSupport_destroy_data(
                PushButton_FeedbackMessage_ *sample) {

                push_button_interface::action::dds_::PushButton_FeedbackMessage_PluginSupport_destroy_data_ex(sample,RTI_TRUE);

            }

            RTIBool 
            PushButton_FeedbackMessage_PluginSupport_copy_data(
                PushButton_FeedbackMessage_ *dst,
                const PushButton_FeedbackMessage_ *src)
            {
                return push_button_interface::action::dds_::PushButton_FeedbackMessage__copy(dst,(const PushButton_FeedbackMessage_*) src);
            }

            void 
            PushButton_FeedbackMessage_PluginSupport_print_data(
                const PushButton_FeedbackMessage_ *sample,
                const char *desc,
                unsigned int indent_level)
            {

                RTICdrType_printIndent(indent_level);

                if (desc != NULL) {
                    RTILog_debug("%s:\n", desc);
                } else {
                    RTILog_debug("\n");
                }

                if (sample == NULL) {
                    RTILog_debug("NULL\n");
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID_PluginSupport_print_data(
                    (const unique_identifier_msgs::msg::dds_::UUID_*) &sample->goal_id_, "goal_id_", indent_level + 1);

                push_button_interface::action::dds_::PushButton_Feedback_PluginSupport_print_data(
                    (const push_button_interface::action::dds_::PushButton_Feedback_*) &sample->feedback_, "feedback_", indent_level + 1);

            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            PushButton_FeedbackMessage_Plugin_on_participant_attached(
                void *registration_data,
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration,
                void *container_plugin_context,
                RTICdrTypeCode *type_code)
            {
                if (registration_data) {} /* To avoid warnings */
                if (participant_info) {} /* To avoid warnings */
                if (top_level_registration) {} /* To avoid warnings */
                if (container_plugin_context) {} /* To avoid warnings */
                if (type_code) {} /* To avoid warnings */

                return PRESTypePluginDefaultParticipantData_new(participant_info);

            }

            void 
            PushButton_FeedbackMessage_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data)
            {

                PRESTypePluginDefaultParticipantData_delete(participant_data);
            }

            PRESTypePluginEndpointData
            PushButton_FeedbackMessage_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *containerPluginContext)
            {
                PRESTypePluginEndpointData epd = NULL;

                unsigned int serializedSampleMaxSize;

                if (top_level_registration) {} /* To avoid warnings */
                if (containerPluginContext) {} /* To avoid warnings */

                epd = PRESTypePluginDefaultEndpointData_new(
                    participant_data,
                    endpoint_info,
                    (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                    push_button_interface::action::dds_::PushButton_FeedbackMessage_PluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    push_button_interface::action::dds_::PushButton_FeedbackMessage_PluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = push_button_interface::action::dds_::PushButton_FeedbackMessage_Plugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        push_button_interface::action::dds_::PushButton_FeedbackMessage_Plugin_get_serialized_sample_max_size, epd,
                        (PRESTypePluginGetSerializedSampleSizeFunction)
                        push_button_interface::action::dds_::PushButton_FeedbackMessage_Plugin_get_serialized_sample_size,
                        epd) == RTI_FALSE) {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }
                }

                return epd;    
            }

            void 
            PushButton_FeedbackMessage_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  

                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            PushButton_FeedbackMessage_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_FeedbackMessage_ *sample,
                void *handle)
            {

                PushButton_FeedbackMessage__finalize_optional_members(sample, RTI_TRUE);

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            PushButton_FeedbackMessage_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_FeedbackMessage_ *dst,
                const PushButton_FeedbackMessage_ *src)
            {
                if (endpoint_data) {} /* To avoid warnings */
                return push_button_interface::action::dds_::PushButton_FeedbackMessage_PluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            PushButton_FeedbackMessage_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool 
            PushButton_FeedbackMessage_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const PushButton_FeedbackMessage_ *sample, 
                struct RTICdrStream *stream,    
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;
                RTIBool retval = RTI_TRUE;

                if (endpoint_data) {} /* To avoid warnings */
                if (endpoint_plugin_qos) {} /* To avoid warnings */

                if(serialize_encapsulation) {
                    if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if(serialize_sample) {

                    if(!unique_identifier_msgs::msg::dds_::UUID_Plugin_serialize(
                        endpoint_data,
                        (const unique_identifier_msgs::msg::dds_::UUID_*) &sample->goal_id_,
                        stream,
                        RTI_FALSE, encapsulation_id,
                        RTI_TRUE,
                        endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                    if(!push_button_interface::action::dds_::PushButton_Feedback_Plugin_serialize(
                        endpoint_data,
                        (const push_button_interface::action::dds_::PushButton_Feedback_*) &sample->feedback_,
                        stream,
                        RTI_FALSE, encapsulation_id,
                        RTI_TRUE,
                        endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return retval;
            }

            RTIBool 
            PushButton_FeedbackMessage_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_FeedbackMessage_ *sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                char * position = NULL;

                RTIBool done = RTI_FALSE;

                try {

                    if (endpoint_data) {} /* To avoid warnings */
                    if (endpoint_plugin_qos) {} /* To avoid warnings */
                    if(deserialize_encapsulation) {

                        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                            return RTI_FALSE;
                        }

                        position = RTICdrStream_resetAlignment(stream);
                    }
                    if(deserialize_sample) {

                        push_button_interface::action::dds_::PushButton_FeedbackMessage__initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                        if(!unique_identifier_msgs::msg::dds_::UUID_Plugin_deserialize_sample(
                            endpoint_data,
                            &sample->goal_id_,
                            stream,
                            RTI_FALSE, RTI_TRUE,
                            endpoint_plugin_qos)) {
                            goto fin; 
                        }
                        if(!push_button_interface::action::dds_::PushButton_Feedback_Plugin_deserialize_sample(
                            endpoint_data,
                            &sample->feedback_,
                            stream,
                            RTI_FALSE, RTI_TRUE,
                            endpoint_plugin_qos)) {
                            goto fin; 
                        }
                    }

                    done = RTI_TRUE;
                  fin:
                    if (done != RTI_TRUE && 
                    RTICdrStream_getRemainder(stream) >=
                    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        return RTI_FALSE;   
                    }
                    if(deserialize_encapsulation) {
                        RTICdrStream_restoreAlignment(stream,position);
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            RTIBool
            PushButton_FeedbackMessage_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const PushButton_FeedbackMessage_ *sample)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                PushButton_FeedbackMessage_Plugin_get_serialized_sample_max_size(
                    NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

                if (buffer == NULL) {
                    *length = 
                    PushButton_FeedbackMessage_Plugin_get_serialized_sample_size(
                        (PRESTypePluginEndpointData)&epd,
                        RTI_TRUE,
                        RTICdrEncapsulation_getNativeCdrEncapsulationId(),
                        0,
                        sample);

                    if (*length == 0) {
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;
                }    

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, *length);

                result = push_button_interface::action::dds_::PushButton_FeedbackMessage_Plugin_serialize(
                    (PRESTypePluginEndpointData)&epd, sample, &stream, 
                    RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
                    RTI_TRUE, NULL);  

                *length = RTICdrStream_getCurrentPositionOffset(&stream);
                return result;     
            }

            RTIBool
            PushButton_FeedbackMessage_Plugin_deserialize_from_cdr_buffer(
                PushButton_FeedbackMessage_ *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                PushButton_FeedbackMessage__finalize_optional_members(sample, RTI_TRUE);
                return PushButton_FeedbackMessage_Plugin_deserialize_sample( 
                    NULL, sample,
                    &stream, RTI_TRUE, RTI_TRUE, 
                    NULL);
            }

            DDS_ReturnCode_t
            PushButton_FeedbackMessage_Plugin_data_to_string(
                const PushButton_FeedbackMessage_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property)
            {
                DDS_DynamicData *data = NULL;
                char *buffer = NULL;
                unsigned int length = 0;
                struct DDS_PrintFormat printFormat;
                DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

                if (sample == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (str_size == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (property == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (!PushButton_FeedbackMessage_Plugin_serialize_to_cdr_buffer(
                    NULL, 
                    &length, 
                    sample)) {
                    return DDS_RETCODE_ERROR;
                }

                RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
                if (buffer == NULL) {
                    return DDS_RETCODE_ERROR;
                }

                if (!PushButton_FeedbackMessage_Plugin_serialize_to_cdr_buffer(
                    buffer, 
                    &length, 
                    sample)) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                data = DDS_DynamicData_new(
                    PushButton_FeedbackMessage__get_typecode(), 
                    &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
                if (data == NULL) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_PrintFormatProperty_to_print_format(
                    property, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_DynamicDataFormatter_to_string_w_format(
                    data, 
                    str,
                    str_size, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                RTIOsapiHeap_freeBuffer(buffer);
                DDS_DynamicData_delete(data);
                return DDS_RETCODE_OK;
            }

            RTIBool 
            PushButton_FeedbackMessage_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_FeedbackMessage_ **sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                RTIBool result;
                const char *METHOD_NAME = "PushButton_FeedbackMessage_Plugin_deserialize";
                if (drop_sample) {} /* To avoid warnings */

                stream->_xTypesState.unassignable = RTI_FALSE;
                result= push_button_interface::action::dds_::PushButton_FeedbackMessage_Plugin_deserialize_sample( 
                    endpoint_data, (sample != NULL)?*sample:NULL,
                    stream, deserialize_encapsulation, deserialize_sample, 
                    endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }
                if (!result && stream->_xTypesState.unassignable ) {

                    RTICdrLog_exception(
                        METHOD_NAME, 
                        &RTI_CDR_LOG_UNASSIGNABLE_SAMPLE_OF_TYPE_s, 
                        "PushButton_FeedbackMessage_");

                }

                return result;

            }

            RTIBool PushButton_FeedbackMessage_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream,   
                RTIBool skip_encapsulation,
                RTIBool skip_sample, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                RTIBool done = RTI_FALSE;

                if (endpoint_data) {} /* To avoid warnings */
                if (endpoint_plugin_qos) {} /* To avoid warnings */

                if(skip_encapsulation) {
                    if (!RTICdrStream_skipEncapsulation(stream)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if (skip_sample) {

                    if (!unique_identifier_msgs::msg::dds_::UUID_Plugin_skip(
                        endpoint_data,
                        stream, 
                        RTI_FALSE, RTI_TRUE, 
                        endpoint_plugin_qos)) {
                        goto fin; 
                    }
                    if (!push_button_interface::action::dds_::PushButton_Feedback_Plugin_skip(
                        endpoint_data,
                        stream, 
                        RTI_FALSE, RTI_TRUE, 
                        endpoint_plugin_qos)) {
                        goto fin; 
                    }
                }

                done = RTI_TRUE;
              fin:
                if (done != RTI_TRUE && 
                RTICdrStream_getRemainder(stream) >=
                RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                    return RTI_FALSE;   
                }
                if(skip_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            unsigned int 
            PushButton_FeedbackMessage_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment +=unique_identifier_msgs::msg::dds_::UUID_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

                current_alignment +=push_button_interface::action::dds_::PushButton_Feedback_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return  current_alignment - initial_alignment;
            }

            unsigned int 
            PushButton_FeedbackMessage_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PushButton_FeedbackMessage_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            unsigned int 
            PushButton_FeedbackMessage_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */ 

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment +=unique_identifier_msgs::msg::dds_::UUID_Plugin_get_serialized_sample_min_size(
                    endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
                current_alignment +=push_button_interface::action::dds_::PushButton_Feedback_Plugin_get_serialized_sample_min_size(
                    endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return  current_alignment - initial_alignment;
            }

            /* Returns the size of the sample in its serialized form (in bytes).
            * It can also be an estimation in excess of the real buffer needed 
            * during a call to the serialize() function.
            * The value reported does not have to include the space for the
            * encapsulation flags.
            */
            unsigned int
            PushButton_FeedbackMessage_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const PushButton_FeedbackMessage_ * sample) 
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;
                struct PRESTypePluginDefaultEndpointData epd;   

                if (sample==NULL) {
                    return 0;
                }
                if (endpoint_data == NULL) {
                    endpoint_data = (PRESTypePluginEndpointData) &epd;
                    PRESTypePluginDefaultEndpointData_setBaseAlignment(
                        endpoint_data,
                        current_alignment);        
                }

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                    PRESTypePluginDefaultEndpointData_setBaseAlignment(
                        endpoint_data,
                        current_alignment);
                }

                current_alignment += unique_identifier_msgs::msg::dds_::UUID_Plugin_get_serialized_sample_size(
                    endpoint_data,RTI_FALSE, encapsulation_id,
                    current_alignment, (const unique_identifier_msgs::msg::dds_::UUID_*) &sample->goal_id_);

                current_alignment += push_button_interface::action::dds_::PushButton_Feedback_Plugin_get_serialized_sample_size(
                    endpoint_data,RTI_FALSE, encapsulation_id,
                    current_alignment, (const push_button_interface::action::dds_::PushButton_Feedback_*) &sample->feedback_);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            PRESTypePluginKeyKind 
            PushButton_FeedbackMessage_Plugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_NO_KEY;
            }

            RTIBool 
            PushButton_FeedbackMessage_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const PushButton_FeedbackMessage_ *sample, 
                struct RTICdrStream *stream,    
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                if(serialize_encapsulation) {
                    if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if(serialize_key) {

                    if (!push_button_interface::action::dds_::PushButton_FeedbackMessage_Plugin_serialize(
                        endpoint_data,
                        sample,
                        stream,
                        RTI_FALSE, encapsulation_id,
                        RTI_TRUE,
                        endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            RTIBool PushButton_FeedbackMessage_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_FeedbackMessage_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                try {

                    char * position = NULL;

                    if (endpoint_data) {} /* To avoid warnings */
                    if (endpoint_plugin_qos) {} /* To avoid warnings */

                    if(deserialize_encapsulation) {

                        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                            return RTI_FALSE;
                        }

                        position = RTICdrStream_resetAlignment(stream);
                    }
                    if (deserialize_key) {

                        if (!push_button_interface::action::dds_::PushButton_FeedbackMessage_Plugin_deserialize_sample(
                            endpoint_data, sample, stream, 
                            RTI_FALSE, RTI_TRUE, 
                            endpoint_plugin_qos)) {
                            return RTI_FALSE;
                        }
                    }

                    if(deserialize_encapsulation) {
                        RTICdrStream_restoreAlignment(stream,position);
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            RTIBool PushButton_FeedbackMessage_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_FeedbackMessage_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                RTIBool result;
                if (drop_sample) {} /* To avoid warnings */
                stream->_xTypesState.unassignable = RTI_FALSE;
                result= push_button_interface::action::dds_::PushButton_FeedbackMessage_Plugin_deserialize_key_sample(
                    endpoint_data, (sample != NULL)?*sample:NULL, stream,
                    deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }

                return result;    

            }

            unsigned int
            PushButton_FeedbackMessage_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */
                if (overflow) {} /* To avoid warnings */

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment += push_button_interface::action::dds_::PushButton_FeedbackMessage_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            unsigned int
            PushButton_FeedbackMessage_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = PushButton_FeedbackMessage_Plugin_get_serialized_key_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            RTIBool 
            PushButton_FeedbackMessage_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                PushButton_FeedbackMessage_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                RTIBool done = RTI_FALSE;
                RTIBool error = RTI_FALSE;

                if (stream == NULL) {
                    error = RTI_TRUE;
                    goto fin;
                }
                if(deserialize_encapsulation) {
                    if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                        return RTI_FALSE;
                    }
                    position = RTICdrStream_resetAlignment(stream);
                }

                if (deserialize_key) {

                    if (!push_button_interface::action::dds_::PushButton_FeedbackMessage_Plugin_deserialize_sample(
                        endpoint_data, sample, stream, RTI_FALSE, 
                        RTI_TRUE, endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                done = RTI_TRUE;
              fin:
                if(!error) {
                    if (done != RTI_TRUE && 
                    RTICdrStream_getRemainder(stream) >=
                    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        return RTI_FALSE;   
                    }
                } else {
                    return RTI_FALSE;
                }       

                if(deserialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            /* ------------------------------------------------------------------------
            * Plug-in Installation Methods
            * ------------------------------------------------------------------------ */
            struct PRESTypePlugin *PushButton_FeedbackMessage_Plugin_new(void) 
            { 
                struct PRESTypePlugin *plugin = NULL;
                const struct PRESTypePluginVersion PLUGIN_VERSION = 
                PRES_TYPE_PLUGIN_VERSION_2_0;

                RTIOsapiHeap_allocateStructure(
                    &plugin, struct PRESTypePlugin);

                if (plugin == NULL) {
                    return NULL;
                }

                plugin->version = PLUGIN_VERSION;

                /* set up parent's function pointers */
                plugin->onParticipantAttached =
                (PRESTypePluginOnParticipantAttachedCallback)
                push_button_interface::action::dds_::PushButton_FeedbackMessage_Plugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                push_button_interface::action::dds_::PushButton_FeedbackMessage_Plugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                push_button_interface::action::dds_::PushButton_FeedbackMessage_Plugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                push_button_interface::action::dds_::PushButton_FeedbackMessage_Plugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                push_button_interface::action::dds_::PushButton_FeedbackMessage_Plugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                PushButton_FeedbackMessage_Plugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                PushButton_FeedbackMessage_Plugin_destroy_sample;
                plugin->finalizeOptionalMembersFnc =
                (PRESTypePluginFinalizeOptionalMembersFunction)
                PushButton_FeedbackMessage__finalize_optional_members;

                plugin->serializeFnc =
                (PRESTypePluginSerializeFunction)
                push_button_interface::action::dds_::PushButton_FeedbackMessage_Plugin_serialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction)
                push_button_interface::action::dds_::PushButton_FeedbackMessage_Plugin_deserialize;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                push_button_interface::action::dds_::PushButton_FeedbackMessage_Plugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                push_button_interface::action::dds_::PushButton_FeedbackMessage_Plugin_get_serialized_sample_min_size;

                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                PushButton_FeedbackMessage_Plugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                PushButton_FeedbackMessage_Plugin_return_sample;

                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                push_button_interface::action::dds_::PushButton_FeedbackMessage_Plugin_get_key_kind;

                /* These functions are only used for keyed types. As this is not a keyed
                type they are all set to NULL
                */
                plugin->serializeKeyFnc = NULL ;    
                plugin->deserializeKeyFnc = NULL;  
                plugin->getKeyFnc = NULL;
                plugin->returnKeyFnc = NULL;
                plugin->instanceToKeyFnc = NULL;
                plugin->keyToInstanceFnc = NULL;
                plugin->getSerializedKeyMaxSizeFnc = NULL;
                plugin->instanceToKeyHashFnc = NULL;
                plugin->serializedSampleToKeyHashFnc = NULL;
                plugin->serializedKeyToKeyHashFnc = NULL;    
                plugin->typeCode =  (struct RTICdrTypeCode *)push_button_interface::action::dds_::PushButton_FeedbackMessage__get_typecode();

                plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                PushButton_FeedbackMessage_Plugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                PushButton_FeedbackMessage_Plugin_return_buffer;
                plugin->getSerializedSampleSizeFnc =
                (PRESTypePluginGetSerializedSampleSizeFunction)
                push_button_interface::action::dds_::PushButton_FeedbackMessage_Plugin_get_serialized_sample_size;

                plugin->endpointTypeName = PushButton_FeedbackMessage_TYPENAME;

                return plugin;
            }

            void
            PushButton_FeedbackMessage_Plugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace push_button_interface  */
#undef RTI_CDR_CURRENT_SUBMODULE 
