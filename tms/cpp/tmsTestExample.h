

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from tmsTestExample.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef tmsTestExample_396845832_h
#define tmsTestExample_396845832_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

static const DDS_Char * const tms_TOPIC_ACTIVE_DIAGNOSTICS= "ActiveDiagnostics";
static const DDS_Char * const tms_TOPIC_AUTHORIZATION_TO_ENERGIZE_OUTCOME= "AuthorizationToEnergizeOutcome";
static const DDS_Char * const tms_TOPIC_AUTHORIZATION_TO_ENERGIZE_REQUEST= "AuthorizationToEnergizeRequest";
static const DDS_Char * const tms_TOPIC_AUTHORIZATION_TO_ENERGIZE_RESPONSE= "AuthorizationToEnergizeResponse";
static const DDS_Char * const tms_TOPIC_CONFIG_RESERVATION_STATE= "ConfigReservationState";
static const DDS_Char * const tms_TOPIC_COPY_CONFIG_REQUEST= "CopyConfigRequest";
static const DDS_Char * const tms_TOPIC_DC_DEVICE_POWER_MEASUREMENT_LIST= "DcDevicePowerMeasurementList";
static const DDS_Char * const tms_TOPIC_DC_LOAD_SHARING_REQUEST= "DcLoadSharingRequest";
static const DDS_Char * const tms_TOPIC_DC_LOAD_SHARING_STATUS= "DcLoadSharingStatus";
static const DDS_Char * const tms_TOPIC_DEVICE_ANNOUNCEMENT= "DeviceAnnouncement";
static const DDS_Char * const tms_TOPIC_DEVICE_CLOCK_STATUS= "DeviceClockStatus";
static const DDS_Char * const tms_TOPIC_DEVICE_GROUNDING= "DeviceGrounding";
static const DDS_Char * const tms_TOPIC_DEVICE_GROUNDING_STATUS= "DeviceGroundingStatus";
static const DDS_Char * const tms_TOPIC_DEVICE_PARAMETER_REQUEST= "DeviceParameterRequest";
static const DDS_Char * const tms_TOPIC_DEVICE_PARAMETER_STATUS= "DeviceParameterStatus";
static const DDS_Char * const tms_TOPIC_DEVICE_POWER_MEASUREMENT_LIST= "DevicePowerMeasurementList";
static const DDS_Char * const tms_TOPIC_DEVICE_POWER_PORT_LIST= "DevicePowerPortList";
static const DDS_Char * const tms_TOPIC_DEVICE_POWER_STATUS_LIST= "DevicePowerStatusList";
static const DDS_Char * const tms_TOPIC_DISCOVERED_CONNECTION_LIST= "DiscoveredConnectionList";
static const DDS_Char * const tms_TOPIC_ENGINE_STATE= "EngineState";
static const DDS_Char * const tms_TOPIC_FINGERPRINT_NICKNAME= "FingerprintNickname";
static const DDS_Char * const tms_TOPIC_FINGERPRINT_NICKNAME_REQUEST= "FingerprintNicknameRequest";
static const DDS_Char * const tms_TOPIC_GET_CONFIG_CONTENTS_REQUEST= "GetConfigContentsRequest";
static const DDS_Char * const tms_TOPIC_GET_CONFIG_DC_LOAD_SHARING_RESPONSE= "GetConfigDcLoadSharingResponse";
static const DDS_Char * const tms_TOPIC_GET_CONFIG_DEVICE_PARAMETER_RESPONSE= "GetConfigDeviceParameterResponse";
static const DDS_Char * const tms_TOPIC_GET_CONFIG_GROUNDING_CIRCUIT_RESPONSE= "GetConfigGroundingCircuitResponse";
static const DDS_Char * const tms_TOPIC_GET_CONFIG_LOAD_SHARING_RESPONSE= "GetConfigLoadSharingResponse";
static const DDS_Char * const tms_TOPIC_GET_CONFIG_POWER_SWITCH_RESPONSE= "GetConfigPowerSwitchResponse";
static const DDS_Char * const tms_TOPIC_GET_CONFIG_SOURCE_TRANSITION_RESPONSE= "GetConfigSourceTransitionResponse";
static const DDS_Char * const tms_TOPIC_GET_CONFIG_STORAGE_CONTROL_RESPONSE= "GetConfigStorageControlResponse";
static const DDS_Char * const tms_TOPIC_GROUNDING_CIRCUIT_REQUEST= "GroundingCircuitRequest";
static const DDS_Char * const tms_TOPIC_HEARTBEAT= "Heartbeat";
static const DDS_Char * const tms_TOPIC_LOAD_SHARING_REQUEST= "LoadSharingRequest";
static const DDS_Char * const tms_TOPIC_LOAD_SHARING_STATUS= "LoadSharingStatus";
static const DDS_Char * const tms_TOPIC_MICROGRID_CONNECTION_LIST= "MicrogridConnectionList";
static const DDS_Char * const tms_TOPIC_MICROGRID_MEMBERSHIP_OUTCOME= "MicrogridMembershipOutcome";
static const DDS_Char * const tms_TOPIC_MICROGRID_MEMBERSHIP_REQUEST= "MicrogridMembershipRequest";
static const DDS_Char * const tms_TOPIC_OPERATOR_CONNECTION_LIST= "OperatorConnectionList";
static const DDS_Char * const tms_TOPIC_OPERATOR_INTENT_REQUEST= "OperatorIntentRequest";
static const DDS_Char * const tms_TOPIC_OPERATOR_INTENT_STATE= "OperatorIntentState";
static const DDS_Char * const tms_TOPIC_POWER_SWITCH_REQUEST= "PowerSwitchRequest";
static const DDS_Char * const tms_TOPIC_RELEASE_CONFIG_REQUEST= "ReleaseConfigRequest";
static const DDS_Char * const tms_TOPIC_REQUEST_RESPONSE= "RequestResponse";
static const DDS_Char * const tms_TOPIC_RESERVE_CONFIG_REPLY= "ReserveConfigReply";
static const DDS_Char * const tms_TOPIC_RESERVE_CONFIG_REQUEST= "ReserveConfigRequest";
static const DDS_Char * const tms_TOPIC_SOURCE_TRANSITION_REQUEST= "SourceTransitionRequest";
static const DDS_Char * const tms_TOPIC_SOURCE_TRANSITION_STATE= "SourceTransitionState";
static const DDS_Char * const tms_TOPIC_STANDARD_CONFIG_MASTER= "StandardConfigMaster";
static const DDS_Char * const tms_TOPIC_STORAGE_CONTROL_REQUEST= "StorageControlRequest";
static const DDS_Char * const tms_TOPIC_STORAGE_CONTROL_STATUS= "StorageControlStatus";
static const DDS_Char * const tms_TOPIC_STORAGE_INFO= "StorageInfo";
static const DDS_Char * const tms_TOPIC_STORAGE_STATE= "StorageState";
static const DDS_UnsignedLong tms_MINLEN_TopicName= 1;
static const DDS_UnsignedLong tms_MAXLEN_TopicName= 64;
typedef    DDS_Char *   tms_TopicName ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_TopicName_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_TopicName_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_TopicName_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_TopicName_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_TopicNameSeq, tms_TopicName);

NDDSUSERDllExport
RTIBool tms_TopicName_initialize(
    tms_TopicName* self);

NDDSUSERDllExport
RTIBool tms_TopicName_initialize_ex(
    tms_TopicName* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_TopicName_initialize_w_params(
    tms_TopicName* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_TopicName_finalize_w_return(
    tms_TopicName* self);

NDDSUSERDllExport
void tms_TopicName_finalize(
    tms_TopicName* self);

NDDSUSERDllExport
void tms_TopicName_finalize_ex(
    tms_TopicName* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_TopicName_finalize_w_params(
    tms_TopicName* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_TopicName_finalize_optional_members(
    tms_TopicName* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_TopicName_copy(
    tms_TopicName* dst,
    const tms_TopicName* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_UnsignedLong tms_MINLEN_TopicList= 0;
static const DDS_UnsignedLong tms_MAXLEN_TopicList= 8;
typedef     DDS_StringSeq  tms_TopicList ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_TopicList_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_TopicList_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_TopicList_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_TopicList_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_TopicListSeq, tms_TopicList);

NDDSUSERDllExport
RTIBool tms_TopicList_initialize(
    tms_TopicList* self);

NDDSUSERDllExport
RTIBool tms_TopicList_initialize_ex(
    tms_TopicList* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_TopicList_initialize_w_params(
    tms_TopicList* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_TopicList_finalize_w_return(
    tms_TopicList* self);

NDDSUSERDllExport
void tms_TopicList_finalize(
    tms_TopicList* self);

NDDSUSERDllExport
void tms_TopicList_finalize_ex(
    tms_TopicList* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_TopicList_finalize_w_params(
    tms_TopicList* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_TopicList_finalize_optional_members(
    tms_TopicList* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_TopicList_copy(
    tms_TopicList* dst,
    const tms_TopicList* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_Point2DTYPENAME;

}

struct tms_Point2DSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_Point2DTypeSupport;
class tms_Point2DDataWriter;
class tms_Point2DDataReader;
#endif
class tms_Point2D 
{
  public:
    typedef struct tms_Point2DSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_Point2DTypeSupport TypeSupport;
    typedef tms_Point2DDataWriter DataWriter;
    typedef tms_Point2DDataReader DataReader;
    #endif

    DDS_Float   x ;
    DDS_Float   y ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_Point2D_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_Point2D_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_Point2D_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_Point2D_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_Point2DSeq, tms_Point2D);

NDDSUSERDllExport
RTIBool tms_Point2D_initialize(
    tms_Point2D* self);

NDDSUSERDllExport
RTIBool tms_Point2D_initialize_ex(
    tms_Point2D* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_Point2D_initialize_w_params(
    tms_Point2D* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_Point2D_finalize_w_return(
    tms_Point2D* self);

NDDSUSERDllExport
void tms_Point2D_finalize(
    tms_Point2D* self);

NDDSUSERDllExport
void tms_Point2D_finalize_ex(
    tms_Point2D* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_Point2D_finalize_w_params(
    tms_Point2D* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_Point2D_finalize_optional_members(
    tms_Point2D* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_Point2D_copy(
    tms_Point2D* dst,
    const tms_Point2D* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_UnsignedLong tms_MINLEN_points= 0;
static const DDS_UnsignedLong tms_MAXLEN_points= 21;
extern "C" {

    extern const char *tms_Curve2DTYPENAME;

}

struct tms_Curve2DSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_Curve2DTypeSupport;
class tms_Curve2DDataWriter;
class tms_Curve2DDataReader;
#endif
class tms_Curve2D 
{
  public:
    typedef struct tms_Curve2DSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_Curve2DTypeSupport TypeSupport;
    typedef tms_Curve2DDataWriter DataWriter;
    typedef tms_Curve2DDataReader DataReader;
    #endif

    tms_Point2DSeq  points ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_Curve2D_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_Curve2D_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_Curve2D_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_Curve2D_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_Curve2DSeq, tms_Curve2D);

NDDSUSERDllExport
RTIBool tms_Curve2D_initialize(
    tms_Curve2D* self);

NDDSUSERDllExport
RTIBool tms_Curve2D_initialize_ex(
    tms_Curve2D* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_Curve2D_initialize_w_params(
    tms_Curve2D* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_Curve2D_finalize_w_return(
    tms_Curve2D* self);

NDDSUSERDllExport
void tms_Curve2D_finalize(
    tms_Curve2D* self);

NDDSUSERDllExport
void tms_Curve2D_finalize_ex(
    tms_Curve2D* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_Curve2D_finalize_w_params(
    tms_Curve2D* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_Curve2D_finalize_optional_members(
    tms_Curve2D* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_Curve2D_copy(
    tms_Curve2D* dst,
    const tms_Curve2D* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_UnsignedLong tms_MINLEN_PublicKey= 1;
static const DDS_UnsignedLong tms_MAXLEN_PublicKey= 32*1024;
typedef     DDS_OctetSeq  tms_PublicKey ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_PublicKey_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_PublicKey_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PublicKey_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PublicKey_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_PublicKeySeq, tms_PublicKey);

NDDSUSERDllExport
RTIBool tms_PublicKey_initialize(
    tms_PublicKey* self);

NDDSUSERDllExport
RTIBool tms_PublicKey_initialize_ex(
    tms_PublicKey* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_PublicKey_initialize_w_params(
    tms_PublicKey* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_PublicKey_finalize_w_return(
    tms_PublicKey* self);

NDDSUSERDllExport
void tms_PublicKey_finalize(
    tms_PublicKey* self);

NDDSUSERDllExport
void tms_PublicKey_finalize_ex(
    tms_PublicKey* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_PublicKey_finalize_w_params(
    tms_PublicKey* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_PublicKey_finalize_optional_members(
    tms_PublicKey* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_PublicKey_copy(
    tms_PublicKey* dst,
    const tms_PublicKey* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_UnsignedLong tms_LEN_Fingerprint= 32;
typedef    DDS_Octet   tms_Fingerprint [(tms_LEN_Fingerprint)];
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_Fingerprint_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_Fingerprint_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_Fingerprint_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_Fingerprint_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE_NO_GET(tms_FingerprintSeq, tms_Fingerprint);

NDDSUSERDllExport
RTIBool tms_Fingerprint_initialize(
    tms_Fingerprint* self);

NDDSUSERDllExport
RTIBool tms_Fingerprint_initialize_ex(
    tms_Fingerprint* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_Fingerprint_initialize_w_params(
    tms_Fingerprint* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_Fingerprint_finalize_w_return(
    tms_Fingerprint* self);

NDDSUSERDllExport
void tms_Fingerprint_finalize(
    tms_Fingerprint* self);

NDDSUSERDllExport
void tms_Fingerprint_finalize_ex(
    tms_Fingerprint* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_Fingerprint_finalize_w_params(
    tms_Fingerprint* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_Fingerprint_finalize_optional_members(
    tms_Fingerprint* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_Fingerprint_copy(
    tms_Fingerprint* dst,
    const tms_Fingerprint* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_Char * const tms_FINGERPRINT_INVALID= "00000000000000000000000000000000";
static const DDS_UnsignedLong tms_MINLEN_Signature= 1;
static const DDS_UnsignedLong tms_MAXLEN_Signature= 9999;
typedef     DDS_OctetSeq  tms_Signature ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_Signature_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_Signature_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_Signature_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_Signature_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_SignatureSeq, tms_Signature);

NDDSUSERDllExport
RTIBool tms_Signature_initialize(
    tms_Signature* self);

NDDSUSERDllExport
RTIBool tms_Signature_initialize_ex(
    tms_Signature* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_Signature_initialize_w_params(
    tms_Signature* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_Signature_finalize_w_return(
    tms_Signature* self);

NDDSUSERDllExport
void tms_Signature_finalize(
    tms_Signature* self);

NDDSUSERDllExport
void tms_Signature_finalize_ex(
    tms_Signature* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_Signature_finalize_w_params(
    tms_Signature* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_Signature_finalize_optional_members(
    tms_Signature* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_Signature_copy(
    tms_Signature* dst,
    const tms_Signature* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_ClockMonotonicTYPENAME;

}

struct tms_ClockMonotonicSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_ClockMonotonicTypeSupport;
class tms_ClockMonotonicDataWriter;
class tms_ClockMonotonicDataReader;
#endif
class tms_ClockMonotonic 
{
  public:
    typedef struct tms_ClockMonotonicSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_ClockMonotonicTypeSupport TypeSupport;
    typedef tms_ClockMonotonicDataWriter DataWriter;
    typedef tms_ClockMonotonicDataReader DataReader;
    #endif

    DDS_UnsignedLong   seconds ;
    DDS_UnsignedLong   nanoseconds ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_ClockMonotonic_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_ClockMonotonic_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_ClockMonotonic_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_ClockMonotonic_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_ClockMonotonicSeq, tms_ClockMonotonic);

NDDSUSERDllExport
RTIBool tms_ClockMonotonic_initialize(
    tms_ClockMonotonic* self);

NDDSUSERDllExport
RTIBool tms_ClockMonotonic_initialize_ex(
    tms_ClockMonotonic* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_ClockMonotonic_initialize_w_params(
    tms_ClockMonotonic* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_ClockMonotonic_finalize_w_return(
    tms_ClockMonotonic* self);

NDDSUSERDllExport
void tms_ClockMonotonic_finalize(
    tms_ClockMonotonic* self);

NDDSUSERDllExport
void tms_ClockMonotonic_finalize_ex(
    tms_ClockMonotonic* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_ClockMonotonic_finalize_w_params(
    tms_ClockMonotonic* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_ClockMonotonic_finalize_optional_members(
    tms_ClockMonotonic* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_ClockMonotonic_copy(
    tms_ClockMonotonic* dst,
    const tms_ClockMonotonic* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_ClockRealtimeTYPENAME;

}

struct tms_ClockRealtimeSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_ClockRealtimeTypeSupport;
class tms_ClockRealtimeDataWriter;
class tms_ClockRealtimeDataReader;
#endif
class tms_ClockRealtime 
{
  public:
    typedef struct tms_ClockRealtimeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_ClockRealtimeTypeSupport TypeSupport;
    typedef tms_ClockRealtimeDataWriter DataWriter;
    typedef tms_ClockRealtimeDataReader DataReader;
    #endif

    DDS_UnsignedShort   epoch ;
    DDS_UnsignedLong   seconds ;
    DDS_UnsignedLong   nanoseconds ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_ClockRealtime_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_ClockRealtime_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_ClockRealtime_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_ClockRealtime_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_ClockRealtimeSeq, tms_ClockRealtime);

NDDSUSERDllExport
RTIBool tms_ClockRealtime_initialize(
    tms_ClockRealtime* self);

NDDSUSERDllExport
RTIBool tms_ClockRealtime_initialize_ex(
    tms_ClockRealtime* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_ClockRealtime_initialize_w_params(
    tms_ClockRealtime* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_ClockRealtime_finalize_w_return(
    tms_ClockRealtime* self);

NDDSUSERDllExport
void tms_ClockRealtime_finalize(
    tms_ClockRealtime* self);

NDDSUSERDllExport
void tms_ClockRealtime_finalize_ex(
    tms_ClockRealtime* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_ClockRealtime_finalize_w_params(
    tms_ClockRealtime* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_ClockRealtime_finalize_optional_members(
    tms_ClockRealtime* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_ClockRealtime_copy(
    tms_ClockRealtime* dst,
    const tms_ClockRealtime* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum tms_ClockMonotonicPersistenceType
{
    CMPT_UNKNOWN ,      
    CMPT_RESET ,      
    CMPT_ACCUMULATE ,      
    CMPT_OTHER      
} tms_ClockMonotonicPersistenceType;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_ClockMonotonicPersistenceType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_ClockMonotonicPersistenceType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_ClockMonotonicPersistenceType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_ClockMonotonicPersistenceType_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_ClockMonotonicPersistenceTypeSeq, tms_ClockMonotonicPersistenceType);

NDDSUSERDllExport
RTIBool tms_ClockMonotonicPersistenceType_initialize(
    tms_ClockMonotonicPersistenceType* self);

NDDSUSERDllExport
RTIBool tms_ClockMonotonicPersistenceType_initialize_ex(
    tms_ClockMonotonicPersistenceType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_ClockMonotonicPersistenceType_initialize_w_params(
    tms_ClockMonotonicPersistenceType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_ClockMonotonicPersistenceType_finalize_w_return(
    tms_ClockMonotonicPersistenceType* self);

NDDSUSERDllExport
void tms_ClockMonotonicPersistenceType_finalize(
    tms_ClockMonotonicPersistenceType* self);

NDDSUSERDllExport
void tms_ClockMonotonicPersistenceType_finalize_ex(
    tms_ClockMonotonicPersistenceType* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_ClockMonotonicPersistenceType_finalize_w_params(
    tms_ClockMonotonicPersistenceType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_ClockMonotonicPersistenceType_finalize_optional_members(
    tms_ClockMonotonicPersistenceType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_ClockMonotonicPersistenceType_copy(
    tms_ClockMonotonicPersistenceType* dst,
    const tms_ClockMonotonicPersistenceType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_ClockStatusTYPENAME;

}

struct tms_ClockStatusSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_ClockStatusTypeSupport;
class tms_ClockStatusDataWriter;
class tms_ClockStatusDataReader;
#endif
class tms_ClockStatus 
{
  public:
    typedef struct tms_ClockStatusSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_ClockStatusTypeSupport TypeSupport;
    typedef tms_ClockStatusDataWriter DataWriter;
    typedef tms_ClockStatusDataReader DataReader;
    #endif

    tms_Fingerprint   deviceId ;
    tms_ClockMonotonic   monotonic ;
    tms_ClockMonotonicPersistenceType   monotonicPersistence ;
    tms_ClockRealtime   realtime ;
    DDS_Octet   realtimeSource ;
    tms_ClockRealtime   realtimeSetTime ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_ClockStatus_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_ClockStatus_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_ClockStatus_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_ClockStatus_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_ClockStatusSeq, tms_ClockStatus);

NDDSUSERDllExport
RTIBool tms_ClockStatus_initialize(
    tms_ClockStatus* self);

NDDSUSERDllExport
RTIBool tms_ClockStatus_initialize_ex(
    tms_ClockStatus* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_ClockStatus_initialize_w_params(
    tms_ClockStatus* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_ClockStatus_finalize_w_return(
    tms_ClockStatus* self);

NDDSUSERDllExport
void tms_ClockStatus_finalize(
    tms_ClockStatus* self);

NDDSUSERDllExport
void tms_ClockStatus_finalize_ex(
    tms_ClockStatus* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_ClockStatus_finalize_w_params(
    tms_ClockStatus* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_ClockStatus_finalize_optional_members(
    tms_ClockStatus* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_ClockStatus_copy(
    tms_ClockStatus* dst,
    const tms_ClockStatus* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_Octet tms_CLOCK_ATOMIC= 0x10;
static const DDS_Octet tms_CLOCK_GPS= 0x20;
static const DDS_Octet tms_CLOCK_RADIO= 0x30;
static const DDS_Octet tms_CLOCK_PTP= 0x40;
static const DDS_Octet tms_CLOCK_NTP= 0X50;
static const DDS_Octet tms_CLOCK_HAND= 0X60;
static const DDS_Octet tms_CLOCK_OTHER= 0X90;
static const DDS_Octet tms_CLOCK_INTERNAL= 0XA0;
extern "C" {

    extern const char *tms_SampleIdTYPENAME;

}

struct tms_SampleIdSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_SampleIdTypeSupport;
class tms_SampleIdDataWriter;
class tms_SampleIdDataReader;
#endif
class tms_SampleId 
{
  public:
    typedef struct tms_SampleIdSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_SampleIdTypeSupport TypeSupport;
    typedef tms_SampleIdDataWriter DataWriter;
    typedef tms_SampleIdDataReader DataReader;
    #endif

    tms_Fingerprint   deviceId ;
    DDS_UnsignedLongLong   sequenceNumber ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_SampleId_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_SampleId_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_SampleId_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_SampleId_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_SampleIdSeq, tms_SampleId);

NDDSUSERDllExport
RTIBool tms_SampleId_initialize(
    tms_SampleId* self);

NDDSUSERDllExport
RTIBool tms_SampleId_initialize_ex(
    tms_SampleId* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_SampleId_initialize_w_params(
    tms_SampleId* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_SampleId_finalize_w_return(
    tms_SampleId* self);

NDDSUSERDllExport
void tms_SampleId_finalize(
    tms_SampleId* self);

NDDSUSERDllExport
void tms_SampleId_finalize_ex(
    tms_SampleId* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_SampleId_finalize_w_params(
    tms_SampleId* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_SampleId_finalize_optional_members(
    tms_SampleId* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_SampleId_copy(
    tms_SampleId* dst,
    const tms_SampleId* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_UnsignedLong tms_MINLEN_reason= 0;
static const DDS_UnsignedLong tms_MAXLEN_reason= 32;
extern "C" {

    extern const char *tms_ReplyStatusTYPENAME;

}

struct tms_ReplyStatusSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_ReplyStatusTypeSupport;
class tms_ReplyStatusDataWriter;
class tms_ReplyStatusDataReader;
#endif
class tms_ReplyStatus 
{
  public:
    typedef struct tms_ReplyStatusSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_ReplyStatusTypeSupport TypeSupport;
    typedef tms_ReplyStatusDataWriter DataWriter;
    typedef tms_ReplyStatusDataReader DataReader;
    #endif

    DDS_UnsignedLong   code ;
    DDS_Char *   reason ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_ReplyStatus_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_ReplyStatus_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_ReplyStatus_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_ReplyStatus_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_ReplyStatusSeq, tms_ReplyStatus);

NDDSUSERDllExport
RTIBool tms_ReplyStatus_initialize(
    tms_ReplyStatus* self);

NDDSUSERDllExport
RTIBool tms_ReplyStatus_initialize_ex(
    tms_ReplyStatus* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_ReplyStatus_initialize_w_params(
    tms_ReplyStatus* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_ReplyStatus_finalize_w_return(
    tms_ReplyStatus* self);

NDDSUSERDllExport
void tms_ReplyStatus_finalize(
    tms_ReplyStatus* self);

NDDSUSERDllExport
void tms_ReplyStatus_finalize_ex(
    tms_ReplyStatus* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_ReplyStatus_finalize_w_params(
    tms_ReplyStatus* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_ReplyStatus_finalize_optional_members(
    tms_ReplyStatus* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_ReplyStatus_copy(
    tms_ReplyStatus* dst,
    const tms_ReplyStatus* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_UnsignedLong tms_REPLY_OK= 200;
static const DDS_UnsignedLong tms_REPLY_BAD_REQUEST= 400;
static const DDS_UnsignedLong tms_REPLY_METHOD_NOT_ALLOWED= 405;
static const DDS_UnsignedLong tms_REPLY_CONFLICT= 409;
static const DDS_UnsignedLong tms_REPLY_GONE= 410;
static const DDS_UnsignedLong tms_REPLY_PRECONDITION_FAILED= 412;
static const DDS_UnsignedLong tms_REPLY_REQUEST_ENTITY_TOO_LARGE= 413;
static const DDS_UnsignedLong tms_REPLY_INTERNAL_SERVER_ERROR= 500;
static const DDS_UnsignedLong tms_REPLY_NOT_IMPLEMENTED= 501;
static const DDS_UnsignedLong tms_REPLY_SERVICE_UNAVAILABLE= 503;
static const DDS_UnsignedLong tms_REPLY_PENDING_AUTHORIZATION= 600;
extern "C" {

    extern const char *tms_RequestResponseTYPENAME;

}

struct tms_RequestResponseSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_RequestResponseTypeSupport;
class tms_RequestResponseDataWriter;
class tms_RequestResponseDataReader;
#endif
class tms_RequestResponse 
{
  public:
    typedef struct tms_RequestResponseSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_RequestResponseTypeSupport TypeSupport;
    typedef tms_RequestResponseDataWriter DataWriter;
    typedef tms_RequestResponseDataReader DataReader;
    #endif

    tms_SampleId   relatedRequestId ;
    tms_ReplyStatus   status ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_RequestResponse_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_RequestResponse_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_RequestResponse_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_RequestResponse_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_RequestResponseSeq, tms_RequestResponse);

NDDSUSERDllExport
RTIBool tms_RequestResponse_initialize(
    tms_RequestResponse* self);

NDDSUSERDllExport
RTIBool tms_RequestResponse_initialize_ex(
    tms_RequestResponse* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_RequestResponse_initialize_w_params(
    tms_RequestResponse* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_RequestResponse_finalize_w_return(
    tms_RequestResponse* self);

NDDSUSERDllExport
void tms_RequestResponse_finalize(
    tms_RequestResponse* self);

NDDSUSERDllExport
void tms_RequestResponse_finalize_ex(
    tms_RequestResponse* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_RequestResponse_finalize_w_params(
    tms_RequestResponse* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_RequestResponse_finalize_optional_members(
    tms_RequestResponse* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_RequestResponse_copy(
    tms_RequestResponse* dst,
    const tms_RequestResponse* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_UnsignedLong tms_MAXLEN_PARAMETER_NAME= 32;
static const DDS_UnsignedLong tms_MAXLEN_PARAMETER_UNITS= 16;
static const DDS_UnsignedLong tms_MAX_PARAMETERS= 128;
static const DDS_UnsignedLong tms_MINLEN_name= 0;
static const DDS_UnsignedLong tms_MAXLEN_name= (tms_MAXLEN_PARAMETER_NAME);
static const DDS_UnsignedLong tms_MINLEN_units= 0;
static const DDS_UnsignedLong tms_MAXLEN_units= (tms_MAXLEN_PARAMETER_UNITS);
extern "C" {

    extern const char *tms_ParameterMetadataTYPENAME;

}

struct tms_ParameterMetadataSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_ParameterMetadataTypeSupport;
class tms_ParameterMetadataDataWriter;
class tms_ParameterMetadataDataReader;
#endif
class tms_ParameterMetadata 
{
  public:
    typedef struct tms_ParameterMetadataSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_ParameterMetadataTypeSupport TypeSupport;
    typedef tms_ParameterMetadataDataWriter DataWriter;
    typedef tms_ParameterMetadataDataReader DataReader;
    #endif

    DDS_Char *   name ;
    DDS_Char *   units ;
    DDS_Float   nominalMinValue ;
    DDS_Float   nominalMaxValue ;
    DDS_Float   hardMinValue ;
    DDS_Float   hardMaxValue ;
    DDS_Float   resolution ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_ParameterMetadata_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_ParameterMetadata_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_ParameterMetadata_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_ParameterMetadata_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_ParameterMetadataSeq, tms_ParameterMetadata);

NDDSUSERDllExport
RTIBool tms_ParameterMetadata_initialize(
    tms_ParameterMetadata* self);

NDDSUSERDllExport
RTIBool tms_ParameterMetadata_initialize_ex(
    tms_ParameterMetadata* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_ParameterMetadata_initialize_w_params(
    tms_ParameterMetadata* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_ParameterMetadata_finalize_w_return(
    tms_ParameterMetadata* self);

NDDSUSERDllExport
void tms_ParameterMetadata_finalize(
    tms_ParameterMetadata* self);

NDDSUSERDllExport
void tms_ParameterMetadata_finalize_ex(
    tms_ParameterMetadata* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_ParameterMetadata_finalize_w_params(
    tms_ParameterMetadata* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_ParameterMetadata_finalize_optional_members(
    tms_ParameterMetadata* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_ParameterMetadata_copy(
    tms_ParameterMetadata* dst,
    const tms_ParameterMetadata* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_ParameterValueTYPENAME;

}

struct tms_ParameterValueSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_ParameterValueTypeSupport;
class tms_ParameterValueDataWriter;
class tms_ParameterValueDataReader;
#endif
class tms_ParameterValue 
{
  public:
    typedef struct tms_ParameterValueSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_ParameterValueTypeSupport TypeSupport;
    typedef tms_ParameterValueDataWriter DataWriter;
    typedef tms_ParameterValueDataReader DataReader;
    #endif

    DDS_Char *   name ;
    DDS_Float   value ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_ParameterValue_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_ParameterValue_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_ParameterValue_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_ParameterValue_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_ParameterValueSeq, tms_ParameterValue);

NDDSUSERDllExport
RTIBool tms_ParameterValue_initialize(
    tms_ParameterValue* self);

NDDSUSERDllExport
RTIBool tms_ParameterValue_initialize_ex(
    tms_ParameterValue* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_ParameterValue_initialize_w_params(
    tms_ParameterValue* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_ParameterValue_finalize_w_return(
    tms_ParameterValue* self);

NDDSUSERDllExport
void tms_ParameterValue_finalize(
    tms_ParameterValue* self);

NDDSUSERDllExport
void tms_ParameterValue_finalize_ex(
    tms_ParameterValue* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_ParameterValue_finalize_w_params(
    tms_ParameterValue* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_ParameterValue_finalize_optional_members(
    tms_ParameterValue* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_ParameterValue_copy(
    tms_ParameterValue* dst,
    const tms_ParameterValue* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef    DDS_UnsignedShort   tms_ConfigId ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_ConfigId_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_ConfigId_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_ConfigId_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_ConfigId_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_ConfigIdSeq, tms_ConfigId);

NDDSUSERDllExport
RTIBool tms_ConfigId_initialize(
    tms_ConfigId* self);

NDDSUSERDllExport
RTIBool tms_ConfigId_initialize_ex(
    tms_ConfigId* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_ConfigId_initialize_w_params(
    tms_ConfigId* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_ConfigId_finalize_w_return(
    tms_ConfigId* self);

NDDSUSERDllExport
void tms_ConfigId_finalize(
    tms_ConfigId* self);

NDDSUSERDllExport
void tms_ConfigId_finalize_ex(
    tms_ConfigId* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_ConfigId_finalize_w_params(
    tms_ConfigId* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_ConfigId_finalize_optional_members(
    tms_ConfigId* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_ConfigId_copy(
    tms_ConfigId* dst,
    const tms_ConfigId* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_UnsignedLong tms_MINLEN_parameters= 0;
static const DDS_UnsignedLong tms_MAXLEN_parameters= (tms_MAX_PARAMETERS);
extern "C" {

    extern const char *tms_DeviceParameterRequestTYPENAME;

}

struct tms_DeviceParameterRequestSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_DeviceParameterRequestTypeSupport;
class tms_DeviceParameterRequestDataWriter;
class tms_DeviceParameterRequestDataReader;
#endif
class tms_DeviceParameterRequest 
{
  public:
    typedef struct tms_DeviceParameterRequestSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_DeviceParameterRequestTypeSupport TypeSupport;
    typedef tms_DeviceParameterRequestDataWriter DataWriter;
    typedef tms_DeviceParameterRequestDataReader DataReader;
    #endif

    tms_SampleId   requestId ;
    tms_Fingerprint   deviceId ;
    DDS_UnsignedShort   config ;
    tms_ParameterValueSeq  parameters ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_DeviceParameterRequest_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_DeviceParameterRequest_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DeviceParameterRequest_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DeviceParameterRequest_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_DeviceParameterRequestSeq, tms_DeviceParameterRequest);

NDDSUSERDllExport
RTIBool tms_DeviceParameterRequest_initialize(
    tms_DeviceParameterRequest* self);

NDDSUSERDllExport
RTIBool tms_DeviceParameterRequest_initialize_ex(
    tms_DeviceParameterRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_DeviceParameterRequest_initialize_w_params(
    tms_DeviceParameterRequest* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_DeviceParameterRequest_finalize_w_return(
    tms_DeviceParameterRequest* self);

NDDSUSERDllExport
void tms_DeviceParameterRequest_finalize(
    tms_DeviceParameterRequest* self);

NDDSUSERDllExport
void tms_DeviceParameterRequest_finalize_ex(
    tms_DeviceParameterRequest* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_DeviceParameterRequest_finalize_w_params(
    tms_DeviceParameterRequest* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_DeviceParameterRequest_finalize_optional_members(
    tms_DeviceParameterRequest* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_DeviceParameterRequest_copy(
    tms_DeviceParameterRequest* dst,
    const tms_DeviceParameterRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_DeviceParameterStatusTYPENAME;

}

struct tms_DeviceParameterStatusSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_DeviceParameterStatusTypeSupport;
class tms_DeviceParameterStatusDataWriter;
class tms_DeviceParameterStatusDataReader;
#endif
class tms_DeviceParameterStatus 
{
  public:
    typedef struct tms_DeviceParameterStatusSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_DeviceParameterStatusTypeSupport TypeSupport;
    typedef tms_DeviceParameterStatusDataWriter DataWriter;
    typedef tms_DeviceParameterStatusDataReader DataReader;
    #endif

    tms_Fingerprint   deviceId ;
    DDS_UnsignedShort   config ;
    tms_ParameterValueSeq  parameters ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_DeviceParameterStatus_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_DeviceParameterStatus_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DeviceParameterStatus_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DeviceParameterStatus_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_DeviceParameterStatusSeq, tms_DeviceParameterStatus);

NDDSUSERDllExport
RTIBool tms_DeviceParameterStatus_initialize(
    tms_DeviceParameterStatus* self);

NDDSUSERDllExport
RTIBool tms_DeviceParameterStatus_initialize_ex(
    tms_DeviceParameterStatus* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_DeviceParameterStatus_initialize_w_params(
    tms_DeviceParameterStatus* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_DeviceParameterStatus_finalize_w_return(
    tms_DeviceParameterStatus* self);

NDDSUSERDllExport
void tms_DeviceParameterStatus_finalize(
    tms_DeviceParameterStatus* self);

NDDSUSERDllExport
void tms_DeviceParameterStatus_finalize_ex(
    tms_DeviceParameterStatus* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_DeviceParameterStatus_finalize_w_params(
    tms_DeviceParameterStatus* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_DeviceParameterStatus_finalize_optional_members(
    tms_DeviceParameterStatus* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_DeviceParameterStatus_copy(
    tms_DeviceParameterStatus* dst,
    const tms_DeviceParameterStatus* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum tms_DeviceRole
{
    ROLE_MICROGRID_CONTROLLER ,      
    ROLE_TIME_CONTROLLER ,      
    ROLE_SOURCE ,      
    ROLE_LOAD ,      
    ROLE_STORAGE ,      
    ROLE_DISTRIBUTION ,      
    ROLE_MICROGRID_SYSTEM_MANAGER ,      
    ROLE_CONVERSION      
} tms_DeviceRole;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_DeviceRole_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_DeviceRole_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DeviceRole_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DeviceRole_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_DeviceRoleSeq, tms_DeviceRole);

NDDSUSERDllExport
RTIBool tms_DeviceRole_initialize(
    tms_DeviceRole* self);

NDDSUSERDllExport
RTIBool tms_DeviceRole_initialize_ex(
    tms_DeviceRole* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_DeviceRole_initialize_w_params(
    tms_DeviceRole* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_DeviceRole_finalize_w_return(
    tms_DeviceRole* self);

NDDSUSERDllExport
void tms_DeviceRole_finalize(
    tms_DeviceRole* self);

NDDSUSERDllExport
void tms_DeviceRole_finalize_ex(
    tms_DeviceRole* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_DeviceRole_finalize_w_params(
    tms_DeviceRole* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_DeviceRole_finalize_optional_members(
    tms_DeviceRole* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_DeviceRole_copy(
    tms_DeviceRole* dst,
    const tms_DeviceRole* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_UnsignedLong tms_LEN_NatoStockNumber= 13;
typedef    DDS_Char   tms_NatoStockNumber [(tms_LEN_NatoStockNumber)];
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_NatoStockNumber_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_NatoStockNumber_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_NatoStockNumber_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_NatoStockNumber_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE_NO_GET(tms_NatoStockNumberSeq, tms_NatoStockNumber);

NDDSUSERDllExport
RTIBool tms_NatoStockNumber_initialize(
    tms_NatoStockNumber* self);

NDDSUSERDllExport
RTIBool tms_NatoStockNumber_initialize_ex(
    tms_NatoStockNumber* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_NatoStockNumber_initialize_w_params(
    tms_NatoStockNumber* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_NatoStockNumber_finalize_w_return(
    tms_NatoStockNumber* self);

NDDSUSERDllExport
void tms_NatoStockNumber_finalize(
    tms_NatoStockNumber* self);

NDDSUSERDllExport
void tms_NatoStockNumber_finalize_ex(
    tms_NatoStockNumber* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_NatoStockNumber_finalize_w_params(
    tms_NatoStockNumber* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_NatoStockNumber_finalize_optional_members(
    tms_NatoStockNumber* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_NatoStockNumber_copy(
    tms_NatoStockNumber* dst,
    const tms_NatoStockNumber* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_UnsignedLong tms_LEN_GlobalTradeItemNumber= 14;
typedef    DDS_Char   tms_GlobalTradeItemNumber [(tms_LEN_GlobalTradeItemNumber)];
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_GlobalTradeItemNumber_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_GlobalTradeItemNumber_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_GlobalTradeItemNumber_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_GlobalTradeItemNumber_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE_NO_GET(tms_GlobalTradeItemNumberSeq, tms_GlobalTradeItemNumber);

NDDSUSERDllExport
RTIBool tms_GlobalTradeItemNumber_initialize(
    tms_GlobalTradeItemNumber* self);

NDDSUSERDllExport
RTIBool tms_GlobalTradeItemNumber_initialize_ex(
    tms_GlobalTradeItemNumber* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_GlobalTradeItemNumber_initialize_w_params(
    tms_GlobalTradeItemNumber* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_GlobalTradeItemNumber_finalize_w_return(
    tms_GlobalTradeItemNumber* self);

NDDSUSERDllExport
void tms_GlobalTradeItemNumber_finalize(
    tms_GlobalTradeItemNumber* self);

NDDSUSERDllExport
void tms_GlobalTradeItemNumber_finalize_ex(
    tms_GlobalTradeItemNumber* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_GlobalTradeItemNumber_finalize_w_params(
    tms_GlobalTradeItemNumber* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_GlobalTradeItemNumber_finalize_optional_members(
    tms_GlobalTradeItemNumber* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_GlobalTradeItemNumber_copy(
    tms_GlobalTradeItemNumber* dst,
    const tms_GlobalTradeItemNumber* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_DistributionInfoTYPENAME;

}

struct tms_DistributionInfoSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_DistributionInfoTypeSupport;
class tms_DistributionInfoDataWriter;
class tms_DistributionInfoDataReader;
#endif
class tms_DistributionInfo 
{
  public:
    typedef struct tms_DistributionInfoSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_DistributionInfoTypeSupport TypeSupport;
    typedef tms_DistributionInfoDataWriter DataWriter;
    typedef tms_DistributionInfoDataReader DataReader;
    #endif

    DDS_Boolean   supportsLoadPolicy ;
    DDS_Boolean   supportsAuthorizationToEnergize ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_DistributionInfo_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_DistributionInfo_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DistributionInfo_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DistributionInfo_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_DistributionInfoSeq, tms_DistributionInfo);

NDDSUSERDllExport
RTIBool tms_DistributionInfo_initialize(
    tms_DistributionInfo* self);

NDDSUSERDllExport
RTIBool tms_DistributionInfo_initialize_ex(
    tms_DistributionInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_DistributionInfo_initialize_w_params(
    tms_DistributionInfo* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_DistributionInfo_finalize_w_return(
    tms_DistributionInfo* self);

NDDSUSERDllExport
void tms_DistributionInfo_finalize(
    tms_DistributionInfo* self);

NDDSUSERDllExport
void tms_DistributionInfo_finalize_ex(
    tms_DistributionInfo* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_DistributionInfo_finalize_w_params(
    tms_DistributionInfo* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_DistributionInfo_finalize_optional_members(
    tms_DistributionInfo* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_DistributionInfo_copy(
    tms_DistributionInfo* dst,
    const tms_DistributionInfo* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_LoadInfoTYPENAME;

}

struct tms_LoadInfoSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_LoadInfoTypeSupport;
class tms_LoadInfoDataWriter;
class tms_LoadInfoDataReader;
#endif
class tms_LoadInfo 
{
  public:
    typedef struct tms_LoadInfoSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_LoadInfoTypeSupport TypeSupport;
    typedef tms_LoadInfoDataWriter DataWriter;
    typedef tms_LoadInfoDataReader DataReader;
    #endif

    tms_ParameterMetadataSeq  parameters ;
    DDS_Boolean   supportsLoadChange ;
    DDS_Float   loadChangeThreshold ;
    DDS_Float   loadEstimateDeadband ;
    DDS_Boolean   supportsLoadPolicy ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_LoadInfo_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_LoadInfo_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_LoadInfo_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_LoadInfo_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_LoadInfoSeq, tms_LoadInfo);

NDDSUSERDllExport
RTIBool tms_LoadInfo_initialize(
    tms_LoadInfo* self);

NDDSUSERDllExport
RTIBool tms_LoadInfo_initialize_ex(
    tms_LoadInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_LoadInfo_initialize_w_params(
    tms_LoadInfo* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_LoadInfo_finalize_w_return(
    tms_LoadInfo* self);

NDDSUSERDllExport
void tms_LoadInfo_finalize(
    tms_LoadInfo* self);

NDDSUSERDllExport
void tms_LoadInfo_finalize_ex(
    tms_LoadInfo* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_LoadInfo_finalize_w_params(
    tms_LoadInfo* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_LoadInfo_finalize_optional_members(
    tms_LoadInfo* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_LoadInfo_copy(
    tms_LoadInfo* dst,
    const tms_LoadInfo* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_EngineStateThresholdsTYPENAME;

}

struct tms_EngineStateThresholdsSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_EngineStateThresholdsTypeSupport;
class tms_EngineStateThresholdsDataWriter;
class tms_EngineStateThresholdsDataReader;
#endif
class tms_EngineStateThresholds 
{
  public:
    typedef struct tms_EngineStateThresholdsSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_EngineStateThresholdsTypeSupport TypeSupport;
    typedef tms_EngineStateThresholdsDataWriter DataWriter;
    typedef tms_EngineStateThresholdsDataReader DataReader;
    #endif

    DDS_Float   lowOilPressure ;
    DDS_Float   highOilPressure ;
    DDS_Float   lowCoolantTemperature ;
    DDS_Float   highCoolantTemperature ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_EngineStateThresholds_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_EngineStateThresholds_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_EngineStateThresholds_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_EngineStateThresholds_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_EngineStateThresholdsSeq, tms_EngineStateThresholds);

NDDSUSERDllExport
RTIBool tms_EngineStateThresholds_initialize(
    tms_EngineStateThresholds* self);

NDDSUSERDllExport
RTIBool tms_EngineStateThresholds_initialize_ex(
    tms_EngineStateThresholds* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_EngineStateThresholds_initialize_w_params(
    tms_EngineStateThresholds* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_EngineStateThresholds_finalize_w_return(
    tms_EngineStateThresholds* self);

NDDSUSERDllExport
void tms_EngineStateThresholds_finalize(
    tms_EngineStateThresholds* self);

NDDSUSERDllExport
void tms_EngineStateThresholds_finalize_ex(
    tms_EngineStateThresholds* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_EngineStateThresholds_finalize_w_params(
    tms_EngineStateThresholds* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_EngineStateThresholds_finalize_optional_members(
    tms_EngineStateThresholds* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_EngineStateThresholds_copy(
    tms_EngineStateThresholds* dst,
    const tms_EngineStateThresholds* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_UnsignedLong tms_MINLEN_engine= 0;
static const DDS_UnsignedLong tms_MAXLEN_engine= 1;
extern "C" {

    extern const char *tms_SourceInfoTYPENAME;

}

struct tms_SourceInfoSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_SourceInfoTypeSupport;
class tms_SourceInfoDataWriter;
class tms_SourceInfoDataReader;
#endif
class tms_SourceInfo 
{
  public:
    typedef struct tms_SourceInfoSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_SourceInfoTypeSupport TypeSupport;
    typedef tms_SourceInfoDataWriter DataWriter;
    typedef tms_SourceInfoDataReader DataReader;
    #endif

    tms_ParameterMetadataSeq  parameters ;
    DDS_Boolean   supportsDroopCurve ;
    DDS_Boolean   supportsNonlinearCurve ;
    DDS_Boolean   supportsDigitalLoadShare ;
    DDS_Boolean   supportsAuthorizationToEnergize ;
    tms_EngineStateThresholdsSeq  engine ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_SourceInfo_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_SourceInfo_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_SourceInfo_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_SourceInfo_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_SourceInfoSeq, tms_SourceInfo);

NDDSUSERDllExport
RTIBool tms_SourceInfo_initialize(
    tms_SourceInfo* self);

NDDSUSERDllExport
RTIBool tms_SourceInfo_initialize_ex(
    tms_SourceInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_SourceInfo_initialize_w_params(
    tms_SourceInfo* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_SourceInfo_finalize_w_return(
    tms_SourceInfo* self);

NDDSUSERDllExport
void tms_SourceInfo_finalize(
    tms_SourceInfo* self);

NDDSUSERDllExport
void tms_SourceInfo_finalize_ex(
    tms_SourceInfo* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_SourceInfo_finalize_w_params(
    tms_SourceInfo* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_SourceInfo_finalize_optional_members(
    tms_SourceInfo* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_SourceInfo_copy(
    tms_SourceInfo* dst,
    const tms_SourceInfo* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_UnsignedLong tms_MINLEN_manufacturerName= 0;
static const DDS_UnsignedLong tms_MAXLEN_manufacturerName= 64;
static const DDS_UnsignedLong tms_MINLEN_modelName= 0;
static const DDS_UnsignedLong tms_MAXLEN_modelName= 32;
static const DDS_UnsignedLong tms_MINLEN_modelNumber= 0;
static const DDS_UnsignedLong tms_MAXLEN_modelNumber= 32;
static const DDS_UnsignedLong tms_MINLEN_serialNumber= 0;
static const DDS_UnsignedLong tms_MAXLEN_serialNumber= 32;
static const DDS_UnsignedLong tms_MINLEN_softwareVersion= 0;
static const DDS_UnsignedLong tms_MAXLEN_softwareVersion= 20;
static const DDS_UnsignedLong tms_MINLEN_distribution= 0;
static const DDS_UnsignedLong tms_MAXLEN_distribution= 1;
static const DDS_UnsignedLong tms_MINLEN_load= 0;
static const DDS_UnsignedLong tms_MAXLEN_load= 1;
static const DDS_UnsignedLong tms_MINLEN_source= 0;
static const DDS_UnsignedLong tms_MAXLEN_source= 1;
extern "C" {

    extern const char *tms_ProductInfoTYPENAME;

}

struct tms_ProductInfoSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_ProductInfoTypeSupport;
class tms_ProductInfoDataWriter;
class tms_ProductInfoDataReader;
#endif
class tms_ProductInfo 
{
  public:
    typedef struct tms_ProductInfoSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_ProductInfoTypeSupport TypeSupport;
    typedef tms_ProductInfoDataWriter DataWriter;
    typedef tms_ProductInfoDataReader DataReader;
    #endif

    tms_Fingerprint   deviceId ;
    tms_DeviceRole   role ;
    tms_NatoStockNumber   nsn ;
    tms_GlobalTradeItemNumber   gtin ;
    DDS_Char *   manufacturerName ;
    DDS_Char *   modelName ;
    DDS_Char *   modelNumber ;
    DDS_Char *   serialNumber ;
    DDS_Float   sourcePower ;
    DDS_Float   sourceVar ;
    DDS_Float   loadPower ;
    DDS_Float   storageEnergy ;
    DDS_Float   distributionCurrent ;
    DDS_UnsignedShort   configTmpCount ;
    DDS_Boolean   hasRealtimeClock ;
    DDS_Char *   softwareVersion ;
    tms_Fingerprint   platformId ;
    tms_DistributionInfoSeq  distribution ;
    tms_LoadInfoSeq  load ;
    tms_SourceInfoSeq  source ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_ProductInfo_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_ProductInfo_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_ProductInfo_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_ProductInfo_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_ProductInfoSeq, tms_ProductInfo);

NDDSUSERDllExport
RTIBool tms_ProductInfo_initialize(
    tms_ProductInfo* self);

NDDSUSERDllExport
RTIBool tms_ProductInfo_initialize_ex(
    tms_ProductInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_ProductInfo_initialize_w_params(
    tms_ProductInfo* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_ProductInfo_finalize_w_return(
    tms_ProductInfo* self);

NDDSUSERDllExport
void tms_ProductInfo_finalize(
    tms_ProductInfo* self);

NDDSUSERDllExport
void tms_ProductInfo_finalize_ex(
    tms_ProductInfo* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_ProductInfo_finalize_w_params(
    tms_ProductInfo* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_ProductInfo_finalize_optional_members(
    tms_ProductInfo* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_ProductInfo_copy(
    tms_ProductInfo* dst,
    const tms_ProductInfo* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_HeartbeatTYPENAME;

}

struct tms_HeartbeatSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_HeartbeatTypeSupport;
class tms_HeartbeatDataWriter;
class tms_HeartbeatDataReader;
#endif
class tms_Heartbeat 
{
  public:
    typedef struct tms_HeartbeatSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_HeartbeatTypeSupport TypeSupport;
    typedef tms_HeartbeatDataWriter DataWriter;
    typedef tms_HeartbeatDataReader DataReader;
    #endif

    tms_Fingerprint   deviceId ;
    DDS_UnsignedLong   sequenceNumber ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_Heartbeat_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_Heartbeat_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_Heartbeat_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_Heartbeat_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_HeartbeatSeq, tms_Heartbeat);

NDDSUSERDllExport
RTIBool tms_Heartbeat_initialize(
    tms_Heartbeat* self);

NDDSUSERDllExport
RTIBool tms_Heartbeat_initialize_ex(
    tms_Heartbeat* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_Heartbeat_initialize_w_params(
    tms_Heartbeat* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_Heartbeat_finalize_w_return(
    tms_Heartbeat* self);

NDDSUSERDllExport
void tms_Heartbeat_finalize(
    tms_Heartbeat* self);

NDDSUSERDllExport
void tms_Heartbeat_finalize_ex(
    tms_Heartbeat* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_Heartbeat_finalize_w_params(
    tms_Heartbeat* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_Heartbeat_finalize_optional_members(
    tms_Heartbeat* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_Heartbeat_copy(
    tms_Heartbeat* dst,
    const tms_Heartbeat* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef    DDS_UnsignedLong   tms_SuspectParameterNumber ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_SuspectParameterNumber_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_SuspectParameterNumber_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_SuspectParameterNumber_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_SuspectParameterNumber_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_SuspectParameterNumberSeq, tms_SuspectParameterNumber);

NDDSUSERDllExport
RTIBool tms_SuspectParameterNumber_initialize(
    tms_SuspectParameterNumber* self);

NDDSUSERDllExport
RTIBool tms_SuspectParameterNumber_initialize_ex(
    tms_SuspectParameterNumber* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_SuspectParameterNumber_initialize_w_params(
    tms_SuspectParameterNumber* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_SuspectParameterNumber_finalize_w_return(
    tms_SuspectParameterNumber* self);

NDDSUSERDllExport
void tms_SuspectParameterNumber_finalize(
    tms_SuspectParameterNumber* self);

NDDSUSERDllExport
void tms_SuspectParameterNumber_finalize_ex(
    tms_SuspectParameterNumber* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_SuspectParameterNumber_finalize_w_params(
    tms_SuspectParameterNumber* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_SuspectParameterNumber_finalize_optional_members(
    tms_SuspectParameterNumber* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_SuspectParameterNumber_copy(
    tms_SuspectParameterNumber* dst,
    const tms_SuspectParameterNumber* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef    DDS_Octet   tms_FailureModeIndicator ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_FailureModeIndicator_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_FailureModeIndicator_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_FailureModeIndicator_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_FailureModeIndicator_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_FailureModeIndicatorSeq, tms_FailureModeIndicator);

NDDSUSERDllExport
RTIBool tms_FailureModeIndicator_initialize(
    tms_FailureModeIndicator* self);

NDDSUSERDllExport
RTIBool tms_FailureModeIndicator_initialize_ex(
    tms_FailureModeIndicator* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_FailureModeIndicator_initialize_w_params(
    tms_FailureModeIndicator* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_FailureModeIndicator_finalize_w_return(
    tms_FailureModeIndicator* self);

NDDSUSERDllExport
void tms_FailureModeIndicator_finalize(
    tms_FailureModeIndicator* self);

NDDSUSERDllExport
void tms_FailureModeIndicator_finalize_ex(
    tms_FailureModeIndicator* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_FailureModeIndicator_finalize_w_params(
    tms_FailureModeIndicator* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_FailureModeIndicator_finalize_optional_members(
    tms_FailureModeIndicator* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_FailureModeIndicator_copy(
    tms_FailureModeIndicator* dst,
    const tms_FailureModeIndicator* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_Octet tms_FMI_HIGH_MOST_SEVERE= 0;
static const DDS_Octet tms_FMI_LOW_MOST_SEVERE= 1;
static const DDS_Octet tms_FMI_HIGH_LEAST_SEVERE= 15;
static const DDS_Octet tms_FMI_HIGH_MODERATELY_SEVERE= 16;
static const DDS_Octet tms_FMI_LOW_LEAST_SEVERE= 17;
static const DDS_Octet tms_FMI_LOW_MODERATELY_SEVERE= 18;
typedef enum tms_DtcSeverity
{
    SEV_0_NOT_SPECIFIED ,      
    SEV_1_CLEAR ,      
    SEV_2_INFORMATIVE ,      
    SEV_3_PREVENTATIVE ,      
    SEV_4_DEGRADED ,      
    SEV_5_WARNING ,      
    SEV_6_MINOR ,      
    SEV_7_MAJOR ,      
    SEV_8_CRITICAL ,      
    SEV_9_FATAL ,      
    SEV_10_HUMAN_SAFETY      
} tms_DtcSeverity;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_DtcSeverity_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_DtcSeverity_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DtcSeverity_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DtcSeverity_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_DtcSeveritySeq, tms_DtcSeverity);

NDDSUSERDllExport
RTIBool tms_DtcSeverity_initialize(
    tms_DtcSeverity* self);

NDDSUSERDllExport
RTIBool tms_DtcSeverity_initialize_ex(
    tms_DtcSeverity* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_DtcSeverity_initialize_w_params(
    tms_DtcSeverity* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_DtcSeverity_finalize_w_return(
    tms_DtcSeverity* self);

NDDSUSERDllExport
void tms_DtcSeverity_finalize(
    tms_DtcSeverity* self);

NDDSUSERDllExport
void tms_DtcSeverity_finalize_ex(
    tms_DtcSeverity* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_DtcSeverity_finalize_w_params(
    tms_DtcSeverity* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_DtcSeverity_finalize_optional_members(
    tms_DtcSeverity* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_DtcSeverity_copy(
    tms_DtcSeverity* dst,
    const tms_DtcSeverity* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_UnsignedLong tms_MINLEN_hint= 0;
static const DDS_UnsignedLong tms_MAXLEN_hint= 32;
extern "C" {

    extern const char *tms_DiagnosticTroubleCodeTYPENAME;

}

struct tms_DiagnosticTroubleCodeSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_DiagnosticTroubleCodeTypeSupport;
class tms_DiagnosticTroubleCodeDataWriter;
class tms_DiagnosticTroubleCodeDataReader;
#endif
class tms_DiagnosticTroubleCode 
{
  public:
    typedef struct tms_DiagnosticTroubleCodeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_DiagnosticTroubleCodeTypeSupport TypeSupport;
    typedef tms_DiagnosticTroubleCodeDataWriter DataWriter;
    typedef tms_DiagnosticTroubleCodeDataReader DataReader;
    #endif

    DDS_UnsignedLong   suspectParameter ;
    DDS_Octet   failureMode ;
    DDS_UnsignedLong   occurrenceCount ;
    tms_ClockMonotonic   timeRaised ;
    tms_DtcSeverity   severity ;
    DDS_Char *   hint ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_DiagnosticTroubleCode_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_DiagnosticTroubleCode_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DiagnosticTroubleCode_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DiagnosticTroubleCode_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_DiagnosticTroubleCodeSeq, tms_DiagnosticTroubleCode);

NDDSUSERDllExport
RTIBool tms_DiagnosticTroubleCode_initialize(
    tms_DiagnosticTroubleCode* self);

NDDSUSERDllExport
RTIBool tms_DiagnosticTroubleCode_initialize_ex(
    tms_DiagnosticTroubleCode* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_DiagnosticTroubleCode_initialize_w_params(
    tms_DiagnosticTroubleCode* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_DiagnosticTroubleCode_finalize_w_return(
    tms_DiagnosticTroubleCode* self);

NDDSUSERDllExport
void tms_DiagnosticTroubleCode_finalize(
    tms_DiagnosticTroubleCode* self);

NDDSUSERDllExport
void tms_DiagnosticTroubleCode_finalize_ex(
    tms_DiagnosticTroubleCode* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_DiagnosticTroubleCode_finalize_w_params(
    tms_DiagnosticTroubleCode* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_DiagnosticTroubleCode_finalize_optional_members(
    tms_DiagnosticTroubleCode* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_DiagnosticTroubleCode_copy(
    tms_DiagnosticTroubleCode* dst,
    const tms_DiagnosticTroubleCode* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_UnsignedLong tms_MINLEN_codes= 0;
static const DDS_UnsignedLong tms_MAXLEN_codes= 64;
extern "C" {

    extern const char *tms_ActiveDiagnosticMessagesTYPENAME;

}

struct tms_ActiveDiagnosticMessagesSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_ActiveDiagnosticMessagesTypeSupport;
class tms_ActiveDiagnosticMessagesDataWriter;
class tms_ActiveDiagnosticMessagesDataReader;
#endif
class tms_ActiveDiagnosticMessages 
{
  public:
    typedef struct tms_ActiveDiagnosticMessagesSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_ActiveDiagnosticMessagesTypeSupport TypeSupport;
    typedef tms_ActiveDiagnosticMessagesDataWriter DataWriter;
    typedef tms_ActiveDiagnosticMessagesDataReader DataReader;
    #endif

    tms_Fingerprint   deviceId ;
    tms_DiagnosticTroubleCodeSeq  codes ;
    DDS_UnsignedLong   overflow ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_ActiveDiagnosticMessages_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_ActiveDiagnosticMessages_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_ActiveDiagnosticMessages_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_ActiveDiagnosticMessages_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_ActiveDiagnosticMessagesSeq, tms_ActiveDiagnosticMessages);

NDDSUSERDllExport
RTIBool tms_ActiveDiagnosticMessages_initialize(
    tms_ActiveDiagnosticMessages* self);

NDDSUSERDllExport
RTIBool tms_ActiveDiagnosticMessages_initialize_ex(
    tms_ActiveDiagnosticMessages* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_ActiveDiagnosticMessages_initialize_w_params(
    tms_ActiveDiagnosticMessages* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_ActiveDiagnosticMessages_finalize_w_return(
    tms_ActiveDiagnosticMessages* self);

NDDSUSERDllExport
void tms_ActiveDiagnosticMessages_finalize(
    tms_ActiveDiagnosticMessages* self);

NDDSUSERDllExport
void tms_ActiveDiagnosticMessages_finalize_ex(
    tms_ActiveDiagnosticMessages* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_ActiveDiagnosticMessages_finalize_w_params(
    tms_ActiveDiagnosticMessages* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_ActiveDiagnosticMessages_finalize_optional_members(
    tms_ActiveDiagnosticMessages* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_ActiveDiagnosticMessages_copy(
    tms_ActiveDiagnosticMessages* dst,
    const tms_ActiveDiagnosticMessages* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_UnsignedShort tms_CONFIG_INVALID= 0;
static const DDS_UnsignedShort tms_CONFIG_DEFAULTS= 1;
static const DDS_UnsignedShort tms_CONFIG_OLD_ACTIVE= 99;
static const DDS_UnsignedShort tms_CONFIG_ACTIVE= 100;
static const DDS_UnsignedShort tms_CONFIG_RESTART= 101;
static const DDS_UnsignedShort tms_CONFIG_NO_COMM= 102;
static const DDS_UnsignedShort tms_CONFIG_EMERGENCY= 103;
static const DDS_UnsignedShort tms_CONFIG_CHECK_SETTING= 200;
static const DDS_UnsignedShort tms_CONFIG_TMP_ALL= 999;
static const DDS_UnsignedShort tms_CONFIG_TMP_MIN= 1000;
static const DDS_UnsignedShort tms_CONFIG_TMP_MAX= 1999;
extern "C" {

    extern const char *tms_StandardConfigMasterTYPENAME;

}

struct tms_StandardConfigMasterSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_StandardConfigMasterTypeSupport;
class tms_StandardConfigMasterDataWriter;
class tms_StandardConfigMasterDataReader;
#endif
class tms_StandardConfigMaster 
{
  public:
    typedef struct tms_StandardConfigMasterSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_StandardConfigMasterTypeSupport TypeSupport;
    typedef tms_StandardConfigMasterDataWriter DataWriter;
    typedef tms_StandardConfigMasterDataReader DataReader;
    #endif

    tms_Fingerprint   deviceId ;
    tms_Fingerprint   masterId ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_StandardConfigMaster_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_StandardConfigMaster_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_StandardConfigMaster_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_StandardConfigMaster_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_StandardConfigMasterSeq, tms_StandardConfigMaster);

NDDSUSERDllExport
RTIBool tms_StandardConfigMaster_initialize(
    tms_StandardConfigMaster* self);

NDDSUSERDllExport
RTIBool tms_StandardConfigMaster_initialize_ex(
    tms_StandardConfigMaster* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_StandardConfigMaster_initialize_w_params(
    tms_StandardConfigMaster* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_StandardConfigMaster_finalize_w_return(
    tms_StandardConfigMaster* self);

NDDSUSERDllExport
void tms_StandardConfigMaster_finalize(
    tms_StandardConfigMaster* self);

NDDSUSERDllExport
void tms_StandardConfigMaster_finalize_ex(
    tms_StandardConfigMaster* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_StandardConfigMaster_finalize_w_params(
    tms_StandardConfigMaster* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_StandardConfigMaster_finalize_optional_members(
    tms_StandardConfigMaster* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_StandardConfigMaster_copy(
    tms_StandardConfigMaster* dst,
    const tms_StandardConfigMaster* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_CopyConfigRequestTYPENAME;

}

struct tms_CopyConfigRequestSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_CopyConfigRequestTypeSupport;
class tms_CopyConfigRequestDataWriter;
class tms_CopyConfigRequestDataReader;
#endif
class tms_CopyConfigRequest 
{
  public:
    typedef struct tms_CopyConfigRequestSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_CopyConfigRequestTypeSupport TypeSupport;
    typedef tms_CopyConfigRequestDataWriter DataWriter;
    typedef tms_CopyConfigRequestDataReader DataReader;
    #endif

    tms_SampleId   requestId ;
    tms_Fingerprint   deviceId ;
    DDS_UnsignedShort   source ;
    DDS_UnsignedShort   target ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_CopyConfigRequest_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_CopyConfigRequest_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_CopyConfigRequest_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_CopyConfigRequest_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_CopyConfigRequestSeq, tms_CopyConfigRequest);

NDDSUSERDllExport
RTIBool tms_CopyConfigRequest_initialize(
    tms_CopyConfigRequest* self);

NDDSUSERDllExport
RTIBool tms_CopyConfigRequest_initialize_ex(
    tms_CopyConfigRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_CopyConfigRequest_initialize_w_params(
    tms_CopyConfigRequest* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_CopyConfigRequest_finalize_w_return(
    tms_CopyConfigRequest* self);

NDDSUSERDllExport
void tms_CopyConfigRequest_finalize(
    tms_CopyConfigRequest* self);

NDDSUSERDllExport
void tms_CopyConfigRequest_finalize_ex(
    tms_CopyConfigRequest* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_CopyConfigRequest_finalize_w_params(
    tms_CopyConfigRequest* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_CopyConfigRequest_finalize_optional_members(
    tms_CopyConfigRequest* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_CopyConfigRequest_copy(
    tms_CopyConfigRequest* dst,
    const tms_CopyConfigRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_ReserveConfigRequestTYPENAME;

}

struct tms_ReserveConfigRequestSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_ReserveConfigRequestTypeSupport;
class tms_ReserveConfigRequestDataWriter;
class tms_ReserveConfigRequestDataReader;
#endif
class tms_ReserveConfigRequest 
{
  public:
    typedef struct tms_ReserveConfigRequestSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_ReserveConfigRequestTypeSupport TypeSupport;
    typedef tms_ReserveConfigRequestDataWriter DataWriter;
    typedef tms_ReserveConfigRequestDataReader DataReader;
    #endif

    tms_SampleId   requestId ;
    tms_Fingerprint   deviceId ;
    DDS_Boolean   forceRelease ;
    DDS_UnsignedShort   source ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_ReserveConfigRequest_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_ReserveConfigRequest_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_ReserveConfigRequest_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_ReserveConfigRequest_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_ReserveConfigRequestSeq, tms_ReserveConfigRequest);

NDDSUSERDllExport
RTIBool tms_ReserveConfigRequest_initialize(
    tms_ReserveConfigRequest* self);

NDDSUSERDllExport
RTIBool tms_ReserveConfigRequest_initialize_ex(
    tms_ReserveConfigRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_ReserveConfigRequest_initialize_w_params(
    tms_ReserveConfigRequest* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_ReserveConfigRequest_finalize_w_return(
    tms_ReserveConfigRequest* self);

NDDSUSERDllExport
void tms_ReserveConfigRequest_finalize(
    tms_ReserveConfigRequest* self);

NDDSUSERDllExport
void tms_ReserveConfigRequest_finalize_ex(
    tms_ReserveConfigRequest* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_ReserveConfigRequest_finalize_w_params(
    tms_ReserveConfigRequest* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_ReserveConfigRequest_finalize_optional_members(
    tms_ReserveConfigRequest* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_ReserveConfigRequest_copy(
    tms_ReserveConfigRequest* dst,
    const tms_ReserveConfigRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_ReserveConfigReplyTYPENAME;

}

struct tms_ReserveConfigReplySeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_ReserveConfigReplyTypeSupport;
class tms_ReserveConfigReplyDataWriter;
class tms_ReserveConfigReplyDataReader;
#endif
class tms_ReserveConfigReply 
{
  public:
    typedef struct tms_ReserveConfigReplySeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_ReserveConfigReplyTypeSupport TypeSupport;
    typedef tms_ReserveConfigReplyDataWriter DataWriter;
    typedef tms_ReserveConfigReplyDataReader DataReader;
    #endif

    tms_SampleId   relatedRequestId ;
    tms_ReplyStatus   status ;
    DDS_UnsignedShort   tmp ;
    tms_Fingerprint   releaseId ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_ReserveConfigReply_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_ReserveConfigReply_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_ReserveConfigReply_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_ReserveConfigReply_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_ReserveConfigReplySeq, tms_ReserveConfigReply);

NDDSUSERDllExport
RTIBool tms_ReserveConfigReply_initialize(
    tms_ReserveConfigReply* self);

NDDSUSERDllExport
RTIBool tms_ReserveConfigReply_initialize_ex(
    tms_ReserveConfigReply* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_ReserveConfigReply_initialize_w_params(
    tms_ReserveConfigReply* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_ReserveConfigReply_finalize_w_return(
    tms_ReserveConfigReply* self);

NDDSUSERDllExport
void tms_ReserveConfigReply_finalize(
    tms_ReserveConfigReply* self);

NDDSUSERDllExport
void tms_ReserveConfigReply_finalize_ex(
    tms_ReserveConfigReply* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_ReserveConfigReply_finalize_w_params(
    tms_ReserveConfigReply* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_ReserveConfigReply_finalize_optional_members(
    tms_ReserveConfigReply* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_ReserveConfigReply_copy(
    tms_ReserveConfigReply* dst,
    const tms_ReserveConfigReply* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_ReleaseConfigRequestTYPENAME;

}

struct tms_ReleaseConfigRequestSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_ReleaseConfigRequestTypeSupport;
class tms_ReleaseConfigRequestDataWriter;
class tms_ReleaseConfigRequestDataReader;
#endif
class tms_ReleaseConfigRequest 
{
  public:
    typedef struct tms_ReleaseConfigRequestSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_ReleaseConfigRequestTypeSupport TypeSupport;
    typedef tms_ReleaseConfigRequestDataWriter DataWriter;
    typedef tms_ReleaseConfigRequestDataReader DataReader;
    #endif

    tms_SampleId   requestId ;
    tms_Fingerprint   deviceId ;
    DDS_UnsignedShort   tmp ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_ReleaseConfigRequest_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_ReleaseConfigRequest_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_ReleaseConfigRequest_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_ReleaseConfigRequest_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_ReleaseConfigRequestSeq, tms_ReleaseConfigRequest);

NDDSUSERDllExport
RTIBool tms_ReleaseConfigRequest_initialize(
    tms_ReleaseConfigRequest* self);

NDDSUSERDllExport
RTIBool tms_ReleaseConfigRequest_initialize_ex(
    tms_ReleaseConfigRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_ReleaseConfigRequest_initialize_w_params(
    tms_ReleaseConfigRequest* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_ReleaseConfigRequest_finalize_w_return(
    tms_ReleaseConfigRequest* self);

NDDSUSERDllExport
void tms_ReleaseConfigRequest_finalize(
    tms_ReleaseConfigRequest* self);

NDDSUSERDllExport
void tms_ReleaseConfigRequest_finalize_ex(
    tms_ReleaseConfigRequest* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_ReleaseConfigRequest_finalize_w_params(
    tms_ReleaseConfigRequest* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_ReleaseConfigRequest_finalize_optional_members(
    tms_ReleaseConfigRequest* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_ReleaseConfigRequest_copy(
    tms_ReleaseConfigRequest* dst,
    const tms_ReleaseConfigRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_ConfigReservationTYPENAME;

}

struct tms_ConfigReservationSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_ConfigReservationTypeSupport;
class tms_ConfigReservationDataWriter;
class tms_ConfigReservationDataReader;
#endif
class tms_ConfigReservation 
{
  public:
    typedef struct tms_ConfigReservationSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_ConfigReservationTypeSupport TypeSupport;
    typedef tms_ConfigReservationDataWriter DataWriter;
    typedef tms_ConfigReservationDataReader DataReader;
    #endif

    DDS_UnsignedShort   config ;
    tms_Fingerprint   deviceId ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_ConfigReservation_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_ConfigReservation_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_ConfigReservation_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_ConfigReservation_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_ConfigReservationSeq, tms_ConfigReservation);

NDDSUSERDllExport
RTIBool tms_ConfigReservation_initialize(
    tms_ConfigReservation* self);

NDDSUSERDllExport
RTIBool tms_ConfigReservation_initialize_ex(
    tms_ConfigReservation* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_ConfigReservation_initialize_w_params(
    tms_ConfigReservation* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_ConfigReservation_finalize_w_return(
    tms_ConfigReservation* self);

NDDSUSERDllExport
void tms_ConfigReservation_finalize(
    tms_ConfigReservation* self);

NDDSUSERDllExport
void tms_ConfigReservation_finalize_ex(
    tms_ConfigReservation* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_ConfigReservation_finalize_w_params(
    tms_ConfigReservation* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_ConfigReservation_finalize_optional_members(
    tms_ConfigReservation* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_ConfigReservation_copy(
    tms_ConfigReservation* dst,
    const tms_ConfigReservation* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_UnsignedLong tms_MINLEN_configs= 0;
static const DDS_UnsignedLong tms_MAXLEN_configs= 1000;
extern "C" {

    extern const char *tms_ConfigReservationListTYPENAME;

}

struct tms_ConfigReservationListSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_ConfigReservationListTypeSupport;
class tms_ConfigReservationListDataWriter;
class tms_ConfigReservationListDataReader;
#endif
class tms_ConfigReservationList 
{
  public:
    typedef struct tms_ConfigReservationListSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_ConfigReservationListTypeSupport TypeSupport;
    typedef tms_ConfigReservationListDataWriter DataWriter;
    typedef tms_ConfigReservationListDataReader DataReader;
    #endif

    tms_Fingerprint   deviceId ;
    tms_ConfigReservationSeq  configs ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_ConfigReservationList_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_ConfigReservationList_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_ConfigReservationList_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_ConfigReservationList_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_ConfigReservationListSeq, tms_ConfigReservationList);

NDDSUSERDllExport
RTIBool tms_ConfigReservationList_initialize(
    tms_ConfigReservationList* self);

NDDSUSERDllExport
RTIBool tms_ConfigReservationList_initialize_ex(
    tms_ConfigReservationList* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_ConfigReservationList_initialize_w_params(
    tms_ConfigReservationList* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_ConfigReservationList_finalize_w_return(
    tms_ConfigReservationList* self);

NDDSUSERDllExport
void tms_ConfigReservationList_finalize(
    tms_ConfigReservationList* self);

NDDSUSERDllExport
void tms_ConfigReservationList_finalize_ex(
    tms_ConfigReservationList* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_ConfigReservationList_finalize_w_params(
    tms_ConfigReservationList* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_ConfigReservationList_finalize_optional_members(
    tms_ConfigReservationList* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_ConfigReservationList_copy(
    tms_ConfigReservationList* dst,
    const tms_ConfigReservationList* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_GetConfigContentsRequestTYPENAME;

}

struct tms_GetConfigContentsRequestSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_GetConfigContentsRequestTypeSupport;
class tms_GetConfigContentsRequestDataWriter;
class tms_GetConfigContentsRequestDataReader;
#endif
class tms_GetConfigContentsRequest 
{
  public:
    typedef struct tms_GetConfigContentsRequestSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_GetConfigContentsRequestTypeSupport TypeSupport;
    typedef tms_GetConfigContentsRequestDataWriter DataWriter;
    typedef tms_GetConfigContentsRequestDataReader DataReader;
    #endif

    tms_SampleId   requestId ;
    tms_Fingerprint   deviceId ;
    DDS_UnsignedShort   config ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_GetConfigContentsRequest_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_GetConfigContentsRequest_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_GetConfigContentsRequest_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_GetConfigContentsRequest_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_GetConfigContentsRequestSeq, tms_GetConfigContentsRequest);

NDDSUSERDllExport
RTIBool tms_GetConfigContentsRequest_initialize(
    tms_GetConfigContentsRequest* self);

NDDSUSERDllExport
RTIBool tms_GetConfigContentsRequest_initialize_ex(
    tms_GetConfigContentsRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_GetConfigContentsRequest_initialize_w_params(
    tms_GetConfigContentsRequest* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_GetConfigContentsRequest_finalize_w_return(
    tms_GetConfigContentsRequest* self);

NDDSUSERDllExport
void tms_GetConfigContentsRequest_finalize(
    tms_GetConfigContentsRequest* self);

NDDSUSERDllExport
void tms_GetConfigContentsRequest_finalize_ex(
    tms_GetConfigContentsRequest* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_GetConfigContentsRequest_finalize_w_params(
    tms_GetConfigContentsRequest* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_GetConfigContentsRequest_finalize_optional_members(
    tms_GetConfigContentsRequest* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_GetConfigContentsRequest_copy(
    tms_GetConfigContentsRequest* dst,
    const tms_GetConfigContentsRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef    DDS_UnsignedLong   tms_PowerPortNumber ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_PowerPortNumber_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_PowerPortNumber_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerPortNumber_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerPortNumber_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_PowerPortNumberSeq, tms_PowerPortNumber);

NDDSUSERDllExport
RTIBool tms_PowerPortNumber_initialize(
    tms_PowerPortNumber* self);

NDDSUSERDllExport
RTIBool tms_PowerPortNumber_initialize_ex(
    tms_PowerPortNumber* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_PowerPortNumber_initialize_w_params(
    tms_PowerPortNumber* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_PowerPortNumber_finalize_w_return(
    tms_PowerPortNumber* self);

NDDSUSERDllExport
void tms_PowerPortNumber_finalize(
    tms_PowerPortNumber* self);

NDDSUSERDllExport
void tms_PowerPortNumber_finalize_ex(
    tms_PowerPortNumber* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_PowerPortNumber_finalize_w_params(
    tms_PowerPortNumber* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_PowerPortNumber_finalize_optional_members(
    tms_PowerPortNumber* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_PowerPortNumber_copy(
    tms_PowerPortNumber* dst,
    const tms_PowerPortNumber* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_UnsignedLong tms_MAX_PORTS= 20;
static const DDS_UnsignedLong tms_ONLY_PORT= 0;
static const DDS_UnsignedLong tms_MINLEN_ports= 0;
static const DDS_UnsignedLong tms_MAXLEN_ports= (tms_MAX_PORTS);
extern "C" {

    extern const char *tms_AuthorizationToEnergizeRequestTYPENAME;

}

struct tms_AuthorizationToEnergizeRequestSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_AuthorizationToEnergizeRequestTypeSupport;
class tms_AuthorizationToEnergizeRequestDataWriter;
class tms_AuthorizationToEnergizeRequestDataReader;
#endif
class tms_AuthorizationToEnergizeRequest 
{
  public:
    typedef struct tms_AuthorizationToEnergizeRequestSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_AuthorizationToEnergizeRequestTypeSupport TypeSupport;
    typedef tms_AuthorizationToEnergizeRequestDataWriter DataWriter;
    typedef tms_AuthorizationToEnergizeRequestDataReader DataReader;
    #endif

    tms_SampleId   requestId ;
    tms_SampleId   commandId ;
    tms_Fingerprint   deviceId ;
    DDS_UnsignedLongSeq  ports ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_AuthorizationToEnergizeRequest_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_AuthorizationToEnergizeRequest_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_AuthorizationToEnergizeRequest_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_AuthorizationToEnergizeRequest_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_AuthorizationToEnergizeRequestSeq, tms_AuthorizationToEnergizeRequest);

NDDSUSERDllExport
RTIBool tms_AuthorizationToEnergizeRequest_initialize(
    tms_AuthorizationToEnergizeRequest* self);

NDDSUSERDllExport
RTIBool tms_AuthorizationToEnergizeRequest_initialize_ex(
    tms_AuthorizationToEnergizeRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_AuthorizationToEnergizeRequest_initialize_w_params(
    tms_AuthorizationToEnergizeRequest* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_AuthorizationToEnergizeRequest_finalize_w_return(
    tms_AuthorizationToEnergizeRequest* self);

NDDSUSERDllExport
void tms_AuthorizationToEnergizeRequest_finalize(
    tms_AuthorizationToEnergizeRequest* self);

NDDSUSERDllExport
void tms_AuthorizationToEnergizeRequest_finalize_ex(
    tms_AuthorizationToEnergizeRequest* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_AuthorizationToEnergizeRequest_finalize_w_params(
    tms_AuthorizationToEnergizeRequest* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_AuthorizationToEnergizeRequest_finalize_optional_members(
    tms_AuthorizationToEnergizeRequest* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_AuthorizationToEnergizeRequest_copy(
    tms_AuthorizationToEnergizeRequest* dst,
    const tms_AuthorizationToEnergizeRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_AuthorizationToEnergizeResponseTYPENAME;

}

struct tms_AuthorizationToEnergizeResponseSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_AuthorizationToEnergizeResponseTypeSupport;
class tms_AuthorizationToEnergizeResponseDataWriter;
class tms_AuthorizationToEnergizeResponseDataReader;
#endif
class tms_AuthorizationToEnergizeResponse 
{
  public:
    typedef struct tms_AuthorizationToEnergizeResponseSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_AuthorizationToEnergizeResponseTypeSupport TypeSupport;
    typedef tms_AuthorizationToEnergizeResponseDataWriter DataWriter;
    typedef tms_AuthorizationToEnergizeResponseDataReader DataReader;
    #endif

    tms_SampleId   relatedRequestId ;
    tms_SampleId   commandId ;
    tms_Fingerprint   deviceId ;
    DDS_UnsignedLongSeq  ports ;
    DDS_Boolean   accept ;
    DDS_Boolean   deny ;
    tms_Fingerprint   userId ;
    tms_ClockRealtime   authorizationTime ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_AuthorizationToEnergizeResponse_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_AuthorizationToEnergizeResponse_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_AuthorizationToEnergizeResponse_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_AuthorizationToEnergizeResponse_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_AuthorizationToEnergizeResponseSeq, tms_AuthorizationToEnergizeResponse);

NDDSUSERDllExport
RTIBool tms_AuthorizationToEnergizeResponse_initialize(
    tms_AuthorizationToEnergizeResponse* self);

NDDSUSERDllExport
RTIBool tms_AuthorizationToEnergizeResponse_initialize_ex(
    tms_AuthorizationToEnergizeResponse* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_AuthorizationToEnergizeResponse_initialize_w_params(
    tms_AuthorizationToEnergizeResponse* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_AuthorizationToEnergizeResponse_finalize_w_return(
    tms_AuthorizationToEnergizeResponse* self);

NDDSUSERDllExport
void tms_AuthorizationToEnergizeResponse_finalize(
    tms_AuthorizationToEnergizeResponse* self);

NDDSUSERDllExport
void tms_AuthorizationToEnergizeResponse_finalize_ex(
    tms_AuthorizationToEnergizeResponse* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_AuthorizationToEnergizeResponse_finalize_w_params(
    tms_AuthorizationToEnergizeResponse* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_AuthorizationToEnergizeResponse_finalize_optional_members(
    tms_AuthorizationToEnergizeResponse* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_AuthorizationToEnergizeResponse_copy(
    tms_AuthorizationToEnergizeResponse* dst,
    const tms_AuthorizationToEnergizeResponse* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_AuthorizationToEnergizeOutcomeTYPENAME;

}

struct tms_AuthorizationToEnergizeOutcomeSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_AuthorizationToEnergizeOutcomeTypeSupport;
class tms_AuthorizationToEnergizeOutcomeDataWriter;
class tms_AuthorizationToEnergizeOutcomeDataReader;
#endif
class tms_AuthorizationToEnergizeOutcome 
{
  public:
    typedef struct tms_AuthorizationToEnergizeOutcomeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_AuthorizationToEnergizeOutcomeTypeSupport TypeSupport;
    typedef tms_AuthorizationToEnergizeOutcomeDataWriter DataWriter;
    typedef tms_AuthorizationToEnergizeOutcomeDataReader DataReader;
    #endif

    tms_SampleId   relatedRequestId ;
    tms_SampleId   commandId ;
    tms_Fingerprint   deviceId ;
    DDS_Boolean   accepted ;
    DDS_Boolean   authReceived ;
    DDS_Boolean   authCommand ;
    DDS_Boolean   authLocation ;
    DDS_Boolean   authUser ;
    DDS_Boolean   authTime ;
    tms_ClockMonotonic   authMonotonic ;
    tms_ClockRealtime   authRealtime ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_AuthorizationToEnergizeOutcome_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_AuthorizationToEnergizeOutcome_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_AuthorizationToEnergizeOutcome_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_AuthorizationToEnergizeOutcome_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_AuthorizationToEnergizeOutcomeSeq, tms_AuthorizationToEnergizeOutcome);

NDDSUSERDllExport
RTIBool tms_AuthorizationToEnergizeOutcome_initialize(
    tms_AuthorizationToEnergizeOutcome* self);

NDDSUSERDllExport
RTIBool tms_AuthorizationToEnergizeOutcome_initialize_ex(
    tms_AuthorizationToEnergizeOutcome* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_AuthorizationToEnergizeOutcome_initialize_w_params(
    tms_AuthorizationToEnergizeOutcome* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_AuthorizationToEnergizeOutcome_finalize_w_return(
    tms_AuthorizationToEnergizeOutcome* self);

NDDSUSERDllExport
void tms_AuthorizationToEnergizeOutcome_finalize(
    tms_AuthorizationToEnergizeOutcome* self);

NDDSUSERDllExport
void tms_AuthorizationToEnergizeOutcome_finalize_ex(
    tms_AuthorizationToEnergizeOutcome* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_AuthorizationToEnergizeOutcome_finalize_w_params(
    tms_AuthorizationToEnergizeOutcome* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_AuthorizationToEnergizeOutcome_finalize_optional_members(
    tms_AuthorizationToEnergizeOutcome* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_AuthorizationToEnergizeOutcome_copy(
    tms_AuthorizationToEnergizeOutcome* dst,
    const tms_AuthorizationToEnergizeOutcome* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_PowerPortIdTYPENAME;

}

struct tms_PowerPortIdSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_PowerPortIdTypeSupport;
class tms_PowerPortIdDataWriter;
class tms_PowerPortIdDataReader;
#endif
class tms_PowerPortId 
{
  public:
    typedef struct tms_PowerPortIdSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_PowerPortIdTypeSupport TypeSupport;
    typedef tms_PowerPortIdDataWriter DataWriter;
    typedef tms_PowerPortIdDataReader DataReader;
    #endif

    tms_Fingerprint   deviceId ;
    DDS_UnsignedLong   portNumber ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_PowerPortId_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_PowerPortId_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerPortId_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerPortId_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_PowerPortIdSeq, tms_PowerPortId);

NDDSUSERDllExport
RTIBool tms_PowerPortId_initialize(
    tms_PowerPortId* self);

NDDSUSERDllExport
RTIBool tms_PowerPortId_initialize_ex(
    tms_PowerPortId* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_PowerPortId_initialize_w_params(
    tms_PowerPortId* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_PowerPortId_finalize_w_return(
    tms_PowerPortId* self);

NDDSUSERDllExport
void tms_PowerPortId_finalize(
    tms_PowerPortId* self);

NDDSUSERDllExport
void tms_PowerPortId_finalize_ex(
    tms_PowerPortId* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_PowerPortId_finalize_w_params(
    tms_PowerPortId* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_PowerPortId_finalize_optional_members(
    tms_PowerPortId* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_PowerPortId_copy(
    tms_PowerPortId* dst,
    const tms_PowerPortId* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_PowerConnectionIdTYPENAME;

}

struct tms_PowerConnectionIdSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_PowerConnectionIdTypeSupport;
class tms_PowerConnectionIdDataWriter;
class tms_PowerConnectionIdDataReader;
#endif
class tms_PowerConnectionId 
{
  public:
    typedef struct tms_PowerConnectionIdSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_PowerConnectionIdTypeSupport TypeSupport;
    typedef tms_PowerConnectionIdDataWriter DataWriter;
    typedef tms_PowerConnectionIdDataReader DataReader;
    #endif

    tms_PowerPortId   portA ;
    tms_PowerPortId   portB ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_PowerConnectionId_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_PowerConnectionId_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerConnectionId_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerConnectionId_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_PowerConnectionIdSeq, tms_PowerConnectionId);

NDDSUSERDllExport
RTIBool tms_PowerConnectionId_initialize(
    tms_PowerConnectionId* self);

NDDSUSERDllExport
RTIBool tms_PowerConnectionId_initialize_ex(
    tms_PowerConnectionId* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_PowerConnectionId_initialize_w_params(
    tms_PowerConnectionId* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_PowerConnectionId_finalize_w_return(
    tms_PowerConnectionId* self);

NDDSUSERDllExport
void tms_PowerConnectionId_finalize(
    tms_PowerConnectionId* self);

NDDSUSERDllExport
void tms_PowerConnectionId_finalize_ex(
    tms_PowerConnectionId* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_PowerConnectionId_finalize_w_params(
    tms_PowerConnectionId* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_PowerConnectionId_finalize_optional_members(
    tms_PowerConnectionId* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_PowerConnectionId_copy(
    tms_PowerConnectionId* dst,
    const tms_PowerConnectionId* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum tms_CableSenseType
{
    CST_NONE ,      
    CST_CONNECTOR ,      
    CST_MEASUREMENT ,      
    CST_CONNECTOR_MEASUREMENT      
} tms_CableSenseType;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_CableSenseType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_CableSenseType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_CableSenseType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_CableSenseType_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_CableSenseTypeSeq, tms_CableSenseType);

NDDSUSERDllExport
RTIBool tms_CableSenseType_initialize(
    tms_CableSenseType* self);

NDDSUSERDllExport
RTIBool tms_CableSenseType_initialize_ex(
    tms_CableSenseType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_CableSenseType_initialize_w_params(
    tms_CableSenseType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_CableSenseType_finalize_w_return(
    tms_CableSenseType* self);

NDDSUSERDllExport
void tms_CableSenseType_finalize(
    tms_CableSenseType* self);

NDDSUSERDllExport
void tms_CableSenseType_finalize_ex(
    tms_CableSenseType* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_CableSenseType_finalize_w_params(
    tms_CableSenseType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_CableSenseType_finalize_optional_members(
    tms_CableSenseType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_CableSenseType_copy(
    tms_CableSenseType* dst,
    const tms_CableSenseType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum tms_CableSenseStatus
{
    CS_UNKNOWN ,      
    CS_DISCONNECTED ,      
    CS_CONNECTED      
} tms_CableSenseStatus;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_CableSenseStatus_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_CableSenseStatus_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_CableSenseStatus_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_CableSenseStatus_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_CableSenseStatusSeq, tms_CableSenseStatus);

NDDSUSERDllExport
RTIBool tms_CableSenseStatus_initialize(
    tms_CableSenseStatus* self);

NDDSUSERDllExport
RTIBool tms_CableSenseStatus_initialize_ex(
    tms_CableSenseStatus* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_CableSenseStatus_initialize_w_params(
    tms_CableSenseStatus* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_CableSenseStatus_finalize_w_return(
    tms_CableSenseStatus* self);

NDDSUSERDllExport
void tms_CableSenseStatus_finalize(
    tms_CableSenseStatus* self);

NDDSUSERDllExport
void tms_CableSenseStatus_finalize_ex(
    tms_CableSenseStatus* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_CableSenseStatus_finalize_w_params(
    tms_CableSenseStatus* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_CableSenseStatus_finalize_optional_members(
    tms_CableSenseStatus* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_CableSenseStatus_copy(
    tms_CableSenseStatus* dst,
    const tms_CableSenseStatus* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum tms_PowerConnectorType
{
    CONNECTOR_TERMINAL_BLOCK ,      
    CONNECTOR_MILSTD ,      
    CONNECTOR_NEMA5 ,      
    CONNECTOR_CAMLOCK ,      
    CONNECTOR_POWERLOCK ,      
    CONNECTOR_IEC60309 ,      
    CONNECTOR_J1772 ,      
    CONNECTOR_POWERLOK ,      
    CONNECTOR_MILSTD1651 ,      
    CONNECTOR_MILDTL22992 ,      
    CONNECTOR_MILDTL53126 ,      
    CONNECTOR_OTHER      
} tms_PowerConnectorType;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_PowerConnectorType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_PowerConnectorType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerConnectorType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerConnectorType_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_PowerConnectorTypeSeq, tms_PowerConnectorType);

NDDSUSERDllExport
RTIBool tms_PowerConnectorType_initialize(
    tms_PowerConnectorType* self);

NDDSUSERDllExport
RTIBool tms_PowerConnectorType_initialize_ex(
    tms_PowerConnectorType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_PowerConnectorType_initialize_w_params(
    tms_PowerConnectorType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_PowerConnectorType_finalize_w_return(
    tms_PowerConnectorType* self);

NDDSUSERDllExport
void tms_PowerConnectorType_finalize(
    tms_PowerConnectorType* self);

NDDSUSERDllExport
void tms_PowerConnectorType_finalize_ex(
    tms_PowerConnectorType* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_PowerConnectorType_finalize_w_params(
    tms_PowerConnectorType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_PowerConnectorType_finalize_optional_members(
    tms_PowerConnectorType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_PowerConnectorType_copy(
    tms_PowerConnectorType* dst,
    const tms_PowerConnectorType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum tms_PowerConnectorPolarity
{
    POLARITY_PIN ,      
    POLARITY_SOCKET ,      
    POLARITY_UNIVERSAL      
} tms_PowerConnectorPolarity;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_PowerConnectorPolarity_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_PowerConnectorPolarity_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerConnectorPolarity_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerConnectorPolarity_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_PowerConnectorPolaritySeq, tms_PowerConnectorPolarity);

NDDSUSERDllExport
RTIBool tms_PowerConnectorPolarity_initialize(
    tms_PowerConnectorPolarity* self);

NDDSUSERDllExport
RTIBool tms_PowerConnectorPolarity_initialize_ex(
    tms_PowerConnectorPolarity* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_PowerConnectorPolarity_initialize_w_params(
    tms_PowerConnectorPolarity* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_PowerConnectorPolarity_finalize_w_return(
    tms_PowerConnectorPolarity* self);

NDDSUSERDllExport
void tms_PowerConnectorPolarity_finalize(
    tms_PowerConnectorPolarity* self);

NDDSUSERDllExport
void tms_PowerConnectorPolarity_finalize_ex(
    tms_PowerConnectorPolarity* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_PowerConnectorPolarity_finalize_w_params(
    tms_PowerConnectorPolarity* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_PowerConnectorPolarity_finalize_optional_members(
    tms_PowerConnectorPolarity* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_PowerConnectorPolarity_copy(
    tms_PowerConnectorPolarity* dst,
    const tms_PowerConnectorPolarity* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum tms_PowerConnectorPhases
{
    PHASE_SINGLE ,      
    PHASE_SPLIT ,      
    PHASE_3WYE ,      
    PHASE_3DELTA ,      
    PHASE_DC      
} tms_PowerConnectorPhases;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_PowerConnectorPhases_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_PowerConnectorPhases_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerConnectorPhases_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerConnectorPhases_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_PowerConnectorPhasesSeq, tms_PowerConnectorPhases);

NDDSUSERDllExport
RTIBool tms_PowerConnectorPhases_initialize(
    tms_PowerConnectorPhases* self);

NDDSUSERDllExport
RTIBool tms_PowerConnectorPhases_initialize_ex(
    tms_PowerConnectorPhases* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_PowerConnectorPhases_initialize_w_params(
    tms_PowerConnectorPhases* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_PowerConnectorPhases_finalize_w_return(
    tms_PowerConnectorPhases* self);

NDDSUSERDllExport
void tms_PowerConnectorPhases_finalize(
    tms_PowerConnectorPhases* self);

NDDSUSERDllExport
void tms_PowerConnectorPhases_finalize_ex(
    tms_PowerConnectorPhases* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_PowerConnectorPhases_finalize_w_params(
    tms_PowerConnectorPhases* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_PowerConnectorPhases_finalize_optional_members(
    tms_PowerConnectorPhases* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_PowerConnectorPhases_copy(
    tms_PowerConnectorPhases* dst,
    const tms_PowerConnectorPhases* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum tms_PowerSwitchControl
{
    PSC_NONE ,      
    PSC_MANUAL ,      
    PSC_AUTO ,      
    PSC_REMOTE      
} tms_PowerSwitchControl;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_PowerSwitchControl_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_PowerSwitchControl_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerSwitchControl_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerSwitchControl_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_PowerSwitchControlSeq, tms_PowerSwitchControl);

NDDSUSERDllExport
RTIBool tms_PowerSwitchControl_initialize(
    tms_PowerSwitchControl* self);

NDDSUSERDllExport
RTIBool tms_PowerSwitchControl_initialize_ex(
    tms_PowerSwitchControl* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_PowerSwitchControl_initialize_w_params(
    tms_PowerSwitchControl* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_PowerSwitchControl_finalize_w_return(
    tms_PowerSwitchControl* self);

NDDSUSERDllExport
void tms_PowerSwitchControl_finalize(
    tms_PowerSwitchControl* self);

NDDSUSERDllExport
void tms_PowerSwitchControl_finalize_ex(
    tms_PowerSwitchControl* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_PowerSwitchControl_finalize_w_params(
    tms_PowerSwitchControl* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_PowerSwitchControl_finalize_optional_members(
    tms_PowerSwitchControl* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_PowerSwitchControl_copy(
    tms_PowerSwitchControl* dst,
    const tms_PowerSwitchControl* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum tms_PowerSwitchProtection
{
    PSP_NONE ,      
    PSP_BREAKER ,      
    PSP_GFI ,      
    PSP_BREAKER_GFI      
} tms_PowerSwitchProtection;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_PowerSwitchProtection_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_PowerSwitchProtection_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerSwitchProtection_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerSwitchProtection_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_PowerSwitchProtectionSeq, tms_PowerSwitchProtection);

NDDSUSERDllExport
RTIBool tms_PowerSwitchProtection_initialize(
    tms_PowerSwitchProtection* self);

NDDSUSERDllExport
RTIBool tms_PowerSwitchProtection_initialize_ex(
    tms_PowerSwitchProtection* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_PowerSwitchProtection_initialize_w_params(
    tms_PowerSwitchProtection* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_PowerSwitchProtection_finalize_w_return(
    tms_PowerSwitchProtection* self);

NDDSUSERDllExport
void tms_PowerSwitchProtection_finalize(
    tms_PowerSwitchProtection* self);

NDDSUSERDllExport
void tms_PowerSwitchProtection_finalize_ex(
    tms_PowerSwitchProtection* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_PowerSwitchProtection_finalize_w_params(
    tms_PowerSwitchProtection* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_PowerSwitchProtection_finalize_optional_members(
    tms_PowerSwitchProtection* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_PowerSwitchProtection_copy(
    tms_PowerSwitchProtection* dst,
    const tms_PowerSwitchProtection* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_PowerPortTypeTYPENAME;

}

struct tms_PowerPortTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_PowerPortTypeTypeSupport;
class tms_PowerPortTypeDataWriter;
class tms_PowerPortTypeDataReader;
#endif
class tms_PowerPortType 
{
  public:
    typedef struct tms_PowerPortTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_PowerPortTypeTypeSupport TypeSupport;
    typedef tms_PowerPortTypeDataWriter DataWriter;
    typedef tms_PowerPortTypeDataReader DataReader;
    #endif

    DDS_UnsignedLong   portNumber ;
    tms_PowerConnectorType   standard ;
    tms_PowerConnectorPolarity   polarity ;
    DDS_Float   ratedAmperage ;
    DDS_Float   nominalVoltage ;
    tms_PowerConnectorPhases   phases ;
    tms_CableSenseType   cableSense ;
    tms_PowerSwitchControl   switchControl ;
    tms_PowerSwitchProtection   protection ;
    DDS_Boolean   synchronizer ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_PowerPortType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_PowerPortType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerPortType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerPortType_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_PowerPortTypeSeq, tms_PowerPortType);

NDDSUSERDllExport
RTIBool tms_PowerPortType_initialize(
    tms_PowerPortType* self);

NDDSUSERDllExport
RTIBool tms_PowerPortType_initialize_ex(
    tms_PowerPortType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_PowerPortType_initialize_w_params(
    tms_PowerPortType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_PowerPortType_finalize_w_return(
    tms_PowerPortType* self);

NDDSUSERDllExport
void tms_PowerPortType_finalize(
    tms_PowerPortType* self);

NDDSUSERDllExport
void tms_PowerPortType_finalize_ex(
    tms_PowerPortType* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_PowerPortType_finalize_w_params(
    tms_PowerPortType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_PowerPortType_finalize_optional_members(
    tms_PowerPortType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_PowerPortType_copy(
    tms_PowerPortType* dst,
    const tms_PowerPortType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum tms_CircuitContinuity
{
    CC_UNKNOWN ,      
    CC_OPEN ,      
    CC_CLOSED ,      
    CC_INCONSISTENT      
} tms_CircuitContinuity;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_CircuitContinuity_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_CircuitContinuity_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_CircuitContinuity_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_CircuitContinuity_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_CircuitContinuitySeq, tms_CircuitContinuity);

NDDSUSERDllExport
RTIBool tms_CircuitContinuity_initialize(
    tms_CircuitContinuity* self);

NDDSUSERDllExport
RTIBool tms_CircuitContinuity_initialize_ex(
    tms_CircuitContinuity* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_CircuitContinuity_initialize_w_params(
    tms_CircuitContinuity* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_CircuitContinuity_finalize_w_return(
    tms_CircuitContinuity* self);

NDDSUSERDllExport
void tms_CircuitContinuity_finalize(
    tms_CircuitContinuity* self);

NDDSUSERDllExport
void tms_CircuitContinuity_finalize_ex(
    tms_CircuitContinuity* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_CircuitContinuity_finalize_w_params(
    tms_CircuitContinuity* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_CircuitContinuity_finalize_optional_members(
    tms_CircuitContinuity* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_CircuitContinuity_copy(
    tms_CircuitContinuity* dst,
    const tms_CircuitContinuity* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum tms_PowerSwitchReason
{
    PSR_UNKNOWN ,      
    PSR_MANUAL ,      
    PSR_COMMAND ,      
    PSR_PROTECTION ,      
    PSR_FAILURE ,      
    PSR_LOAD_POLICY      
} tms_PowerSwitchReason;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_PowerSwitchReason_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_PowerSwitchReason_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerSwitchReason_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerSwitchReason_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_PowerSwitchReasonSeq, tms_PowerSwitchReason);

NDDSUSERDllExport
RTIBool tms_PowerSwitchReason_initialize(
    tms_PowerSwitchReason* self);

NDDSUSERDllExport
RTIBool tms_PowerSwitchReason_initialize_ex(
    tms_PowerSwitchReason* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_PowerSwitchReason_initialize_w_params(
    tms_PowerSwitchReason* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_PowerSwitchReason_finalize_w_return(
    tms_PowerSwitchReason* self);

NDDSUSERDllExport
void tms_PowerSwitchReason_finalize(
    tms_PowerSwitchReason* self);

NDDSUSERDllExport
void tms_PowerSwitchReason_finalize_ex(
    tms_PowerSwitchReason* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_PowerSwitchReason_finalize_w_params(
    tms_PowerSwitchReason* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_PowerSwitchReason_finalize_optional_members(
    tms_PowerSwitchReason* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_PowerSwitchReason_copy(
    tms_PowerSwitchReason* dst,
    const tms_PowerSwitchReason* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_PowerSwitchStatusTYPENAME;

}

struct tms_PowerSwitchStatusSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_PowerSwitchStatusTypeSupport;
class tms_PowerSwitchStatusDataWriter;
class tms_PowerSwitchStatusDataReader;
#endif
class tms_PowerSwitchStatus 
{
  public:
    typedef struct tms_PowerSwitchStatusSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_PowerSwitchStatusTypeSupport TypeSupport;
    typedef tms_PowerSwitchStatusDataWriter DataWriter;
    typedef tms_PowerSwitchStatusDataReader DataReader;
    #endif

    tms_CircuitContinuity   continuity ;
    DDS_Boolean   transitionFault ;
    DDS_Boolean   transitionLock ;
    tms_PowerSwitchReason   lastTransition ;
    tms_Fingerprint   lastTransitionActor ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_PowerSwitchStatus_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_PowerSwitchStatus_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerSwitchStatus_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerSwitchStatus_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_PowerSwitchStatusSeq, tms_PowerSwitchStatus);

NDDSUSERDllExport
RTIBool tms_PowerSwitchStatus_initialize(
    tms_PowerSwitchStatus* self);

NDDSUSERDllExport
RTIBool tms_PowerSwitchStatus_initialize_ex(
    tms_PowerSwitchStatus* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_PowerSwitchStatus_initialize_w_params(
    tms_PowerSwitchStatus* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_PowerSwitchStatus_finalize_w_return(
    tms_PowerSwitchStatus* self);

NDDSUSERDllExport
void tms_PowerSwitchStatus_finalize(
    tms_PowerSwitchStatus* self);

NDDSUSERDllExport
void tms_PowerSwitchStatus_finalize_ex(
    tms_PowerSwitchStatus* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_PowerSwitchStatus_finalize_w_params(
    tms_PowerSwitchStatus* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_PowerSwitchStatus_finalize_optional_members(
    tms_PowerSwitchStatus* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_PowerSwitchStatus_copy(
    tms_PowerSwitchStatus* dst,
    const tms_PowerSwitchStatus* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum tms_DesiredCircuitContinuity
{
    DCC_OPEN ,      
    DCC_CLOSED ,      
    DCC_SYNC_CLOSED ,      
    DCC_CLOSED_INTERNAL ,      
    DCC_NO_CHANGE      
} tms_DesiredCircuitContinuity;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_DesiredCircuitContinuity_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_DesiredCircuitContinuity_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DesiredCircuitContinuity_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DesiredCircuitContinuity_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_DesiredCircuitContinuitySeq, tms_DesiredCircuitContinuity);

NDDSUSERDllExport
RTIBool tms_DesiredCircuitContinuity_initialize(
    tms_DesiredCircuitContinuity* self);

NDDSUSERDllExport
RTIBool tms_DesiredCircuitContinuity_initialize_ex(
    tms_DesiredCircuitContinuity* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_DesiredCircuitContinuity_initialize_w_params(
    tms_DesiredCircuitContinuity* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_DesiredCircuitContinuity_finalize_w_return(
    tms_DesiredCircuitContinuity* self);

NDDSUSERDllExport
void tms_DesiredCircuitContinuity_finalize(
    tms_DesiredCircuitContinuity* self);

NDDSUSERDllExport
void tms_DesiredCircuitContinuity_finalize_ex(
    tms_DesiredCircuitContinuity* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_DesiredCircuitContinuity_finalize_w_params(
    tms_DesiredCircuitContinuity* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_DesiredCircuitContinuity_finalize_optional_members(
    tms_DesiredCircuitContinuity* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_DesiredCircuitContinuity_copy(
    tms_DesiredCircuitContinuity* dst,
    const tms_DesiredCircuitContinuity* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_PowerSwitchCommandTYPENAME;

}

struct tms_PowerSwitchCommandSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_PowerSwitchCommandTypeSupport;
class tms_PowerSwitchCommandDataWriter;
class tms_PowerSwitchCommandDataReader;
#endif
class tms_PowerSwitchCommand 
{
  public:
    typedef struct tms_PowerSwitchCommandSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_PowerSwitchCommandTypeSupport TypeSupport;
    typedef tms_PowerSwitchCommandDataWriter DataWriter;
    typedef tms_PowerSwitchCommandDataReader DataReader;
    #endif

    tms_SampleId   requestId ;
    tms_Fingerprint   deviceId ;
    DDS_UnsignedShort   config ;
    DDS_UnsignedLong   portNumber ;
    tms_DesiredCircuitContinuity   continuity ;
    DDS_Float   minV ;
    DDS_Float   maxV ;
    DDS_Float   minF ;
    DDS_Float   maxF ;
    DDS_Float   maxPhase ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_PowerSwitchCommand_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_PowerSwitchCommand_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerSwitchCommand_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerSwitchCommand_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_PowerSwitchCommandSeq, tms_PowerSwitchCommand);

NDDSUSERDllExport
RTIBool tms_PowerSwitchCommand_initialize(
    tms_PowerSwitchCommand* self);

NDDSUSERDllExport
RTIBool tms_PowerSwitchCommand_initialize_ex(
    tms_PowerSwitchCommand* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_PowerSwitchCommand_initialize_w_params(
    tms_PowerSwitchCommand* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_PowerSwitchCommand_finalize_w_return(
    tms_PowerSwitchCommand* self);

NDDSUSERDllExport
void tms_PowerSwitchCommand_finalize(
    tms_PowerSwitchCommand* self);

NDDSUSERDllExport
void tms_PowerSwitchCommand_finalize_ex(
    tms_PowerSwitchCommand* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_PowerSwitchCommand_finalize_w_params(
    tms_PowerSwitchCommand* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_PowerSwitchCommand_finalize_optional_members(
    tms_PowerSwitchCommand* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_PowerSwitchCommand_copy(
    tms_PowerSwitchCommand* dst,
    const tms_PowerSwitchCommand* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_UnsignedLong tms_MINLEN_cableId= 0;
static const DDS_UnsignedLong tms_MAXLEN_cableId= 1;
static const DDS_UnsignedLong tms_MINLEN_connection= 0;
static const DDS_UnsignedLong tms_MAXLEN_connection= 1;
static const DDS_UnsignedLong tms_MINLEN_switchStatus= 0;
static const DDS_UnsignedLong tms_MAXLEN_switchStatus= 1;
extern "C" {

    extern const char *tms_PowerPortStatusTYPENAME;

}

struct tms_PowerPortStatusSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_PowerPortStatusTypeSupport;
class tms_PowerPortStatusDataWriter;
class tms_PowerPortStatusDataReader;
#endif
class tms_PowerPortStatus 
{
  public:
    typedef struct tms_PowerPortStatusSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_PowerPortStatusTypeSupport TypeSupport;
    typedef tms_PowerPortStatusDataWriter DataWriter;
    typedef tms_PowerPortStatusDataReader DataReader;
    #endif

    DDS_UnsignedLong   portNumber ;
    tms_CableSenseStatus   cableStatus ;
    tms_FingerprintSeq  cableId ;
    tms_PowerPortIdSeq  connection ;
    tms_PowerSwitchStatusSeq  switchStatus ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_PowerPortStatus_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_PowerPortStatus_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerPortStatus_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerPortStatus_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_PowerPortStatusSeq, tms_PowerPortStatus);

NDDSUSERDllExport
RTIBool tms_PowerPortStatus_initialize(
    tms_PowerPortStatus* self);

NDDSUSERDllExport
RTIBool tms_PowerPortStatus_initialize_ex(
    tms_PowerPortStatus* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_PowerPortStatus_initialize_w_params(
    tms_PowerPortStatus* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_PowerPortStatus_finalize_w_return(
    tms_PowerPortStatus* self);

NDDSUSERDllExport
void tms_PowerPortStatus_finalize(
    tms_PowerPortStatus* self);

NDDSUSERDllExport
void tms_PowerPortStatus_finalize_ex(
    tms_PowerPortStatus* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_PowerPortStatus_finalize_w_params(
    tms_PowerPortStatus* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_PowerPortStatus_finalize_optional_members(
    tms_PowerPortStatus* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_PowerPortStatus_copy(
    tms_PowerPortStatus* dst,
    const tms_PowerPortStatus* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum tms_PowerConnectionDetectionType
{
    PCDT_OPERATOR ,      
    PCDT_CABLE_ID ,      
    PCDT_PROBE ,      
    PCDT_CORRELATION ,      
    PCDT_HISTORY      
} tms_PowerConnectionDetectionType;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_PowerConnectionDetectionType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_PowerConnectionDetectionType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerConnectionDetectionType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerConnectionDetectionType_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_PowerConnectionDetectionTypeSeq, tms_PowerConnectionDetectionType);

NDDSUSERDllExport
RTIBool tms_PowerConnectionDetectionType_initialize(
    tms_PowerConnectionDetectionType* self);

NDDSUSERDllExport
RTIBool tms_PowerConnectionDetectionType_initialize_ex(
    tms_PowerConnectionDetectionType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_PowerConnectionDetectionType_initialize_w_params(
    tms_PowerConnectionDetectionType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_PowerConnectionDetectionType_finalize_w_return(
    tms_PowerConnectionDetectionType* self);

NDDSUSERDllExport
void tms_PowerConnectionDetectionType_finalize(
    tms_PowerConnectionDetectionType* self);

NDDSUSERDllExport
void tms_PowerConnectionDetectionType_finalize_ex(
    tms_PowerConnectionDetectionType* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_PowerConnectionDetectionType_finalize_w_params(
    tms_PowerConnectionDetectionType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_PowerConnectionDetectionType_finalize_optional_members(
    tms_PowerConnectionDetectionType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_PowerConnectionDetectionType_copy(
    tms_PowerConnectionDetectionType* dst,
    const tms_PowerConnectionDetectionType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_PowerConnectionTYPENAME;

}

struct tms_PowerConnectionSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_PowerConnectionTypeSupport;
class tms_PowerConnectionDataWriter;
class tms_PowerConnectionDataReader;
#endif
class tms_PowerConnection 
{
  public:
    typedef struct tms_PowerConnectionSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_PowerConnectionTypeSupport TypeSupport;
    typedef tms_PowerConnectionDataWriter DataWriter;
    typedef tms_PowerConnectionDataReader DataReader;
    #endif

    tms_PowerConnectionId   connectionId ;
    tms_PowerConnectionDetectionType   detectionType ;
    tms_Fingerprint   detectionSource ;
    DDS_Float   detectionConfidence ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_PowerConnection_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_PowerConnection_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerConnection_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerConnection_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_PowerConnectionSeq, tms_PowerConnection);

NDDSUSERDllExport
RTIBool tms_PowerConnection_initialize(
    tms_PowerConnection* self);

NDDSUSERDllExport
RTIBool tms_PowerConnection_initialize_ex(
    tms_PowerConnection* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_PowerConnection_initialize_w_params(
    tms_PowerConnection* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_PowerConnection_finalize_w_return(
    tms_PowerConnection* self);

NDDSUSERDllExport
void tms_PowerConnection_finalize(
    tms_PowerConnection* self);

NDDSUSERDllExport
void tms_PowerConnection_finalize_ex(
    tms_PowerConnection* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_PowerConnection_finalize_w_params(
    tms_PowerConnection* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_PowerConnection_finalize_optional_members(
    tms_PowerConnection* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_PowerConnection_copy(
    tms_PowerConnection* dst,
    const tms_PowerConnection* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_UnsignedLong tms_MINLEN_ports_one= 1;
extern "C" {

    extern const char *tms_DevicePowerPortTypesTYPENAME;

}

struct tms_DevicePowerPortTypesSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_DevicePowerPortTypesTypeSupport;
class tms_DevicePowerPortTypesDataWriter;
class tms_DevicePowerPortTypesDataReader;
#endif
class tms_DevicePowerPortTypes 
{
  public:
    typedef struct tms_DevicePowerPortTypesSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_DevicePowerPortTypesTypeSupport TypeSupport;
    typedef tms_DevicePowerPortTypesDataWriter DataWriter;
    typedef tms_DevicePowerPortTypesDataReader DataReader;
    #endif

    tms_Fingerprint   deviceId ;
    tms_PowerPortTypeSeq  ports ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_DevicePowerPortTypes_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_DevicePowerPortTypes_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DevicePowerPortTypes_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DevicePowerPortTypes_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_DevicePowerPortTypesSeq, tms_DevicePowerPortTypes);

NDDSUSERDllExport
RTIBool tms_DevicePowerPortTypes_initialize(
    tms_DevicePowerPortTypes* self);

NDDSUSERDllExport
RTIBool tms_DevicePowerPortTypes_initialize_ex(
    tms_DevicePowerPortTypes* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_DevicePowerPortTypes_initialize_w_params(
    tms_DevicePowerPortTypes* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_DevicePowerPortTypes_finalize_w_return(
    tms_DevicePowerPortTypes* self);

NDDSUSERDllExport
void tms_DevicePowerPortTypes_finalize(
    tms_DevicePowerPortTypes* self);

NDDSUSERDllExport
void tms_DevicePowerPortTypes_finalize_ex(
    tms_DevicePowerPortTypes* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_DevicePowerPortTypes_finalize_w_params(
    tms_DevicePowerPortTypes* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_DevicePowerPortTypes_finalize_optional_members(
    tms_DevicePowerPortTypes* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_DevicePowerPortTypes_copy(
    tms_DevicePowerPortTypes* dst,
    const tms_DevicePowerPortTypes* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_DevicePowerPortStatusesTYPENAME;

}

struct tms_DevicePowerPortStatusesSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_DevicePowerPortStatusesTypeSupport;
class tms_DevicePowerPortStatusesDataWriter;
class tms_DevicePowerPortStatusesDataReader;
#endif
class tms_DevicePowerPortStatuses 
{
  public:
    typedef struct tms_DevicePowerPortStatusesSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_DevicePowerPortStatusesTypeSupport TypeSupport;
    typedef tms_DevicePowerPortStatusesDataWriter DataWriter;
    typedef tms_DevicePowerPortStatusesDataReader DataReader;
    #endif

    tms_Fingerprint   deviceId ;
    tms_PowerPortStatusSeq  ports ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_DevicePowerPortStatuses_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_DevicePowerPortStatuses_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DevicePowerPortStatuses_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DevicePowerPortStatuses_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_DevicePowerPortStatusesSeq, tms_DevicePowerPortStatuses);

NDDSUSERDllExport
RTIBool tms_DevicePowerPortStatuses_initialize(
    tms_DevicePowerPortStatuses* self);

NDDSUSERDllExport
RTIBool tms_DevicePowerPortStatuses_initialize_ex(
    tms_DevicePowerPortStatuses* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_DevicePowerPortStatuses_initialize_w_params(
    tms_DevicePowerPortStatuses* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_DevicePowerPortStatuses_finalize_w_return(
    tms_DevicePowerPortStatuses* self);

NDDSUSERDllExport
void tms_DevicePowerPortStatuses_finalize(
    tms_DevicePowerPortStatuses* self);

NDDSUSERDllExport
void tms_DevicePowerPortStatuses_finalize_ex(
    tms_DevicePowerPortStatuses* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_DevicePowerPortStatuses_finalize_w_params(
    tms_DevicePowerPortStatuses* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_DevicePowerPortStatuses_finalize_optional_members(
    tms_DevicePowerPortStatuses* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_DevicePowerPortStatuses_copy(
    tms_DevicePowerPortStatuses* dst,
    const tms_DevicePowerPortStatuses* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_UnsignedLong tms_MINLEN_connections= 0;
static const DDS_UnsignedLong tms_MAXLEN_connections= 200;
extern "C" {

    extern const char *tms_PowerConnectionListTYPENAME;

}

struct tms_PowerConnectionListSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_PowerConnectionListTypeSupport;
class tms_PowerConnectionListDataWriter;
class tms_PowerConnectionListDataReader;
#endif
class tms_PowerConnectionList 
{
  public:
    typedef struct tms_PowerConnectionListSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_PowerConnectionListTypeSupport TypeSupport;
    typedef tms_PowerConnectionListDataWriter DataWriter;
    typedef tms_PowerConnectionListDataReader DataReader;
    #endif

    tms_Fingerprint   deviceId ;
    tms_PowerConnectionSeq  connections ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_PowerConnectionList_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_PowerConnectionList_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerConnectionList_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerConnectionList_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_PowerConnectionListSeq, tms_PowerConnectionList);

NDDSUSERDllExport
RTIBool tms_PowerConnectionList_initialize(
    tms_PowerConnectionList* self);

NDDSUSERDllExport
RTIBool tms_PowerConnectionList_initialize_ex(
    tms_PowerConnectionList* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_PowerConnectionList_initialize_w_params(
    tms_PowerConnectionList* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_PowerConnectionList_finalize_w_return(
    tms_PowerConnectionList* self);

NDDSUSERDllExport
void tms_PowerConnectionList_finalize(
    tms_PowerConnectionList* self);

NDDSUSERDllExport
void tms_PowerConnectionList_finalize_ex(
    tms_PowerConnectionList* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_PowerConnectionList_finalize_w_params(
    tms_PowerConnectionList* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_PowerConnectionList_finalize_optional_members(
    tms_PowerConnectionList* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_PowerConnectionList_copy(
    tms_PowerConnectionList* dst,
    const tms_PowerConnectionList* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef    DDS_UnsignedLong   tms_GroundingCircuitNumber ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_GroundingCircuitNumber_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_GroundingCircuitNumber_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_GroundingCircuitNumber_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_GroundingCircuitNumber_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_GroundingCircuitNumberSeq, tms_GroundingCircuitNumber);

NDDSUSERDllExport
RTIBool tms_GroundingCircuitNumber_initialize(
    tms_GroundingCircuitNumber* self);

NDDSUSERDllExport
RTIBool tms_GroundingCircuitNumber_initialize_ex(
    tms_GroundingCircuitNumber* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_GroundingCircuitNumber_initialize_w_params(
    tms_GroundingCircuitNumber* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_GroundingCircuitNumber_finalize_w_return(
    tms_GroundingCircuitNumber* self);

NDDSUSERDllExport
void tms_GroundingCircuitNumber_finalize(
    tms_GroundingCircuitNumber* self);

NDDSUSERDllExport
void tms_GroundingCircuitNumber_finalize_ex(
    tms_GroundingCircuitNumber* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_GroundingCircuitNumber_finalize_w_params(
    tms_GroundingCircuitNumber* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_GroundingCircuitNumber_finalize_optional_members(
    tms_GroundingCircuitNumber* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_GroundingCircuitNumber_copy(
    tms_GroundingCircuitNumber* dst,
    const tms_GroundingCircuitNumber* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_UnsignedLong tms_MAX_GROUNDS= 20;
typedef enum tms_GroundingDesignType
{
    GROUNDING_INVALID ,      
    GROUNDING_UNGROUNDED ,      
    GROUNDING_SOLID ,      
    GROUNDING_HIGH_RESISTANCE ,      
    GROUNDING_LOW_RESISTANCE ,      
    GROUNDING_REACTANCE      
} tms_GroundingDesignType;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_GroundingDesignType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_GroundingDesignType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_GroundingDesignType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_GroundingDesignType_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_GroundingDesignTypeSeq, tms_GroundingDesignType);

NDDSUSERDllExport
RTIBool tms_GroundingDesignType_initialize(
    tms_GroundingDesignType* self);

NDDSUSERDllExport
RTIBool tms_GroundingDesignType_initialize_ex(
    tms_GroundingDesignType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_GroundingDesignType_initialize_w_params(
    tms_GroundingDesignType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_GroundingDesignType_finalize_w_return(
    tms_GroundingDesignType* self);

NDDSUSERDllExport
void tms_GroundingDesignType_finalize(
    tms_GroundingDesignType* self);

NDDSUSERDllExport
void tms_GroundingDesignType_finalize_ex(
    tms_GroundingDesignType* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_GroundingDesignType_finalize_w_params(
    tms_GroundingDesignType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_GroundingDesignType_finalize_optional_members(
    tms_GroundingDesignType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_GroundingDesignType_copy(
    tms_GroundingDesignType* dst,
    const tms_GroundingDesignType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_UnsignedLong tms_MINLEN_protectedPorts= 1;
static const DDS_UnsignedLong tms_MAXLEN_protectedPorts= (tms_MAX_PORTS);
extern "C" {

    extern const char *tms_GroundingTypeTYPENAME;

}

struct tms_GroundingTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_GroundingTypeTypeSupport;
class tms_GroundingTypeDataWriter;
class tms_GroundingTypeDataReader;
#endif
class tms_GroundingType 
{
  public:
    typedef struct tms_GroundingTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_GroundingTypeTypeSupport TypeSupport;
    typedef tms_GroundingTypeDataWriter DataWriter;
    typedef tms_GroundingTypeDataReader DataReader;
    #endif

    DDS_UnsignedLong   groundNumber ;
    tms_GroundingDesignType   type ;
    DDS_UnsignedLongSeq  protectedPorts ;
    tms_PowerSwitchControl   controlType ;
    tms_PowerSwitchControl   pulseType ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_GroundingType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_GroundingType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_GroundingType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_GroundingType_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_GroundingTypeSeq, tms_GroundingType);

NDDSUSERDllExport
RTIBool tms_GroundingType_initialize(
    tms_GroundingType* self);

NDDSUSERDllExport
RTIBool tms_GroundingType_initialize_ex(
    tms_GroundingType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_GroundingType_initialize_w_params(
    tms_GroundingType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_GroundingType_finalize_w_return(
    tms_GroundingType* self);

NDDSUSERDllExport
void tms_GroundingType_finalize(
    tms_GroundingType* self);

NDDSUSERDllExport
void tms_GroundingType_finalize_ex(
    tms_GroundingType* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_GroundingType_finalize_w_params(
    tms_GroundingType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_GroundingType_finalize_optional_members(
    tms_GroundingType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_GroundingType_copy(
    tms_GroundingType* dst,
    const tms_GroundingType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_UnsignedLong tms_MINLEN_grounds= 0;
static const DDS_UnsignedLong tms_MAXLEN_grounds= (tms_MAX_GROUNDS);
extern "C" {

    extern const char *tms_DeviceGroundingTypeTYPENAME;

}

struct tms_DeviceGroundingTypeSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_DeviceGroundingTypeTypeSupport;
class tms_DeviceGroundingTypeDataWriter;
class tms_DeviceGroundingTypeDataReader;
#endif
class tms_DeviceGroundingType 
{
  public:
    typedef struct tms_DeviceGroundingTypeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_DeviceGroundingTypeTypeSupport TypeSupport;
    typedef tms_DeviceGroundingTypeDataWriter DataWriter;
    typedef tms_DeviceGroundingTypeDataReader DataReader;
    #endif

    tms_Fingerprint   deviceId ;
    tms_GroundingTypeSeq  grounds ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_DeviceGroundingType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_DeviceGroundingType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DeviceGroundingType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DeviceGroundingType_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_DeviceGroundingTypeSeq, tms_DeviceGroundingType);

NDDSUSERDllExport
RTIBool tms_DeviceGroundingType_initialize(
    tms_DeviceGroundingType* self);

NDDSUSERDllExport
RTIBool tms_DeviceGroundingType_initialize_ex(
    tms_DeviceGroundingType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_DeviceGroundingType_initialize_w_params(
    tms_DeviceGroundingType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_DeviceGroundingType_finalize_w_return(
    tms_DeviceGroundingType* self);

NDDSUSERDllExport
void tms_DeviceGroundingType_finalize(
    tms_DeviceGroundingType* self);

NDDSUSERDllExport
void tms_DeviceGroundingType_finalize_ex(
    tms_DeviceGroundingType* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_DeviceGroundingType_finalize_w_params(
    tms_DeviceGroundingType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_DeviceGroundingType_finalize_optional_members(
    tms_DeviceGroundingType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_DeviceGroundingType_copy(
    tms_DeviceGroundingType* dst,
    const tms_DeviceGroundingType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum tms_GroundFaultDetection
{
    GFD_INVALID ,      
    GFD_NONE ,      
    GFD_ANY ,      
    GFD_A ,      
    GFD_B ,      
    GFD_C ,      
    GFD_DCPOS ,      
    GFD_DCNEG      
} tms_GroundFaultDetection;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_GroundFaultDetection_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_GroundFaultDetection_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_GroundFaultDetection_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_GroundFaultDetection_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_GroundFaultDetectionSeq, tms_GroundFaultDetection);

NDDSUSERDllExport
RTIBool tms_GroundFaultDetection_initialize(
    tms_GroundFaultDetection* self);

NDDSUSERDllExport
RTIBool tms_GroundFaultDetection_initialize_ex(
    tms_GroundFaultDetection* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_GroundFaultDetection_initialize_w_params(
    tms_GroundFaultDetection* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_GroundFaultDetection_finalize_w_return(
    tms_GroundFaultDetection* self);

NDDSUSERDllExport
void tms_GroundFaultDetection_finalize(
    tms_GroundFaultDetection* self);

NDDSUSERDllExport
void tms_GroundFaultDetection_finalize_ex(
    tms_GroundFaultDetection* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_GroundFaultDetection_finalize_w_params(
    tms_GroundFaultDetection* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_GroundFaultDetection_finalize_optional_members(
    tms_GroundFaultDetection* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_GroundFaultDetection_copy(
    tms_GroundFaultDetection* dst,
    const tms_GroundFaultDetection* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_UnsignedLong tms_MINLEN_control= 0;
static const DDS_UnsignedLong tms_MAXLEN_control= 1;
static const DDS_UnsignedLong tms_MINLEN_pulse= 0;
static const DDS_UnsignedLong tms_MAXLEN_pulse= 1;
extern "C" {

    extern const char *tms_GroundingStatusTYPENAME;

}

struct tms_GroundingStatusSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_GroundingStatusTypeSupport;
class tms_GroundingStatusDataWriter;
class tms_GroundingStatusDataReader;
#endif
class tms_GroundingStatus 
{
  public:
    typedef struct tms_GroundingStatusSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_GroundingStatusTypeSupport TypeSupport;
    typedef tms_GroundingStatusDataWriter DataWriter;
    typedef tms_GroundingStatusDataReader DataReader;
    #endif

    DDS_UnsignedLong   groundNumber ;
    tms_PowerSwitchStatusSeq  control ;
    tms_PowerSwitchStatusSeq  pulse ;
    tms_GroundFaultDetection   faultDetection ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_GroundingStatus_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_GroundingStatus_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_GroundingStatus_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_GroundingStatus_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_GroundingStatusSeq, tms_GroundingStatus);

NDDSUSERDllExport
RTIBool tms_GroundingStatus_initialize(
    tms_GroundingStatus* self);

NDDSUSERDllExport
RTIBool tms_GroundingStatus_initialize_ex(
    tms_GroundingStatus* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_GroundingStatus_initialize_w_params(
    tms_GroundingStatus* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_GroundingStatus_finalize_w_return(
    tms_GroundingStatus* self);

NDDSUSERDllExport
void tms_GroundingStatus_finalize(
    tms_GroundingStatus* self);

NDDSUSERDllExport
void tms_GroundingStatus_finalize_ex(
    tms_GroundingStatus* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_GroundingStatus_finalize_w_params(
    tms_GroundingStatus* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_GroundingStatus_finalize_optional_members(
    tms_GroundingStatus* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_GroundingStatus_copy(
    tms_GroundingStatus* dst,
    const tms_GroundingStatus* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_DeviceGroundingStatusTYPENAME;

}

struct tms_DeviceGroundingStatusSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_DeviceGroundingStatusTypeSupport;
class tms_DeviceGroundingStatusDataWriter;
class tms_DeviceGroundingStatusDataReader;
#endif
class tms_DeviceGroundingStatus 
{
  public:
    typedef struct tms_DeviceGroundingStatusSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_DeviceGroundingStatusTypeSupport TypeSupport;
    typedef tms_DeviceGroundingStatusDataWriter DataWriter;
    typedef tms_DeviceGroundingStatusDataReader DataReader;
    #endif

    tms_Fingerprint   deviceId ;
    tms_GroundingStatusSeq  grounds ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_DeviceGroundingStatus_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_DeviceGroundingStatus_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DeviceGroundingStatus_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DeviceGroundingStatus_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_DeviceGroundingStatusSeq, tms_DeviceGroundingStatus);

NDDSUSERDllExport
RTIBool tms_DeviceGroundingStatus_initialize(
    tms_DeviceGroundingStatus* self);

NDDSUSERDllExport
RTIBool tms_DeviceGroundingStatus_initialize_ex(
    tms_DeviceGroundingStatus* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_DeviceGroundingStatus_initialize_w_params(
    tms_DeviceGroundingStatus* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_DeviceGroundingStatus_finalize_w_return(
    tms_DeviceGroundingStatus* self);

NDDSUSERDllExport
void tms_DeviceGroundingStatus_finalize(
    tms_DeviceGroundingStatus* self);

NDDSUSERDllExport
void tms_DeviceGroundingStatus_finalize_ex(
    tms_DeviceGroundingStatus* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_DeviceGroundingStatus_finalize_w_params(
    tms_DeviceGroundingStatus* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_DeviceGroundingStatus_finalize_optional_members(
    tms_DeviceGroundingStatus* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_DeviceGroundingStatus_copy(
    tms_DeviceGroundingStatus* dst,
    const tms_DeviceGroundingStatus* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_GroundingCommandTYPENAME;

}

struct tms_GroundingCommandSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_GroundingCommandTypeSupport;
class tms_GroundingCommandDataWriter;
class tms_GroundingCommandDataReader;
#endif
class tms_GroundingCommand 
{
  public:
    typedef struct tms_GroundingCommandSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_GroundingCommandTypeSupport TypeSupport;
    typedef tms_GroundingCommandDataWriter DataWriter;
    typedef tms_GroundingCommandDataReader DataReader;
    #endif

    tms_SampleId   requestId ;
    tms_Fingerprint   deviceId ;
    DDS_UnsignedShort   config ;
    DDS_UnsignedLong   groundNumber ;
    tms_DesiredCircuitContinuity   control ;
    tms_DesiredCircuitContinuity   pulse ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_GroundingCommand_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_GroundingCommand_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_GroundingCommand_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_GroundingCommand_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_GroundingCommandSeq, tms_GroundingCommand);

NDDSUSERDllExport
RTIBool tms_GroundingCommand_initialize(
    tms_GroundingCommand* self);

NDDSUSERDllExport
RTIBool tms_GroundingCommand_initialize_ex(
    tms_GroundingCommand* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_GroundingCommand_initialize_w_params(
    tms_GroundingCommand* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_GroundingCommand_finalize_w_return(
    tms_GroundingCommand* self);

NDDSUSERDllExport
void tms_GroundingCommand_finalize(
    tms_GroundingCommand* self);

NDDSUSERDllExport
void tms_GroundingCommand_finalize_ex(
    tms_GroundingCommand* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_GroundingCommand_finalize_w_params(
    tms_GroundingCommand* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_GroundingCommand_finalize_optional_members(
    tms_GroundingCommand* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_GroundingCommand_copy(
    tms_GroundingCommand* dst,
    const tms_GroundingCommand* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_PowerMeasurementLineTYPENAME;

}

struct tms_PowerMeasurementLineSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_PowerMeasurementLineTypeSupport;
class tms_PowerMeasurementLineDataWriter;
class tms_PowerMeasurementLineDataReader;
#endif
class tms_PowerMeasurementLine 
{
  public:
    typedef struct tms_PowerMeasurementLineSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_PowerMeasurementLineTypeSupport TypeSupport;
    typedef tms_PowerMeasurementLineDataWriter DataWriter;
    typedef tms_PowerMeasurementLineDataReader DataReader;
    #endif

    DDS_Float   v ;
    DDS_Float   i ;
    DDS_Float   phi ;
    DDS_Float   p ;
    DDS_Float   q ;
    DDS_Float   f ;
    DDS_Float   vThd ;
    DDS_Float   iThd ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_PowerMeasurementLine_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_PowerMeasurementLine_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerMeasurementLine_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerMeasurementLine_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_PowerMeasurementLineSeq, tms_PowerMeasurementLine);

NDDSUSERDllExport
RTIBool tms_PowerMeasurementLine_initialize(
    tms_PowerMeasurementLine* self);

NDDSUSERDllExport
RTIBool tms_PowerMeasurementLine_initialize_ex(
    tms_PowerMeasurementLine* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_PowerMeasurementLine_initialize_w_params(
    tms_PowerMeasurementLine* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_PowerMeasurementLine_finalize_w_return(
    tms_PowerMeasurementLine* self);

NDDSUSERDllExport
void tms_PowerMeasurementLine_finalize(
    tms_PowerMeasurementLine* self);

NDDSUSERDllExport
void tms_PowerMeasurementLine_finalize_ex(
    tms_PowerMeasurementLine* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_PowerMeasurementLine_finalize_w_params(
    tms_PowerMeasurementLine* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_PowerMeasurementLine_finalize_optional_members(
    tms_PowerMeasurementLine* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_PowerMeasurementLine_copy(
    tms_PowerMeasurementLine* dst,
    const tms_PowerMeasurementLine* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_PowerMeasurementWyeTYPENAME;

}

struct tms_PowerMeasurementWyeSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_PowerMeasurementWyeTypeSupport;
class tms_PowerMeasurementWyeDataWriter;
class tms_PowerMeasurementWyeDataReader;
#endif
class tms_PowerMeasurementWye 
{
  public:
    typedef struct tms_PowerMeasurementWyeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_PowerMeasurementWyeTypeSupport TypeSupport;
    typedef tms_PowerMeasurementWyeDataWriter DataWriter;
    typedef tms_PowerMeasurementWyeDataReader DataReader;
    #endif

    tms_PowerMeasurementLine   A ;
    tms_PowerMeasurementLine   B ;
    tms_PowerMeasurementLine   C ;
    tms_PowerMeasurementLine   N ;
    DDS_Float   phaseAtoB ;
    DDS_Float   phaseAtoC ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_PowerMeasurementWye_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_PowerMeasurementWye_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerMeasurementWye_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerMeasurementWye_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_PowerMeasurementWyeSeq, tms_PowerMeasurementWye);

NDDSUSERDllExport
RTIBool tms_PowerMeasurementWye_initialize(
    tms_PowerMeasurementWye* self);

NDDSUSERDllExport
RTIBool tms_PowerMeasurementWye_initialize_ex(
    tms_PowerMeasurementWye* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_PowerMeasurementWye_initialize_w_params(
    tms_PowerMeasurementWye* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_PowerMeasurementWye_finalize_w_return(
    tms_PowerMeasurementWye* self);

NDDSUSERDllExport
void tms_PowerMeasurementWye_finalize(
    tms_PowerMeasurementWye* self);

NDDSUSERDllExport
void tms_PowerMeasurementWye_finalize_ex(
    tms_PowerMeasurementWye* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_PowerMeasurementWye_finalize_w_params(
    tms_PowerMeasurementWye* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_PowerMeasurementWye_finalize_optional_members(
    tms_PowerMeasurementWye* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_PowerMeasurementWye_copy(
    tms_PowerMeasurementWye* dst,
    const tms_PowerMeasurementWye* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_PowerPortMeasurementTYPENAME;

}

struct tms_PowerPortMeasurementSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_PowerPortMeasurementTypeSupport;
class tms_PowerPortMeasurementDataWriter;
class tms_PowerPortMeasurementDataReader;
#endif
class tms_PowerPortMeasurement 
{
  public:
    typedef struct tms_PowerPortMeasurementSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_PowerPortMeasurementTypeSupport TypeSupport;
    typedef tms_PowerPortMeasurementDataWriter DataWriter;
    typedef tms_PowerPortMeasurementDataReader DataReader;
    #endif

    DDS_UnsignedLong   portNumber ;
    tms_PowerMeasurementWye   measurement ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_PowerPortMeasurement_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_PowerPortMeasurement_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerPortMeasurement_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerPortMeasurement_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_PowerPortMeasurementSeq, tms_PowerPortMeasurement);

NDDSUSERDllExport
RTIBool tms_PowerPortMeasurement_initialize(
    tms_PowerPortMeasurement* self);

NDDSUSERDllExport
RTIBool tms_PowerPortMeasurement_initialize_ex(
    tms_PowerPortMeasurement* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_PowerPortMeasurement_initialize_w_params(
    tms_PowerPortMeasurement* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_PowerPortMeasurement_finalize_w_return(
    tms_PowerPortMeasurement* self);

NDDSUSERDllExport
void tms_PowerPortMeasurement_finalize(
    tms_PowerPortMeasurement* self);

NDDSUSERDllExport
void tms_PowerPortMeasurement_finalize_ex(
    tms_PowerPortMeasurement* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_PowerPortMeasurement_finalize_w_params(
    tms_PowerPortMeasurement* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_PowerPortMeasurement_finalize_optional_members(
    tms_PowerPortMeasurement* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_PowerPortMeasurement_copy(
    tms_PowerPortMeasurement* dst,
    const tms_PowerPortMeasurement* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_DevicePowerMeasurementsTYPENAME;

}

struct tms_DevicePowerMeasurementsSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_DevicePowerMeasurementsTypeSupport;
class tms_DevicePowerMeasurementsDataWriter;
class tms_DevicePowerMeasurementsDataReader;
#endif
class tms_DevicePowerMeasurements 
{
  public:
    typedef struct tms_DevicePowerMeasurementsSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_DevicePowerMeasurementsTypeSupport TypeSupport;
    typedef tms_DevicePowerMeasurementsDataWriter DataWriter;
    typedef tms_DevicePowerMeasurementsDataReader DataReader;
    #endif

    tms_Fingerprint   deviceId ;
    tms_ClockMonotonic   timeMeasured ;
    tms_PowerPortMeasurementSeq  ports ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_DevicePowerMeasurements_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_DevicePowerMeasurements_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DevicePowerMeasurements_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DevicePowerMeasurements_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_DevicePowerMeasurementsSeq, tms_DevicePowerMeasurements);

NDDSUSERDllExport
RTIBool tms_DevicePowerMeasurements_initialize(
    tms_DevicePowerMeasurements* self);

NDDSUSERDllExport
RTIBool tms_DevicePowerMeasurements_initialize_ex(
    tms_DevicePowerMeasurements* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_DevicePowerMeasurements_initialize_w_params(
    tms_DevicePowerMeasurements* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_DevicePowerMeasurements_finalize_w_return(
    tms_DevicePowerMeasurements* self);

NDDSUSERDllExport
void tms_DevicePowerMeasurements_finalize(
    tms_DevicePowerMeasurements* self);

NDDSUSERDllExport
void tms_DevicePowerMeasurements_finalize_ex(
    tms_DevicePowerMeasurements* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_DevicePowerMeasurements_finalize_w_params(
    tms_DevicePowerMeasurements* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_DevicePowerMeasurements_finalize_optional_members(
    tms_DevicePowerMeasurements* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_DevicePowerMeasurements_copy(
    tms_DevicePowerMeasurements* dst,
    const tms_DevicePowerMeasurements* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_UnsignedLong tms_MINLEN_NicknameString= 0;
static const DDS_UnsignedLong tms_MAXLEN_NicknameString= 32;
typedef    DDS_Char *   tms_NicknameString ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_NicknameString_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_NicknameString_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_NicknameString_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_NicknameString_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_NicknameStringSeq, tms_NicknameString);

NDDSUSERDllExport
RTIBool tms_NicknameString_initialize(
    tms_NicknameString* self);

NDDSUSERDllExport
RTIBool tms_NicknameString_initialize_ex(
    tms_NicknameString* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_NicknameString_initialize_w_params(
    tms_NicknameString* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_NicknameString_finalize_w_return(
    tms_NicknameString* self);

NDDSUSERDllExport
void tms_NicknameString_finalize(
    tms_NicknameString* self);

NDDSUSERDllExport
void tms_NicknameString_finalize_ex(
    tms_NicknameString* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_NicknameString_finalize_w_params(
    tms_NicknameString* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_NicknameString_finalize_optional_members(
    tms_NicknameString* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_NicknameString_copy(
    tms_NicknameString* dst,
    const tms_NicknameString* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_FingerprintNicknameTYPENAME;

}

struct tms_FingerprintNicknameSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_FingerprintNicknameTypeSupport;
class tms_FingerprintNicknameDataWriter;
class tms_FingerprintNicknameDataReader;
#endif
class tms_FingerprintNickname 
{
  public:
    typedef struct tms_FingerprintNicknameSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_FingerprintNicknameTypeSupport TypeSupport;
    typedef tms_FingerprintNicknameDataWriter DataWriter;
    typedef tms_FingerprintNicknameDataReader DataReader;
    #endif

    tms_Fingerprint   id ;
    DDS_Char *   nickname ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_FingerprintNickname_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_FingerprintNickname_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_FingerprintNickname_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_FingerprintNickname_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_FingerprintNicknameSeq, tms_FingerprintNickname);

NDDSUSERDllExport
RTIBool tms_FingerprintNickname_initialize(
    tms_FingerprintNickname* self);

NDDSUSERDllExport
RTIBool tms_FingerprintNickname_initialize_ex(
    tms_FingerprintNickname* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_FingerprintNickname_initialize_w_params(
    tms_FingerprintNickname* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_FingerprintNickname_finalize_w_return(
    tms_FingerprintNickname* self);

NDDSUSERDllExport
void tms_FingerprintNickname_finalize(
    tms_FingerprintNickname* self);

NDDSUSERDllExport
void tms_FingerprintNickname_finalize_ex(
    tms_FingerprintNickname* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_FingerprintNickname_finalize_w_params(
    tms_FingerprintNickname* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_FingerprintNickname_finalize_optional_members(
    tms_FingerprintNickname* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_FingerprintNickname_copy(
    tms_FingerprintNickname* dst,
    const tms_FingerprintNickname* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_ChangeNicknameRequestTYPENAME;

}

struct tms_ChangeNicknameRequestSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_ChangeNicknameRequestTypeSupport;
class tms_ChangeNicknameRequestDataWriter;
class tms_ChangeNicknameRequestDataReader;
#endif
class tms_ChangeNicknameRequest 
{
  public:
    typedef struct tms_ChangeNicknameRequestSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_ChangeNicknameRequestTypeSupport TypeSupport;
    typedef tms_ChangeNicknameRequestDataWriter DataWriter;
    typedef tms_ChangeNicknameRequestDataReader DataReader;
    #endif

    tms_SampleId   requestId ;
    tms_Fingerprint   id ;
    DDS_Char *   nickname ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_ChangeNicknameRequest_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_ChangeNicknameRequest_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_ChangeNicknameRequest_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_ChangeNicknameRequest_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_ChangeNicknameRequestSeq, tms_ChangeNicknameRequest);

NDDSUSERDllExport
RTIBool tms_ChangeNicknameRequest_initialize(
    tms_ChangeNicknameRequest* self);

NDDSUSERDllExport
RTIBool tms_ChangeNicknameRequest_initialize_ex(
    tms_ChangeNicknameRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_ChangeNicknameRequest_initialize_w_params(
    tms_ChangeNicknameRequest* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_ChangeNicknameRequest_finalize_w_return(
    tms_ChangeNicknameRequest* self);

NDDSUSERDllExport
void tms_ChangeNicknameRequest_finalize(
    tms_ChangeNicknameRequest* self);

NDDSUSERDllExport
void tms_ChangeNicknameRequest_finalize_ex(
    tms_ChangeNicknameRequest* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_ChangeNicknameRequest_finalize_w_params(
    tms_ChangeNicknameRequest* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_ChangeNicknameRequest_finalize_optional_members(
    tms_ChangeNicknameRequest* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_ChangeNicknameRequest_copy(
    tms_ChangeNicknameRequest* dst,
    const tms_ChangeNicknameRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_UnsignedLong tms_MINLEN_mimeType= 1;
static const DDS_UnsignedLong tms_MAXLEN_mimeType= 32;
static const DDS_UnsignedLong tms_MINLEN_data= 1;
static const DDS_UnsignedLong tms_MAXLEN_data= 32*1024;
extern "C" {

    extern const char *tms_DeviceIconTYPENAME;

}

struct tms_DeviceIconSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_DeviceIconTypeSupport;
class tms_DeviceIconDataWriter;
class tms_DeviceIconDataReader;
#endif
class tms_DeviceIcon 
{
  public:
    typedef struct tms_DeviceIconSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_DeviceIconTypeSupport TypeSupport;
    typedef tms_DeviceIconDataWriter DataWriter;
    typedef tms_DeviceIconDataReader DataReader;
    #endif

    tms_NatoStockNumber   nsn ;
    tms_GlobalTradeItemNumber   gtin ;
    DDS_Char *   mimeType ;
    DDS_OctetSeq  data ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_DeviceIcon_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_DeviceIcon_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DeviceIcon_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DeviceIcon_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_DeviceIconSeq, tms_DeviceIcon);

NDDSUSERDllExport
RTIBool tms_DeviceIcon_initialize(
    tms_DeviceIcon* self);

NDDSUSERDllExport
RTIBool tms_DeviceIcon_initialize_ex(
    tms_DeviceIcon* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_DeviceIcon_initialize_w_params(
    tms_DeviceIcon* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_DeviceIcon_finalize_w_return(
    tms_DeviceIcon* self);

NDDSUSERDllExport
void tms_DeviceIcon_finalize(
    tms_DeviceIcon* self);

NDDSUSERDllExport
void tms_DeviceIcon_finalize_ex(
    tms_DeviceIcon* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_DeviceIcon_finalize_w_params(
    tms_DeviceIcon* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_DeviceIcon_finalize_optional_members(
    tms_DeviceIcon* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_DeviceIcon_copy(
    tms_DeviceIcon* dst,
    const tms_DeviceIcon* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum tms_OperatingMode
{
    OPM_NORMAL ,      
    OPM_EMERGENCY      
} tms_OperatingMode;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_OperatingMode_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_OperatingMode_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_OperatingMode_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_OperatingMode_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_OperatingModeSeq, tms_OperatingMode);

NDDSUSERDllExport
RTIBool tms_OperatingMode_initialize(
    tms_OperatingMode* self);

NDDSUSERDllExport
RTIBool tms_OperatingMode_initialize_ex(
    tms_OperatingMode* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_OperatingMode_initialize_w_params(
    tms_OperatingMode* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_OperatingMode_finalize_w_return(
    tms_OperatingMode* self);

NDDSUSERDllExport
void tms_OperatingMode_finalize(
    tms_OperatingMode* self);

NDDSUSERDllExport
void tms_OperatingMode_finalize_ex(
    tms_OperatingMode* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_OperatingMode_finalize_w_params(
    tms_OperatingMode* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_OperatingMode_finalize_optional_members(
    tms_OperatingMode* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_OperatingMode_copy(
    tms_OperatingMode* dst,
    const tms_OperatingMode* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef    DDS_Long   tms_PriorityValue ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_PriorityValue_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_PriorityValue_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PriorityValue_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PriorityValue_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_PriorityValueSeq, tms_PriorityValue);

NDDSUSERDllExport
RTIBool tms_PriorityValue_initialize(
    tms_PriorityValue* self);

NDDSUSERDllExport
RTIBool tms_PriorityValue_initialize_ex(
    tms_PriorityValue* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_PriorityValue_initialize_w_params(
    tms_PriorityValue* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_PriorityValue_finalize_w_return(
    tms_PriorityValue* self);

NDDSUSERDllExport
void tms_PriorityValue_finalize(
    tms_PriorityValue* self);

NDDSUSERDllExport
void tms_PriorityValue_finalize_ex(
    tms_PriorityValue* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_PriorityValue_finalize_w_params(
    tms_PriorityValue* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_PriorityValue_finalize_optional_members(
    tms_PriorityValue* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_PriorityValue_copy(
    tms_PriorityValue* dst,
    const tms_PriorityValue* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_Long tms_INTENT_PRIORITY_NEVER_OPERATE= -1;
static const DDS_Long tms_INTENT_PRIORITY_ALWAYS_OPERATE= 0;
static const DDS_Long tms_INTENT_PRIORITY_HIGHEST= 1;
static const DDS_Long tms_INTENT_PRIORITY_LOWEST= 1000;
static const DDS_UnsignedLong tms_MINLEN_Guid= 0;
static const DDS_UnsignedLong tms_MAXLEN_Guid= 32;
typedef    DDS_Char *   tms_Guid ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_Guid_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_Guid_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_Guid_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_Guid_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_GuidSeq, tms_Guid);

NDDSUSERDllExport
RTIBool tms_Guid_initialize(
    tms_Guid* self);

NDDSUSERDllExport
RTIBool tms_Guid_initialize_ex(
    tms_Guid* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_Guid_initialize_w_params(
    tms_Guid* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_Guid_finalize_w_return(
    tms_Guid* self);

NDDSUSERDllExport
void tms_Guid_finalize(
    tms_Guid* self);

NDDSUSERDllExport
void tms_Guid_finalize_ex(
    tms_Guid* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_Guid_finalize_w_params(
    tms_Guid* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_Guid_finalize_optional_members(
    tms_Guid* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_Guid_copy(
    tms_Guid* dst,
    const tms_Guid* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_DurationTYPENAME;

}

struct tms_DurationSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_DurationTypeSupport;
class tms_DurationDataWriter;
class tms_DurationDataReader;
#endif
class tms_Duration 
{
  public:
    typedef struct tms_DurationSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_DurationTypeSupport TypeSupport;
    typedef tms_DurationDataWriter DataWriter;
    typedef tms_DurationDataReader DataReader;
    #endif

    DDS_UnsignedLongLong   second ;
    DDS_UnsignedLongLong   nanosecond ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_Duration_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_Duration_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_Duration_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_Duration_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_DurationSeq, tms_Duration);

NDDSUSERDllExport
RTIBool tms_Duration_initialize(
    tms_Duration* self);

NDDSUSERDllExport
RTIBool tms_Duration_initialize_ex(
    tms_Duration* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_Duration_initialize_w_params(
    tms_Duration* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_Duration_finalize_w_return(
    tms_Duration* self);

NDDSUSERDllExport
void tms_Duration_finalize(
    tms_Duration* self);

NDDSUSERDllExport
void tms_Duration_finalize_ex(
    tms_Duration* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_Duration_finalize_w_params(
    tms_Duration* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_Duration_finalize_optional_members(
    tms_Duration* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_Duration_copy(
    tms_Duration* dst,
    const tms_Duration* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_MicrogridIntentTYPENAME;

}

struct tms_MicrogridIntentSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_MicrogridIntentTypeSupport;
class tms_MicrogridIntentDataWriter;
class tms_MicrogridIntentDataReader;
#endif
class tms_MicrogridIntent 
{
  public:
    typedef struct tms_MicrogridIntentSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_MicrogridIntentTypeSupport TypeSupport;
    typedef tms_MicrogridIntentDataWriter DataWriter;
    typedef tms_MicrogridIntentDataReader DataReader;
    #endif

    tms_OperatingMode   operatingMode ;
    DDS_UnsignedLong   increaseCapacityThreshold ;
    DDS_UnsignedLong   decreaseCapacityThreshold ;
    tms_Duration   decreaseCapacityDuration ;
    DDS_Long   priorityLoadCurtailmentAllowed ;
    DDS_Long   priorityCircuitSheddingAllowed ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_MicrogridIntent_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_MicrogridIntent_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_MicrogridIntent_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_MicrogridIntent_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_MicrogridIntentSeq, tms_MicrogridIntent);

NDDSUSERDllExport
RTIBool tms_MicrogridIntent_initialize(
    tms_MicrogridIntent* self);

NDDSUSERDllExport
RTIBool tms_MicrogridIntent_initialize_ex(
    tms_MicrogridIntent* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_MicrogridIntent_initialize_w_params(
    tms_MicrogridIntent* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_MicrogridIntent_finalize_w_return(
    tms_MicrogridIntent* self);

NDDSUSERDllExport
void tms_MicrogridIntent_finalize(
    tms_MicrogridIntent* self);

NDDSUSERDllExport
void tms_MicrogridIntent_finalize_ex(
    tms_MicrogridIntent* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_MicrogridIntent_finalize_w_params(
    tms_MicrogridIntent* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_MicrogridIntent_finalize_optional_members(
    tms_MicrogridIntent* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_MicrogridIntent_copy(
    tms_MicrogridIntent* dst,
    const tms_MicrogridIntent* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_OverCurrentDisconnectTYPENAME;

}

struct tms_OverCurrentDisconnectSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_OverCurrentDisconnectTypeSupport;
class tms_OverCurrentDisconnectDataWriter;
class tms_OverCurrentDisconnectDataReader;
#endif
class tms_OverCurrentDisconnect 
{
  public:
    typedef struct tms_OverCurrentDisconnectSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_OverCurrentDisconnectTypeSupport TypeSupport;
    typedef tms_OverCurrentDisconnectDataWriter DataWriter;
    typedef tms_OverCurrentDisconnectDataReader DataReader;
    #endif

    DDS_Float   currentA ;
    DDS_Float   currentB ;
    DDS_Float   currentC ;
    DDS_Float   currentN ;
    tms_Duration   delay ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_OverCurrentDisconnect_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_OverCurrentDisconnect_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_OverCurrentDisconnect_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_OverCurrentDisconnect_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_OverCurrentDisconnectSeq, tms_OverCurrentDisconnect);

NDDSUSERDllExport
RTIBool tms_OverCurrentDisconnect_initialize(
    tms_OverCurrentDisconnect* self);

NDDSUSERDllExport
RTIBool tms_OverCurrentDisconnect_initialize_ex(
    tms_OverCurrentDisconnect* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_OverCurrentDisconnect_initialize_w_params(
    tms_OverCurrentDisconnect* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_OverCurrentDisconnect_finalize_w_return(
    tms_OverCurrentDisconnect* self);

NDDSUSERDllExport
void tms_OverCurrentDisconnect_finalize(
    tms_OverCurrentDisconnect* self);

NDDSUSERDllExport
void tms_OverCurrentDisconnect_finalize_ex(
    tms_OverCurrentDisconnect* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_OverCurrentDisconnect_finalize_w_params(
    tms_OverCurrentDisconnect* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_OverCurrentDisconnect_finalize_optional_members(
    tms_OverCurrentDisconnect* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_OverCurrentDisconnect_copy(
    tms_OverCurrentDisconnect* dst,
    const tms_OverCurrentDisconnect* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_OverEnergyDisconnectTYPENAME;

}

struct tms_OverEnergyDisconnectSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_OverEnergyDisconnectTypeSupport;
class tms_OverEnergyDisconnectDataWriter;
class tms_OverEnergyDisconnectDataReader;
#endif
class tms_OverEnergyDisconnect 
{
  public:
    typedef struct tms_OverEnergyDisconnectSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_OverEnergyDisconnectTypeSupport TypeSupport;
    typedef tms_OverEnergyDisconnectDataWriter DataWriter;
    typedef tms_OverEnergyDisconnectDataReader DataReader;
    #endif

    DDS_Float   balance ;
    DDS_Float   maxBalance ;
    DDS_Float   refillRate ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_OverEnergyDisconnect_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_OverEnergyDisconnect_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_OverEnergyDisconnect_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_OverEnergyDisconnect_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_OverEnergyDisconnectSeq, tms_OverEnergyDisconnect);

NDDSUSERDllExport
RTIBool tms_OverEnergyDisconnect_initialize(
    tms_OverEnergyDisconnect* self);

NDDSUSERDllExport
RTIBool tms_OverEnergyDisconnect_initialize_ex(
    tms_OverEnergyDisconnect* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_OverEnergyDisconnect_initialize_w_params(
    tms_OverEnergyDisconnect* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_OverEnergyDisconnect_finalize_w_return(
    tms_OverEnergyDisconnect* self);

NDDSUSERDllExport
void tms_OverEnergyDisconnect_finalize(
    tms_OverEnergyDisconnect* self);

NDDSUSERDllExport
void tms_OverEnergyDisconnect_finalize_ex(
    tms_OverEnergyDisconnect* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_OverEnergyDisconnect_finalize_w_params(
    tms_OverEnergyDisconnect* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_OverEnergyDisconnect_finalize_optional_members(
    tms_OverEnergyDisconnect* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_OverEnergyDisconnect_copy(
    tms_OverEnergyDisconnect* dst,
    const tms_OverEnergyDisconnect* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_UnderFrequencyDisconnectTYPENAME;

}

struct tms_UnderFrequencyDisconnectSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_UnderFrequencyDisconnectTypeSupport;
class tms_UnderFrequencyDisconnectDataWriter;
class tms_UnderFrequencyDisconnectDataReader;
#endif
class tms_UnderFrequencyDisconnect 
{
  public:
    typedef struct tms_UnderFrequencyDisconnectSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_UnderFrequencyDisconnectTypeSupport TypeSupport;
    typedef tms_UnderFrequencyDisconnectDataWriter DataWriter;
    typedef tms_UnderFrequencyDisconnectDataReader DataReader;
    #endif

    DDS_Float   frequency ;
    tms_Duration   delay ;
    DDS_Float   objective ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_UnderFrequencyDisconnect_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_UnderFrequencyDisconnect_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_UnderFrequencyDisconnect_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_UnderFrequencyDisconnect_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_UnderFrequencyDisconnectSeq, tms_UnderFrequencyDisconnect);

NDDSUSERDllExport
RTIBool tms_UnderFrequencyDisconnect_initialize(
    tms_UnderFrequencyDisconnect* self);

NDDSUSERDllExport
RTIBool tms_UnderFrequencyDisconnect_initialize_ex(
    tms_UnderFrequencyDisconnect* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_UnderFrequencyDisconnect_initialize_w_params(
    tms_UnderFrequencyDisconnect* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_UnderFrequencyDisconnect_finalize_w_return(
    tms_UnderFrequencyDisconnect* self);

NDDSUSERDllExport
void tms_UnderFrequencyDisconnect_finalize(
    tms_UnderFrequencyDisconnect* self);

NDDSUSERDllExport
void tms_UnderFrequencyDisconnect_finalize_ex(
    tms_UnderFrequencyDisconnect* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_UnderFrequencyDisconnect_finalize_w_params(
    tms_UnderFrequencyDisconnect* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_UnderFrequencyDisconnect_finalize_optional_members(
    tms_UnderFrequencyDisconnect* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_UnderFrequencyDisconnect_copy(
    tms_UnderFrequencyDisconnect* dst,
    const tms_UnderFrequencyDisconnect* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum tms_LocalPowerPortPriority
{
    LPPP_UNINITIALIZED ,      
    LPPP_NONE ,      
    LPPP_OFF ,      
    LPPP_LOW ,      
    LPPP_MEDIUM ,      
    LPPP_HIGH ,      
    LPPP_ON      
} tms_LocalPowerPortPriority;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_LocalPowerPortPriority_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_LocalPowerPortPriority_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_LocalPowerPortPriority_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_LocalPowerPortPriority_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_LocalPowerPortPrioritySeq, tms_LocalPowerPortPriority);

NDDSUSERDllExport
RTIBool tms_LocalPowerPortPriority_initialize(
    tms_LocalPowerPortPriority* self);

NDDSUSERDllExport
RTIBool tms_LocalPowerPortPriority_initialize_ex(
    tms_LocalPowerPortPriority* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_LocalPowerPortPriority_initialize_w_params(
    tms_LocalPowerPortPriority* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_LocalPowerPortPriority_finalize_w_return(
    tms_LocalPowerPortPriority* self);

NDDSUSERDllExport
void tms_LocalPowerPortPriority_finalize(
    tms_LocalPowerPortPriority* self);

NDDSUSERDllExport
void tms_LocalPowerPortPriority_finalize_ex(
    tms_LocalPowerPortPriority* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_LocalPowerPortPriority_finalize_w_params(
    tms_LocalPowerPortPriority* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_LocalPowerPortPriority_finalize_optional_members(
    tms_LocalPowerPortPriority* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_LocalPowerPortPriority_copy(
    tms_LocalPowerPortPriority* dst,
    const tms_LocalPowerPortPriority* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_LocalPowerPortPriorityAssignmentTYPENAME;

}

struct tms_LocalPowerPortPriorityAssignmentSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_LocalPowerPortPriorityAssignmentTypeSupport;
class tms_LocalPowerPortPriorityAssignmentDataWriter;
class tms_LocalPowerPortPriorityAssignmentDataReader;
#endif
class tms_LocalPowerPortPriorityAssignment 
{
  public:
    typedef struct tms_LocalPowerPortPriorityAssignmentSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_LocalPowerPortPriorityAssignmentTypeSupport TypeSupport;
    typedef tms_LocalPowerPortPriorityAssignmentDataWriter DataWriter;
    typedef tms_LocalPowerPortPriorityAssignmentDataReader DataReader;
    #endif

    DDS_UnsignedLong   portNumber ;
    tms_LocalPowerPortPriority   priority ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_LocalPowerPortPriorityAssignment_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_LocalPowerPortPriorityAssignment_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_LocalPowerPortPriorityAssignment_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_LocalPowerPortPriorityAssignment_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_LocalPowerPortPriorityAssignmentSeq, tms_LocalPowerPortPriorityAssignment);

NDDSUSERDllExport
RTIBool tms_LocalPowerPortPriorityAssignment_initialize(
    tms_LocalPowerPortPriorityAssignment* self);

NDDSUSERDllExport
RTIBool tms_LocalPowerPortPriorityAssignment_initialize_ex(
    tms_LocalPowerPortPriorityAssignment* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_LocalPowerPortPriorityAssignment_initialize_w_params(
    tms_LocalPowerPortPriorityAssignment* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_LocalPowerPortPriorityAssignment_finalize_w_return(
    tms_LocalPowerPortPriorityAssignment* self);

NDDSUSERDllExport
void tms_LocalPowerPortPriorityAssignment_finalize(
    tms_LocalPowerPortPriorityAssignment* self);

NDDSUSERDllExport
void tms_LocalPowerPortPriorityAssignment_finalize_ex(
    tms_LocalPowerPortPriorityAssignment* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_LocalPowerPortPriorityAssignment_finalize_w_params(
    tms_LocalPowerPortPriorityAssignment* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_LocalPowerPortPriorityAssignment_finalize_optional_members(
    tms_LocalPowerPortPriorityAssignment* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_LocalPowerPortPriorityAssignment_copy(
    tms_LocalPowerPortPriorityAssignment* dst,
    const tms_LocalPowerPortPriorityAssignment* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_PowerPortLoadPolicyTYPENAME;

}

struct tms_PowerPortLoadPolicySeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_PowerPortLoadPolicyTypeSupport;
class tms_PowerPortLoadPolicyDataWriter;
class tms_PowerPortLoadPolicyDataReader;
#endif
class tms_PowerPortLoadPolicy 
{
  public:
    typedef struct tms_PowerPortLoadPolicySeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_PowerPortLoadPolicyTypeSupport TypeSupport;
    typedef tms_PowerPortLoadPolicyDataWriter DataWriter;
    typedef tms_PowerPortLoadPolicyDataReader DataReader;
    #endif

    DDS_UnsignedLong   portNumber ;
    tms_OverCurrentDisconnect   inrushCurrent ;
    tms_OverCurrentDisconnect   steadyCurrent ;
    tms_UnderFrequencyDisconnect   inrushFrequency ;
    tms_UnderFrequencyDisconnect   steadyFrequency ;
    tms_OverEnergyDisconnect   energy ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_PowerPortLoadPolicy_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_PowerPortLoadPolicy_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerPortLoadPolicy_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerPortLoadPolicy_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_PowerPortLoadPolicySeq, tms_PowerPortLoadPolicy);

NDDSUSERDllExport
RTIBool tms_PowerPortLoadPolicy_initialize(
    tms_PowerPortLoadPolicy* self);

NDDSUSERDllExport
RTIBool tms_PowerPortLoadPolicy_initialize_ex(
    tms_PowerPortLoadPolicy* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_PowerPortLoadPolicy_initialize_w_params(
    tms_PowerPortLoadPolicy* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_PowerPortLoadPolicy_finalize_w_return(
    tms_PowerPortLoadPolicy* self);

NDDSUSERDllExport
void tms_PowerPortLoadPolicy_finalize(
    tms_PowerPortLoadPolicy* self);

NDDSUSERDllExport
void tms_PowerPortLoadPolicy_finalize_ex(
    tms_PowerPortLoadPolicy* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_PowerPortLoadPolicy_finalize_w_params(
    tms_PowerPortLoadPolicy* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_PowerPortLoadPolicy_finalize_optional_members(
    tms_PowerPortLoadPolicy* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_PowerPortLoadPolicy_copy(
    tms_PowerPortLoadPolicy* dst,
    const tms_PowerPortLoadPolicy* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_BusbarLoadPolicyTYPENAME;

}

struct tms_BusbarLoadPolicySeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_BusbarLoadPolicyTypeSupport;
class tms_BusbarLoadPolicyDataWriter;
class tms_BusbarLoadPolicyDataReader;
#endif
class tms_BusbarLoadPolicy 
{
  public:
    typedef struct tms_BusbarLoadPolicySeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_BusbarLoadPolicyTypeSupport TypeSupport;
    typedef tms_BusbarLoadPolicyDataWriter DataWriter;
    typedef tms_BusbarLoadPolicyDataReader DataReader;
    #endif

    tms_OverCurrentDisconnect   inrushCurrent ;
    tms_LocalPowerPortPriority   inrushCurrentPriority ;
    tms_OverCurrentDisconnect   steadyCurrent ;
    tms_LocalPowerPortPriority   steadyCurrentPriority ;
    tms_UnderFrequencyDisconnect   inrushFrequency ;
    tms_LocalPowerPortPriority   inrushFrequencyPriority ;
    tms_UnderFrequencyDisconnect   steadyFrequency ;
    tms_LocalPowerPortPriority   steadyFrequencyPriority ;
    tms_OverEnergyDisconnect   energy ;
    tms_LocalPowerPortPriority   energyPriority ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_BusbarLoadPolicy_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_BusbarLoadPolicy_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_BusbarLoadPolicy_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_BusbarLoadPolicy_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_BusbarLoadPolicySeq, tms_BusbarLoadPolicy);

NDDSUSERDllExport
RTIBool tms_BusbarLoadPolicy_initialize(
    tms_BusbarLoadPolicy* self);

NDDSUSERDllExport
RTIBool tms_BusbarLoadPolicy_initialize_ex(
    tms_BusbarLoadPolicy* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_BusbarLoadPolicy_initialize_w_params(
    tms_BusbarLoadPolicy* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_BusbarLoadPolicy_finalize_w_return(
    tms_BusbarLoadPolicy* self);

NDDSUSERDllExport
void tms_BusbarLoadPolicy_finalize(
    tms_BusbarLoadPolicy* self);

NDDSUSERDllExport
void tms_BusbarLoadPolicy_finalize_ex(
    tms_BusbarLoadPolicy* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_BusbarLoadPolicy_finalize_w_params(
    tms_BusbarLoadPolicy* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_BusbarLoadPolicy_finalize_optional_members(
    tms_BusbarLoadPolicy* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_BusbarLoadPolicy_copy(
    tms_BusbarLoadPolicy* dst,
    const tms_BusbarLoadPolicy* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_UnsignedLong tms_MINLEN_busbarPolicy= 0;
static const DDS_UnsignedLong tms_MAXLEN_busbarPolicy= 1;
extern "C" {

    extern const char *tms_DeviceIntentTYPENAME;

}

struct tms_DeviceIntentSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_DeviceIntentTypeSupport;
class tms_DeviceIntentDataWriter;
class tms_DeviceIntentDataReader;
#endif
class tms_DeviceIntent 
{
  public:
    typedef struct tms_DeviceIntentSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_DeviceIntentTypeSupport TypeSupport;
    typedef tms_DeviceIntentDataWriter DataWriter;
    typedef tms_DeviceIntentDataReader DataReader;
    #endif

    tms_Fingerprint   deviceId ;
    DDS_Boolean   battleShort ;
    DDS_Long   priority ;
    tms_BusbarLoadPolicySeq  busbarPolicy ;
    DDS_Float   rateLimit ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_DeviceIntent_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_DeviceIntent_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DeviceIntent_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DeviceIntent_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_DeviceIntentSeq, tms_DeviceIntent);

NDDSUSERDllExport
RTIBool tms_DeviceIntent_initialize(
    tms_DeviceIntent* self);

NDDSUSERDllExport
RTIBool tms_DeviceIntent_initialize_ex(
    tms_DeviceIntent* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_DeviceIntent_initialize_w_params(
    tms_DeviceIntent* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_DeviceIntent_finalize_w_return(
    tms_DeviceIntent* self);

NDDSUSERDllExport
void tms_DeviceIntent_finalize(
    tms_DeviceIntent* self);

NDDSUSERDllExport
void tms_DeviceIntent_finalize_ex(
    tms_DeviceIntent* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_DeviceIntent_finalize_w_params(
    tms_DeviceIntent* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_DeviceIntent_finalize_optional_members(
    tms_DeviceIntent* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_DeviceIntent_copy(
    tms_DeviceIntent* dst,
    const tms_DeviceIntent* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_UnsignedLong tms_MINLEN_portPolicy= 0;
static const DDS_UnsignedLong tms_MAXLEN_portPolicy= 1;
extern "C" {

    extern const char *tms_PowerPortIntentTYPENAME;

}

struct tms_PowerPortIntentSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_PowerPortIntentTypeSupport;
class tms_PowerPortIntentDataWriter;
class tms_PowerPortIntentDataReader;
#endif
class tms_PowerPortIntent 
{
  public:
    typedef struct tms_PowerPortIntentSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_PowerPortIntentTypeSupport TypeSupport;
    typedef tms_PowerPortIntentDataWriter DataWriter;
    typedef tms_PowerPortIntentDataReader DataReader;
    #endif

    tms_Fingerprint   deviceId ;
    DDS_UnsignedLong   portNumber ;
    DDS_Long   priority ;
    tms_PowerPortLoadPolicySeq  portPolicy ;
    tms_LocalPowerPortPriority   localPriority ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_PowerPortIntent_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_PowerPortIntent_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerPortIntent_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerPortIntent_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_PowerPortIntentSeq, tms_PowerPortIntent);

NDDSUSERDllExport
RTIBool tms_PowerPortIntent_initialize(
    tms_PowerPortIntent* self);

NDDSUSERDllExport
RTIBool tms_PowerPortIntent_initialize_ex(
    tms_PowerPortIntent* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_PowerPortIntent_initialize_w_params(
    tms_PowerPortIntent* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_PowerPortIntent_finalize_w_return(
    tms_PowerPortIntent* self);

NDDSUSERDllExport
void tms_PowerPortIntent_finalize(
    tms_PowerPortIntent* self);

NDDSUSERDllExport
void tms_PowerPortIntent_finalize_ex(
    tms_PowerPortIntent* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_PowerPortIntent_finalize_w_params(
    tms_PowerPortIntent* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_PowerPortIntent_finalize_optional_members(
    tms_PowerPortIntent* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_PowerPortIntent_copy(
    tms_PowerPortIntent* dst,
    const tms_PowerPortIntent* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum tms_OperatorIntentType
{
    OIT_DEFAULT_INTENT ,      
    OIT_OPERATOR_DEFINED      
} tms_OperatorIntentType;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_OperatorIntentType_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_OperatorIntentType_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_OperatorIntentType_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_OperatorIntentType_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_OperatorIntentTypeSeq, tms_OperatorIntentType);

NDDSUSERDllExport
RTIBool tms_OperatorIntentType_initialize(
    tms_OperatorIntentType* self);

NDDSUSERDllExport
RTIBool tms_OperatorIntentType_initialize_ex(
    tms_OperatorIntentType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_OperatorIntentType_initialize_w_params(
    tms_OperatorIntentType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_OperatorIntentType_finalize_w_return(
    tms_OperatorIntentType* self);

NDDSUSERDllExport
void tms_OperatorIntentType_finalize(
    tms_OperatorIntentType* self);

NDDSUSERDllExport
void tms_OperatorIntentType_finalize_ex(
    tms_OperatorIntentType* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_OperatorIntentType_finalize_w_params(
    tms_OperatorIntentType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_OperatorIntentType_finalize_optional_members(
    tms_OperatorIntentType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_OperatorIntentType_copy(
    tms_OperatorIntentType* dst,
    const tms_OperatorIntentType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_UnsignedLong tms_MINLEN_devices= 0;
static const DDS_UnsignedLong tms_MAXLEN_devices= 100;
static const DDS_UnsignedLong tms_MINLEN_powerPorts= 0;
static const DDS_UnsignedLong tms_MAXLEN_powerPorts= 4000;
extern "C" {

    extern const char *tms_OperatorIntentTYPENAME;

}

struct tms_OperatorIntentSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_OperatorIntentTypeSupport;
class tms_OperatorIntentDataWriter;
class tms_OperatorIntentDataReader;
#endif
class tms_OperatorIntent 
{
  public:
    typedef struct tms_OperatorIntentSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_OperatorIntentTypeSupport TypeSupport;
    typedef tms_OperatorIntentDataWriter DataWriter;
    typedef tms_OperatorIntentDataReader DataReader;
    #endif

    tms_Fingerprint   originator ;
    tms_OperatorIntentType   intentType ;
    tms_MicrogridIntent   microgrid ;
    tms_DeviceIntentSeq  devices ;
    tms_PowerPortIntentSeq  powerPorts ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_OperatorIntent_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_OperatorIntent_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_OperatorIntent_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_OperatorIntent_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_OperatorIntentSeq, tms_OperatorIntent);

NDDSUSERDllExport
RTIBool tms_OperatorIntent_initialize(
    tms_OperatorIntent* self);

NDDSUSERDllExport
RTIBool tms_OperatorIntent_initialize_ex(
    tms_OperatorIntent* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_OperatorIntent_initialize_w_params(
    tms_OperatorIntent* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_OperatorIntent_finalize_w_return(
    tms_OperatorIntent* self);

NDDSUSERDllExport
void tms_OperatorIntent_finalize(
    tms_OperatorIntent* self);

NDDSUSERDllExport
void tms_OperatorIntent_finalize_ex(
    tms_OperatorIntent* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_OperatorIntent_finalize_w_params(
    tms_OperatorIntent* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_OperatorIntent_finalize_optional_members(
    tms_OperatorIntent* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_OperatorIntent_copy(
    tms_OperatorIntent* dst,
    const tms_OperatorIntent* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_OperatorIntentRequestTYPENAME;

}

struct tms_OperatorIntentRequestSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_OperatorIntentRequestTypeSupport;
class tms_OperatorIntentRequestDataWriter;
class tms_OperatorIntentRequestDataReader;
#endif
class tms_OperatorIntentRequest 
{
  public:
    typedef struct tms_OperatorIntentRequestSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_OperatorIntentRequestTypeSupport TypeSupport;
    typedef tms_OperatorIntentRequestDataWriter DataWriter;
    typedef tms_OperatorIntentRequestDataReader DataReader;
    #endif

    tms_SampleId   requestId ;
    tms_OperatorIntent   desiredOperatorIntent ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_OperatorIntentRequest_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_OperatorIntentRequest_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_OperatorIntentRequest_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_OperatorIntentRequest_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_OperatorIntentRequestSeq, tms_OperatorIntentRequest);

NDDSUSERDllExport
RTIBool tms_OperatorIntentRequest_initialize(
    tms_OperatorIntentRequest* self);

NDDSUSERDllExport
RTIBool tms_OperatorIntentRequest_initialize_ex(
    tms_OperatorIntentRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_OperatorIntentRequest_initialize_w_params(
    tms_OperatorIntentRequest* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_OperatorIntentRequest_finalize_w_return(
    tms_OperatorIntentRequest* self);

NDDSUSERDllExport
void tms_OperatorIntentRequest_finalize(
    tms_OperatorIntentRequest* self);

NDDSUSERDllExport
void tms_OperatorIntentRequest_finalize_ex(
    tms_OperatorIntentRequest* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_OperatorIntentRequest_finalize_w_params(
    tms_OperatorIntentRequest* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_OperatorIntentRequest_finalize_optional_members(
    tms_OperatorIntentRequest* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_OperatorIntentRequest_copy(
    tms_OperatorIntentRequest* dst,
    const tms_OperatorIntentRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_OperatorIntentStateTYPENAME;

}

struct tms_OperatorIntentStateSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_OperatorIntentStateTypeSupport;
class tms_OperatorIntentStateDataWriter;
class tms_OperatorIntentStateDataReader;
#endif
class tms_OperatorIntentState 
{
  public:
    typedef struct tms_OperatorIntentStateSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_OperatorIntentStateTypeSupport TypeSupport;
    typedef tms_OperatorIntentStateDataWriter DataWriter;
    typedef tms_OperatorIntentStateDataReader DataReader;
    #endif

    tms_Fingerprint   deviceId ;
    tms_OperatorIntent   activeOperatorIntent ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_OperatorIntentState_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_OperatorIntentState_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_OperatorIntentState_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_OperatorIntentState_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_OperatorIntentStateSeq, tms_OperatorIntentState);

NDDSUSERDllExport
RTIBool tms_OperatorIntentState_initialize(
    tms_OperatorIntentState* self);

NDDSUSERDllExport
RTIBool tms_OperatorIntentState_initialize_ex(
    tms_OperatorIntentState* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_OperatorIntentState_initialize_w_params(
    tms_OperatorIntentState* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_OperatorIntentState_finalize_w_return(
    tms_OperatorIntentState* self);

NDDSUSERDllExport
void tms_OperatorIntentState_finalize(
    tms_OperatorIntentState* self);

NDDSUSERDllExport
void tms_OperatorIntentState_finalize_ex(
    tms_OperatorIntentState* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_OperatorIntentState_finalize_w_params(
    tms_OperatorIntentState* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_OperatorIntentState_finalize_optional_members(
    tms_OperatorIntentState* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_OperatorIntentState_copy(
    tms_OperatorIntentState* dst,
    const tms_OperatorIntentState* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_UnsignedLong tms_MINLEN_portPriorities= 0;
static const DDS_UnsignedLong tms_MAXLEN_portPriorities= (tms_MAX_PORTS);
static const DDS_UnsignedLong tms_MINLEN_portPolicies= 0;
static const DDS_UnsignedLong tms_MAXLEN_portPolicies= (tms_MAX_PORTS);
extern "C" {

    extern const char *tms_LoadPolicyRequestTYPENAME;

}

struct tms_LoadPolicyRequestSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_LoadPolicyRequestTypeSupport;
class tms_LoadPolicyRequestDataWriter;
class tms_LoadPolicyRequestDataReader;
#endif
class tms_LoadPolicyRequest 
{
  public:
    typedef struct tms_LoadPolicyRequestSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_LoadPolicyRequestTypeSupport TypeSupport;
    typedef tms_LoadPolicyRequestDataWriter DataWriter;
    typedef tms_LoadPolicyRequestDataReader DataReader;
    #endif

    tms_SampleId   requestId ;
    tms_Fingerprint   deviceId ;
    DDS_UnsignedShort   config ;
    tms_LocalPowerPortPriorityAssignmentSeq  portPriorities ;
    tms_PowerPortLoadPolicySeq  portPolicies ;
    tms_BusbarLoadPolicySeq  busbarPolicy ;
    DDS_Float   rateLimit ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_LoadPolicyRequest_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_LoadPolicyRequest_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_LoadPolicyRequest_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_LoadPolicyRequest_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_LoadPolicyRequestSeq, tms_LoadPolicyRequest);

NDDSUSERDllExport
RTIBool tms_LoadPolicyRequest_initialize(
    tms_LoadPolicyRequest* self);

NDDSUSERDllExport
RTIBool tms_LoadPolicyRequest_initialize_ex(
    tms_LoadPolicyRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_LoadPolicyRequest_initialize_w_params(
    tms_LoadPolicyRequest* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_LoadPolicyRequest_finalize_w_return(
    tms_LoadPolicyRequest* self);

NDDSUSERDllExport
void tms_LoadPolicyRequest_finalize(
    tms_LoadPolicyRequest* self);

NDDSUSERDllExport
void tms_LoadPolicyRequest_finalize_ex(
    tms_LoadPolicyRequest* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_LoadPolicyRequest_finalize_w_params(
    tms_LoadPolicyRequest* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_LoadPolicyRequest_finalize_optional_members(
    tms_LoadPolicyRequest* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_LoadPolicyRequest_copy(
    tms_LoadPolicyRequest* dst,
    const tms_LoadPolicyRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum tms_LoadPolicy
{
    LP_UNINITIALIZED ,      
    LP_NONE ,      
    LP_OVER_CURRENT ,      
    LP_OVER_ENERGY ,      
    LP_UNDER_FREQUENCY      
} tms_LoadPolicy;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_LoadPolicy_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_LoadPolicy_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_LoadPolicy_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_LoadPolicy_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_LoadPolicySeq, tms_LoadPolicy);

NDDSUSERDllExport
RTIBool tms_LoadPolicy_initialize(
    tms_LoadPolicy* self);

NDDSUSERDllExport
RTIBool tms_LoadPolicy_initialize_ex(
    tms_LoadPolicy* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_LoadPolicy_initialize_w_params(
    tms_LoadPolicy* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_LoadPolicy_finalize_w_return(
    tms_LoadPolicy* self);

NDDSUSERDllExport
void tms_LoadPolicy_finalize(
    tms_LoadPolicy* self);

NDDSUSERDllExport
void tms_LoadPolicy_finalize_ex(
    tms_LoadPolicy* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_LoadPolicy_finalize_w_params(
    tms_LoadPolicy* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_LoadPolicy_finalize_optional_members(
    tms_LoadPolicy* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_LoadPolicy_copy(
    tms_LoadPolicy* dst,
    const tms_LoadPolicy* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum tms_PowerLine
{
    LINE_UNINITIALIZED ,      
    LINE_NONE ,      
    LINE_A ,      
    LINE_B ,      
    LINE_C ,      
    LINE_N ,      
    LINE_G ,      
    LINE_MULTIPLE      
} tms_PowerLine;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_PowerLine_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_PowerLine_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerLine_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerLine_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_PowerLineSeq, tms_PowerLine);

NDDSUSERDllExport
RTIBool tms_PowerLine_initialize(
    tms_PowerLine* self);

NDDSUSERDllExport
RTIBool tms_PowerLine_initialize_ex(
    tms_PowerLine* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_PowerLine_initialize_w_params(
    tms_PowerLine* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_PowerLine_finalize_w_return(
    tms_PowerLine* self);

NDDSUSERDllExport
void tms_PowerLine_finalize(
    tms_PowerLine* self);

NDDSUSERDllExport
void tms_PowerLine_finalize_ex(
    tms_PowerLine* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_PowerLine_finalize_w_params(
    tms_PowerLine* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_PowerLine_finalize_optional_members(
    tms_PowerLine* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_PowerLine_copy(
    tms_PowerLine* dst,
    const tms_PowerLine* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum tms_LoadPolicyContinuity
{
    LPC_UNINITIALIZED ,      
    LPC_NONE ,      
    LPC_CONTINUOUS ,      
    LPC_INTERRUPTED      
} tms_LoadPolicyContinuity;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_LoadPolicyContinuity_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_LoadPolicyContinuity_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_LoadPolicyContinuity_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_LoadPolicyContinuity_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_LoadPolicyContinuitySeq, tms_LoadPolicyContinuity);

NDDSUSERDllExport
RTIBool tms_LoadPolicyContinuity_initialize(
    tms_LoadPolicyContinuity* self);

NDDSUSERDllExport
RTIBool tms_LoadPolicyContinuity_initialize_ex(
    tms_LoadPolicyContinuity* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_LoadPolicyContinuity_initialize_w_params(
    tms_LoadPolicyContinuity* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_LoadPolicyContinuity_finalize_w_return(
    tms_LoadPolicyContinuity* self);

NDDSUSERDllExport
void tms_LoadPolicyContinuity_finalize(
    tms_LoadPolicyContinuity* self);

NDDSUSERDllExport
void tms_LoadPolicyContinuity_finalize_ex(
    tms_LoadPolicyContinuity* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_LoadPolicyContinuity_finalize_w_params(
    tms_LoadPolicyContinuity* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_LoadPolicyContinuity_finalize_optional_members(
    tms_LoadPolicyContinuity* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_LoadPolicyContinuity_copy(
    tms_LoadPolicyContinuity* dst,
    const tms_LoadPolicyContinuity* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_PowerPortLoadPolicyReportTYPENAME;

}

struct tms_PowerPortLoadPolicyReportSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_PowerPortLoadPolicyReportTypeSupport;
class tms_PowerPortLoadPolicyReportDataWriter;
class tms_PowerPortLoadPolicyReportDataReader;
#endif
class tms_PowerPortLoadPolicyReport 
{
  public:
    typedef struct tms_PowerPortLoadPolicyReportSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_PowerPortLoadPolicyReportTypeSupport TypeSupport;
    typedef tms_PowerPortLoadPolicyReportDataWriter DataWriter;
    typedef tms_PowerPortLoadPolicyReportDataReader DataReader;
    #endif

    DDS_UnsignedLong   portNumber ;
    tms_LoadPolicy   type ;
    tms_PowerLine   line ;
    tms_LoadPolicyContinuity   continuity ;
    tms_ClockMonotonic   time ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_PowerPortLoadPolicyReport_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_PowerPortLoadPolicyReport_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerPortLoadPolicyReport_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_PowerPortLoadPolicyReport_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_PowerPortLoadPolicyReportSeq, tms_PowerPortLoadPolicyReport);

NDDSUSERDllExport
RTIBool tms_PowerPortLoadPolicyReport_initialize(
    tms_PowerPortLoadPolicyReport* self);

NDDSUSERDllExport
RTIBool tms_PowerPortLoadPolicyReport_initialize_ex(
    tms_PowerPortLoadPolicyReport* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_PowerPortLoadPolicyReport_initialize_w_params(
    tms_PowerPortLoadPolicyReport* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_PowerPortLoadPolicyReport_finalize_w_return(
    tms_PowerPortLoadPolicyReport* self);

NDDSUSERDllExport
void tms_PowerPortLoadPolicyReport_finalize(
    tms_PowerPortLoadPolicyReport* self);

NDDSUSERDllExport
void tms_PowerPortLoadPolicyReport_finalize_ex(
    tms_PowerPortLoadPolicyReport* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_PowerPortLoadPolicyReport_finalize_w_params(
    tms_PowerPortLoadPolicyReport* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_PowerPortLoadPolicyReport_finalize_optional_members(
    tms_PowerPortLoadPolicyReport* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_PowerPortLoadPolicyReport_copy(
    tms_PowerPortLoadPolicyReport* dst,
    const tms_PowerPortLoadPolicyReport* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_DeviceLoadPolicyStatusTYPENAME;

}

struct tms_DeviceLoadPolicyStatusSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_DeviceLoadPolicyStatusTypeSupport;
class tms_DeviceLoadPolicyStatusDataWriter;
class tms_DeviceLoadPolicyStatusDataReader;
#endif
class tms_DeviceLoadPolicyStatus 
{
  public:
    typedef struct tms_DeviceLoadPolicyStatusSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_DeviceLoadPolicyStatusTypeSupport TypeSupport;
    typedef tms_DeviceLoadPolicyStatusDataWriter DataWriter;
    typedef tms_DeviceLoadPolicyStatusDataReader DataReader;
    #endif

    tms_Fingerprint   deviceId ;
    tms_PowerPortLoadPolicyReportSeq  ports ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_DeviceLoadPolicyStatus_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_DeviceLoadPolicyStatus_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DeviceLoadPolicyStatus_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DeviceLoadPolicyStatus_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_DeviceLoadPolicyStatusSeq, tms_DeviceLoadPolicyStatus);

NDDSUSERDllExport
RTIBool tms_DeviceLoadPolicyStatus_initialize(
    tms_DeviceLoadPolicyStatus* self);

NDDSUSERDllExport
RTIBool tms_DeviceLoadPolicyStatus_initialize_ex(
    tms_DeviceLoadPolicyStatus* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_DeviceLoadPolicyStatus_initialize_w_params(
    tms_DeviceLoadPolicyStatus* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_DeviceLoadPolicyStatus_finalize_w_return(
    tms_DeviceLoadPolicyStatus* self);

NDDSUSERDllExport
void tms_DeviceLoadPolicyStatus_finalize(
    tms_DeviceLoadPolicyStatus* self);

NDDSUSERDllExport
void tms_DeviceLoadPolicyStatus_finalize_ex(
    tms_DeviceLoadPolicyStatus* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_DeviceLoadPolicyStatus_finalize_w_params(
    tms_DeviceLoadPolicyStatus* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_DeviceLoadPolicyStatus_finalize_optional_members(
    tms_DeviceLoadPolicyStatus* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_DeviceLoadPolicyStatus_copy(
    tms_DeviceLoadPolicyStatus* dst,
    const tms_DeviceLoadPolicyStatus* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_DevicePriorityTYPENAME;

}

struct tms_DevicePrioritySeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_DevicePriorityTypeSupport;
class tms_DevicePriorityDataWriter;
class tms_DevicePriorityDataReader;
#endif
class tms_DevicePriority 
{
  public:
    typedef struct tms_DevicePrioritySeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_DevicePriorityTypeSupport TypeSupport;
    typedef tms_DevicePriorityDataWriter DataWriter;
    typedef tms_DevicePriorityDataReader DataReader;
    #endif

    tms_Fingerprint   deviceId ;
    DDS_Long   priority ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_DevicePriority_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_DevicePriority_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DevicePriority_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DevicePriority_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_DevicePrioritySeq, tms_DevicePriority);

NDDSUSERDllExport
RTIBool tms_DevicePriority_initialize(
    tms_DevicePriority* self);

NDDSUSERDllExport
RTIBool tms_DevicePriority_initialize_ex(
    tms_DevicePriority* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_DevicePriority_initialize_w_params(
    tms_DevicePriority* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_DevicePriority_finalize_w_return(
    tms_DevicePriority* self);

NDDSUSERDllExport
void tms_DevicePriority_finalize(
    tms_DevicePriority* self);

NDDSUSERDllExport
void tms_DevicePriority_finalize_ex(
    tms_DevicePriority* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_DevicePriority_finalize_w_params(
    tms_DevicePriority* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_DevicePriority_finalize_optional_members(
    tms_DevicePriority* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_DevicePriority_copy(
    tms_DevicePriority* dst,
    const tms_DevicePriority* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_NsnPriorityTYPENAME;

}

struct tms_NsnPrioritySeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_NsnPriorityTypeSupport;
class tms_NsnPriorityDataWriter;
class tms_NsnPriorityDataReader;
#endif
class tms_NsnPriority 
{
  public:
    typedef struct tms_NsnPrioritySeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_NsnPriorityTypeSupport TypeSupport;
    typedef tms_NsnPriorityDataWriter DataWriter;
    typedef tms_NsnPriorityDataReader DataReader;
    #endif

    tms_NatoStockNumber   nsn ;
    DDS_Long   priority ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_NsnPriority_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_NsnPriority_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_NsnPriority_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_NsnPriority_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_NsnPrioritySeq, tms_NsnPriority);

NDDSUSERDllExport
RTIBool tms_NsnPriority_initialize(
    tms_NsnPriority* self);

NDDSUSERDllExport
RTIBool tms_NsnPriority_initialize_ex(
    tms_NsnPriority* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_NsnPriority_initialize_w_params(
    tms_NsnPriority* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_NsnPriority_finalize_w_return(
    tms_NsnPriority* self);

NDDSUSERDllExport
void tms_NsnPriority_finalize(
    tms_NsnPriority* self);

NDDSUSERDllExport
void tms_NsnPriority_finalize_ex(
    tms_NsnPriority* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_NsnPriority_finalize_w_params(
    tms_NsnPriority* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_NsnPriority_finalize_optional_members(
    tms_NsnPriority* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_NsnPriority_copy(
    tms_NsnPriority* dst,
    const tms_NsnPriority* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_GtinPriorityTYPENAME;

}

struct tms_GtinPrioritySeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_GtinPriorityTypeSupport;
class tms_GtinPriorityDataWriter;
class tms_GtinPriorityDataReader;
#endif
class tms_GtinPriority 
{
  public:
    typedef struct tms_GtinPrioritySeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_GtinPriorityTypeSupport TypeSupport;
    typedef tms_GtinPriorityDataWriter DataWriter;
    typedef tms_GtinPriorityDataReader DataReader;
    #endif

    tms_GlobalTradeItemNumber   gtin ;
    DDS_Long   priority ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_GtinPriority_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_GtinPriority_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_GtinPriority_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_GtinPriority_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_GtinPrioritySeq, tms_GtinPriority);

NDDSUSERDllExport
RTIBool tms_GtinPriority_initialize(
    tms_GtinPriority* self);

NDDSUSERDllExport
RTIBool tms_GtinPriority_initialize_ex(
    tms_GtinPriority* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_GtinPriority_initialize_w_params(
    tms_GtinPriority* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_GtinPriority_finalize_w_return(
    tms_GtinPriority* self);

NDDSUSERDllExport
void tms_GtinPriority_finalize(
    tms_GtinPriority* self);

NDDSUSERDllExport
void tms_GtinPriority_finalize_ex(
    tms_GtinPriority* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_GtinPriority_finalize_w_params(
    tms_GtinPriority* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_GtinPriority_finalize_optional_members(
    tms_GtinPriority* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_GtinPriority_copy(
    tms_GtinPriority* dst,
    const tms_GtinPriority* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_UnsignedLong tms_MINLEN_byIdentity= 0;
static const DDS_UnsignedLong tms_MAXLEN_byIdentity= 100;
static const DDS_UnsignedLong tms_MINLEN_byNsn= 0;
static const DDS_UnsignedLong tms_MAXLEN_byNsn= 100;
static const DDS_UnsignedLong tms_MINLEN_byGtin= 0;
static const DDS_UnsignedLong tms_MAXLEN_byGtin= 100;
extern "C" {

    extern const char *tms_McPriorityListTYPENAME;

}

struct tms_McPriorityListSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_McPriorityListTypeSupport;
class tms_McPriorityListDataWriter;
class tms_McPriorityListDataReader;
#endif
class tms_McPriorityList 
{
  public:
    typedef struct tms_McPriorityListSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_McPriorityListTypeSupport TypeSupport;
    typedef tms_McPriorityListDataWriter DataWriter;
    typedef tms_McPriorityListDataReader DataReader;
    #endif

    tms_DevicePrioritySeq  byIdentity ;
    tms_NsnPrioritySeq  byNsn ;
    tms_GtinPrioritySeq  byGtin ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_McPriorityList_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_McPriorityList_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_McPriorityList_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_McPriorityList_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_McPriorityListSeq, tms_McPriorityList);

NDDSUSERDllExport
RTIBool tms_McPriorityList_initialize(
    tms_McPriorityList* self);

NDDSUSERDllExport
RTIBool tms_McPriorityList_initialize_ex(
    tms_McPriorityList* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_McPriorityList_initialize_w_params(
    tms_McPriorityList* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_McPriorityList_finalize_w_return(
    tms_McPriorityList* self);

NDDSUSERDllExport
void tms_McPriorityList_finalize(
    tms_McPriorityList* self);

NDDSUSERDllExport
void tms_McPriorityList_finalize_ex(
    tms_McPriorityList* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_McPriorityList_finalize_w_params(
    tms_McPriorityList* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_McPriorityList_finalize_optional_members(
    tms_McPriorityList* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_McPriorityList_copy(
    tms_McPriorityList* dst,
    const tms_McPriorityList* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_McRedirectTYPENAME;

}

struct tms_McRedirectSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_McRedirectTypeSupport;
class tms_McRedirectDataWriter;
class tms_McRedirectDataReader;
#endif
class tms_McRedirect 
{
  public:
    typedef struct tms_McRedirectSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_McRedirectTypeSupport TypeSupport;
    typedef tms_McRedirectDataWriter DataWriter;
    typedef tms_McRedirectDataReader DataReader;
    #endif

    tms_Fingerprint   sourceId ;
    tms_Fingerprint   targetId ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_McRedirect_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_McRedirect_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_McRedirect_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_McRedirect_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_McRedirectSeq, tms_McRedirect);

NDDSUSERDllExport
RTIBool tms_McRedirect_initialize(
    tms_McRedirect* self);

NDDSUSERDllExport
RTIBool tms_McRedirect_initialize_ex(
    tms_McRedirect* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_McRedirect_initialize_w_params(
    tms_McRedirect* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_McRedirect_finalize_w_return(
    tms_McRedirect* self);

NDDSUSERDllExport
void tms_McRedirect_finalize(
    tms_McRedirect* self);

NDDSUSERDllExport
void tms_McRedirect_finalize_ex(
    tms_McRedirect* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_McRedirect_finalize_w_params(
    tms_McRedirect* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_McRedirect_finalize_optional_members(
    tms_McRedirect* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_McRedirect_copy(
    tms_McRedirect* dst,
    const tms_McRedirect* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_EngineStateTYPENAME;

}

struct tms_EngineStateSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_EngineStateTypeSupport;
class tms_EngineStateDataWriter;
class tms_EngineStateDataReader;
#endif
class tms_EngineState 
{
  public:
    typedef struct tms_EngineStateSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_EngineStateTypeSupport TypeSupport;
    typedef tms_EngineStateDataWriter DataWriter;
    typedef tms_EngineStateDataReader DataReader;
    #endif

    tms_Fingerprint   deviceId ;
    DDS_Float   oilPressure ;
    DDS_Float   coolantTemperature ;
    DDS_Float   speed ;
    DDS_Float   fuelLevel ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_EngineState_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_EngineState_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_EngineState_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_EngineState_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_EngineStateSeq, tms_EngineState);

NDDSUSERDllExport
RTIBool tms_EngineState_initialize(
    tms_EngineState* self);

NDDSUSERDllExport
RTIBool tms_EngineState_initialize_ex(
    tms_EngineState* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_EngineState_initialize_w_params(
    tms_EngineState* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_EngineState_finalize_w_return(
    tms_EngineState* self);

NDDSUSERDllExport
void tms_EngineState_finalize(
    tms_EngineState* self);

NDDSUSERDllExport
void tms_EngineState_finalize_ex(
    tms_EngineState* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_EngineState_finalize_w_params(
    tms_EngineState* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_EngineState_finalize_optional_members(
    tms_EngineState* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_EngineState_copy(
    tms_EngineState* dst,
    const tms_EngineState* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum tms_SourceState
{
    SS_UNINITIALIZED ,      
    SS_OFF ,      
    SS_ON ,      
    SS_RUNNING ,      
    SS_SOURCING      
} tms_SourceState;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_SourceState_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_SourceState_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_SourceState_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_SourceState_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_SourceStateSeq, tms_SourceState);

NDDSUSERDllExport
RTIBool tms_SourceState_initialize(
    tms_SourceState* self);

NDDSUSERDllExport
RTIBool tms_SourceState_initialize_ex(
    tms_SourceState* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_SourceState_initialize_w_params(
    tms_SourceState* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_SourceState_finalize_w_return(
    tms_SourceState* self);

NDDSUSERDllExport
void tms_SourceState_finalize(
    tms_SourceState* self);

NDDSUSERDllExport
void tms_SourceState_finalize_ex(
    tms_SourceState* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_SourceState_finalize_w_params(
    tms_SourceState* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_SourceState_finalize_optional_members(
    tms_SourceState* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_SourceState_copy(
    tms_SourceState* dst,
    const tms_SourceState* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum tms_SourceTransition
{
    ST_UNINITIALIZED ,      
    ST_NONE ,      
    ST_POWER_UP ,      
    ST_POWER_DOWN ,      
    ST_START ,      
    ST_STOP ,      
    ST_CONNECT ,      
    ST_DISCONNECT ,      
    ST_JUMP_START ,      
    ST_RAPID_STOP      
} tms_SourceTransition;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_SourceTransition_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_SourceTransition_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_SourceTransition_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_SourceTransition_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_SourceTransitionSeq, tms_SourceTransition);

NDDSUSERDllExport
RTIBool tms_SourceTransition_initialize(
    tms_SourceTransition* self);

NDDSUSERDllExport
RTIBool tms_SourceTransition_initialize_ex(
    tms_SourceTransition* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_SourceTransition_initialize_w_params(
    tms_SourceTransition* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_SourceTransition_finalize_w_return(
    tms_SourceTransition* self);

NDDSUSERDllExport
void tms_SourceTransition_finalize(
    tms_SourceTransition* self);

NDDSUSERDllExport
void tms_SourceTransition_finalize_ex(
    tms_SourceTransition* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_SourceTransition_finalize_w_params(
    tms_SourceTransition* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_SourceTransition_finalize_optional_members(
    tms_SourceTransition* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_SourceTransition_copy(
    tms_SourceTransition* dst,
    const tms_SourceTransition* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_SourceTransitionStateTYPENAME;

}

struct tms_SourceTransitionStateSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_SourceTransitionStateTypeSupport;
class tms_SourceTransitionStateDataWriter;
class tms_SourceTransitionStateDataReader;
#endif
class tms_SourceTransitionState 
{
  public:
    typedef struct tms_SourceTransitionStateSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_SourceTransitionStateTypeSupport TypeSupport;
    typedef tms_SourceTransitionStateDataWriter DataWriter;
    typedef tms_SourceTransitionStateDataReader DataReader;
    #endif

    tms_Fingerprint   deviceId ;
    tms_SourceState   presentState ;
    tms_SourceState   futureState ;
    DDS_Float   elapsedTime ;
    DDS_Float   remainingTime ;
    tms_SampleId   relatedRequestId ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_SourceTransitionState_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_SourceTransitionState_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_SourceTransitionState_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_SourceTransitionState_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_SourceTransitionStateSeq, tms_SourceTransitionState);

NDDSUSERDllExport
RTIBool tms_SourceTransitionState_initialize(
    tms_SourceTransitionState* self);

NDDSUSERDllExport
RTIBool tms_SourceTransitionState_initialize_ex(
    tms_SourceTransitionState* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_SourceTransitionState_initialize_w_params(
    tms_SourceTransitionState* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_SourceTransitionState_finalize_w_return(
    tms_SourceTransitionState* self);

NDDSUSERDllExport
void tms_SourceTransitionState_finalize(
    tms_SourceTransitionState* self);

NDDSUSERDllExport
void tms_SourceTransitionState_finalize_ex(
    tms_SourceTransitionState* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_SourceTransitionState_finalize_w_params(
    tms_SourceTransitionState* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_SourceTransitionState_finalize_optional_members(
    tms_SourceTransitionState* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_SourceTransitionState_copy(
    tms_SourceTransitionState* dst,
    const tms_SourceTransitionState* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_SourceTransitionRequestTYPENAME;

}

struct tms_SourceTransitionRequestSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_SourceTransitionRequestTypeSupport;
class tms_SourceTransitionRequestDataWriter;
class tms_SourceTransitionRequestDataReader;
#endif
class tms_SourceTransitionRequest 
{
  public:
    typedef struct tms_SourceTransitionRequestSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_SourceTransitionRequestTypeSupport TypeSupport;
    typedef tms_SourceTransitionRequestDataWriter DataWriter;
    typedef tms_SourceTransitionRequestDataReader DataReader;
    #endif

    tms_SampleId   requestId ;
    tms_Fingerprint   deviceId ;
    DDS_UnsignedShort   config ;
    tms_SourceTransition   desiredTransition ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_SourceTransitionRequest_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_SourceTransitionRequest_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_SourceTransitionRequest_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_SourceTransitionRequest_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_SourceTransitionRequestSeq, tms_SourceTransitionRequest);

NDDSUSERDllExport
RTIBool tms_SourceTransitionRequest_initialize(
    tms_SourceTransitionRequest* self);

NDDSUSERDllExport
RTIBool tms_SourceTransitionRequest_initialize_ex(
    tms_SourceTransitionRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_SourceTransitionRequest_initialize_w_params(
    tms_SourceTransitionRequest* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_SourceTransitionRequest_finalize_w_return(
    tms_SourceTransitionRequest* self);

NDDSUSERDllExport
void tms_SourceTransitionRequest_finalize(
    tms_SourceTransitionRequest* self);

NDDSUSERDllExport
void tms_SourceTransitionRequest_finalize_ex(
    tms_SourceTransitionRequest* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_SourceTransitionRequest_finalize_w_params(
    tms_SourceTransitionRequest* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_SourceTransitionRequest_finalize_optional_members(
    tms_SourceTransitionRequest* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_SourceTransitionRequest_copy(
    tms_SourceTransitionRequest* dst,
    const tms_SourceTransitionRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_ControlCurveTYPENAME;

}

struct tms_ControlCurveSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_ControlCurveTypeSupport;
class tms_ControlCurveDataWriter;
class tms_ControlCurveDataReader;
#endif
class tms_ControlCurve 
{
  public:
    typedef struct tms_ControlCurveSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_ControlCurveTypeSupport TypeSupport;
    typedef tms_ControlCurveDataWriter DataWriter;
    typedef tms_ControlCurveDataReader DataReader;
    #endif

    tms_Curve2D   minimum ;
    tms_Curve2D   nominal ;
    tms_Curve2D   maximum ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_ControlCurve_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_ControlCurve_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_ControlCurve_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_ControlCurve_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_ControlCurveSeq, tms_ControlCurve);

NDDSUSERDllExport
RTIBool tms_ControlCurve_initialize(
    tms_ControlCurve* self);

NDDSUSERDllExport
RTIBool tms_ControlCurve_initialize_ex(
    tms_ControlCurve* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_ControlCurve_initialize_w_params(
    tms_ControlCurve* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_ControlCurve_finalize_w_return(
    tms_ControlCurve* self);

NDDSUSERDllExport
void tms_ControlCurve_finalize(
    tms_ControlCurve* self);

NDDSUSERDllExport
void tms_ControlCurve_finalize_ex(
    tms_ControlCurve* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_ControlCurve_finalize_w_params(
    tms_ControlCurve* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_ControlCurve_finalize_optional_members(
    tms_ControlCurve* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_ControlCurve_copy(
    tms_ControlCurve* dst,
    const tms_ControlCurve* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_DLSConfigTYPENAME;

}

struct tms_DLSConfigSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_DLSConfigTypeSupport;
class tms_DLSConfigDataWriter;
class tms_DLSConfigDataReader;
#endif
class tms_DLSConfig 
{
  public:
    typedef struct tms_DLSConfigSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_DLSConfigTypeSupport TypeSupport;
    typedef tms_DLSConfigDataWriter DataWriter;
    typedef tms_DLSConfigDataReader DataReader;
    #endif

    tms_TopicList   sendTopics ;
    tms_TopicList   receiveTopics ;
    DDS_Float   gainReal ;
    DDS_Float   gainReactive ;
    tms_Curve2D   biasRealPu ;
    tms_Curve2D   biasReactivePu ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_DLSConfig_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_DLSConfig_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DLSConfig_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DLSConfig_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_DLSConfigSeq, tms_DLSConfig);

NDDSUSERDllExport
RTIBool tms_DLSConfig_initialize(
    tms_DLSConfig* self);

NDDSUSERDllExport
RTIBool tms_DLSConfig_initialize_ex(
    tms_DLSConfig* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_DLSConfig_initialize_w_params(
    tms_DLSConfig* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_DLSConfig_finalize_w_return(
    tms_DLSConfig* self);

NDDSUSERDllExport
void tms_DLSConfig_finalize(
    tms_DLSConfig* self);

NDDSUSERDllExport
void tms_DLSConfig_finalize_ex(
    tms_DLSConfig* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_DLSConfig_finalize_w_params(
    tms_DLSConfig* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_DLSConfig_finalize_optional_members(
    tms_DLSConfig* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_DLSConfig_copy(
    tms_DLSConfig* dst,
    const tms_DLSConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_DLSMeasurementTYPENAME;

}

struct tms_DLSMeasurementSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_DLSMeasurementTypeSupport;
class tms_DLSMeasurementDataWriter;
class tms_DLSMeasurementDataReader;
#endif
class tms_DLSMeasurement 
{
  public:
    typedef struct tms_DLSMeasurementSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_DLSMeasurementTypeSupport TypeSupport;
    typedef tms_DLSMeasurementDataWriter DataWriter;
    typedef tms_DLSMeasurementDataReader DataReader;
    #endif

    tms_Fingerprint   deviceId ;
    tms_ClockMonotonic   time ;
    DDS_Float   realPu ;
    DDS_Float   reactivePu ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_DLSMeasurement_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_DLSMeasurement_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DLSMeasurement_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_DLSMeasurement_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_DLSMeasurementSeq, tms_DLSMeasurement);

NDDSUSERDllExport
RTIBool tms_DLSMeasurement_initialize(
    tms_DLSMeasurement* self);

NDDSUSERDllExport
RTIBool tms_DLSMeasurement_initialize_ex(
    tms_DLSMeasurement* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_DLSMeasurement_initialize_w_params(
    tms_DLSMeasurement* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_DLSMeasurement_finalize_w_return(
    tms_DLSMeasurement* self);

NDDSUSERDllExport
void tms_DLSMeasurement_finalize(
    tms_DLSMeasurement* self);

NDDSUSERDllExport
void tms_DLSMeasurement_finalize_ex(
    tms_DLSMeasurement* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_DLSMeasurement_finalize_w_params(
    tms_DLSMeasurement* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_DLSMeasurement_finalize_optional_members(
    tms_DLSMeasurement* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_DLSMeasurement_copy(
    tms_DLSMeasurement* dst,
    const tms_DLSMeasurement* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_LoadSharingTYPENAME;

}

struct tms_LoadSharingSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_LoadSharingTypeSupport;
class tms_LoadSharingDataWriter;
class tms_LoadSharingDataReader;
#endif
class tms_LoadSharing 
{
  public:
    typedef struct tms_LoadSharingSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_LoadSharingTypeSupport TypeSupport;
    typedef tms_LoadSharingDataWriter DataWriter;
    typedef tms_LoadSharingDataReader DataReader;
    #endif

    tms_ControlCurve   frequencyPowerCurve ;
    tms_ControlCurve   voltageReactiveCurve ;
    tms_DLSConfig   dls ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_LoadSharing_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_LoadSharing_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_LoadSharing_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_LoadSharing_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_LoadSharingSeq, tms_LoadSharing);

NDDSUSERDllExport
RTIBool tms_LoadSharing_initialize(
    tms_LoadSharing* self);

NDDSUSERDllExport
RTIBool tms_LoadSharing_initialize_ex(
    tms_LoadSharing* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_LoadSharing_initialize_w_params(
    tms_LoadSharing* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_LoadSharing_finalize_w_return(
    tms_LoadSharing* self);

NDDSUSERDllExport
void tms_LoadSharing_finalize(
    tms_LoadSharing* self);

NDDSUSERDllExport
void tms_LoadSharing_finalize_ex(
    tms_LoadSharing* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_LoadSharing_finalize_w_params(
    tms_LoadSharing* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_LoadSharing_finalize_optional_members(
    tms_LoadSharing* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_LoadSharing_copy(
    tms_LoadSharing* dst,
    const tms_LoadSharing* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_LoadSharingRequestTYPENAME;

}

struct tms_LoadSharingRequestSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_LoadSharingRequestTypeSupport;
class tms_LoadSharingRequestDataWriter;
class tms_LoadSharingRequestDataReader;
#endif
class tms_LoadSharingRequest 
{
  public:
    typedef struct tms_LoadSharingRequestSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_LoadSharingRequestTypeSupport TypeSupport;
    typedef tms_LoadSharingRequestDataWriter DataWriter;
    typedef tms_LoadSharingRequestDataReader DataReader;
    #endif

    tms_SampleId   requestId ;
    tms_Fingerprint   deviceId ;
    DDS_UnsignedShort   config ;
    tms_LoadSharing   parameters ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_LoadSharingRequest_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_LoadSharingRequest_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_LoadSharingRequest_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_LoadSharingRequest_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_LoadSharingRequestSeq, tms_LoadSharingRequest);

NDDSUSERDllExport
RTIBool tms_LoadSharingRequest_initialize(
    tms_LoadSharingRequest* self);

NDDSUSERDllExport
RTIBool tms_LoadSharingRequest_initialize_ex(
    tms_LoadSharingRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_LoadSharingRequest_initialize_w_params(
    tms_LoadSharingRequest* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_LoadSharingRequest_finalize_w_return(
    tms_LoadSharingRequest* self);

NDDSUSERDllExport
void tms_LoadSharingRequest_finalize(
    tms_LoadSharingRequest* self);

NDDSUSERDllExport
void tms_LoadSharingRequest_finalize_ex(
    tms_LoadSharingRequest* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_LoadSharingRequest_finalize_w_params(
    tms_LoadSharingRequest* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_LoadSharingRequest_finalize_optional_members(
    tms_LoadSharingRequest* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_LoadSharingRequest_copy(
    tms_LoadSharingRequest* dst,
    const tms_LoadSharingRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_LoadSharingStatusTYPENAME;

}

struct tms_LoadSharingStatusSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_LoadSharingStatusTypeSupport;
class tms_LoadSharingStatusDataWriter;
class tms_LoadSharingStatusDataReader;
#endif
class tms_LoadSharingStatus 
{
  public:
    typedef struct tms_LoadSharingStatusSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_LoadSharingStatusTypeSupport TypeSupport;
    typedef tms_LoadSharingStatusDataWriter DataWriter;
    typedef tms_LoadSharingStatusDataReader DataReader;
    #endif

    tms_Fingerprint   deviceId ;
    DDS_UnsignedShort   config ;
    tms_LoadSharing   parameters ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_LoadSharingStatus_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_LoadSharingStatus_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_LoadSharingStatus_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_LoadSharingStatus_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_LoadSharingStatusSeq, tms_LoadSharingStatus);

NDDSUSERDllExport
RTIBool tms_LoadSharingStatus_initialize(
    tms_LoadSharingStatus* self);

NDDSUSERDllExport
RTIBool tms_LoadSharingStatus_initialize_ex(
    tms_LoadSharingStatus* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_LoadSharingStatus_initialize_w_params(
    tms_LoadSharingStatus* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_LoadSharingStatus_finalize_w_return(
    tms_LoadSharingStatus* self);

NDDSUSERDllExport
void tms_LoadSharingStatus_finalize(
    tms_LoadSharingStatus* self);

NDDSUSERDllExport
void tms_LoadSharingStatus_finalize_ex(
    tms_LoadSharingStatus* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_LoadSharingStatus_finalize_w_params(
    tms_LoadSharingStatus* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_LoadSharingStatus_finalize_optional_members(
    tms_LoadSharingStatus* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_LoadSharingStatus_copy(
    tms_LoadSharingStatus* dst,
    const tms_LoadSharingStatus* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_LoadEstimateTYPENAME;

}

struct tms_LoadEstimateSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_LoadEstimateTypeSupport;
class tms_LoadEstimateDataWriter;
class tms_LoadEstimateDataReader;
#endif
class tms_LoadEstimate 
{
  public:
    typedef struct tms_LoadEstimateSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_LoadEstimateTypeSupport TypeSupport;
    typedef tms_LoadEstimateDataWriter DataWriter;
    typedef tms_LoadEstimateDataReader DataReader;
    #endif

    tms_Fingerprint   deviceId ;
    DDS_Float   centerFrequency ;
    DDS_Float   realPower ;
    DDS_Float   realCurrent ;
    DDS_Float   realImpedance ;
    DDS_Float   realFrequency ;
    DDS_Float   reactivePower ;
    DDS_Float   reactiveCurrent ;
    DDS_Float   reactiveImpedance ;
    DDS_Float   reactiveFrequency ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_LoadEstimate_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_LoadEstimate_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_LoadEstimate_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_LoadEstimate_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_LoadEstimateSeq, tms_LoadEstimate);

NDDSUSERDllExport
RTIBool tms_LoadEstimate_initialize(
    tms_LoadEstimate* self);

NDDSUSERDllExport
RTIBool tms_LoadEstimate_initialize_ex(
    tms_LoadEstimate* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_LoadEstimate_initialize_w_params(
    tms_LoadEstimate* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_LoadEstimate_finalize_w_return(
    tms_LoadEstimate* self);

NDDSUSERDllExport
void tms_LoadEstimate_finalize(
    tms_LoadEstimate* self);

NDDSUSERDllExport
void tms_LoadEstimate_finalize_ex(
    tms_LoadEstimate* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_LoadEstimate_finalize_w_params(
    tms_LoadEstimate* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_LoadEstimate_finalize_optional_members(
    tms_LoadEstimate* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_LoadEstimate_copy(
    tms_LoadEstimate* dst,
    const tms_LoadEstimate* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_LoadChangeTYPENAME;

}

struct tms_LoadChangeSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_LoadChangeTypeSupport;
class tms_LoadChangeDataWriter;
class tms_LoadChangeDataReader;
#endif
class tms_LoadChange 
{
  public:
    typedef struct tms_LoadChangeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_LoadChangeTypeSupport TypeSupport;
    typedef tms_LoadChangeDataWriter DataWriter;
    typedef tms_LoadChangeDataReader DataReader;
    #endif

    DDS_Float   initPowerMin ;
    DDS_Float   initPowerMax ;
    DDS_Float   transPowerMin ;
    DDS_Float   transPowerMax ;
    DDS_Float   transSlope ;
    DDS_Float   transDuration ;
    DDS_Float   finalPowerMin ;
    DDS_Float   finalPowerMax ;
    tms_LoadEstimate   finalLoadEstimate ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_LoadChange_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_LoadChange_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_LoadChange_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_LoadChange_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_LoadChangeSeq, tms_LoadChange);

NDDSUSERDllExport
RTIBool tms_LoadChange_initialize(
    tms_LoadChange* self);

NDDSUSERDllExport
RTIBool tms_LoadChange_initialize_ex(
    tms_LoadChange* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_LoadChange_initialize_w_params(
    tms_LoadChange* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_LoadChange_finalize_w_return(
    tms_LoadChange* self);

NDDSUSERDllExport
void tms_LoadChange_finalize(
    tms_LoadChange* self);

NDDSUSERDllExport
void tms_LoadChange_finalize_ex(
    tms_LoadChange* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_LoadChange_finalize_w_params(
    tms_LoadChange* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_LoadChange_finalize_optional_members(
    tms_LoadChange* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_LoadChange_copy(
    tms_LoadChange* dst,
    const tms_LoadChange* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_LoadChangeRequestTYPENAME;

}

struct tms_LoadChangeRequestSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_LoadChangeRequestTypeSupport;
class tms_LoadChangeRequestDataWriter;
class tms_LoadChangeRequestDataReader;
#endif
class tms_LoadChangeRequest 
{
  public:
    typedef struct tms_LoadChangeRequestSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_LoadChangeRequestTypeSupport TypeSupport;
    typedef tms_LoadChangeRequestDataWriter DataWriter;
    typedef tms_LoadChangeRequestDataReader DataReader;
    #endif

    tms_SampleId   requestId ;
    tms_LoadChange   desiredTransition ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_LoadChangeRequest_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_LoadChangeRequest_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_LoadChangeRequest_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_LoadChangeRequest_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_LoadChangeRequestSeq, tms_LoadChangeRequest);

NDDSUSERDllExport
RTIBool tms_LoadChangeRequest_initialize(
    tms_LoadChangeRequest* self);

NDDSUSERDllExport
RTIBool tms_LoadChangeRequest_initialize_ex(
    tms_LoadChangeRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_LoadChangeRequest_initialize_w_params(
    tms_LoadChangeRequest* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_LoadChangeRequest_finalize_w_return(
    tms_LoadChangeRequest* self);

NDDSUSERDllExport
void tms_LoadChangeRequest_finalize(
    tms_LoadChangeRequest* self);

NDDSUSERDllExport
void tms_LoadChangeRequest_finalize_ex(
    tms_LoadChangeRequest* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_LoadChangeRequest_finalize_w_params(
    tms_LoadChangeRequest* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_LoadChangeRequest_finalize_optional_members(
    tms_LoadChangeRequest* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_LoadChangeRequest_copy(
    tms_LoadChangeRequest* dst,
    const tms_LoadChangeRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_SimulationCapabilitiesTYPENAME;

}

struct tms_SimulationCapabilitiesSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_SimulationCapabilitiesTypeSupport;
class tms_SimulationCapabilitiesDataWriter;
class tms_SimulationCapabilitiesDataReader;
#endif
class tms_SimulationCapabilities 
{
  public:
    typedef struct tms_SimulationCapabilitiesSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_SimulationCapabilitiesTypeSupport TypeSupport;
    typedef tms_SimulationCapabilitiesDataWriter DataWriter;
    typedef tms_SimulationCapabilitiesDataReader DataReader;
    #endif

    tms_Fingerprint   deviceId ;
    DDS_Boolean   scaledTime ;
    DDS_Float   scaledTimeMax ;
    DDS_Boolean   steppedTime ;
    tms_ClockMonotonic   realStepDurationMin ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_SimulationCapabilities_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_SimulationCapabilities_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_SimulationCapabilities_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_SimulationCapabilities_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_SimulationCapabilitiesSeq, tms_SimulationCapabilities);

NDDSUSERDllExport
RTIBool tms_SimulationCapabilities_initialize(
    tms_SimulationCapabilities* self);

NDDSUSERDllExport
RTIBool tms_SimulationCapabilities_initialize_ex(
    tms_SimulationCapabilities* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_SimulationCapabilities_initialize_w_params(
    tms_SimulationCapabilities* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_SimulationCapabilities_finalize_w_return(
    tms_SimulationCapabilities* self);

NDDSUSERDllExport
void tms_SimulationCapabilities_finalize(
    tms_SimulationCapabilities* self);

NDDSUSERDllExport
void tms_SimulationCapabilities_finalize_ex(
    tms_SimulationCapabilities* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_SimulationCapabilities_finalize_w_params(
    tms_SimulationCapabilities* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_SimulationCapabilities_finalize_optional_members(
    tms_SimulationCapabilities* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_SimulationCapabilities_copy(
    tms_SimulationCapabilities* dst,
    const tms_SimulationCapabilities* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum tms_TimeMode
{
    TM_REAL_TIME ,      
    TM_SCALED_TIME ,      
    TM_STEPPED_TIME      
} tms_TimeMode;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_TimeMode_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_TimeMode_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_TimeMode_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_TimeMode_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_TimeModeSeq, tms_TimeMode);

NDDSUSERDllExport
RTIBool tms_TimeMode_initialize(
    tms_TimeMode* self);

NDDSUSERDllExport
RTIBool tms_TimeMode_initialize_ex(
    tms_TimeMode* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_TimeMode_initialize_w_params(
    tms_TimeMode* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_TimeMode_finalize_w_return(
    tms_TimeMode* self);

NDDSUSERDllExport
void tms_TimeMode_finalize(
    tms_TimeMode* self);

NDDSUSERDllExport
void tms_TimeMode_finalize_ex(
    tms_TimeMode* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_TimeMode_finalize_w_params(
    tms_TimeMode* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_TimeMode_finalize_optional_members(
    tms_TimeMode* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_TimeMode_copy(
    tms_TimeMode* dst,
    const tms_TimeMode* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_TimeSchemeTYPENAME;

}

struct tms_TimeSchemeSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_TimeSchemeTypeSupport;
class tms_TimeSchemeDataWriter;
class tms_TimeSchemeDataReader;
#endif
class tms_TimeScheme 
{
  public:
    typedef struct tms_TimeSchemeSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_TimeSchemeTypeSupport TypeSupport;
    typedef tms_TimeSchemeDataWriter DataWriter;
    typedef tms_TimeSchemeDataReader DataReader;
    #endif

    tms_TimeMode   mode ;
    DDS_Float   scale ;
    tms_ClockRealtime   realBase ;
    tms_ClockMonotonic   virtualBase ;
    tms_ClockMonotonic   realStepDuration ;
    tms_ClockMonotonic   virtualStepDuration ;
    DDS_Long   stepCount ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_TimeScheme_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_TimeScheme_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_TimeScheme_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_TimeScheme_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_TimeSchemeSeq, tms_TimeScheme);

NDDSUSERDllExport
RTIBool tms_TimeScheme_initialize(
    tms_TimeScheme* self);

NDDSUSERDllExport
RTIBool tms_TimeScheme_initialize_ex(
    tms_TimeScheme* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_TimeScheme_initialize_w_params(
    tms_TimeScheme* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_TimeScheme_finalize_w_return(
    tms_TimeScheme* self);

NDDSUSERDllExport
void tms_TimeScheme_finalize(
    tms_TimeScheme* self);

NDDSUSERDllExport
void tms_TimeScheme_finalize_ex(
    tms_TimeScheme* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_TimeScheme_finalize_w_params(
    tms_TimeScheme* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_TimeScheme_finalize_optional_members(
    tms_TimeScheme* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_TimeScheme_copy(
    tms_TimeScheme* dst,
    const tms_TimeScheme* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_TimeAdvanceTYPENAME;

}

struct tms_TimeAdvanceSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_TimeAdvanceTypeSupport;
class tms_TimeAdvanceDataWriter;
class tms_TimeAdvanceDataReader;
#endif
class tms_TimeAdvance 
{
  public:
    typedef struct tms_TimeAdvanceSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_TimeAdvanceTypeSupport TypeSupport;
    typedef tms_TimeAdvanceDataWriter DataWriter;
    typedef tms_TimeAdvanceDataReader DataReader;
    #endif

    tms_Fingerprint   deviceId ;
    tms_ClockMonotonic   virtualTime ;
    DDS_Long   stepCount ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_TimeAdvance_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_TimeAdvance_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_TimeAdvance_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_TimeAdvance_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_TimeAdvanceSeq, tms_TimeAdvance);

NDDSUSERDllExport
RTIBool tms_TimeAdvance_initialize(
    tms_TimeAdvance* self);

NDDSUSERDllExport
RTIBool tms_TimeAdvance_initialize_ex(
    tms_TimeAdvance* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_TimeAdvance_initialize_w_params(
    tms_TimeAdvance* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_TimeAdvance_finalize_w_return(
    tms_TimeAdvance* self);

NDDSUSERDllExport
void tms_TimeAdvance_finalize(
    tms_TimeAdvance* self);

NDDSUSERDllExport
void tms_TimeAdvance_finalize_ex(
    tms_TimeAdvance* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_TimeAdvance_finalize_w_params(
    tms_TimeAdvance* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_TimeAdvance_finalize_optional_members(
    tms_TimeAdvance* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_TimeAdvance_copy(
    tms_TimeAdvance* dst,
    const tms_TimeAdvance* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum tms_MicrogridMembership
{
    MM_UNINITIALIZED ,      
    MM_JOIN ,      
    MM_LEAVE      
} tms_MicrogridMembership;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_MicrogridMembership_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_MicrogridMembership_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_MicrogridMembership_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_MicrogridMembership_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_MicrogridMembershipSeq, tms_MicrogridMembership);

NDDSUSERDllExport
RTIBool tms_MicrogridMembership_initialize(
    tms_MicrogridMembership* self);

NDDSUSERDllExport
RTIBool tms_MicrogridMembership_initialize_ex(
    tms_MicrogridMembership* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_MicrogridMembership_initialize_w_params(
    tms_MicrogridMembership* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_MicrogridMembership_finalize_w_return(
    tms_MicrogridMembership* self);

NDDSUSERDllExport
void tms_MicrogridMembership_finalize(
    tms_MicrogridMembership* self);

NDDSUSERDllExport
void tms_MicrogridMembership_finalize_ex(
    tms_MicrogridMembership* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_MicrogridMembership_finalize_w_params(
    tms_MicrogridMembership* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_MicrogridMembership_finalize_optional_members(
    tms_MicrogridMembership* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_MicrogridMembership_copy(
    tms_MicrogridMembership* dst,
    const tms_MicrogridMembership* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_MicrogridMembershipRequestTYPENAME;

}

struct tms_MicrogridMembershipRequestSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_MicrogridMembershipRequestTypeSupport;
class tms_MicrogridMembershipRequestDataWriter;
class tms_MicrogridMembershipRequestDataReader;
#endif
class tms_MicrogridMembershipRequest 
{
  public:
    typedef struct tms_MicrogridMembershipRequestSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_MicrogridMembershipRequestTypeSupport TypeSupport;
    typedef tms_MicrogridMembershipRequestDataWriter DataWriter;
    typedef tms_MicrogridMembershipRequestDataReader DataReader;
    #endif

    tms_SampleId   requestId ;
    tms_Fingerprint   deviceId ;
    tms_MicrogridMembership   membership ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_MicrogridMembershipRequest_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_MicrogridMembershipRequest_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_MicrogridMembershipRequest_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_MicrogridMembershipRequest_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_MicrogridMembershipRequestSeq, tms_MicrogridMembershipRequest);

NDDSUSERDllExport
RTIBool tms_MicrogridMembershipRequest_initialize(
    tms_MicrogridMembershipRequest* self);

NDDSUSERDllExport
RTIBool tms_MicrogridMembershipRequest_initialize_ex(
    tms_MicrogridMembershipRequest* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_MicrogridMembershipRequest_initialize_w_params(
    tms_MicrogridMembershipRequest* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_MicrogridMembershipRequest_finalize_w_return(
    tms_MicrogridMembershipRequest* self);

NDDSUSERDllExport
void tms_MicrogridMembershipRequest_finalize(
    tms_MicrogridMembershipRequest* self);

NDDSUSERDllExport
void tms_MicrogridMembershipRequest_finalize_ex(
    tms_MicrogridMembershipRequest* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_MicrogridMembershipRequest_finalize_w_params(
    tms_MicrogridMembershipRequest* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_MicrogridMembershipRequest_finalize_optional_members(
    tms_MicrogridMembershipRequest* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_MicrogridMembershipRequest_copy(
    tms_MicrogridMembershipRequest* dst,
    const tms_MicrogridMembershipRequest* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum tms_MicrogridMembershipResult
{
    MMR_UNINITIALIZED ,      
    MMR_REPLACED ,      
    MMR_COMPLETE ,      
    MMR_BLOCKED      
} tms_MicrogridMembershipResult;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_MicrogridMembershipResult_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_MicrogridMembershipResult_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_MicrogridMembershipResult_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_MicrogridMembershipResult_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_MicrogridMembershipResultSeq, tms_MicrogridMembershipResult);

NDDSUSERDllExport
RTIBool tms_MicrogridMembershipResult_initialize(
    tms_MicrogridMembershipResult* self);

NDDSUSERDllExport
RTIBool tms_MicrogridMembershipResult_initialize_ex(
    tms_MicrogridMembershipResult* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_MicrogridMembershipResult_initialize_w_params(
    tms_MicrogridMembershipResult* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_MicrogridMembershipResult_finalize_w_return(
    tms_MicrogridMembershipResult* self);

NDDSUSERDllExport
void tms_MicrogridMembershipResult_finalize(
    tms_MicrogridMembershipResult* self);

NDDSUSERDllExport
void tms_MicrogridMembershipResult_finalize_ex(
    tms_MicrogridMembershipResult* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_MicrogridMembershipResult_finalize_w_params(
    tms_MicrogridMembershipResult* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_MicrogridMembershipResult_finalize_optional_members(
    tms_MicrogridMembershipResult* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_MicrogridMembershipResult_copy(
    tms_MicrogridMembershipResult* dst,
    const tms_MicrogridMembershipResult* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *tms_MicrogridMembershipApprovalTYPENAME;

}

struct tms_MicrogridMembershipApprovalSeq;
#ifndef NDDS_STANDALONE_TYPE
class tms_MicrogridMembershipApprovalTypeSupport;
class tms_MicrogridMembershipApprovalDataWriter;
class tms_MicrogridMembershipApprovalDataReader;
#endif
class tms_MicrogridMembershipApproval 
{
  public:
    typedef struct tms_MicrogridMembershipApprovalSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef tms_MicrogridMembershipApprovalTypeSupport TypeSupport;
    typedef tms_MicrogridMembershipApprovalDataWriter DataWriter;
    typedef tms_MicrogridMembershipApprovalDataReader DataReader;
    #endif

    tms_SampleId   requestId ;
    tms_SampleId   relatedRequestId ;
    tms_Fingerprint   deviceId ;
    tms_MicrogridMembership   membership ;
    tms_MicrogridMembershipResult   result ;
    DDS_Char *   hint ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* tms_MicrogridMembershipApproval_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *tms_MicrogridMembershipApproval_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_MicrogridMembershipApproval_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *tms_MicrogridMembershipApproval_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(tms_MicrogridMembershipApprovalSeq, tms_MicrogridMembershipApproval);

NDDSUSERDllExport
RTIBool tms_MicrogridMembershipApproval_initialize(
    tms_MicrogridMembershipApproval* self);

NDDSUSERDllExport
RTIBool tms_MicrogridMembershipApproval_initialize_ex(
    tms_MicrogridMembershipApproval* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool tms_MicrogridMembershipApproval_initialize_w_params(
    tms_MicrogridMembershipApproval* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool tms_MicrogridMembershipApproval_finalize_w_return(
    tms_MicrogridMembershipApproval* self);

NDDSUSERDllExport
void tms_MicrogridMembershipApproval_finalize(
    tms_MicrogridMembershipApproval* self);

NDDSUSERDllExport
void tms_MicrogridMembershipApproval_finalize_ex(
    tms_MicrogridMembershipApproval* self,RTIBool deletePointers);

NDDSUSERDllExport
void tms_MicrogridMembershipApproval_finalize_w_params(
    tms_MicrogridMembershipApproval* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void tms_MicrogridMembershipApproval_finalize_optional_members(
    tms_MicrogridMembershipApproval* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool tms_MicrogridMembershipApproval_copy(
    tms_MicrogridMembershipApproval* dst,
    const tms_MicrogridMembershipApproval* src);

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
        struct type_code<tms_Point2D> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_Curve2D> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_ClockMonotonic> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_ClockRealtime> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_ClockStatus> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_SampleId> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_ReplyStatus> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_RequestResponse> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_ParameterMetadata> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_ParameterValue> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_DeviceParameterRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_DeviceParameterStatus> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_DistributionInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_LoadInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_EngineStateThresholds> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_SourceInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_ProductInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_Heartbeat> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_DiagnosticTroubleCode> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_ActiveDiagnosticMessages> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_StandardConfigMaster> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_CopyConfigRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_ReserveConfigRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_ReserveConfigReply> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_ReleaseConfigRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_ConfigReservation> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_ConfigReservationList> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_GetConfigContentsRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_AuthorizationToEnergizeRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_AuthorizationToEnergizeResponse> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_AuthorizationToEnergizeOutcome> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_PowerPortId> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_PowerConnectionId> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_PowerPortType> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_PowerSwitchStatus> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_PowerSwitchCommand> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_PowerPortStatus> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_PowerConnection> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_DevicePowerPortTypes> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_DevicePowerPortStatuses> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_PowerConnectionList> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_GroundingType> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_DeviceGroundingType> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_GroundingStatus> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_DeviceGroundingStatus> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_GroundingCommand> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_PowerMeasurementLine> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_PowerMeasurementWye> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_PowerPortMeasurement> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_DevicePowerMeasurements> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_FingerprintNickname> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_ChangeNicknameRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_DeviceIcon> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_Duration> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_MicrogridIntent> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_OverCurrentDisconnect> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_OverEnergyDisconnect> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_UnderFrequencyDisconnect> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_LocalPowerPortPriorityAssignment> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_PowerPortLoadPolicy> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_BusbarLoadPolicy> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_DeviceIntent> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_PowerPortIntent> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_OperatorIntent> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_OperatorIntentRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_OperatorIntentState> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_LoadPolicyRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_PowerPortLoadPolicyReport> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_DeviceLoadPolicyStatus> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_DevicePriority> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_NsnPriority> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_GtinPriority> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_McPriorityList> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_McRedirect> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_EngineState> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_SourceTransitionState> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_SourceTransitionRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_ControlCurve> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_DLSConfig> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_DLSMeasurement> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_LoadSharing> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_LoadSharingRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_LoadSharingStatus> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_LoadEstimate> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_LoadChange> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_LoadChangeRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_SimulationCapabilities> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_TimeScheme> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_TimeAdvance> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_MicrogridMembershipRequest> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<tms_MicrogridMembershipApproval> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* tmsTestExample */

