

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PushButton_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "PushButton_.h"

#include <new>

namespace push_button_interface {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *PushButton_TYPENAME = "push_button_interface::msg::dds_::PushButton_";

            DDS_TypeCode* PushButton__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PushButton__g_tc_members[8]=
                {

                    {
                        (char *)"collect_sample_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"platform_height_",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"microscope_",/* Member name */
                        {
                            2,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"flashlight_",/* Member name */
                        {
                            3,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"brush_",/* Member name */
                        {
                            4,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"water_pump_",/* Member name */
                        {
                            5,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"uv_camera_",/* Member name */
                        {
                            6,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"pump_pos_",/* Member name */
                        {
                            7,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode PushButton__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"push_button_interface::msg::dds_::PushButton_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        8, /* Number of members */
                        PushButton__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for PushButton_*/

                if (is_initialized) {
                    return &PushButton__g_tc;
                }

                PushButton__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                PushButton__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                PushButton__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                PushButton__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                PushButton__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                PushButton__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                PushButton__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                PushButton__g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

                is_initialized = RTI_TRUE;

                return &PushButton__g_tc;
            }

            RTIBool PushButton__initialize(
                PushButton_* sample) {
                return push_button_interface::msg::dds_::PushButton__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool PushButton__initialize_ex(
                PushButton_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return push_button_interface::msg::dds_::PushButton__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool PushButton__initialize_w_params(
                PushButton_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->collect_sample_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(&sample->platform_height_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->microscope_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->flashlight_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->brush_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->water_pump_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->uv_camera_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initShort(&sample->pump_pos_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void PushButton__finalize(
                PushButton_* sample)
            {

                push_button_interface::msg::dds_::PushButton__finalize_ex(sample,RTI_TRUE);
            }

            void PushButton__finalize_ex(
                PushButton_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                push_button_interface::msg::dds_::PushButton__finalize_w_params(
                    sample,&deallocParams);
            }

            void PushButton__finalize_w_params(
                PushButton_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void PushButton__finalize_optional_members(
                PushButton_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

            }

            RTIBool PushButton__copy(
                PushButton_* dst,
                const PushButton_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyBoolean (
                        &dst->collect_sample_, &src->collect_sample_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyLong (
                        &dst->platform_height_, &src->platform_height_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->microscope_, &src->microscope_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->flashlight_, &src->flashlight_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->brush_, &src->brush_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->water_pump_, &src->water_pump_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->uv_camera_, &src->uv_camera_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyShort (
                        &dst->pump_pos_, &src->pump_pos_)) { 
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'PushButton_' sequence class.
            */
            #define T PushButton_
            #define TSeq PushButton_Seq

            #define T_initialize_w_params push_button_interface::msg::dds_::PushButton__initialize_w_params

            #define T_finalize_w_params   push_button_interface::msg::dds_::PushButton__finalize_w_params
            #define T_copy       push_button_interface::msg::dds_::PushButton__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace push_button_interface  */

