
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PushButton_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "PushButton_Support.h"
#include "PushButton_Plugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace push_button_interface {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'PushButton_Goal_' support classes.

            Note: Only the #defined classes get defined
            */

            /* ----------------------------------------------------------------- */
            /* DDSDataWriter
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataWriter, TData
            */

            /* Requires */
            #define TTYPENAME   PushButton_Goal_TYPENAME

            /* Defines */
            #define TDataWriter PushButton_Goal_DataWriter
            #define TData       push_button_interface::action::dds_::PushButton_Goal_

            #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

            #undef TDataWriter
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* DDSDataReader
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataReader, TDataSeq, TData
            */

            /* Requires */
            #define TTYPENAME   PushButton_Goal_TYPENAME

            /* Defines */
            #define TDataReader PushButton_Goal_DataReader
            #define TDataSeq    PushButton_Goal_Seq
            #define TData       push_button_interface::action::dds_::PushButton_Goal_

            #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

            #undef TDataReader
            #undef TDataSeq
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* TypeSupport

            <<IMPLEMENTATION >>

            Requires:  TTYPENAME,
            TPlugin_new
            TPlugin_delete
            Defines:   TTypeSupport, TData, TDataReader, TDataWriter
            */

            /* Requires */
            #define TTYPENAME    PushButton_Goal_TYPENAME
            #define TPlugin_new  push_button_interface::action::dds_::PushButton_Goal_Plugin_new
            #define TPlugin_delete  push_button_interface::action::dds_::PushButton_Goal_Plugin_delete

            /* Defines */
            #define TTypeSupport PushButton_Goal_TypeSupport
            #define TData        push_button_interface::action::dds_::PushButton_Goal_
            #define TDataReader  PushButton_Goal_DataReader
            #define TDataWriter  PushButton_Goal_DataWriter
            #define TGENERATE_SER_CODE
            #define TGENERATE_TYPECODE

            #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

            #undef TTypeSupport
            #undef TData
            #undef TDataReader
            #undef TDataWriter
            #undef TGENERATE_TYPECODE
            #undef TGENERATE_SER_CODE
            #undef TTYPENAME
            #undef TPlugin_new
            #undef TPlugin_delete

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace push_button_interface  */
namespace push_button_interface {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'PushButton_SendGoal_Request_' support classes.

            Note: Only the #defined classes get defined
            */

            /* ----------------------------------------------------------------- */
            /* DDSDataWriter
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataWriter, TData
            */

            /* Requires */
            #define TTYPENAME   PushButton_SendGoal_Request_TYPENAME

            /* Defines */
            #define TDataWriter PushButton_SendGoal_Request_DataWriter
            #define TData       push_button_interface::action::dds_::PushButton_SendGoal_Request_

            #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

            #undef TDataWriter
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* DDSDataReader
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataReader, TDataSeq, TData
            */

            /* Requires */
            #define TTYPENAME   PushButton_SendGoal_Request_TYPENAME

            /* Defines */
            #define TDataReader PushButton_SendGoal_Request_DataReader
            #define TDataSeq    PushButton_SendGoal_Request_Seq
            #define TData       push_button_interface::action::dds_::PushButton_SendGoal_Request_

            #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

            #undef TDataReader
            #undef TDataSeq
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* TypeSupport

            <<IMPLEMENTATION >>

            Requires:  TTYPENAME,
            TPlugin_new
            TPlugin_delete
            Defines:   TTypeSupport, TData, TDataReader, TDataWriter
            */

            /* Requires */
            #define TTYPENAME    PushButton_SendGoal_Request_TYPENAME
            #define TPlugin_new  push_button_interface::action::dds_::PushButton_SendGoal_Request_Plugin_new
            #define TPlugin_delete  push_button_interface::action::dds_::PushButton_SendGoal_Request_Plugin_delete

            /* Defines */
            #define TTypeSupport PushButton_SendGoal_Request_TypeSupport
            #define TData        push_button_interface::action::dds_::PushButton_SendGoal_Request_
            #define TDataReader  PushButton_SendGoal_Request_DataReader
            #define TDataWriter  PushButton_SendGoal_Request_DataWriter
            #define TGENERATE_SER_CODE
            #define TGENERATE_TYPECODE

            #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

            #undef TTypeSupport
            #undef TData
            #undef TDataReader
            #undef TDataWriter
            #undef TGENERATE_TYPECODE
            #undef TGENERATE_SER_CODE
            #undef TTYPENAME
            #undef TPlugin_new
            #undef TPlugin_delete

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace push_button_interface  */
namespace push_button_interface {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'PushButton_SendGoal_Response_' support classes.

            Note: Only the #defined classes get defined
            */

            /* ----------------------------------------------------------------- */
            /* DDSDataWriter
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataWriter, TData
            */

            /* Requires */
            #define TTYPENAME   PushButton_SendGoal_Response_TYPENAME

            /* Defines */
            #define TDataWriter PushButton_SendGoal_Response_DataWriter
            #define TData       push_button_interface::action::dds_::PushButton_SendGoal_Response_

            #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

            #undef TDataWriter
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* DDSDataReader
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataReader, TDataSeq, TData
            */

            /* Requires */
            #define TTYPENAME   PushButton_SendGoal_Response_TYPENAME

            /* Defines */
            #define TDataReader PushButton_SendGoal_Response_DataReader
            #define TDataSeq    PushButton_SendGoal_Response_Seq
            #define TData       push_button_interface::action::dds_::PushButton_SendGoal_Response_

            #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

            #undef TDataReader
            #undef TDataSeq
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* TypeSupport

            <<IMPLEMENTATION >>

            Requires:  TTYPENAME,
            TPlugin_new
            TPlugin_delete
            Defines:   TTypeSupport, TData, TDataReader, TDataWriter
            */

            /* Requires */
            #define TTYPENAME    PushButton_SendGoal_Response_TYPENAME
            #define TPlugin_new  push_button_interface::action::dds_::PushButton_SendGoal_Response_Plugin_new
            #define TPlugin_delete  push_button_interface::action::dds_::PushButton_SendGoal_Response_Plugin_delete

            /* Defines */
            #define TTypeSupport PushButton_SendGoal_Response_TypeSupport
            #define TData        push_button_interface::action::dds_::PushButton_SendGoal_Response_
            #define TDataReader  PushButton_SendGoal_Response_DataReader
            #define TDataWriter  PushButton_SendGoal_Response_DataWriter
            #define TGENERATE_SER_CODE
            #define TGENERATE_TYPECODE

            #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

            #undef TTypeSupport
            #undef TData
            #undef TDataReader
            #undef TDataWriter
            #undef TGENERATE_TYPECODE
            #undef TGENERATE_SER_CODE
            #undef TTYPENAME
            #undef TPlugin_new
            #undef TPlugin_delete

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace push_button_interface  */
namespace push_button_interface {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'PushButton_Result_' support classes.

            Note: Only the #defined classes get defined
            */

            /* ----------------------------------------------------------------- */
            /* DDSDataWriter
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataWriter, TData
            */

            /* Requires */
            #define TTYPENAME   PushButton_Result_TYPENAME

            /* Defines */
            #define TDataWriter PushButton_Result_DataWriter
            #define TData       push_button_interface::action::dds_::PushButton_Result_

            #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

            #undef TDataWriter
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* DDSDataReader
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataReader, TDataSeq, TData
            */

            /* Requires */
            #define TTYPENAME   PushButton_Result_TYPENAME

            /* Defines */
            #define TDataReader PushButton_Result_DataReader
            #define TDataSeq    PushButton_Result_Seq
            #define TData       push_button_interface::action::dds_::PushButton_Result_

            #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

            #undef TDataReader
            #undef TDataSeq
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* TypeSupport

            <<IMPLEMENTATION >>

            Requires:  TTYPENAME,
            TPlugin_new
            TPlugin_delete
            Defines:   TTypeSupport, TData, TDataReader, TDataWriter
            */

            /* Requires */
            #define TTYPENAME    PushButton_Result_TYPENAME
            #define TPlugin_new  push_button_interface::action::dds_::PushButton_Result_Plugin_new
            #define TPlugin_delete  push_button_interface::action::dds_::PushButton_Result_Plugin_delete

            /* Defines */
            #define TTypeSupport PushButton_Result_TypeSupport
            #define TData        push_button_interface::action::dds_::PushButton_Result_
            #define TDataReader  PushButton_Result_DataReader
            #define TDataWriter  PushButton_Result_DataWriter
            #define TGENERATE_SER_CODE
            #define TGENERATE_TYPECODE

            #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

            #undef TTypeSupport
            #undef TData
            #undef TDataReader
            #undef TDataWriter
            #undef TGENERATE_TYPECODE
            #undef TGENERATE_SER_CODE
            #undef TTYPENAME
            #undef TPlugin_new
            #undef TPlugin_delete

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace push_button_interface  */
namespace push_button_interface {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'PushButton_GetResult_Request_' support classes.

            Note: Only the #defined classes get defined
            */

            /* ----------------------------------------------------------------- */
            /* DDSDataWriter
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataWriter, TData
            */

            /* Requires */
            #define TTYPENAME   PushButton_GetResult_Request_TYPENAME

            /* Defines */
            #define TDataWriter PushButton_GetResult_Request_DataWriter
            #define TData       push_button_interface::action::dds_::PushButton_GetResult_Request_

            #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

            #undef TDataWriter
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* DDSDataReader
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataReader, TDataSeq, TData
            */

            /* Requires */
            #define TTYPENAME   PushButton_GetResult_Request_TYPENAME

            /* Defines */
            #define TDataReader PushButton_GetResult_Request_DataReader
            #define TDataSeq    PushButton_GetResult_Request_Seq
            #define TData       push_button_interface::action::dds_::PushButton_GetResult_Request_

            #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

            #undef TDataReader
            #undef TDataSeq
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* TypeSupport

            <<IMPLEMENTATION >>

            Requires:  TTYPENAME,
            TPlugin_new
            TPlugin_delete
            Defines:   TTypeSupport, TData, TDataReader, TDataWriter
            */

            /* Requires */
            #define TTYPENAME    PushButton_GetResult_Request_TYPENAME
            #define TPlugin_new  push_button_interface::action::dds_::PushButton_GetResult_Request_Plugin_new
            #define TPlugin_delete  push_button_interface::action::dds_::PushButton_GetResult_Request_Plugin_delete

            /* Defines */
            #define TTypeSupport PushButton_GetResult_Request_TypeSupport
            #define TData        push_button_interface::action::dds_::PushButton_GetResult_Request_
            #define TDataReader  PushButton_GetResult_Request_DataReader
            #define TDataWriter  PushButton_GetResult_Request_DataWriter
            #define TGENERATE_SER_CODE
            #define TGENERATE_TYPECODE

            #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

            #undef TTypeSupport
            #undef TData
            #undef TDataReader
            #undef TDataWriter
            #undef TGENERATE_TYPECODE
            #undef TGENERATE_SER_CODE
            #undef TTYPENAME
            #undef TPlugin_new
            #undef TPlugin_delete

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace push_button_interface  */
namespace push_button_interface {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'PushButton_GetResult_Response_' support classes.

            Note: Only the #defined classes get defined
            */

            /* ----------------------------------------------------------------- */
            /* DDSDataWriter
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataWriter, TData
            */

            /* Requires */
            #define TTYPENAME   PushButton_GetResult_Response_TYPENAME

            /* Defines */
            #define TDataWriter PushButton_GetResult_Response_DataWriter
            #define TData       push_button_interface::action::dds_::PushButton_GetResult_Response_

            #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

            #undef TDataWriter
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* DDSDataReader
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataReader, TDataSeq, TData
            */

            /* Requires */
            #define TTYPENAME   PushButton_GetResult_Response_TYPENAME

            /* Defines */
            #define TDataReader PushButton_GetResult_Response_DataReader
            #define TDataSeq    PushButton_GetResult_Response_Seq
            #define TData       push_button_interface::action::dds_::PushButton_GetResult_Response_

            #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

            #undef TDataReader
            #undef TDataSeq
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* TypeSupport

            <<IMPLEMENTATION >>

            Requires:  TTYPENAME,
            TPlugin_new
            TPlugin_delete
            Defines:   TTypeSupport, TData, TDataReader, TDataWriter
            */

            /* Requires */
            #define TTYPENAME    PushButton_GetResult_Response_TYPENAME
            #define TPlugin_new  push_button_interface::action::dds_::PushButton_GetResult_Response_Plugin_new
            #define TPlugin_delete  push_button_interface::action::dds_::PushButton_GetResult_Response_Plugin_delete

            /* Defines */
            #define TTypeSupport PushButton_GetResult_Response_TypeSupport
            #define TData        push_button_interface::action::dds_::PushButton_GetResult_Response_
            #define TDataReader  PushButton_GetResult_Response_DataReader
            #define TDataWriter  PushButton_GetResult_Response_DataWriter
            #define TGENERATE_SER_CODE
            #define TGENERATE_TYPECODE

            #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

            #undef TTypeSupport
            #undef TData
            #undef TDataReader
            #undef TDataWriter
            #undef TGENERATE_TYPECODE
            #undef TGENERATE_SER_CODE
            #undef TTYPENAME
            #undef TPlugin_new
            #undef TPlugin_delete

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace push_button_interface  */
namespace push_button_interface {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'PushButton_Feedback_' support classes.

            Note: Only the #defined classes get defined
            */

            /* ----------------------------------------------------------------- */
            /* DDSDataWriter
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataWriter, TData
            */

            /* Requires */
            #define TTYPENAME   PushButton_Feedback_TYPENAME

            /* Defines */
            #define TDataWriter PushButton_Feedback_DataWriter
            #define TData       push_button_interface::action::dds_::PushButton_Feedback_

            #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

            #undef TDataWriter
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* DDSDataReader
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataReader, TDataSeq, TData
            */

            /* Requires */
            #define TTYPENAME   PushButton_Feedback_TYPENAME

            /* Defines */
            #define TDataReader PushButton_Feedback_DataReader
            #define TDataSeq    PushButton_Feedback_Seq
            #define TData       push_button_interface::action::dds_::PushButton_Feedback_

            #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

            #undef TDataReader
            #undef TDataSeq
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* TypeSupport

            <<IMPLEMENTATION >>

            Requires:  TTYPENAME,
            TPlugin_new
            TPlugin_delete
            Defines:   TTypeSupport, TData, TDataReader, TDataWriter
            */

            /* Requires */
            #define TTYPENAME    PushButton_Feedback_TYPENAME
            #define TPlugin_new  push_button_interface::action::dds_::PushButton_Feedback_Plugin_new
            #define TPlugin_delete  push_button_interface::action::dds_::PushButton_Feedback_Plugin_delete

            /* Defines */
            #define TTypeSupport PushButton_Feedback_TypeSupport
            #define TData        push_button_interface::action::dds_::PushButton_Feedback_
            #define TDataReader  PushButton_Feedback_DataReader
            #define TDataWriter  PushButton_Feedback_DataWriter
            #define TGENERATE_SER_CODE
            #define TGENERATE_TYPECODE

            #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

            #undef TTypeSupport
            #undef TData
            #undef TDataReader
            #undef TDataWriter
            #undef TGENERATE_TYPECODE
            #undef TGENERATE_SER_CODE
            #undef TTYPENAME
            #undef TPlugin_new
            #undef TPlugin_delete

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace push_button_interface  */
namespace push_button_interface {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'PushButton_FeedbackMessage_' support classes.

            Note: Only the #defined classes get defined
            */

            /* ----------------------------------------------------------------- */
            /* DDSDataWriter
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataWriter, TData
            */

            /* Requires */
            #define TTYPENAME   PushButton_FeedbackMessage_TYPENAME

            /* Defines */
            #define TDataWriter PushButton_FeedbackMessage_DataWriter
            #define TData       push_button_interface::action::dds_::PushButton_FeedbackMessage_

            #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

            #undef TDataWriter
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* DDSDataReader
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataReader, TDataSeq, TData
            */

            /* Requires */
            #define TTYPENAME   PushButton_FeedbackMessage_TYPENAME

            /* Defines */
            #define TDataReader PushButton_FeedbackMessage_DataReader
            #define TDataSeq    PushButton_FeedbackMessage_Seq
            #define TData       push_button_interface::action::dds_::PushButton_FeedbackMessage_

            #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

            #undef TDataReader
            #undef TDataSeq
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* TypeSupport

            <<IMPLEMENTATION >>

            Requires:  TTYPENAME,
            TPlugin_new
            TPlugin_delete
            Defines:   TTypeSupport, TData, TDataReader, TDataWriter
            */

            /* Requires */
            #define TTYPENAME    PushButton_FeedbackMessage_TYPENAME
            #define TPlugin_new  push_button_interface::action::dds_::PushButton_FeedbackMessage_Plugin_new
            #define TPlugin_delete  push_button_interface::action::dds_::PushButton_FeedbackMessage_Plugin_delete

            /* Defines */
            #define TTypeSupport PushButton_FeedbackMessage_TypeSupport
            #define TData        push_button_interface::action::dds_::PushButton_FeedbackMessage_
            #define TDataReader  PushButton_FeedbackMessage_DataReader
            #define TDataWriter  PushButton_FeedbackMessage_DataWriter
            #define TGENERATE_SER_CODE
            #define TGENERATE_TYPECODE

            #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

            #undef TTypeSupport
            #undef TData
            #undef TDataReader
            #undef TDataWriter
            #undef TGENERATE_TYPECODE
            #undef TGENERATE_SER_CODE
            #undef TTYPENAME
            #undef TPlugin_new
            #undef TPlugin_delete

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace push_button_interface  */

