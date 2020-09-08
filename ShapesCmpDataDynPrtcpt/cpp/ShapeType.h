

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ShapeType.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ShapeType_434673741_h
#define ShapeType_434673741_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

typedef enum ShapeFillKind
{
    SOLID_FILL ,      
    TRANSPARENT_FILL ,      
    HORIZONTAL_HATCH_FILL ,      
    VERTICAL_HATCH_FILL      
} ShapeFillKind;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* ShapeFillKind_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *ShapeFillKind_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *ShapeFillKind_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *ShapeFillKind_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(ShapeFillKindSeq, ShapeFillKind);

NDDSUSERDllExport
RTIBool ShapeFillKind_initialize(
    ShapeFillKind* self);

NDDSUSERDllExport
RTIBool ShapeFillKind_initialize_ex(
    ShapeFillKind* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool ShapeFillKind_initialize_w_params(
    ShapeFillKind* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool ShapeFillKind_finalize_w_return(
    ShapeFillKind* self);

NDDSUSERDllExport
void ShapeFillKind_finalize(
    ShapeFillKind* self);

NDDSUSERDllExport
void ShapeFillKind_finalize_ex(
    ShapeFillKind* self,RTIBool deletePointers);

NDDSUSERDllExport
void ShapeFillKind_finalize_w_params(
    ShapeFillKind* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ShapeFillKind_finalize_optional_members(
    ShapeFillKind* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool ShapeFillKind_copy(
    ShapeFillKind* dst,
    const ShapeFillKind* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *ShapeTypeTYPENAME;

}

struct ShapeTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class ShapeTypeTypeSupport;
class ShapeTypeDataWriter;
class ShapeTypeDataReader;
#endif
class ShapeType 
{
  public:
    typedef struct ShapeTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef ShapeTypeTypeSupport TypeSupport;
    typedef ShapeTypeDataWriter DataWriter;
    typedef ShapeTypeDataReader DataReader;
    #endif

    DDS_Char *   color ;
    DDS_Long   x ;
    DDS_Long   y ;
    DDS_Long   shapesize ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* ShapeType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *ShapeType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *ShapeType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *ShapeType_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(ShapeTypeSeq, ShapeType);

NDDSUSERDllExport
RTIBool ShapeType_initialize(
    ShapeType* self);

NDDSUSERDllExport
RTIBool ShapeType_initialize_ex(
    ShapeType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool ShapeType_initialize_w_params(
    ShapeType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool ShapeType_finalize_w_return(
    ShapeType* self);

NDDSUSERDllExport
void ShapeType_finalize(
    ShapeType* self);

NDDSUSERDllExport
void ShapeType_finalize_ex(
    ShapeType* self,RTIBool deletePointers);

NDDSUSERDllExport
void ShapeType_finalize_w_params(
    ShapeType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ShapeType_finalize_optional_members(
    ShapeType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool ShapeType_copy(
    ShapeType* dst,
    const ShapeType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *ShapeTypeExtendedTYPENAME;

}

struct ShapeTypeExtendedSeq;
#ifndef NDDS_STANDALONE_TYPE
class ShapeTypeExtendedTypeSupport;
class ShapeTypeExtendedDataWriter;
class ShapeTypeExtendedDataReader;
#endif
class ShapeTypeExtended 
: public ShapeType{
  public:
    typedef struct ShapeTypeExtendedSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef ShapeTypeExtendedTypeSupport TypeSupport;
    typedef ShapeTypeExtendedDataWriter DataWriter;
    typedef ShapeTypeExtendedDataReader DataReader;
    #endif

    ShapeFillKind   fillKind ;
    DDS_Float   angle ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* ShapeTypeExtended_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *ShapeTypeExtended_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *ShapeTypeExtended_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *ShapeTypeExtended_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(ShapeTypeExtendedSeq, ShapeTypeExtended);

NDDSUSERDllExport
RTIBool ShapeTypeExtended_initialize(
    ShapeTypeExtended* self);

NDDSUSERDllExport
RTIBool ShapeTypeExtended_initialize_ex(
    ShapeTypeExtended* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool ShapeTypeExtended_initialize_w_params(
    ShapeTypeExtended* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool ShapeTypeExtended_finalize_w_return(
    ShapeTypeExtended* self);

NDDSUSERDllExport
void ShapeTypeExtended_finalize(
    ShapeTypeExtended* self);

NDDSUSERDllExport
void ShapeTypeExtended_finalize_ex(
    ShapeTypeExtended* self,RTIBool deletePointers);

NDDSUSERDllExport
void ShapeTypeExtended_finalize_w_params(
    ShapeTypeExtended* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void ShapeTypeExtended_finalize_optional_members(
    ShapeTypeExtended* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool ShapeTypeExtended_copy(
    ShapeTypeExtended* dst,
    const ShapeTypeExtended* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<ShapeType> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<ShapeTypeExtended> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* ShapeType */

