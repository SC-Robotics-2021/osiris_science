

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PushButton_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PushButton__1906255254_h
#define PushButton__1906255254_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace push_button_interface {
    namespace msg {
        namespace dds_ {

            extern const char *PushButton_TYPENAME;

            struct PushButton_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class PushButton_TypeSupport;
            class PushButton_DataWriter;
            class PushButton_DataReader;
            #endif

            class PushButton_ 
            {
              public:
                typedef struct PushButton_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef PushButton_TypeSupport TypeSupport;
                typedef PushButton_DataWriter DataWriter;
                typedef PushButton_DataReader DataReader;
                #endif

                DDS_Boolean   collect_sample_ ;
                DDS_Long   platform_height_ ;
                DDS_Boolean   microscope_ ;
                DDS_Boolean   flashlight_ ;
                DDS_Boolean   brush_ ;
                DDS_Boolean   water_pump_ ;
                DDS_Boolean   uv_camera_ ;
                DDS_Short   pump_pos_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* PushButton__get_typecode(void); /* Type code */

            DDS_SEQUENCE(PushButton_Seq, PushButton_);

            NDDSUSERDllExport
            RTIBool PushButton__initialize(
                PushButton_* self);

            NDDSUSERDllExport
            RTIBool PushButton__initialize_ex(
                PushButton_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool PushButton__initialize_w_params(
                PushButton_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void PushButton__finalize(
                PushButton_* self);

            NDDSUSERDllExport
            void PushButton__finalize_ex(
                PushButton_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void PushButton__finalize_w_params(
                PushButton_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void PushButton__finalize_optional_members(
                PushButton_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool PushButton__copy(
                PushButton_* dst,
                const PushButton_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace push_button_interface  */

#endif /* PushButton_ */

