

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
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *PushButton_Goal_TYPENAME = "push_button_interface::action::dds_::PushButton_Goal_";

            DDS_TypeCode* PushButton_Goal__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PushButton_Goal__g_tc_members[1]=
                {

                    {
                        (char *)"msg_",/* Member name */
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
                    }
                };

                static DDS_TypeCode PushButton_Goal__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"push_button_interface::action::dds_::PushButton_Goal_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        PushButton_Goal__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for PushButton_Goal_*/

                if (is_initialized) {
                    return &PushButton_Goal__g_tc;
                }

                PushButton_Goal__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                is_initialized = RTI_TRUE;

                return &PushButton_Goal__g_tc;
            }

            RTIBool PushButton_Goal__initialize(
                PushButton_Goal_* sample) {
                return push_button_interface::action::dds_::PushButton_Goal__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool PushButton_Goal__initialize_ex(
                PushButton_Goal_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return push_button_interface::action::dds_::PushButton_Goal__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool PushButton_Goal__initialize_w_params(
                PushButton_Goal_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->msg_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void PushButton_Goal__finalize(
                PushButton_Goal_* sample)
            {

                push_button_interface::action::dds_::PushButton_Goal__finalize_ex(sample,RTI_TRUE);
            }

            void PushButton_Goal__finalize_ex(
                PushButton_Goal_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                push_button_interface::action::dds_::PushButton_Goal__finalize_w_params(
                    sample,&deallocParams);
            }

            void PushButton_Goal__finalize_w_params(
                PushButton_Goal_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void PushButton_Goal__finalize_optional_members(
                PushButton_Goal_* sample, RTIBool deletePointers)
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

            RTIBool PushButton_Goal__copy(
                PushButton_Goal_* dst,
                const PushButton_Goal_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyBoolean (
                        &dst->msg_, &src->msg_)) { 
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
            * Configure and implement 'PushButton_Goal_' sequence class.
            */
            #define T PushButton_Goal_
            #define TSeq PushButton_Goal_Seq

            #define T_initialize_w_params push_button_interface::action::dds_::PushButton_Goal__initialize_w_params

            #define T_finalize_w_params   push_button_interface::action::dds_::PushButton_Goal__finalize_w_params
            #define T_copy       push_button_interface::action::dds_::PushButton_Goal__copy

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
    } /* namespace action  */
} /* namespace push_button_interface  */
namespace push_button_interface {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *PushButton_SendGoal_Request_TYPENAME = "push_button_interface::action::dds_::PushButton_SendGoal_Request_";

            DDS_TypeCode* PushButton_SendGoal_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PushButton_SendGoal_Request__g_tc_members[2]=
                {

                    {
                        (char *)"goal_id_",/* Member name */
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
                        (char *)"goal_",/* Member name */
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
                    }
                };

                static DDS_TypeCode PushButton_SendGoal_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"push_button_interface::action::dds_::PushButton_SendGoal_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        PushButton_SendGoal_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for PushButton_SendGoal_Request_*/

                if (is_initialized) {
                    return &PushButton_SendGoal_Request__g_tc;
                }

                PushButton_SendGoal_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                PushButton_SendGoal_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)push_button_interface::action::dds_::PushButton_Goal__get_typecode();

                is_initialized = RTI_TRUE;

                return &PushButton_SendGoal_Request__g_tc;
            }

            RTIBool PushButton_SendGoal_Request__initialize(
                PushButton_SendGoal_Request_* sample) {
                return push_button_interface::action::dds_::PushButton_SendGoal_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool PushButton_SendGoal_Request__initialize_ex(
                PushButton_SendGoal_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return push_button_interface::action::dds_::PushButton_SendGoal_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool PushButton_SendGoal_Request__initialize_w_params(
                PushButton_SendGoal_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!unique_identifier_msgs::msg::dds_::UUID__initialize_w_params(&sample->goal_id_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!push_button_interface::action::dds_::PushButton_Goal__initialize_w_params(&sample->goal_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void PushButton_SendGoal_Request__finalize(
                PushButton_SendGoal_Request_* sample)
            {

                push_button_interface::action::dds_::PushButton_SendGoal_Request__finalize_ex(sample,RTI_TRUE);
            }

            void PushButton_SendGoal_Request__finalize_ex(
                PushButton_SendGoal_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                push_button_interface::action::dds_::PushButton_SendGoal_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void PushButton_SendGoal_Request__finalize_w_params(
                PushButton_SendGoal_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->goal_id_,deallocParams);

                push_button_interface::action::dds_::PushButton_Goal__finalize_w_params(&sample->goal_,deallocParams);

            }

            void PushButton_SendGoal_Request__finalize_optional_members(
                PushButton_SendGoal_Request_* sample, RTIBool deletePointers)
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

                unique_identifier_msgs::msg::dds_::UUID__finalize_optional_members(&sample->goal_id_, deallocParams->delete_pointers);
                push_button_interface::action::dds_::PushButton_Goal__finalize_optional_members(&sample->goal_, deallocParams->delete_pointers);
            }

            RTIBool PushButton_SendGoal_Request__copy(
                PushButton_SendGoal_Request_* dst,
                const PushButton_SendGoal_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!unique_identifier_msgs::msg::dds_::UUID__copy(
                        &dst->goal_id_,(const unique_identifier_msgs::msg::dds_::UUID_*)&src->goal_id_)) {
                        return RTI_FALSE;
                    } 
                    if (!push_button_interface::action::dds_::PushButton_Goal__copy(
                        &dst->goal_,(const push_button_interface::action::dds_::PushButton_Goal_*)&src->goal_)) {
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
            * Configure and implement 'PushButton_SendGoal_Request_' sequence class.
            */
            #define T PushButton_SendGoal_Request_
            #define TSeq PushButton_SendGoal_Request_Seq

            #define T_initialize_w_params push_button_interface::action::dds_::PushButton_SendGoal_Request__initialize_w_params

            #define T_finalize_w_params   push_button_interface::action::dds_::PushButton_SendGoal_Request__finalize_w_params
            #define T_copy       push_button_interface::action::dds_::PushButton_SendGoal_Request__copy

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
    } /* namespace action  */
} /* namespace push_button_interface  */
namespace push_button_interface {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *PushButton_SendGoal_Response_TYPENAME = "push_button_interface::action::dds_::PushButton_SendGoal_Response_";

            DDS_TypeCode* PushButton_SendGoal_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PushButton_SendGoal_Response__g_tc_members[2]=
                {

                    {
                        (char *)"accepted_",/* Member name */
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
                        (char *)"stamp_",/* Member name */
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
                    }
                };

                static DDS_TypeCode PushButton_SendGoal_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"push_button_interface::action::dds_::PushButton_SendGoal_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        PushButton_SendGoal_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for PushButton_SendGoal_Response_*/

                if (is_initialized) {
                    return &PushButton_SendGoal_Response__g_tc;
                }

                PushButton_SendGoal_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                PushButton_SendGoal_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Time__get_typecode();

                is_initialized = RTI_TRUE;

                return &PushButton_SendGoal_Response__g_tc;
            }

            RTIBool PushButton_SendGoal_Response__initialize(
                PushButton_SendGoal_Response_* sample) {
                return push_button_interface::action::dds_::PushButton_SendGoal_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool PushButton_SendGoal_Response__initialize_ex(
                PushButton_SendGoal_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return push_button_interface::action::dds_::PushButton_SendGoal_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool PushButton_SendGoal_Response__initialize_w_params(
                PushButton_SendGoal_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->accepted_)) {
                    return RTI_FALSE;
                }

                if (!builtin_interfaces::msg::dds_::Time__initialize_w_params(&sample->stamp_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void PushButton_SendGoal_Response__finalize(
                PushButton_SendGoal_Response_* sample)
            {

                push_button_interface::action::dds_::PushButton_SendGoal_Response__finalize_ex(sample,RTI_TRUE);
            }

            void PushButton_SendGoal_Response__finalize_ex(
                PushButton_SendGoal_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                push_button_interface::action::dds_::PushButton_SendGoal_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void PushButton_SendGoal_Response__finalize_w_params(
                PushButton_SendGoal_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                builtin_interfaces::msg::dds_::Time__finalize_w_params(&sample->stamp_,deallocParams);

            }

            void PushButton_SendGoal_Response__finalize_optional_members(
                PushButton_SendGoal_Response_* sample, RTIBool deletePointers)
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

                builtin_interfaces::msg::dds_::Time__finalize_optional_members(&sample->stamp_, deallocParams->delete_pointers);
            }

            RTIBool PushButton_SendGoal_Response__copy(
                PushButton_SendGoal_Response_* dst,
                const PushButton_SendGoal_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyBoolean (
                        &dst->accepted_, &src->accepted_)) { 
                        return RTI_FALSE;
                    }
                    if (!builtin_interfaces::msg::dds_::Time__copy(
                        &dst->stamp_,(const builtin_interfaces::msg::dds_::Time_*)&src->stamp_)) {
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
            * Configure and implement 'PushButton_SendGoal_Response_' sequence class.
            */
            #define T PushButton_SendGoal_Response_
            #define TSeq PushButton_SendGoal_Response_Seq

            #define T_initialize_w_params push_button_interface::action::dds_::PushButton_SendGoal_Response__initialize_w_params

            #define T_finalize_w_params   push_button_interface::action::dds_::PushButton_SendGoal_Response__finalize_w_params
            #define T_copy       push_button_interface::action::dds_::PushButton_SendGoal_Response__copy

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
    } /* namespace action  */
} /* namespace push_button_interface  */
namespace push_button_interface {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *PushButton_Result_TYPENAME = "push_button_interface::action::dds_::PushButton_Result_";

            DDS_TypeCode* PushButton_Result__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PushButton_Result__g_tc_members[1]=
                {

                    {
                        (char *)"result_",/* Member name */
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
                    }
                };

                static DDS_TypeCode PushButton_Result__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"push_button_interface::action::dds_::PushButton_Result_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        PushButton_Result__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for PushButton_Result_*/

                if (is_initialized) {
                    return &PushButton_Result__g_tc;
                }

                PushButton_Result__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                is_initialized = RTI_TRUE;

                return &PushButton_Result__g_tc;
            }

            RTIBool PushButton_Result__initialize(
                PushButton_Result_* sample) {
                return push_button_interface::action::dds_::PushButton_Result__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool PushButton_Result__initialize_ex(
                PushButton_Result_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return push_button_interface::action::dds_::PushButton_Result__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool PushButton_Result__initialize_w_params(
                PushButton_Result_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->result_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void PushButton_Result__finalize(
                PushButton_Result_* sample)
            {

                push_button_interface::action::dds_::PushButton_Result__finalize_ex(sample,RTI_TRUE);
            }

            void PushButton_Result__finalize_ex(
                PushButton_Result_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                push_button_interface::action::dds_::PushButton_Result__finalize_w_params(
                    sample,&deallocParams);
            }

            void PushButton_Result__finalize_w_params(
                PushButton_Result_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void PushButton_Result__finalize_optional_members(
                PushButton_Result_* sample, RTIBool deletePointers)
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

            RTIBool PushButton_Result__copy(
                PushButton_Result_* dst,
                const PushButton_Result_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyBoolean (
                        &dst->result_, &src->result_)) { 
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
            * Configure and implement 'PushButton_Result_' sequence class.
            */
            #define T PushButton_Result_
            #define TSeq PushButton_Result_Seq

            #define T_initialize_w_params push_button_interface::action::dds_::PushButton_Result__initialize_w_params

            #define T_finalize_w_params   push_button_interface::action::dds_::PushButton_Result__finalize_w_params
            #define T_copy       push_button_interface::action::dds_::PushButton_Result__copy

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
    } /* namespace action  */
} /* namespace push_button_interface  */
namespace push_button_interface {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *PushButton_GetResult_Request_TYPENAME = "push_button_interface::action::dds_::PushButton_GetResult_Request_";

            DDS_TypeCode* PushButton_GetResult_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PushButton_GetResult_Request__g_tc_members[1]=
                {

                    {
                        (char *)"goal_id_",/* Member name */
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
                    }
                };

                static DDS_TypeCode PushButton_GetResult_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"push_button_interface::action::dds_::PushButton_GetResult_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        PushButton_GetResult_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for PushButton_GetResult_Request_*/

                if (is_initialized) {
                    return &PushButton_GetResult_Request__g_tc;
                }

                PushButton_GetResult_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                is_initialized = RTI_TRUE;

                return &PushButton_GetResult_Request__g_tc;
            }

            RTIBool PushButton_GetResult_Request__initialize(
                PushButton_GetResult_Request_* sample) {
                return push_button_interface::action::dds_::PushButton_GetResult_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool PushButton_GetResult_Request__initialize_ex(
                PushButton_GetResult_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return push_button_interface::action::dds_::PushButton_GetResult_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool PushButton_GetResult_Request__initialize_w_params(
                PushButton_GetResult_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!unique_identifier_msgs::msg::dds_::UUID__initialize_w_params(&sample->goal_id_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void PushButton_GetResult_Request__finalize(
                PushButton_GetResult_Request_* sample)
            {

                push_button_interface::action::dds_::PushButton_GetResult_Request__finalize_ex(sample,RTI_TRUE);
            }

            void PushButton_GetResult_Request__finalize_ex(
                PushButton_GetResult_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                push_button_interface::action::dds_::PushButton_GetResult_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void PushButton_GetResult_Request__finalize_w_params(
                PushButton_GetResult_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->goal_id_,deallocParams);

            }

            void PushButton_GetResult_Request__finalize_optional_members(
                PushButton_GetResult_Request_* sample, RTIBool deletePointers)
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

                unique_identifier_msgs::msg::dds_::UUID__finalize_optional_members(&sample->goal_id_, deallocParams->delete_pointers);
            }

            RTIBool PushButton_GetResult_Request__copy(
                PushButton_GetResult_Request_* dst,
                const PushButton_GetResult_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!unique_identifier_msgs::msg::dds_::UUID__copy(
                        &dst->goal_id_,(const unique_identifier_msgs::msg::dds_::UUID_*)&src->goal_id_)) {
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
            * Configure and implement 'PushButton_GetResult_Request_' sequence class.
            */
            #define T PushButton_GetResult_Request_
            #define TSeq PushButton_GetResult_Request_Seq

            #define T_initialize_w_params push_button_interface::action::dds_::PushButton_GetResult_Request__initialize_w_params

            #define T_finalize_w_params   push_button_interface::action::dds_::PushButton_GetResult_Request__finalize_w_params
            #define T_copy       push_button_interface::action::dds_::PushButton_GetResult_Request__copy

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
    } /* namespace action  */
} /* namespace push_button_interface  */
namespace push_button_interface {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *PushButton_GetResult_Response_TYPENAME = "push_button_interface::action::dds_::PushButton_GetResult_Response_";

            DDS_TypeCode* PushButton_GetResult_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PushButton_GetResult_Response__g_tc_members[2]=
                {

                    {
                        (char *)"status_",/* Member name */
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
                        (char *)"result_",/* Member name */
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
                    }
                };

                static DDS_TypeCode PushButton_GetResult_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"push_button_interface::action::dds_::PushButton_GetResult_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        PushButton_GetResult_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for PushButton_GetResult_Response_*/

                if (is_initialized) {
                    return &PushButton_GetResult_Response__g_tc;
                }

                PushButton_GetResult_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                PushButton_GetResult_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)push_button_interface::action::dds_::PushButton_Result__get_typecode();

                is_initialized = RTI_TRUE;

                return &PushButton_GetResult_Response__g_tc;
            }

            RTIBool PushButton_GetResult_Response__initialize(
                PushButton_GetResult_Response_* sample) {
                return push_button_interface::action::dds_::PushButton_GetResult_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool PushButton_GetResult_Response__initialize_ex(
                PushButton_GetResult_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return push_button_interface::action::dds_::PushButton_GetResult_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool PushButton_GetResult_Response__initialize_w_params(
                PushButton_GetResult_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->status_)) {
                    return RTI_FALSE;
                }

                if (!push_button_interface::action::dds_::PushButton_Result__initialize_w_params(&sample->result_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void PushButton_GetResult_Response__finalize(
                PushButton_GetResult_Response_* sample)
            {

                push_button_interface::action::dds_::PushButton_GetResult_Response__finalize_ex(sample,RTI_TRUE);
            }

            void PushButton_GetResult_Response__finalize_ex(
                PushButton_GetResult_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                push_button_interface::action::dds_::PushButton_GetResult_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void PushButton_GetResult_Response__finalize_w_params(
                PushButton_GetResult_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                push_button_interface::action::dds_::PushButton_Result__finalize_w_params(&sample->result_,deallocParams);

            }

            void PushButton_GetResult_Response__finalize_optional_members(
                PushButton_GetResult_Response_* sample, RTIBool deletePointers)
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

                push_button_interface::action::dds_::PushButton_Result__finalize_optional_members(&sample->result_, deallocParams->delete_pointers);
            }

            RTIBool PushButton_GetResult_Response__copy(
                PushButton_GetResult_Response_* dst,
                const PushButton_GetResult_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyOctet (
                        &dst->status_, &src->status_)) { 
                        return RTI_FALSE;
                    }
                    if (!push_button_interface::action::dds_::PushButton_Result__copy(
                        &dst->result_,(const push_button_interface::action::dds_::PushButton_Result_*)&src->result_)) {
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
            * Configure and implement 'PushButton_GetResult_Response_' sequence class.
            */
            #define T PushButton_GetResult_Response_
            #define TSeq PushButton_GetResult_Response_Seq

            #define T_initialize_w_params push_button_interface::action::dds_::PushButton_GetResult_Response__initialize_w_params

            #define T_finalize_w_params   push_button_interface::action::dds_::PushButton_GetResult_Response__finalize_w_params
            #define T_copy       push_button_interface::action::dds_::PushButton_GetResult_Response__copy

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
    } /* namespace action  */
} /* namespace push_button_interface  */
namespace push_button_interface {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *PushButton_Feedback_TYPENAME = "push_button_interface::action::dds_::PushButton_Feedback_";

            DDS_TypeCode* PushButton_Feedback__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PushButton_Feedback__g_tc_members[1]=
                {

                    {
                        (char *)"feedback_",/* Member name */
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
                    }
                };

                static DDS_TypeCode PushButton_Feedback__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"push_button_interface::action::dds_::PushButton_Feedback_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        PushButton_Feedback__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for PushButton_Feedback_*/

                if (is_initialized) {
                    return &PushButton_Feedback__g_tc;
                }

                PushButton_Feedback__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                is_initialized = RTI_TRUE;

                return &PushButton_Feedback__g_tc;
            }

            RTIBool PushButton_Feedback__initialize(
                PushButton_Feedback_* sample) {
                return push_button_interface::action::dds_::PushButton_Feedback__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool PushButton_Feedback__initialize_ex(
                PushButton_Feedback_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return push_button_interface::action::dds_::PushButton_Feedback__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool PushButton_Feedback__initialize_w_params(
                PushButton_Feedback_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->feedback_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void PushButton_Feedback__finalize(
                PushButton_Feedback_* sample)
            {

                push_button_interface::action::dds_::PushButton_Feedback__finalize_ex(sample,RTI_TRUE);
            }

            void PushButton_Feedback__finalize_ex(
                PushButton_Feedback_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                push_button_interface::action::dds_::PushButton_Feedback__finalize_w_params(
                    sample,&deallocParams);
            }

            void PushButton_Feedback__finalize_w_params(
                PushButton_Feedback_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void PushButton_Feedback__finalize_optional_members(
                PushButton_Feedback_* sample, RTIBool deletePointers)
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

            RTIBool PushButton_Feedback__copy(
                PushButton_Feedback_* dst,
                const PushButton_Feedback_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyBoolean (
                        &dst->feedback_, &src->feedback_)) { 
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
            * Configure and implement 'PushButton_Feedback_' sequence class.
            */
            #define T PushButton_Feedback_
            #define TSeq PushButton_Feedback_Seq

            #define T_initialize_w_params push_button_interface::action::dds_::PushButton_Feedback__initialize_w_params

            #define T_finalize_w_params   push_button_interface::action::dds_::PushButton_Feedback__finalize_w_params
            #define T_copy       push_button_interface::action::dds_::PushButton_Feedback__copy

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
    } /* namespace action  */
} /* namespace push_button_interface  */
namespace push_button_interface {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *PushButton_FeedbackMessage_TYPENAME = "push_button_interface::action::dds_::PushButton_FeedbackMessage_";

            DDS_TypeCode* PushButton_FeedbackMessage__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PushButton_FeedbackMessage__g_tc_members[2]=
                {

                    {
                        (char *)"goal_id_",/* Member name */
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
                        (char *)"feedback_",/* Member name */
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
                    }
                };

                static DDS_TypeCode PushButton_FeedbackMessage__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"push_button_interface::action::dds_::PushButton_FeedbackMessage_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        PushButton_FeedbackMessage__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for PushButton_FeedbackMessage_*/

                if (is_initialized) {
                    return &PushButton_FeedbackMessage__g_tc;
                }

                PushButton_FeedbackMessage__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                PushButton_FeedbackMessage__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)push_button_interface::action::dds_::PushButton_Feedback__get_typecode();

                is_initialized = RTI_TRUE;

                return &PushButton_FeedbackMessage__g_tc;
            }

            RTIBool PushButton_FeedbackMessage__initialize(
                PushButton_FeedbackMessage_* sample) {
                return push_button_interface::action::dds_::PushButton_FeedbackMessage__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool PushButton_FeedbackMessage__initialize_ex(
                PushButton_FeedbackMessage_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return push_button_interface::action::dds_::PushButton_FeedbackMessage__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool PushButton_FeedbackMessage__initialize_w_params(
                PushButton_FeedbackMessage_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!unique_identifier_msgs::msg::dds_::UUID__initialize_w_params(&sample->goal_id_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!push_button_interface::action::dds_::PushButton_Feedback__initialize_w_params(&sample->feedback_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void PushButton_FeedbackMessage__finalize(
                PushButton_FeedbackMessage_* sample)
            {

                push_button_interface::action::dds_::PushButton_FeedbackMessage__finalize_ex(sample,RTI_TRUE);
            }

            void PushButton_FeedbackMessage__finalize_ex(
                PushButton_FeedbackMessage_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                push_button_interface::action::dds_::PushButton_FeedbackMessage__finalize_w_params(
                    sample,&deallocParams);
            }

            void PushButton_FeedbackMessage__finalize_w_params(
                PushButton_FeedbackMessage_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->goal_id_,deallocParams);

                push_button_interface::action::dds_::PushButton_Feedback__finalize_w_params(&sample->feedback_,deallocParams);

            }

            void PushButton_FeedbackMessage__finalize_optional_members(
                PushButton_FeedbackMessage_* sample, RTIBool deletePointers)
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

                unique_identifier_msgs::msg::dds_::UUID__finalize_optional_members(&sample->goal_id_, deallocParams->delete_pointers);
                push_button_interface::action::dds_::PushButton_Feedback__finalize_optional_members(&sample->feedback_, deallocParams->delete_pointers);
            }

            RTIBool PushButton_FeedbackMessage__copy(
                PushButton_FeedbackMessage_* dst,
                const PushButton_FeedbackMessage_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!unique_identifier_msgs::msg::dds_::UUID__copy(
                        &dst->goal_id_,(const unique_identifier_msgs::msg::dds_::UUID_*)&src->goal_id_)) {
                        return RTI_FALSE;
                    } 
                    if (!push_button_interface::action::dds_::PushButton_Feedback__copy(
                        &dst->feedback_,(const push_button_interface::action::dds_::PushButton_Feedback_*)&src->feedback_)) {
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
            * Configure and implement 'PushButton_FeedbackMessage_' sequence class.
            */
            #define T PushButton_FeedbackMessage_
            #define TSeq PushButton_FeedbackMessage_Seq

            #define T_initialize_w_params push_button_interface::action::dds_::PushButton_FeedbackMessage__initialize_w_params

            #define T_finalize_w_params   push_button_interface::action::dds_::PushButton_FeedbackMessage__finalize_w_params
            #define T_copy       push_button_interface::action::dds_::PushButton_FeedbackMessage__copy

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
    } /* namespace action  */
} /* namespace push_button_interface  */

