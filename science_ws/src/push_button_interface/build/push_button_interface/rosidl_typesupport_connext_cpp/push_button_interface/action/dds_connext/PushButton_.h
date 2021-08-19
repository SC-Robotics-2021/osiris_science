

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PushButton_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PushButton__1906257014_h
#define PushButton__1906257014_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Time_.h"
#include "unique_identifier_msgs/msg/dds_connext/UUID_.h"
namespace push_button_interface {
    namespace action {
        namespace dds_ {

            extern const char *PushButton_Goal_TYPENAME;

            struct PushButton_Goal_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class PushButton_Goal_TypeSupport;
            class PushButton_Goal_DataWriter;
            class PushButton_Goal_DataReader;
            #endif

            class PushButton_Goal_ 
            {
              public:
                typedef struct PushButton_Goal_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef PushButton_Goal_TypeSupport TypeSupport;
                typedef PushButton_Goal_DataWriter DataWriter;
                typedef PushButton_Goal_DataReader DataReader;
                #endif

                DDS_Boolean   msg_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* PushButton_Goal__get_typecode(void); /* Type code */

            DDS_SEQUENCE(PushButton_Goal_Seq, PushButton_Goal_);

            NDDSUSERDllExport
            RTIBool PushButton_Goal__initialize(
                PushButton_Goal_* self);

            NDDSUSERDllExport
            RTIBool PushButton_Goal__initialize_ex(
                PushButton_Goal_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool PushButton_Goal__initialize_w_params(
                PushButton_Goal_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void PushButton_Goal__finalize(
                PushButton_Goal_* self);

            NDDSUSERDllExport
            void PushButton_Goal__finalize_ex(
                PushButton_Goal_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void PushButton_Goal__finalize_w_params(
                PushButton_Goal_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void PushButton_Goal__finalize_optional_members(
                PushButton_Goal_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool PushButton_Goal__copy(
                PushButton_Goal_* dst,
                const PushButton_Goal_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace push_button_interface  */
namespace push_button_interface {
    namespace action {
        namespace dds_ {

            extern const char *PushButton_SendGoal_Request_TYPENAME;

            struct PushButton_SendGoal_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class PushButton_SendGoal_Request_TypeSupport;
            class PushButton_SendGoal_Request_DataWriter;
            class PushButton_SendGoal_Request_DataReader;
            #endif

            class PushButton_SendGoal_Request_ 
            {
              public:
                typedef struct PushButton_SendGoal_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef PushButton_SendGoal_Request_TypeSupport TypeSupport;
                typedef PushButton_SendGoal_Request_DataWriter DataWriter;
                typedef PushButton_SendGoal_Request_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   goal_id_ ;
                push_button_interface::action::dds_::PushButton_Goal_   goal_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* PushButton_SendGoal_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(PushButton_SendGoal_Request_Seq, PushButton_SendGoal_Request_);

            NDDSUSERDllExport
            RTIBool PushButton_SendGoal_Request__initialize(
                PushButton_SendGoal_Request_* self);

            NDDSUSERDllExport
            RTIBool PushButton_SendGoal_Request__initialize_ex(
                PushButton_SendGoal_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool PushButton_SendGoal_Request__initialize_w_params(
                PushButton_SendGoal_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void PushButton_SendGoal_Request__finalize(
                PushButton_SendGoal_Request_* self);

            NDDSUSERDllExport
            void PushButton_SendGoal_Request__finalize_ex(
                PushButton_SendGoal_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void PushButton_SendGoal_Request__finalize_w_params(
                PushButton_SendGoal_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void PushButton_SendGoal_Request__finalize_optional_members(
                PushButton_SendGoal_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool PushButton_SendGoal_Request__copy(
                PushButton_SendGoal_Request_* dst,
                const PushButton_SendGoal_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace push_button_interface  */
namespace push_button_interface {
    namespace action {
        namespace dds_ {

            extern const char *PushButton_SendGoal_Response_TYPENAME;

            struct PushButton_SendGoal_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class PushButton_SendGoal_Response_TypeSupport;
            class PushButton_SendGoal_Response_DataWriter;
            class PushButton_SendGoal_Response_DataReader;
            #endif

            class PushButton_SendGoal_Response_ 
            {
              public:
                typedef struct PushButton_SendGoal_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef PushButton_SendGoal_Response_TypeSupport TypeSupport;
                typedef PushButton_SendGoal_Response_DataWriter DataWriter;
                typedef PushButton_SendGoal_Response_DataReader DataReader;
                #endif

                DDS_Boolean   accepted_ ;
                builtin_interfaces::msg::dds_::Time_   stamp_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* PushButton_SendGoal_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(PushButton_SendGoal_Response_Seq, PushButton_SendGoal_Response_);

            NDDSUSERDllExport
            RTIBool PushButton_SendGoal_Response__initialize(
                PushButton_SendGoal_Response_* self);

            NDDSUSERDllExport
            RTIBool PushButton_SendGoal_Response__initialize_ex(
                PushButton_SendGoal_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool PushButton_SendGoal_Response__initialize_w_params(
                PushButton_SendGoal_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void PushButton_SendGoal_Response__finalize(
                PushButton_SendGoal_Response_* self);

            NDDSUSERDllExport
            void PushButton_SendGoal_Response__finalize_ex(
                PushButton_SendGoal_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void PushButton_SendGoal_Response__finalize_w_params(
                PushButton_SendGoal_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void PushButton_SendGoal_Response__finalize_optional_members(
                PushButton_SendGoal_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool PushButton_SendGoal_Response__copy(
                PushButton_SendGoal_Response_* dst,
                const PushButton_SendGoal_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace push_button_interface  */
namespace push_button_interface {
    namespace action {
        namespace dds_ {

            extern const char *PushButton_Result_TYPENAME;

            struct PushButton_Result_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class PushButton_Result_TypeSupport;
            class PushButton_Result_DataWriter;
            class PushButton_Result_DataReader;
            #endif

            class PushButton_Result_ 
            {
              public:
                typedef struct PushButton_Result_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef PushButton_Result_TypeSupport TypeSupport;
                typedef PushButton_Result_DataWriter DataWriter;
                typedef PushButton_Result_DataReader DataReader;
                #endif

                DDS_Boolean   result_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* PushButton_Result__get_typecode(void); /* Type code */

            DDS_SEQUENCE(PushButton_Result_Seq, PushButton_Result_);

            NDDSUSERDllExport
            RTIBool PushButton_Result__initialize(
                PushButton_Result_* self);

            NDDSUSERDllExport
            RTIBool PushButton_Result__initialize_ex(
                PushButton_Result_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool PushButton_Result__initialize_w_params(
                PushButton_Result_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void PushButton_Result__finalize(
                PushButton_Result_* self);

            NDDSUSERDllExport
            void PushButton_Result__finalize_ex(
                PushButton_Result_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void PushButton_Result__finalize_w_params(
                PushButton_Result_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void PushButton_Result__finalize_optional_members(
                PushButton_Result_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool PushButton_Result__copy(
                PushButton_Result_* dst,
                const PushButton_Result_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace push_button_interface  */
namespace push_button_interface {
    namespace action {
        namespace dds_ {

            extern const char *PushButton_GetResult_Request_TYPENAME;

            struct PushButton_GetResult_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class PushButton_GetResult_Request_TypeSupport;
            class PushButton_GetResult_Request_DataWriter;
            class PushButton_GetResult_Request_DataReader;
            #endif

            class PushButton_GetResult_Request_ 
            {
              public:
                typedef struct PushButton_GetResult_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef PushButton_GetResult_Request_TypeSupport TypeSupport;
                typedef PushButton_GetResult_Request_DataWriter DataWriter;
                typedef PushButton_GetResult_Request_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   goal_id_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* PushButton_GetResult_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(PushButton_GetResult_Request_Seq, PushButton_GetResult_Request_);

            NDDSUSERDllExport
            RTIBool PushButton_GetResult_Request__initialize(
                PushButton_GetResult_Request_* self);

            NDDSUSERDllExport
            RTIBool PushButton_GetResult_Request__initialize_ex(
                PushButton_GetResult_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool PushButton_GetResult_Request__initialize_w_params(
                PushButton_GetResult_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void PushButton_GetResult_Request__finalize(
                PushButton_GetResult_Request_* self);

            NDDSUSERDllExport
            void PushButton_GetResult_Request__finalize_ex(
                PushButton_GetResult_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void PushButton_GetResult_Request__finalize_w_params(
                PushButton_GetResult_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void PushButton_GetResult_Request__finalize_optional_members(
                PushButton_GetResult_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool PushButton_GetResult_Request__copy(
                PushButton_GetResult_Request_* dst,
                const PushButton_GetResult_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace push_button_interface  */
namespace push_button_interface {
    namespace action {
        namespace dds_ {

            extern const char *PushButton_GetResult_Response_TYPENAME;

            struct PushButton_GetResult_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class PushButton_GetResult_Response_TypeSupport;
            class PushButton_GetResult_Response_DataWriter;
            class PushButton_GetResult_Response_DataReader;
            #endif

            class PushButton_GetResult_Response_ 
            {
              public:
                typedef struct PushButton_GetResult_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef PushButton_GetResult_Response_TypeSupport TypeSupport;
                typedef PushButton_GetResult_Response_DataWriter DataWriter;
                typedef PushButton_GetResult_Response_DataReader DataReader;
                #endif

                DDS_Octet   status_ ;
                push_button_interface::action::dds_::PushButton_Result_   result_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* PushButton_GetResult_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(PushButton_GetResult_Response_Seq, PushButton_GetResult_Response_);

            NDDSUSERDllExport
            RTIBool PushButton_GetResult_Response__initialize(
                PushButton_GetResult_Response_* self);

            NDDSUSERDllExport
            RTIBool PushButton_GetResult_Response__initialize_ex(
                PushButton_GetResult_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool PushButton_GetResult_Response__initialize_w_params(
                PushButton_GetResult_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void PushButton_GetResult_Response__finalize(
                PushButton_GetResult_Response_* self);

            NDDSUSERDllExport
            void PushButton_GetResult_Response__finalize_ex(
                PushButton_GetResult_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void PushButton_GetResult_Response__finalize_w_params(
                PushButton_GetResult_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void PushButton_GetResult_Response__finalize_optional_members(
                PushButton_GetResult_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool PushButton_GetResult_Response__copy(
                PushButton_GetResult_Response_* dst,
                const PushButton_GetResult_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace push_button_interface  */
namespace push_button_interface {
    namespace action {
        namespace dds_ {

            extern const char *PushButton_Feedback_TYPENAME;

            struct PushButton_Feedback_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class PushButton_Feedback_TypeSupport;
            class PushButton_Feedback_DataWriter;
            class PushButton_Feedback_DataReader;
            #endif

            class PushButton_Feedback_ 
            {
              public:
                typedef struct PushButton_Feedback_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef PushButton_Feedback_TypeSupport TypeSupport;
                typedef PushButton_Feedback_DataWriter DataWriter;
                typedef PushButton_Feedback_DataReader DataReader;
                #endif

                DDS_Boolean   feedback_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* PushButton_Feedback__get_typecode(void); /* Type code */

            DDS_SEQUENCE(PushButton_Feedback_Seq, PushButton_Feedback_);

            NDDSUSERDllExport
            RTIBool PushButton_Feedback__initialize(
                PushButton_Feedback_* self);

            NDDSUSERDllExport
            RTIBool PushButton_Feedback__initialize_ex(
                PushButton_Feedback_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool PushButton_Feedback__initialize_w_params(
                PushButton_Feedback_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void PushButton_Feedback__finalize(
                PushButton_Feedback_* self);

            NDDSUSERDllExport
            void PushButton_Feedback__finalize_ex(
                PushButton_Feedback_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void PushButton_Feedback__finalize_w_params(
                PushButton_Feedback_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void PushButton_Feedback__finalize_optional_members(
                PushButton_Feedback_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool PushButton_Feedback__copy(
                PushButton_Feedback_* dst,
                const PushButton_Feedback_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace push_button_interface  */
namespace push_button_interface {
    namespace action {
        namespace dds_ {

            extern const char *PushButton_FeedbackMessage_TYPENAME;

            struct PushButton_FeedbackMessage_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class PushButton_FeedbackMessage_TypeSupport;
            class PushButton_FeedbackMessage_DataWriter;
            class PushButton_FeedbackMessage_DataReader;
            #endif

            class PushButton_FeedbackMessage_ 
            {
              public:
                typedef struct PushButton_FeedbackMessage_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef PushButton_FeedbackMessage_TypeSupport TypeSupport;
                typedef PushButton_FeedbackMessage_DataWriter DataWriter;
                typedef PushButton_FeedbackMessage_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   goal_id_ ;
                push_button_interface::action::dds_::PushButton_Feedback_   feedback_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* PushButton_FeedbackMessage__get_typecode(void); /* Type code */

            DDS_SEQUENCE(PushButton_FeedbackMessage_Seq, PushButton_FeedbackMessage_);

            NDDSUSERDllExport
            RTIBool PushButton_FeedbackMessage__initialize(
                PushButton_FeedbackMessage_* self);

            NDDSUSERDllExport
            RTIBool PushButton_FeedbackMessage__initialize_ex(
                PushButton_FeedbackMessage_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool PushButton_FeedbackMessage__initialize_w_params(
                PushButton_FeedbackMessage_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void PushButton_FeedbackMessage__finalize(
                PushButton_FeedbackMessage_* self);

            NDDSUSERDllExport
            void PushButton_FeedbackMessage__finalize_ex(
                PushButton_FeedbackMessage_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void PushButton_FeedbackMessage__finalize_w_params(
                PushButton_FeedbackMessage_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void PushButton_FeedbackMessage__finalize_optional_members(
                PushButton_FeedbackMessage_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool PushButton_FeedbackMessage__copy(
                PushButton_FeedbackMessage_* dst,
                const PushButton_FeedbackMessage_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace push_button_interface  */

#endif /* PushButton_ */

