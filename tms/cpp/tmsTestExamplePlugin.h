

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from tmsTestExample.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef tmsTestExamplePlugin_396845832_h
#define tmsTestExamplePlugin_396845832_h

#include "tmsTestExample.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

extern "C" {

    #define tms_TopicNamePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_TopicNamePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_TopicNamePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_TopicNamePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_TopicNamePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_TopicName*
    tms_TopicNamePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_TopicName*
    tms_TopicNamePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_TopicName*
    tms_TopicNamePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_TopicNamePluginSupport_copy_data(
        tms_TopicName *out,
        const tms_TopicName *in);

    NDDSUSERDllExport extern void 
    tms_TopicNamePluginSupport_destroy_data_w_params(
        tms_TopicName *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_TopicNamePluginSupport_destroy_data_ex(
        tms_TopicName *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_TopicNamePluginSupport_destroy_data(
        tms_TopicName *sample);

    NDDSUSERDllExport extern void 
    tms_TopicNamePluginSupport_print_data(
        const tms_TopicName *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    tms_TopicNamePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_TopicName *out,
        const tms_TopicName *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_TopicNamePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_TopicNamePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_TopicNamePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_TopicNamePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define tms_TopicListPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_TopicListPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_TopicListPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_TopicListPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_TopicListPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_TopicList*
    tms_TopicListPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_TopicList*
    tms_TopicListPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_TopicList*
    tms_TopicListPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_TopicListPluginSupport_copy_data(
        tms_TopicList *out,
        const tms_TopicList *in);

    NDDSUSERDllExport extern void 
    tms_TopicListPluginSupport_destroy_data_w_params(
        tms_TopicList *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_TopicListPluginSupport_destroy_data_ex(
        tms_TopicList *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_TopicListPluginSupport_destroy_data(
        tms_TopicList *sample);

    NDDSUSERDllExport extern void 
    tms_TopicListPluginSupport_print_data(
        const tms_TopicList *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    tms_TopicListPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_TopicList *out,
        const tms_TopicList *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_TopicListPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_TopicListPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_TopicListPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_TopicListPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define tms_Point2DPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_Point2DPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_Point2DPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_Point2DPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_Point2DPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_Point2D*
    tms_Point2DPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_Point2D*
    tms_Point2DPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_Point2D*
    tms_Point2DPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_Point2DPluginSupport_copy_data(
        tms_Point2D *out,
        const tms_Point2D *in);

    NDDSUSERDllExport extern void 
    tms_Point2DPluginSupport_destroy_data_w_params(
        tms_Point2D *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_Point2DPluginSupport_destroy_data_ex(
        tms_Point2D *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_Point2DPluginSupport_destroy_data(
        tms_Point2D *sample);

    NDDSUSERDllExport extern void 
    tms_Point2DPluginSupport_print_data(
        const tms_Point2D *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_Point2DPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_Point2DPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_Point2DPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_Point2DPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_Point2DPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_Point2D *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_Point2DPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_Point2D *out,
        const tms_Point2D *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_Point2DPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_Point2D *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_Point2DPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_Point2D *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_Point2DPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_Point2D **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_Point2DPlugin_deserialize_from_cdr_buffer(
        tms_Point2D *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_Point2DPlugin_data_to_string(
        const tms_Point2D *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_Point2DPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_Point2DPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_Point2DPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_Point2DPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_Point2DPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_Point2D ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_Point2DPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_Point2DPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_Point2DPlugin_delete(struct PRESTypePlugin *);

    #define tms_Curve2DPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_Curve2DPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_Curve2DPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_Curve2DPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_Curve2DPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_Curve2D*
    tms_Curve2DPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_Curve2D*
    tms_Curve2DPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_Curve2D*
    tms_Curve2DPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_Curve2DPluginSupport_copy_data(
        tms_Curve2D *out,
        const tms_Curve2D *in);

    NDDSUSERDllExport extern void 
    tms_Curve2DPluginSupport_destroy_data_w_params(
        tms_Curve2D *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_Curve2DPluginSupport_destroy_data_ex(
        tms_Curve2D *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_Curve2DPluginSupport_destroy_data(
        tms_Curve2D *sample);

    NDDSUSERDllExport extern void 
    tms_Curve2DPluginSupport_print_data(
        const tms_Curve2D *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_Curve2DPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_Curve2DPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_Curve2DPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_Curve2DPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_Curve2DPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_Curve2D *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_Curve2DPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_Curve2D *out,
        const tms_Curve2D *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_Curve2DPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_Curve2D *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_Curve2DPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_Curve2D *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_Curve2DPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_Curve2D **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_Curve2DPlugin_deserialize_from_cdr_buffer(
        tms_Curve2D *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_Curve2DPlugin_data_to_string(
        const tms_Curve2D *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_Curve2DPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_Curve2DPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_Curve2DPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_Curve2DPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_Curve2DPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_Curve2D ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_Curve2DPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_Curve2DPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_Curve2DPlugin_delete(struct PRESTypePlugin *);

    #define tms_PublicKeyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_PublicKeyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_PublicKeyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_PublicKeyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_PublicKeyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_PublicKey*
    tms_PublicKeyPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_PublicKey*
    tms_PublicKeyPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_PublicKey*
    tms_PublicKeyPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_PublicKeyPluginSupport_copy_data(
        tms_PublicKey *out,
        const tms_PublicKey *in);

    NDDSUSERDllExport extern void 
    tms_PublicKeyPluginSupport_destroy_data_w_params(
        tms_PublicKey *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_PublicKeyPluginSupport_destroy_data_ex(
        tms_PublicKey *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_PublicKeyPluginSupport_destroy_data(
        tms_PublicKey *sample);

    NDDSUSERDllExport extern void 
    tms_PublicKeyPluginSupport_print_data(
        const tms_PublicKey *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    tms_PublicKeyPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_PublicKey *out,
        const tms_PublicKey *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_PublicKeyPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_PublicKeyPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_PublicKeyPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_PublicKeyPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define tms_FingerprintPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_FingerprintPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_FingerprintPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_FingerprintPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_FingerprintPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_Fingerprint*
    tms_FingerprintPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_Fingerprint*
    tms_FingerprintPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_Fingerprint*
    tms_FingerprintPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_FingerprintPluginSupport_copy_data(
        tms_Fingerprint *out,
        const tms_Fingerprint *in);

    NDDSUSERDllExport extern void 
    tms_FingerprintPluginSupport_destroy_data_w_params(
        tms_Fingerprint *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_FingerprintPluginSupport_destroy_data_ex(
        tms_Fingerprint *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_FingerprintPluginSupport_destroy_data(
        tms_Fingerprint *sample);

    NDDSUSERDllExport extern void 
    tms_FingerprintPluginSupport_print_data(
        const tms_Fingerprint *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    tms_FingerprintPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_Fingerprint *out,
        const tms_Fingerprint *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_FingerprintPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_FingerprintPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_FingerprintPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_FingerprintPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define tms_SignaturePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_SignaturePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_SignaturePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_SignaturePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_SignaturePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_Signature*
    tms_SignaturePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_Signature*
    tms_SignaturePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_Signature*
    tms_SignaturePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_SignaturePluginSupport_copy_data(
        tms_Signature *out,
        const tms_Signature *in);

    NDDSUSERDllExport extern void 
    tms_SignaturePluginSupport_destroy_data_w_params(
        tms_Signature *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_SignaturePluginSupport_destroy_data_ex(
        tms_Signature *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_SignaturePluginSupport_destroy_data(
        tms_Signature *sample);

    NDDSUSERDllExport extern void 
    tms_SignaturePluginSupport_print_data(
        const tms_Signature *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    tms_SignaturePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_Signature *out,
        const tms_Signature *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_SignaturePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_SignaturePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_SignaturePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_SignaturePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define tms_ClockMonotonicPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_ClockMonotonicPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_ClockMonotonicPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_ClockMonotonicPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_ClockMonotonicPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_ClockMonotonic*
    tms_ClockMonotonicPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_ClockMonotonic*
    tms_ClockMonotonicPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_ClockMonotonic*
    tms_ClockMonotonicPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_ClockMonotonicPluginSupport_copy_data(
        tms_ClockMonotonic *out,
        const tms_ClockMonotonic *in);

    NDDSUSERDllExport extern void 
    tms_ClockMonotonicPluginSupport_destroy_data_w_params(
        tms_ClockMonotonic *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_ClockMonotonicPluginSupport_destroy_data_ex(
        tms_ClockMonotonic *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_ClockMonotonicPluginSupport_destroy_data(
        tms_ClockMonotonic *sample);

    NDDSUSERDllExport extern void 
    tms_ClockMonotonicPluginSupport_print_data(
        const tms_ClockMonotonic *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_ClockMonotonicPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_ClockMonotonicPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_ClockMonotonicPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_ClockMonotonicPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_ClockMonotonicPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_ClockMonotonic *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_ClockMonotonicPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_ClockMonotonic *out,
        const tms_ClockMonotonic *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_ClockMonotonicPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_ClockMonotonic *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_ClockMonotonicPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_ClockMonotonic *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_ClockMonotonicPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_ClockMonotonic **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_ClockMonotonicPlugin_deserialize_from_cdr_buffer(
        tms_ClockMonotonic *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_ClockMonotonicPlugin_data_to_string(
        const tms_ClockMonotonic *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_ClockMonotonicPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_ClockMonotonicPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_ClockMonotonicPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_ClockMonotonicPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_ClockMonotonicPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_ClockMonotonic ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_ClockMonotonicPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_ClockMonotonicPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_ClockMonotonicPlugin_delete(struct PRESTypePlugin *);

    #define tms_ClockRealtimePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_ClockRealtimePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_ClockRealtimePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_ClockRealtimePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_ClockRealtimePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_ClockRealtime*
    tms_ClockRealtimePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_ClockRealtime*
    tms_ClockRealtimePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_ClockRealtime*
    tms_ClockRealtimePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_ClockRealtimePluginSupport_copy_data(
        tms_ClockRealtime *out,
        const tms_ClockRealtime *in);

    NDDSUSERDllExport extern void 
    tms_ClockRealtimePluginSupport_destroy_data_w_params(
        tms_ClockRealtime *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_ClockRealtimePluginSupport_destroy_data_ex(
        tms_ClockRealtime *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_ClockRealtimePluginSupport_destroy_data(
        tms_ClockRealtime *sample);

    NDDSUSERDllExport extern void 
    tms_ClockRealtimePluginSupport_print_data(
        const tms_ClockRealtime *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_ClockRealtimePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_ClockRealtimePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_ClockRealtimePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_ClockRealtimePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_ClockRealtimePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_ClockRealtime *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_ClockRealtimePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_ClockRealtime *out,
        const tms_ClockRealtime *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_ClockRealtimePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_ClockRealtime *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_ClockRealtimePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_ClockRealtime *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_ClockRealtimePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_ClockRealtime **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_ClockRealtimePlugin_deserialize_from_cdr_buffer(
        tms_ClockRealtime *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_ClockRealtimePlugin_data_to_string(
        const tms_ClockRealtime *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_ClockRealtimePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_ClockRealtimePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_ClockRealtimePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_ClockRealtimePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_ClockRealtimePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_ClockRealtime ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_ClockRealtimePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_ClockRealtimePlugin_new(void);

    NDDSUSERDllExport extern void
    tms_ClockRealtimePlugin_delete(struct PRESTypePlugin *);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_ClockMonotonicPersistenceTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_ClockMonotonicPersistenceTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_ClockMonotonicPersistenceTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    tms_ClockMonotonicPersistenceTypePluginSupport_print_data(
        const tms_ClockMonotonicPersistenceType *sample, const char *desc, int indent_level);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct ClockStatus
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct ClockStatus)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * ClockStatus must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct ClockStatus.
    */
    typedef  class tms_ClockStatus tms_ClockStatusKeyHolder;

    #define tms_ClockStatusPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_ClockStatusPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_ClockStatusPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_ClockStatusPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_ClockStatusPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_ClockStatusPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_ClockStatusPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_ClockStatus*
    tms_ClockStatusPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_ClockStatus*
    tms_ClockStatusPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_ClockStatus*
    tms_ClockStatusPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_ClockStatusPluginSupport_copy_data(
        tms_ClockStatus *out,
        const tms_ClockStatus *in);

    NDDSUSERDllExport extern void 
    tms_ClockStatusPluginSupport_destroy_data_w_params(
        tms_ClockStatus *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_ClockStatusPluginSupport_destroy_data_ex(
        tms_ClockStatus *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_ClockStatusPluginSupport_destroy_data(
        tms_ClockStatus *sample);

    NDDSUSERDllExport extern void 
    tms_ClockStatusPluginSupport_print_data(
        const tms_ClockStatus *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_ClockStatus*
    tms_ClockStatusPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_ClockStatus*
    tms_ClockStatusPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_ClockStatusPluginSupport_destroy_key_ex(
        tms_ClockStatusKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_ClockStatusPluginSupport_destroy_key(
        tms_ClockStatusKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_ClockStatusPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_ClockStatusPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_ClockStatusPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_ClockStatusPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_ClockStatusPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_ClockStatus *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_ClockStatusPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_ClockStatus *out,
        const tms_ClockStatus *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_ClockStatusPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_ClockStatus *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_ClockStatusPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_ClockStatus *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_ClockStatusPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_ClockStatus **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_ClockStatusPlugin_deserialize_from_cdr_buffer(
        tms_ClockStatus *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_ClockStatusPlugin_data_to_string(
        const tms_ClockStatus *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_ClockStatusPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_ClockStatusPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_ClockStatusPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_ClockStatusPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_ClockStatusPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_ClockStatus ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_ClockStatusPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_ClockStatusKeyHolder *key, 
        const tms_ClockStatus *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_ClockStatusPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_ClockStatus *instance, 
        const tms_ClockStatusKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_ClockStatusPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_ClockStatus *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_ClockStatusPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_ClockStatusPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_ClockStatusPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_ClockStatusPlugin_delete(struct PRESTypePlugin *);

    #define tms_SampleIdPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_SampleIdPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_SampleIdPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_SampleIdPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_SampleIdPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_SampleId*
    tms_SampleIdPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_SampleId*
    tms_SampleIdPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_SampleId*
    tms_SampleIdPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_SampleIdPluginSupport_copy_data(
        tms_SampleId *out,
        const tms_SampleId *in);

    NDDSUSERDllExport extern void 
    tms_SampleIdPluginSupport_destroy_data_w_params(
        tms_SampleId *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_SampleIdPluginSupport_destroy_data_ex(
        tms_SampleId *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_SampleIdPluginSupport_destroy_data(
        tms_SampleId *sample);

    NDDSUSERDllExport extern void 
    tms_SampleIdPluginSupport_print_data(
        const tms_SampleId *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_SampleIdPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_SampleIdPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_SampleIdPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_SampleIdPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_SampleIdPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_SampleId *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_SampleIdPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_SampleId *out,
        const tms_SampleId *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_SampleIdPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_SampleId *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_SampleIdPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_SampleId *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_SampleIdPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_SampleId **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_SampleIdPlugin_deserialize_from_cdr_buffer(
        tms_SampleId *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_SampleIdPlugin_data_to_string(
        const tms_SampleId *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_SampleIdPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_SampleIdPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_SampleIdPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_SampleIdPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_SampleIdPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_SampleId ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_SampleIdPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_SampleIdPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_SampleIdPlugin_delete(struct PRESTypePlugin *);

    #define tms_ReplyStatusPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_ReplyStatusPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_ReplyStatusPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_ReplyStatusPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_ReplyStatusPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_ReplyStatus*
    tms_ReplyStatusPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_ReplyStatus*
    tms_ReplyStatusPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_ReplyStatus*
    tms_ReplyStatusPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_ReplyStatusPluginSupport_copy_data(
        tms_ReplyStatus *out,
        const tms_ReplyStatus *in);

    NDDSUSERDllExport extern void 
    tms_ReplyStatusPluginSupport_destroy_data_w_params(
        tms_ReplyStatus *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_ReplyStatusPluginSupport_destroy_data_ex(
        tms_ReplyStatus *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_ReplyStatusPluginSupport_destroy_data(
        tms_ReplyStatus *sample);

    NDDSUSERDllExport extern void 
    tms_ReplyStatusPluginSupport_print_data(
        const tms_ReplyStatus *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_ReplyStatusPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_ReplyStatusPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_ReplyStatusPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_ReplyStatusPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_ReplyStatusPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_ReplyStatus *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_ReplyStatusPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_ReplyStatus *out,
        const tms_ReplyStatus *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_ReplyStatusPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_ReplyStatus *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_ReplyStatusPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_ReplyStatus *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_ReplyStatusPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_ReplyStatus **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_ReplyStatusPlugin_deserialize_from_cdr_buffer(
        tms_ReplyStatus *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_ReplyStatusPlugin_data_to_string(
        const tms_ReplyStatus *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_ReplyStatusPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_ReplyStatusPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_ReplyStatusPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_ReplyStatusPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_ReplyStatusPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_ReplyStatus ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_ReplyStatusPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_ReplyStatusPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_ReplyStatusPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct RequestResponse
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct RequestResponse)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * RequestResponse must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct RequestResponse.
    */
    typedef  class tms_RequestResponse tms_RequestResponseKeyHolder;

    #define tms_RequestResponsePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_RequestResponsePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_RequestResponsePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_RequestResponsePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_RequestResponsePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_RequestResponsePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_RequestResponsePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_RequestResponse*
    tms_RequestResponsePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_RequestResponse*
    tms_RequestResponsePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_RequestResponse*
    tms_RequestResponsePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_RequestResponsePluginSupport_copy_data(
        tms_RequestResponse *out,
        const tms_RequestResponse *in);

    NDDSUSERDllExport extern void 
    tms_RequestResponsePluginSupport_destroy_data_w_params(
        tms_RequestResponse *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_RequestResponsePluginSupport_destroy_data_ex(
        tms_RequestResponse *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_RequestResponsePluginSupport_destroy_data(
        tms_RequestResponse *sample);

    NDDSUSERDllExport extern void 
    tms_RequestResponsePluginSupport_print_data(
        const tms_RequestResponse *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_RequestResponse*
    tms_RequestResponsePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_RequestResponse*
    tms_RequestResponsePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_RequestResponsePluginSupport_destroy_key_ex(
        tms_RequestResponseKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_RequestResponsePluginSupport_destroy_key(
        tms_RequestResponseKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_RequestResponsePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_RequestResponsePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_RequestResponsePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_RequestResponsePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_RequestResponsePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_RequestResponse *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_RequestResponsePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_RequestResponse *out,
        const tms_RequestResponse *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_RequestResponsePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_RequestResponse *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_RequestResponsePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_RequestResponse *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_RequestResponsePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_RequestResponse **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_RequestResponsePlugin_deserialize_from_cdr_buffer(
        tms_RequestResponse *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_RequestResponsePlugin_data_to_string(
        const tms_RequestResponse *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_RequestResponsePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_RequestResponsePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_RequestResponsePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_RequestResponsePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_RequestResponsePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_RequestResponse ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_RequestResponsePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_RequestResponseKeyHolder *key, 
        const tms_RequestResponse *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_RequestResponsePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_RequestResponse *instance, 
        const tms_RequestResponseKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_RequestResponsePlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_RequestResponse *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_RequestResponsePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_RequestResponsePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_RequestResponsePlugin_new(void);

    NDDSUSERDllExport extern void
    tms_RequestResponsePlugin_delete(struct PRESTypePlugin *);

    #define tms_ParameterMetadataPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_ParameterMetadataPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_ParameterMetadataPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_ParameterMetadataPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_ParameterMetadataPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_ParameterMetadata*
    tms_ParameterMetadataPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_ParameterMetadata*
    tms_ParameterMetadataPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_ParameterMetadata*
    tms_ParameterMetadataPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_ParameterMetadataPluginSupport_copy_data(
        tms_ParameterMetadata *out,
        const tms_ParameterMetadata *in);

    NDDSUSERDllExport extern void 
    tms_ParameterMetadataPluginSupport_destroy_data_w_params(
        tms_ParameterMetadata *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_ParameterMetadataPluginSupport_destroy_data_ex(
        tms_ParameterMetadata *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_ParameterMetadataPluginSupport_destroy_data(
        tms_ParameterMetadata *sample);

    NDDSUSERDllExport extern void 
    tms_ParameterMetadataPluginSupport_print_data(
        const tms_ParameterMetadata *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_ParameterMetadataPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_ParameterMetadataPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_ParameterMetadataPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_ParameterMetadataPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_ParameterMetadataPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_ParameterMetadata *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_ParameterMetadataPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_ParameterMetadata *out,
        const tms_ParameterMetadata *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_ParameterMetadataPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_ParameterMetadata *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_ParameterMetadataPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_ParameterMetadata *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_ParameterMetadataPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_ParameterMetadata **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_ParameterMetadataPlugin_deserialize_from_cdr_buffer(
        tms_ParameterMetadata *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_ParameterMetadataPlugin_data_to_string(
        const tms_ParameterMetadata *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_ParameterMetadataPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_ParameterMetadataPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_ParameterMetadataPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_ParameterMetadataPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_ParameterMetadataPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_ParameterMetadata ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_ParameterMetadataPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_ParameterMetadataPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_ParameterMetadataPlugin_delete(struct PRESTypePlugin *);

    #define tms_ParameterValuePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_ParameterValuePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_ParameterValuePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_ParameterValuePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_ParameterValuePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_ParameterValue*
    tms_ParameterValuePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_ParameterValue*
    tms_ParameterValuePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_ParameterValue*
    tms_ParameterValuePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_ParameterValuePluginSupport_copy_data(
        tms_ParameterValue *out,
        const tms_ParameterValue *in);

    NDDSUSERDllExport extern void 
    tms_ParameterValuePluginSupport_destroy_data_w_params(
        tms_ParameterValue *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_ParameterValuePluginSupport_destroy_data_ex(
        tms_ParameterValue *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_ParameterValuePluginSupport_destroy_data(
        tms_ParameterValue *sample);

    NDDSUSERDllExport extern void 
    tms_ParameterValuePluginSupport_print_data(
        const tms_ParameterValue *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_ParameterValuePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_ParameterValuePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_ParameterValuePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_ParameterValuePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_ParameterValuePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_ParameterValue *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_ParameterValuePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_ParameterValue *out,
        const tms_ParameterValue *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_ParameterValuePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_ParameterValue *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_ParameterValuePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_ParameterValue *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_ParameterValuePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_ParameterValue **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_ParameterValuePlugin_deserialize_from_cdr_buffer(
        tms_ParameterValue *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_ParameterValuePlugin_data_to_string(
        const tms_ParameterValue *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_ParameterValuePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_ParameterValuePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_ParameterValuePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_ParameterValuePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_ParameterValuePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_ParameterValue ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_ParameterValuePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_ParameterValuePlugin_new(void);

    NDDSUSERDllExport extern void
    tms_ParameterValuePlugin_delete(struct PRESTypePlugin *);

    #define tms_ConfigIdPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_ConfigIdPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_ConfigIdPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_ConfigIdPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_ConfigIdPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_ConfigId*
    tms_ConfigIdPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_ConfigId*
    tms_ConfigIdPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_ConfigId*
    tms_ConfigIdPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_ConfigIdPluginSupport_copy_data(
        tms_ConfigId *out,
        const tms_ConfigId *in);

    NDDSUSERDllExport extern void 
    tms_ConfigIdPluginSupport_destroy_data_w_params(
        tms_ConfigId *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_ConfigIdPluginSupport_destroy_data_ex(
        tms_ConfigId *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_ConfigIdPluginSupport_destroy_data(
        tms_ConfigId *sample);

    NDDSUSERDllExport extern void 
    tms_ConfigIdPluginSupport_print_data(
        const tms_ConfigId *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    tms_ConfigIdPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_ConfigId *out,
        const tms_ConfigId *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_ConfigIdPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_ConfigIdPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_ConfigIdPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_ConfigIdPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct DeviceParameterRequest
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct DeviceParameterRequest)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * DeviceParameterRequest must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct DeviceParameterRequest.
    */
    typedef  class tms_DeviceParameterRequest tms_DeviceParameterRequestKeyHolder;

    #define tms_DeviceParameterRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_DeviceParameterRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_DeviceParameterRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_DeviceParameterRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_DeviceParameterRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_DeviceParameterRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_DeviceParameterRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_DeviceParameterRequest*
    tms_DeviceParameterRequestPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_DeviceParameterRequest*
    tms_DeviceParameterRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_DeviceParameterRequest*
    tms_DeviceParameterRequestPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceParameterRequestPluginSupport_copy_data(
        tms_DeviceParameterRequest *out,
        const tms_DeviceParameterRequest *in);

    NDDSUSERDllExport extern void 
    tms_DeviceParameterRequestPluginSupport_destroy_data_w_params(
        tms_DeviceParameterRequest *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_DeviceParameterRequestPluginSupport_destroy_data_ex(
        tms_DeviceParameterRequest *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_DeviceParameterRequestPluginSupport_destroy_data(
        tms_DeviceParameterRequest *sample);

    NDDSUSERDllExport extern void 
    tms_DeviceParameterRequestPluginSupport_print_data(
        const tms_DeviceParameterRequest *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_DeviceParameterRequest*
    tms_DeviceParameterRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_DeviceParameterRequest*
    tms_DeviceParameterRequestPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_DeviceParameterRequestPluginSupport_destroy_key_ex(
        tms_DeviceParameterRequestKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_DeviceParameterRequestPluginSupport_destroy_key(
        tms_DeviceParameterRequestKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_DeviceParameterRequestPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_DeviceParameterRequestPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_DeviceParameterRequestPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_DeviceParameterRequestPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_DeviceParameterRequestPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceParameterRequest *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceParameterRequestPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceParameterRequest *out,
        const tms_DeviceParameterRequest *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_DeviceParameterRequestPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_DeviceParameterRequest *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_DeviceParameterRequestPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_DeviceParameterRequest *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceParameterRequestPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceParameterRequest **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_DeviceParameterRequestPlugin_deserialize_from_cdr_buffer(
        tms_DeviceParameterRequest *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_DeviceParameterRequestPlugin_data_to_string(
        const tms_DeviceParameterRequest *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_DeviceParameterRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_DeviceParameterRequestPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_DeviceParameterRequestPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_DeviceParameterRequestPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceParameterRequestPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceParameterRequest ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceParameterRequestPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceParameterRequestKeyHolder *key, 
        const tms_DeviceParameterRequest *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceParameterRequestPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceParameterRequest *instance, 
        const tms_DeviceParameterRequestKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceParameterRequestPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_DeviceParameterRequest *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceParameterRequestPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_DeviceParameterRequestPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_DeviceParameterRequestPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_DeviceParameterRequestPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct DeviceParameterStatus
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct DeviceParameterStatus)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * DeviceParameterStatus must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct DeviceParameterStatus.
    */
    typedef  class tms_DeviceParameterStatus tms_DeviceParameterStatusKeyHolder;

    #define tms_DeviceParameterStatusPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_DeviceParameterStatusPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_DeviceParameterStatusPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_DeviceParameterStatusPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_DeviceParameterStatusPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_DeviceParameterStatusPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_DeviceParameterStatusPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_DeviceParameterStatus*
    tms_DeviceParameterStatusPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_DeviceParameterStatus*
    tms_DeviceParameterStatusPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_DeviceParameterStatus*
    tms_DeviceParameterStatusPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceParameterStatusPluginSupport_copy_data(
        tms_DeviceParameterStatus *out,
        const tms_DeviceParameterStatus *in);

    NDDSUSERDllExport extern void 
    tms_DeviceParameterStatusPluginSupport_destroy_data_w_params(
        tms_DeviceParameterStatus *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_DeviceParameterStatusPluginSupport_destroy_data_ex(
        tms_DeviceParameterStatus *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_DeviceParameterStatusPluginSupport_destroy_data(
        tms_DeviceParameterStatus *sample);

    NDDSUSERDllExport extern void 
    tms_DeviceParameterStatusPluginSupport_print_data(
        const tms_DeviceParameterStatus *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_DeviceParameterStatus*
    tms_DeviceParameterStatusPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_DeviceParameterStatus*
    tms_DeviceParameterStatusPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_DeviceParameterStatusPluginSupport_destroy_key_ex(
        tms_DeviceParameterStatusKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_DeviceParameterStatusPluginSupport_destroy_key(
        tms_DeviceParameterStatusKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_DeviceParameterStatusPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_DeviceParameterStatusPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_DeviceParameterStatusPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_DeviceParameterStatusPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_DeviceParameterStatusPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceParameterStatus *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceParameterStatusPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceParameterStatus *out,
        const tms_DeviceParameterStatus *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_DeviceParameterStatusPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_DeviceParameterStatus *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_DeviceParameterStatusPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_DeviceParameterStatus *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceParameterStatusPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceParameterStatus **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_DeviceParameterStatusPlugin_deserialize_from_cdr_buffer(
        tms_DeviceParameterStatus *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_DeviceParameterStatusPlugin_data_to_string(
        const tms_DeviceParameterStatus *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_DeviceParameterStatusPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_DeviceParameterStatusPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_DeviceParameterStatusPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_DeviceParameterStatusPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceParameterStatusPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceParameterStatus ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceParameterStatusPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceParameterStatusKeyHolder *key, 
        const tms_DeviceParameterStatus *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceParameterStatusPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceParameterStatus *instance, 
        const tms_DeviceParameterStatusKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceParameterStatusPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_DeviceParameterStatus *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceParameterStatusPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_DeviceParameterStatusPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_DeviceParameterStatusPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_DeviceParameterStatusPlugin_delete(struct PRESTypePlugin *);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_DeviceRolePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_DeviceRolePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_DeviceRolePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    tms_DeviceRolePluginSupport_print_data(
        const tms_DeviceRole *sample, const char *desc, int indent_level);

    #define tms_NatoStockNumberPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_NatoStockNumberPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_NatoStockNumberPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_NatoStockNumberPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_NatoStockNumberPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_NatoStockNumber*
    tms_NatoStockNumberPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_NatoStockNumber*
    tms_NatoStockNumberPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_NatoStockNumber*
    tms_NatoStockNumberPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_NatoStockNumberPluginSupport_copy_data(
        tms_NatoStockNumber *out,
        const tms_NatoStockNumber *in);

    NDDSUSERDllExport extern void 
    tms_NatoStockNumberPluginSupport_destroy_data_w_params(
        tms_NatoStockNumber *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_NatoStockNumberPluginSupport_destroy_data_ex(
        tms_NatoStockNumber *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_NatoStockNumberPluginSupport_destroy_data(
        tms_NatoStockNumber *sample);

    NDDSUSERDllExport extern void 
    tms_NatoStockNumberPluginSupport_print_data(
        const tms_NatoStockNumber *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    tms_NatoStockNumberPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_NatoStockNumber *out,
        const tms_NatoStockNumber *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_NatoStockNumberPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_NatoStockNumberPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_NatoStockNumberPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_NatoStockNumberPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define tms_GlobalTradeItemNumberPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_GlobalTradeItemNumberPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_GlobalTradeItemNumberPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_GlobalTradeItemNumberPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_GlobalTradeItemNumberPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_GlobalTradeItemNumber*
    tms_GlobalTradeItemNumberPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_GlobalTradeItemNumber*
    tms_GlobalTradeItemNumberPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_GlobalTradeItemNumber*
    tms_GlobalTradeItemNumberPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_GlobalTradeItemNumberPluginSupport_copy_data(
        tms_GlobalTradeItemNumber *out,
        const tms_GlobalTradeItemNumber *in);

    NDDSUSERDllExport extern void 
    tms_GlobalTradeItemNumberPluginSupport_destroy_data_w_params(
        tms_GlobalTradeItemNumber *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_GlobalTradeItemNumberPluginSupport_destroy_data_ex(
        tms_GlobalTradeItemNumber *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_GlobalTradeItemNumberPluginSupport_destroy_data(
        tms_GlobalTradeItemNumber *sample);

    NDDSUSERDllExport extern void 
    tms_GlobalTradeItemNumberPluginSupport_print_data(
        const tms_GlobalTradeItemNumber *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    tms_GlobalTradeItemNumberPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_GlobalTradeItemNumber *out,
        const tms_GlobalTradeItemNumber *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_GlobalTradeItemNumberPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_GlobalTradeItemNumberPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_GlobalTradeItemNumberPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_GlobalTradeItemNumberPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define tms_DistributionInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_DistributionInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_DistributionInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_DistributionInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_DistributionInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_DistributionInfo*
    tms_DistributionInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_DistributionInfo*
    tms_DistributionInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_DistributionInfo*
    tms_DistributionInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_DistributionInfoPluginSupport_copy_data(
        tms_DistributionInfo *out,
        const tms_DistributionInfo *in);

    NDDSUSERDllExport extern void 
    tms_DistributionInfoPluginSupport_destroy_data_w_params(
        tms_DistributionInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_DistributionInfoPluginSupport_destroy_data_ex(
        tms_DistributionInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_DistributionInfoPluginSupport_destroy_data(
        tms_DistributionInfo *sample);

    NDDSUSERDllExport extern void 
    tms_DistributionInfoPluginSupport_print_data(
        const tms_DistributionInfo *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_DistributionInfoPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_DistributionInfoPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_DistributionInfoPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_DistributionInfoPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_DistributionInfoPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_DistributionInfo *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_DistributionInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_DistributionInfo *out,
        const tms_DistributionInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_DistributionInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_DistributionInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_DistributionInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_DistributionInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_DistributionInfoPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_DistributionInfo **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_DistributionInfoPlugin_deserialize_from_cdr_buffer(
        tms_DistributionInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_DistributionInfoPlugin_data_to_string(
        const tms_DistributionInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_DistributionInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_DistributionInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_DistributionInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_DistributionInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_DistributionInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_DistributionInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_DistributionInfoPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_DistributionInfoPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_DistributionInfoPlugin_delete(struct PRESTypePlugin *);

    #define tms_LoadInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_LoadInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_LoadInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_LoadInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_LoadInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_LoadInfo*
    tms_LoadInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_LoadInfo*
    tms_LoadInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_LoadInfo*
    tms_LoadInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadInfoPluginSupport_copy_data(
        tms_LoadInfo *out,
        const tms_LoadInfo *in);

    NDDSUSERDllExport extern void 
    tms_LoadInfoPluginSupport_destroy_data_w_params(
        tms_LoadInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_LoadInfoPluginSupport_destroy_data_ex(
        tms_LoadInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_LoadInfoPluginSupport_destroy_data(
        tms_LoadInfo *sample);

    NDDSUSERDllExport extern void 
    tms_LoadInfoPluginSupport_print_data(
        const tms_LoadInfo *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_LoadInfoPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_LoadInfoPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_LoadInfoPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_LoadInfoPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_LoadInfoPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadInfo *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_LoadInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadInfo *out,
        const tms_LoadInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_LoadInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_LoadInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_LoadInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_LoadInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadInfoPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadInfo **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_LoadInfoPlugin_deserialize_from_cdr_buffer(
        tms_LoadInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_LoadInfoPlugin_data_to_string(
        const tms_LoadInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_LoadInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_LoadInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_LoadInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_LoadInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_LoadInfoPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_LoadInfoPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_LoadInfoPlugin_delete(struct PRESTypePlugin *);

    #define tms_EngineStateThresholdsPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_EngineStateThresholdsPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_EngineStateThresholdsPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_EngineStateThresholdsPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_EngineStateThresholdsPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_EngineStateThresholds*
    tms_EngineStateThresholdsPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_EngineStateThresholds*
    tms_EngineStateThresholdsPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_EngineStateThresholds*
    tms_EngineStateThresholdsPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_EngineStateThresholdsPluginSupport_copy_data(
        tms_EngineStateThresholds *out,
        const tms_EngineStateThresholds *in);

    NDDSUSERDllExport extern void 
    tms_EngineStateThresholdsPluginSupport_destroy_data_w_params(
        tms_EngineStateThresholds *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_EngineStateThresholdsPluginSupport_destroy_data_ex(
        tms_EngineStateThresholds *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_EngineStateThresholdsPluginSupport_destroy_data(
        tms_EngineStateThresholds *sample);

    NDDSUSERDllExport extern void 
    tms_EngineStateThresholdsPluginSupport_print_data(
        const tms_EngineStateThresholds *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_EngineStateThresholdsPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_EngineStateThresholdsPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_EngineStateThresholdsPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_EngineStateThresholdsPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_EngineStateThresholdsPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_EngineStateThresholds *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_EngineStateThresholdsPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_EngineStateThresholds *out,
        const tms_EngineStateThresholds *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_EngineStateThresholdsPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_EngineStateThresholds *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_EngineStateThresholdsPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_EngineStateThresholds *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_EngineStateThresholdsPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_EngineStateThresholds **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_EngineStateThresholdsPlugin_deserialize_from_cdr_buffer(
        tms_EngineStateThresholds *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_EngineStateThresholdsPlugin_data_to_string(
        const tms_EngineStateThresholds *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_EngineStateThresholdsPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_EngineStateThresholdsPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_EngineStateThresholdsPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_EngineStateThresholdsPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_EngineStateThresholdsPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_EngineStateThresholds ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_EngineStateThresholdsPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_EngineStateThresholdsPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_EngineStateThresholdsPlugin_delete(struct PRESTypePlugin *);

    #define tms_SourceInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_SourceInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_SourceInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_SourceInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_SourceInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_SourceInfo*
    tms_SourceInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_SourceInfo*
    tms_SourceInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_SourceInfo*
    tms_SourceInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_SourceInfoPluginSupport_copy_data(
        tms_SourceInfo *out,
        const tms_SourceInfo *in);

    NDDSUSERDllExport extern void 
    tms_SourceInfoPluginSupport_destroy_data_w_params(
        tms_SourceInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_SourceInfoPluginSupport_destroy_data_ex(
        tms_SourceInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_SourceInfoPluginSupport_destroy_data(
        tms_SourceInfo *sample);

    NDDSUSERDllExport extern void 
    tms_SourceInfoPluginSupport_print_data(
        const tms_SourceInfo *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_SourceInfoPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_SourceInfoPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_SourceInfoPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_SourceInfoPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_SourceInfoPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_SourceInfo *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_SourceInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_SourceInfo *out,
        const tms_SourceInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_SourceInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_SourceInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_SourceInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_SourceInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_SourceInfoPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_SourceInfo **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_SourceInfoPlugin_deserialize_from_cdr_buffer(
        tms_SourceInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_SourceInfoPlugin_data_to_string(
        const tms_SourceInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_SourceInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_SourceInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_SourceInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_SourceInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_SourceInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_SourceInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_SourceInfoPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_SourceInfoPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_SourceInfoPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct ProductInfo
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct ProductInfo)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * ProductInfo must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct ProductInfo.
    */
    typedef  class tms_ProductInfo tms_ProductInfoKeyHolder;

    #define tms_ProductInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_ProductInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_ProductInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_ProductInfoPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_ProductInfoPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_ProductInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_ProductInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_ProductInfo*
    tms_ProductInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_ProductInfo*
    tms_ProductInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_ProductInfo*
    tms_ProductInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_ProductInfoPluginSupport_copy_data(
        tms_ProductInfo *out,
        const tms_ProductInfo *in);

    NDDSUSERDllExport extern void 
    tms_ProductInfoPluginSupport_destroy_data_w_params(
        tms_ProductInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_ProductInfoPluginSupport_destroy_data_ex(
        tms_ProductInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_ProductInfoPluginSupport_destroy_data(
        tms_ProductInfo *sample);

    NDDSUSERDllExport extern void 
    tms_ProductInfoPluginSupport_print_data(
        const tms_ProductInfo *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_ProductInfo*
    tms_ProductInfoPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_ProductInfo*
    tms_ProductInfoPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_ProductInfoPluginSupport_destroy_key_ex(
        tms_ProductInfoKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_ProductInfoPluginSupport_destroy_key(
        tms_ProductInfoKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_ProductInfoPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_ProductInfoPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_ProductInfoPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_ProductInfoPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_ProductInfoPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_ProductInfo *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_ProductInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_ProductInfo *out,
        const tms_ProductInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_ProductInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_ProductInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_ProductInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_ProductInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_ProductInfoPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_ProductInfo **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_ProductInfoPlugin_deserialize_from_cdr_buffer(
        tms_ProductInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_ProductInfoPlugin_data_to_string(
        const tms_ProductInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_ProductInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_ProductInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_ProductInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_ProductInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_ProductInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_ProductInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_ProductInfoPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_ProductInfoKeyHolder *key, 
        const tms_ProductInfo *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_ProductInfoPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_ProductInfo *instance, 
        const tms_ProductInfoKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_ProductInfoPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_ProductInfo *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_ProductInfoPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_ProductInfoPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_ProductInfoPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_ProductInfoPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct Heartbeat
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct Heartbeat)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * Heartbeat must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct Heartbeat.
    */
    typedef  class tms_Heartbeat tms_HeartbeatKeyHolder;

    #define tms_HeartbeatPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_HeartbeatPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_HeartbeatPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_HeartbeatPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_HeartbeatPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_HeartbeatPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_HeartbeatPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_Heartbeat*
    tms_HeartbeatPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_Heartbeat*
    tms_HeartbeatPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_Heartbeat*
    tms_HeartbeatPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_HeartbeatPluginSupport_copy_data(
        tms_Heartbeat *out,
        const tms_Heartbeat *in);

    NDDSUSERDllExport extern void 
    tms_HeartbeatPluginSupport_destroy_data_w_params(
        tms_Heartbeat *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_HeartbeatPluginSupport_destroy_data_ex(
        tms_Heartbeat *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_HeartbeatPluginSupport_destroy_data(
        tms_Heartbeat *sample);

    NDDSUSERDllExport extern void 
    tms_HeartbeatPluginSupport_print_data(
        const tms_Heartbeat *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_Heartbeat*
    tms_HeartbeatPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_Heartbeat*
    tms_HeartbeatPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_HeartbeatPluginSupport_destroy_key_ex(
        tms_HeartbeatKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_HeartbeatPluginSupport_destroy_key(
        tms_HeartbeatKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_HeartbeatPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_HeartbeatPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_HeartbeatPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_HeartbeatPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_HeartbeatPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_Heartbeat *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_HeartbeatPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_Heartbeat *out,
        const tms_Heartbeat *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_HeartbeatPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_Heartbeat *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_HeartbeatPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_Heartbeat *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_HeartbeatPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_Heartbeat **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_HeartbeatPlugin_deserialize_from_cdr_buffer(
        tms_Heartbeat *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_HeartbeatPlugin_data_to_string(
        const tms_Heartbeat *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_HeartbeatPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_HeartbeatPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_HeartbeatPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_HeartbeatPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_HeartbeatPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_Heartbeat ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_HeartbeatPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_HeartbeatKeyHolder *key, 
        const tms_Heartbeat *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_HeartbeatPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_Heartbeat *instance, 
        const tms_HeartbeatKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_HeartbeatPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_Heartbeat *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_HeartbeatPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_HeartbeatPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_HeartbeatPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_HeartbeatPlugin_delete(struct PRESTypePlugin *);

    #define tms_SuspectParameterNumberPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_SuspectParameterNumberPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_SuspectParameterNumberPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_SuspectParameterNumberPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_SuspectParameterNumberPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_SuspectParameterNumber*
    tms_SuspectParameterNumberPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_SuspectParameterNumber*
    tms_SuspectParameterNumberPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_SuspectParameterNumber*
    tms_SuspectParameterNumberPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_SuspectParameterNumberPluginSupport_copy_data(
        tms_SuspectParameterNumber *out,
        const tms_SuspectParameterNumber *in);

    NDDSUSERDllExport extern void 
    tms_SuspectParameterNumberPluginSupport_destroy_data_w_params(
        tms_SuspectParameterNumber *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_SuspectParameterNumberPluginSupport_destroy_data_ex(
        tms_SuspectParameterNumber *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_SuspectParameterNumberPluginSupport_destroy_data(
        tms_SuspectParameterNumber *sample);

    NDDSUSERDllExport extern void 
    tms_SuspectParameterNumberPluginSupport_print_data(
        const tms_SuspectParameterNumber *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    tms_SuspectParameterNumberPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_SuspectParameterNumber *out,
        const tms_SuspectParameterNumber *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_SuspectParameterNumberPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_SuspectParameterNumberPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_SuspectParameterNumberPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_SuspectParameterNumberPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define tms_FailureModeIndicatorPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_FailureModeIndicatorPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_FailureModeIndicatorPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_FailureModeIndicatorPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_FailureModeIndicatorPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_FailureModeIndicator*
    tms_FailureModeIndicatorPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_FailureModeIndicator*
    tms_FailureModeIndicatorPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_FailureModeIndicator*
    tms_FailureModeIndicatorPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_FailureModeIndicatorPluginSupport_copy_data(
        tms_FailureModeIndicator *out,
        const tms_FailureModeIndicator *in);

    NDDSUSERDllExport extern void 
    tms_FailureModeIndicatorPluginSupport_destroy_data_w_params(
        tms_FailureModeIndicator *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_FailureModeIndicatorPluginSupport_destroy_data_ex(
        tms_FailureModeIndicator *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_FailureModeIndicatorPluginSupport_destroy_data(
        tms_FailureModeIndicator *sample);

    NDDSUSERDllExport extern void 
    tms_FailureModeIndicatorPluginSupport_print_data(
        const tms_FailureModeIndicator *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    tms_FailureModeIndicatorPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_FailureModeIndicator *out,
        const tms_FailureModeIndicator *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_FailureModeIndicatorPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_FailureModeIndicatorPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_FailureModeIndicatorPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_FailureModeIndicatorPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_DtcSeverityPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_DtcSeverityPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_DtcSeverityPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    tms_DtcSeverityPluginSupport_print_data(
        const tms_DtcSeverity *sample, const char *desc, int indent_level);

    #define tms_DiagnosticTroubleCodePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_DiagnosticTroubleCodePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_DiagnosticTroubleCodePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_DiagnosticTroubleCodePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_DiagnosticTroubleCodePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_DiagnosticTroubleCode*
    tms_DiagnosticTroubleCodePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_DiagnosticTroubleCode*
    tms_DiagnosticTroubleCodePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_DiagnosticTroubleCode*
    tms_DiagnosticTroubleCodePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_DiagnosticTroubleCodePluginSupport_copy_data(
        tms_DiagnosticTroubleCode *out,
        const tms_DiagnosticTroubleCode *in);

    NDDSUSERDllExport extern void 
    tms_DiagnosticTroubleCodePluginSupport_destroy_data_w_params(
        tms_DiagnosticTroubleCode *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_DiagnosticTroubleCodePluginSupport_destroy_data_ex(
        tms_DiagnosticTroubleCode *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_DiagnosticTroubleCodePluginSupport_destroy_data(
        tms_DiagnosticTroubleCode *sample);

    NDDSUSERDllExport extern void 
    tms_DiagnosticTroubleCodePluginSupport_print_data(
        const tms_DiagnosticTroubleCode *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_DiagnosticTroubleCodePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_DiagnosticTroubleCodePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_DiagnosticTroubleCodePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_DiagnosticTroubleCodePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_DiagnosticTroubleCodePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_DiagnosticTroubleCode *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_DiagnosticTroubleCodePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_DiagnosticTroubleCode *out,
        const tms_DiagnosticTroubleCode *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_DiagnosticTroubleCodePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_DiagnosticTroubleCode *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_DiagnosticTroubleCodePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_DiagnosticTroubleCode *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_DiagnosticTroubleCodePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_DiagnosticTroubleCode **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_DiagnosticTroubleCodePlugin_deserialize_from_cdr_buffer(
        tms_DiagnosticTroubleCode *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_DiagnosticTroubleCodePlugin_data_to_string(
        const tms_DiagnosticTroubleCode *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_DiagnosticTroubleCodePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_DiagnosticTroubleCodePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_DiagnosticTroubleCodePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_DiagnosticTroubleCodePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_DiagnosticTroubleCodePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_DiagnosticTroubleCode ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_DiagnosticTroubleCodePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_DiagnosticTroubleCodePlugin_new(void);

    NDDSUSERDllExport extern void
    tms_DiagnosticTroubleCodePlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct ActiveDiagnosticMessages
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct ActiveDiagnosticMessages)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * ActiveDiagnosticMessages must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct ActiveDiagnosticMessages.
    */
    typedef  class tms_ActiveDiagnosticMessages tms_ActiveDiagnosticMessagesKeyHolder;

    #define tms_ActiveDiagnosticMessagesPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_ActiveDiagnosticMessagesPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_ActiveDiagnosticMessagesPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_ActiveDiagnosticMessagesPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_ActiveDiagnosticMessagesPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_ActiveDiagnosticMessagesPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_ActiveDiagnosticMessagesPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_ActiveDiagnosticMessages*
    tms_ActiveDiagnosticMessagesPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_ActiveDiagnosticMessages*
    tms_ActiveDiagnosticMessagesPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_ActiveDiagnosticMessages*
    tms_ActiveDiagnosticMessagesPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_ActiveDiagnosticMessagesPluginSupport_copy_data(
        tms_ActiveDiagnosticMessages *out,
        const tms_ActiveDiagnosticMessages *in);

    NDDSUSERDllExport extern void 
    tms_ActiveDiagnosticMessagesPluginSupport_destroy_data_w_params(
        tms_ActiveDiagnosticMessages *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_ActiveDiagnosticMessagesPluginSupport_destroy_data_ex(
        tms_ActiveDiagnosticMessages *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_ActiveDiagnosticMessagesPluginSupport_destroy_data(
        tms_ActiveDiagnosticMessages *sample);

    NDDSUSERDllExport extern void 
    tms_ActiveDiagnosticMessagesPluginSupport_print_data(
        const tms_ActiveDiagnosticMessages *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_ActiveDiagnosticMessages*
    tms_ActiveDiagnosticMessagesPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_ActiveDiagnosticMessages*
    tms_ActiveDiagnosticMessagesPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_ActiveDiagnosticMessagesPluginSupport_destroy_key_ex(
        tms_ActiveDiagnosticMessagesKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_ActiveDiagnosticMessagesPluginSupport_destroy_key(
        tms_ActiveDiagnosticMessagesKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_ActiveDiagnosticMessagesPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_ActiveDiagnosticMessagesPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_ActiveDiagnosticMessagesPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_ActiveDiagnosticMessagesPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_ActiveDiagnosticMessagesPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_ActiveDiagnosticMessages *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_ActiveDiagnosticMessagesPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_ActiveDiagnosticMessages *out,
        const tms_ActiveDiagnosticMessages *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_ActiveDiagnosticMessagesPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_ActiveDiagnosticMessages *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_ActiveDiagnosticMessagesPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_ActiveDiagnosticMessages *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_ActiveDiagnosticMessagesPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_ActiveDiagnosticMessages **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_ActiveDiagnosticMessagesPlugin_deserialize_from_cdr_buffer(
        tms_ActiveDiagnosticMessages *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_ActiveDiagnosticMessagesPlugin_data_to_string(
        const tms_ActiveDiagnosticMessages *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_ActiveDiagnosticMessagesPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_ActiveDiagnosticMessagesPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_ActiveDiagnosticMessagesPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_ActiveDiagnosticMessagesPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_ActiveDiagnosticMessagesPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_ActiveDiagnosticMessages ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_ActiveDiagnosticMessagesPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_ActiveDiagnosticMessagesKeyHolder *key, 
        const tms_ActiveDiagnosticMessages *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_ActiveDiagnosticMessagesPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_ActiveDiagnosticMessages *instance, 
        const tms_ActiveDiagnosticMessagesKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_ActiveDiagnosticMessagesPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_ActiveDiagnosticMessages *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_ActiveDiagnosticMessagesPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_ActiveDiagnosticMessagesPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_ActiveDiagnosticMessagesPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_ActiveDiagnosticMessagesPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct StandardConfigMaster
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct StandardConfigMaster)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * StandardConfigMaster must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct StandardConfigMaster.
    */
    typedef  class tms_StandardConfigMaster tms_StandardConfigMasterKeyHolder;

    #define tms_StandardConfigMasterPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_StandardConfigMasterPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_StandardConfigMasterPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_StandardConfigMasterPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_StandardConfigMasterPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_StandardConfigMasterPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_StandardConfigMasterPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_StandardConfigMaster*
    tms_StandardConfigMasterPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_StandardConfigMaster*
    tms_StandardConfigMasterPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_StandardConfigMaster*
    tms_StandardConfigMasterPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_StandardConfigMasterPluginSupport_copy_data(
        tms_StandardConfigMaster *out,
        const tms_StandardConfigMaster *in);

    NDDSUSERDllExport extern void 
    tms_StandardConfigMasterPluginSupport_destroy_data_w_params(
        tms_StandardConfigMaster *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_StandardConfigMasterPluginSupport_destroy_data_ex(
        tms_StandardConfigMaster *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_StandardConfigMasterPluginSupport_destroy_data(
        tms_StandardConfigMaster *sample);

    NDDSUSERDllExport extern void 
    tms_StandardConfigMasterPluginSupport_print_data(
        const tms_StandardConfigMaster *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_StandardConfigMaster*
    tms_StandardConfigMasterPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_StandardConfigMaster*
    tms_StandardConfigMasterPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_StandardConfigMasterPluginSupport_destroy_key_ex(
        tms_StandardConfigMasterKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_StandardConfigMasterPluginSupport_destroy_key(
        tms_StandardConfigMasterKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_StandardConfigMasterPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_StandardConfigMasterPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_StandardConfigMasterPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_StandardConfigMasterPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_StandardConfigMasterPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_StandardConfigMaster *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_StandardConfigMasterPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_StandardConfigMaster *out,
        const tms_StandardConfigMaster *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_StandardConfigMasterPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_StandardConfigMaster *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_StandardConfigMasterPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_StandardConfigMaster *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_StandardConfigMasterPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_StandardConfigMaster **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_StandardConfigMasterPlugin_deserialize_from_cdr_buffer(
        tms_StandardConfigMaster *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_StandardConfigMasterPlugin_data_to_string(
        const tms_StandardConfigMaster *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_StandardConfigMasterPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_StandardConfigMasterPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_StandardConfigMasterPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_StandardConfigMasterPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_StandardConfigMasterPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_StandardConfigMaster ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_StandardConfigMasterPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_StandardConfigMasterKeyHolder *key, 
        const tms_StandardConfigMaster *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_StandardConfigMasterPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_StandardConfigMaster *instance, 
        const tms_StandardConfigMasterKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_StandardConfigMasterPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_StandardConfigMaster *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_StandardConfigMasterPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_StandardConfigMasterPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_StandardConfigMasterPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_StandardConfigMasterPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct CopyConfigRequest
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct CopyConfigRequest)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * CopyConfigRequest must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct CopyConfigRequest.
    */
    typedef  class tms_CopyConfigRequest tms_CopyConfigRequestKeyHolder;

    #define tms_CopyConfigRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_CopyConfigRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_CopyConfigRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_CopyConfigRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_CopyConfigRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_CopyConfigRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_CopyConfigRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_CopyConfigRequest*
    tms_CopyConfigRequestPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_CopyConfigRequest*
    tms_CopyConfigRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_CopyConfigRequest*
    tms_CopyConfigRequestPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_CopyConfigRequestPluginSupport_copy_data(
        tms_CopyConfigRequest *out,
        const tms_CopyConfigRequest *in);

    NDDSUSERDllExport extern void 
    tms_CopyConfigRequestPluginSupport_destroy_data_w_params(
        tms_CopyConfigRequest *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_CopyConfigRequestPluginSupport_destroy_data_ex(
        tms_CopyConfigRequest *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_CopyConfigRequestPluginSupport_destroy_data(
        tms_CopyConfigRequest *sample);

    NDDSUSERDllExport extern void 
    tms_CopyConfigRequestPluginSupport_print_data(
        const tms_CopyConfigRequest *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_CopyConfigRequest*
    tms_CopyConfigRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_CopyConfigRequest*
    tms_CopyConfigRequestPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_CopyConfigRequestPluginSupport_destroy_key_ex(
        tms_CopyConfigRequestKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_CopyConfigRequestPluginSupport_destroy_key(
        tms_CopyConfigRequestKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_CopyConfigRequestPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_CopyConfigRequestPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_CopyConfigRequestPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_CopyConfigRequestPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_CopyConfigRequestPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_CopyConfigRequest *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_CopyConfigRequestPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_CopyConfigRequest *out,
        const tms_CopyConfigRequest *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_CopyConfigRequestPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_CopyConfigRequest *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_CopyConfigRequestPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_CopyConfigRequest *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_CopyConfigRequestPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_CopyConfigRequest **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_CopyConfigRequestPlugin_deserialize_from_cdr_buffer(
        tms_CopyConfigRequest *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_CopyConfigRequestPlugin_data_to_string(
        const tms_CopyConfigRequest *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_CopyConfigRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_CopyConfigRequestPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_CopyConfigRequestPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_CopyConfigRequestPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_CopyConfigRequestPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_CopyConfigRequest ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_CopyConfigRequestPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_CopyConfigRequestKeyHolder *key, 
        const tms_CopyConfigRequest *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_CopyConfigRequestPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_CopyConfigRequest *instance, 
        const tms_CopyConfigRequestKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_CopyConfigRequestPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_CopyConfigRequest *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_CopyConfigRequestPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_CopyConfigRequestPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_CopyConfigRequestPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_CopyConfigRequestPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct ReserveConfigRequest
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct ReserveConfigRequest)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * ReserveConfigRequest must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct ReserveConfigRequest.
    */
    typedef  class tms_ReserveConfigRequest tms_ReserveConfigRequestKeyHolder;

    #define tms_ReserveConfigRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_ReserveConfigRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_ReserveConfigRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_ReserveConfigRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_ReserveConfigRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_ReserveConfigRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_ReserveConfigRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_ReserveConfigRequest*
    tms_ReserveConfigRequestPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_ReserveConfigRequest*
    tms_ReserveConfigRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_ReserveConfigRequest*
    tms_ReserveConfigRequestPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_ReserveConfigRequestPluginSupport_copy_data(
        tms_ReserveConfigRequest *out,
        const tms_ReserveConfigRequest *in);

    NDDSUSERDllExport extern void 
    tms_ReserveConfigRequestPluginSupport_destroy_data_w_params(
        tms_ReserveConfigRequest *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_ReserveConfigRequestPluginSupport_destroy_data_ex(
        tms_ReserveConfigRequest *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_ReserveConfigRequestPluginSupport_destroy_data(
        tms_ReserveConfigRequest *sample);

    NDDSUSERDllExport extern void 
    tms_ReserveConfigRequestPluginSupport_print_data(
        const tms_ReserveConfigRequest *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_ReserveConfigRequest*
    tms_ReserveConfigRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_ReserveConfigRequest*
    tms_ReserveConfigRequestPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_ReserveConfigRequestPluginSupport_destroy_key_ex(
        tms_ReserveConfigRequestKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_ReserveConfigRequestPluginSupport_destroy_key(
        tms_ReserveConfigRequestKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_ReserveConfigRequestPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_ReserveConfigRequestPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_ReserveConfigRequestPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_ReserveConfigRequestPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_ReserveConfigRequestPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_ReserveConfigRequest *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_ReserveConfigRequestPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_ReserveConfigRequest *out,
        const tms_ReserveConfigRequest *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_ReserveConfigRequestPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_ReserveConfigRequest *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_ReserveConfigRequestPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_ReserveConfigRequest *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_ReserveConfigRequestPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_ReserveConfigRequest **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_ReserveConfigRequestPlugin_deserialize_from_cdr_buffer(
        tms_ReserveConfigRequest *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_ReserveConfigRequestPlugin_data_to_string(
        const tms_ReserveConfigRequest *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_ReserveConfigRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_ReserveConfigRequestPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_ReserveConfigRequestPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_ReserveConfigRequestPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_ReserveConfigRequestPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_ReserveConfigRequest ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_ReserveConfigRequestPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_ReserveConfigRequestKeyHolder *key, 
        const tms_ReserveConfigRequest *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_ReserveConfigRequestPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_ReserveConfigRequest *instance, 
        const tms_ReserveConfigRequestKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_ReserveConfigRequestPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_ReserveConfigRequest *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_ReserveConfigRequestPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_ReserveConfigRequestPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_ReserveConfigRequestPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_ReserveConfigRequestPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct ReserveConfigReply
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct ReserveConfigReply)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * ReserveConfigReply must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct ReserveConfigReply.
    */
    typedef  class tms_ReserveConfigReply tms_ReserveConfigReplyKeyHolder;

    #define tms_ReserveConfigReplyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_ReserveConfigReplyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_ReserveConfigReplyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_ReserveConfigReplyPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_ReserveConfigReplyPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_ReserveConfigReplyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_ReserveConfigReplyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_ReserveConfigReply*
    tms_ReserveConfigReplyPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_ReserveConfigReply*
    tms_ReserveConfigReplyPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_ReserveConfigReply*
    tms_ReserveConfigReplyPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_ReserveConfigReplyPluginSupport_copy_data(
        tms_ReserveConfigReply *out,
        const tms_ReserveConfigReply *in);

    NDDSUSERDllExport extern void 
    tms_ReserveConfigReplyPluginSupport_destroy_data_w_params(
        tms_ReserveConfigReply *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_ReserveConfigReplyPluginSupport_destroy_data_ex(
        tms_ReserveConfigReply *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_ReserveConfigReplyPluginSupport_destroy_data(
        tms_ReserveConfigReply *sample);

    NDDSUSERDllExport extern void 
    tms_ReserveConfigReplyPluginSupport_print_data(
        const tms_ReserveConfigReply *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_ReserveConfigReply*
    tms_ReserveConfigReplyPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_ReserveConfigReply*
    tms_ReserveConfigReplyPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_ReserveConfigReplyPluginSupport_destroy_key_ex(
        tms_ReserveConfigReplyKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_ReserveConfigReplyPluginSupport_destroy_key(
        tms_ReserveConfigReplyKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_ReserveConfigReplyPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_ReserveConfigReplyPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_ReserveConfigReplyPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_ReserveConfigReplyPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_ReserveConfigReplyPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_ReserveConfigReply *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_ReserveConfigReplyPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_ReserveConfigReply *out,
        const tms_ReserveConfigReply *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_ReserveConfigReplyPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_ReserveConfigReply *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_ReserveConfigReplyPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_ReserveConfigReply *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_ReserveConfigReplyPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_ReserveConfigReply **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_ReserveConfigReplyPlugin_deserialize_from_cdr_buffer(
        tms_ReserveConfigReply *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_ReserveConfigReplyPlugin_data_to_string(
        const tms_ReserveConfigReply *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_ReserveConfigReplyPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_ReserveConfigReplyPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_ReserveConfigReplyPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_ReserveConfigReplyPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_ReserveConfigReplyPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_ReserveConfigReply ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_ReserveConfigReplyPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_ReserveConfigReplyKeyHolder *key, 
        const tms_ReserveConfigReply *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_ReserveConfigReplyPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_ReserveConfigReply *instance, 
        const tms_ReserveConfigReplyKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_ReserveConfigReplyPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_ReserveConfigReply *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_ReserveConfigReplyPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_ReserveConfigReplyPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_ReserveConfigReplyPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_ReserveConfigReplyPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct ReleaseConfigRequest
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct ReleaseConfigRequest)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * ReleaseConfigRequest must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct ReleaseConfigRequest.
    */
    typedef  class tms_ReleaseConfigRequest tms_ReleaseConfigRequestKeyHolder;

    #define tms_ReleaseConfigRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_ReleaseConfigRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_ReleaseConfigRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_ReleaseConfigRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_ReleaseConfigRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_ReleaseConfigRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_ReleaseConfigRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_ReleaseConfigRequest*
    tms_ReleaseConfigRequestPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_ReleaseConfigRequest*
    tms_ReleaseConfigRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_ReleaseConfigRequest*
    tms_ReleaseConfigRequestPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_ReleaseConfigRequestPluginSupport_copy_data(
        tms_ReleaseConfigRequest *out,
        const tms_ReleaseConfigRequest *in);

    NDDSUSERDllExport extern void 
    tms_ReleaseConfigRequestPluginSupport_destroy_data_w_params(
        tms_ReleaseConfigRequest *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_ReleaseConfigRequestPluginSupport_destroy_data_ex(
        tms_ReleaseConfigRequest *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_ReleaseConfigRequestPluginSupport_destroy_data(
        tms_ReleaseConfigRequest *sample);

    NDDSUSERDllExport extern void 
    tms_ReleaseConfigRequestPluginSupport_print_data(
        const tms_ReleaseConfigRequest *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_ReleaseConfigRequest*
    tms_ReleaseConfigRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_ReleaseConfigRequest*
    tms_ReleaseConfigRequestPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_ReleaseConfigRequestPluginSupport_destroy_key_ex(
        tms_ReleaseConfigRequestKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_ReleaseConfigRequestPluginSupport_destroy_key(
        tms_ReleaseConfigRequestKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_ReleaseConfigRequestPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_ReleaseConfigRequestPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_ReleaseConfigRequestPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_ReleaseConfigRequestPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_ReleaseConfigRequestPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_ReleaseConfigRequest *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_ReleaseConfigRequestPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_ReleaseConfigRequest *out,
        const tms_ReleaseConfigRequest *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_ReleaseConfigRequestPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_ReleaseConfigRequest *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_ReleaseConfigRequestPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_ReleaseConfigRequest *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_ReleaseConfigRequestPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_ReleaseConfigRequest **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_ReleaseConfigRequestPlugin_deserialize_from_cdr_buffer(
        tms_ReleaseConfigRequest *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_ReleaseConfigRequestPlugin_data_to_string(
        const tms_ReleaseConfigRequest *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_ReleaseConfigRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_ReleaseConfigRequestPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_ReleaseConfigRequestPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_ReleaseConfigRequestPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_ReleaseConfigRequestPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_ReleaseConfigRequest ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_ReleaseConfigRequestPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_ReleaseConfigRequestKeyHolder *key, 
        const tms_ReleaseConfigRequest *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_ReleaseConfigRequestPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_ReleaseConfigRequest *instance, 
        const tms_ReleaseConfigRequestKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_ReleaseConfigRequestPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_ReleaseConfigRequest *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_ReleaseConfigRequestPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_ReleaseConfigRequestPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_ReleaseConfigRequestPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_ReleaseConfigRequestPlugin_delete(struct PRESTypePlugin *);

    #define tms_ConfigReservationPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_ConfigReservationPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_ConfigReservationPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_ConfigReservationPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_ConfigReservationPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_ConfigReservation*
    tms_ConfigReservationPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_ConfigReservation*
    tms_ConfigReservationPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_ConfigReservation*
    tms_ConfigReservationPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_ConfigReservationPluginSupport_copy_data(
        tms_ConfigReservation *out,
        const tms_ConfigReservation *in);

    NDDSUSERDllExport extern void 
    tms_ConfigReservationPluginSupport_destroy_data_w_params(
        tms_ConfigReservation *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_ConfigReservationPluginSupport_destroy_data_ex(
        tms_ConfigReservation *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_ConfigReservationPluginSupport_destroy_data(
        tms_ConfigReservation *sample);

    NDDSUSERDllExport extern void 
    tms_ConfigReservationPluginSupport_print_data(
        const tms_ConfigReservation *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_ConfigReservationPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_ConfigReservationPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_ConfigReservationPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_ConfigReservationPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_ConfigReservationPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_ConfigReservation *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_ConfigReservationPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_ConfigReservation *out,
        const tms_ConfigReservation *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_ConfigReservationPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_ConfigReservation *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_ConfigReservationPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_ConfigReservation *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_ConfigReservationPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_ConfigReservation **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_ConfigReservationPlugin_deserialize_from_cdr_buffer(
        tms_ConfigReservation *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_ConfigReservationPlugin_data_to_string(
        const tms_ConfigReservation *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_ConfigReservationPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_ConfigReservationPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_ConfigReservationPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_ConfigReservationPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_ConfigReservationPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_ConfigReservation ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_ConfigReservationPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_ConfigReservationPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_ConfigReservationPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct ConfigReservationList
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct ConfigReservationList)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * ConfigReservationList must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct ConfigReservationList.
    */
    typedef  class tms_ConfigReservationList tms_ConfigReservationListKeyHolder;

    #define tms_ConfigReservationListPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_ConfigReservationListPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_ConfigReservationListPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_ConfigReservationListPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_ConfigReservationListPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_ConfigReservationListPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_ConfigReservationListPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_ConfigReservationList*
    tms_ConfigReservationListPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_ConfigReservationList*
    tms_ConfigReservationListPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_ConfigReservationList*
    tms_ConfigReservationListPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_ConfigReservationListPluginSupport_copy_data(
        tms_ConfigReservationList *out,
        const tms_ConfigReservationList *in);

    NDDSUSERDllExport extern void 
    tms_ConfigReservationListPluginSupport_destroy_data_w_params(
        tms_ConfigReservationList *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_ConfigReservationListPluginSupport_destroy_data_ex(
        tms_ConfigReservationList *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_ConfigReservationListPluginSupport_destroy_data(
        tms_ConfigReservationList *sample);

    NDDSUSERDllExport extern void 
    tms_ConfigReservationListPluginSupport_print_data(
        const tms_ConfigReservationList *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_ConfigReservationList*
    tms_ConfigReservationListPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_ConfigReservationList*
    tms_ConfigReservationListPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_ConfigReservationListPluginSupport_destroy_key_ex(
        tms_ConfigReservationListKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_ConfigReservationListPluginSupport_destroy_key(
        tms_ConfigReservationListKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_ConfigReservationListPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_ConfigReservationListPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_ConfigReservationListPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_ConfigReservationListPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_ConfigReservationListPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_ConfigReservationList *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_ConfigReservationListPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_ConfigReservationList *out,
        const tms_ConfigReservationList *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_ConfigReservationListPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_ConfigReservationList *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_ConfigReservationListPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_ConfigReservationList *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_ConfigReservationListPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_ConfigReservationList **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_ConfigReservationListPlugin_deserialize_from_cdr_buffer(
        tms_ConfigReservationList *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_ConfigReservationListPlugin_data_to_string(
        const tms_ConfigReservationList *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_ConfigReservationListPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_ConfigReservationListPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_ConfigReservationListPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_ConfigReservationListPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_ConfigReservationListPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_ConfigReservationList ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_ConfigReservationListPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_ConfigReservationListKeyHolder *key, 
        const tms_ConfigReservationList *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_ConfigReservationListPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_ConfigReservationList *instance, 
        const tms_ConfigReservationListKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_ConfigReservationListPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_ConfigReservationList *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_ConfigReservationListPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_ConfigReservationListPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_ConfigReservationListPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_ConfigReservationListPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct GetConfigContentsRequest
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct GetConfigContentsRequest)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * GetConfigContentsRequest must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct GetConfigContentsRequest.
    */
    typedef  class tms_GetConfigContentsRequest tms_GetConfigContentsRequestKeyHolder;

    #define tms_GetConfigContentsRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_GetConfigContentsRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_GetConfigContentsRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_GetConfigContentsRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_GetConfigContentsRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_GetConfigContentsRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_GetConfigContentsRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_GetConfigContentsRequest*
    tms_GetConfigContentsRequestPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_GetConfigContentsRequest*
    tms_GetConfigContentsRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_GetConfigContentsRequest*
    tms_GetConfigContentsRequestPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_GetConfigContentsRequestPluginSupport_copy_data(
        tms_GetConfigContentsRequest *out,
        const tms_GetConfigContentsRequest *in);

    NDDSUSERDllExport extern void 
    tms_GetConfigContentsRequestPluginSupport_destroy_data_w_params(
        tms_GetConfigContentsRequest *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_GetConfigContentsRequestPluginSupport_destroy_data_ex(
        tms_GetConfigContentsRequest *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_GetConfigContentsRequestPluginSupport_destroy_data(
        tms_GetConfigContentsRequest *sample);

    NDDSUSERDllExport extern void 
    tms_GetConfigContentsRequestPluginSupport_print_data(
        const tms_GetConfigContentsRequest *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_GetConfigContentsRequest*
    tms_GetConfigContentsRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_GetConfigContentsRequest*
    tms_GetConfigContentsRequestPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_GetConfigContentsRequestPluginSupport_destroy_key_ex(
        tms_GetConfigContentsRequestKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_GetConfigContentsRequestPluginSupport_destroy_key(
        tms_GetConfigContentsRequestKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_GetConfigContentsRequestPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_GetConfigContentsRequestPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_GetConfigContentsRequestPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_GetConfigContentsRequestPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_GetConfigContentsRequestPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_GetConfigContentsRequest *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_GetConfigContentsRequestPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_GetConfigContentsRequest *out,
        const tms_GetConfigContentsRequest *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_GetConfigContentsRequestPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_GetConfigContentsRequest *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_GetConfigContentsRequestPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_GetConfigContentsRequest *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_GetConfigContentsRequestPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_GetConfigContentsRequest **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_GetConfigContentsRequestPlugin_deserialize_from_cdr_buffer(
        tms_GetConfigContentsRequest *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_GetConfigContentsRequestPlugin_data_to_string(
        const tms_GetConfigContentsRequest *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_GetConfigContentsRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_GetConfigContentsRequestPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_GetConfigContentsRequestPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_GetConfigContentsRequestPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_GetConfigContentsRequestPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_GetConfigContentsRequest ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_GetConfigContentsRequestPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_GetConfigContentsRequestKeyHolder *key, 
        const tms_GetConfigContentsRequest *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_GetConfigContentsRequestPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_GetConfigContentsRequest *instance, 
        const tms_GetConfigContentsRequestKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_GetConfigContentsRequestPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_GetConfigContentsRequest *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_GetConfigContentsRequestPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_GetConfigContentsRequestPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_GetConfigContentsRequestPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_GetConfigContentsRequestPlugin_delete(struct PRESTypePlugin *);

    #define tms_PowerPortNumberPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_PowerPortNumberPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_PowerPortNumberPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_PowerPortNumberPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_PowerPortNumberPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_PowerPortNumber*
    tms_PowerPortNumberPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_PowerPortNumber*
    tms_PowerPortNumberPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_PowerPortNumber*
    tms_PowerPortNumberPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerPortNumberPluginSupport_copy_data(
        tms_PowerPortNumber *out,
        const tms_PowerPortNumber *in);

    NDDSUSERDllExport extern void 
    tms_PowerPortNumberPluginSupport_destroy_data_w_params(
        tms_PowerPortNumber *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_PowerPortNumberPluginSupport_destroy_data_ex(
        tms_PowerPortNumber *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_PowerPortNumberPluginSupport_destroy_data(
        tms_PowerPortNumber *sample);

    NDDSUSERDllExport extern void 
    tms_PowerPortNumberPluginSupport_print_data(
        const tms_PowerPortNumber *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    tms_PowerPortNumberPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerPortNumber *out,
        const tms_PowerPortNumber *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_PowerPortNumberPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_PowerPortNumberPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerPortNumberPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerPortNumberPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct AuthorizationToEnergizeRequest
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct AuthorizationToEnergizeRequest)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * AuthorizationToEnergizeRequest must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct AuthorizationToEnergizeRequest.
    */
    typedef  class tms_AuthorizationToEnergizeRequest tms_AuthorizationToEnergizeRequestKeyHolder;

    #define tms_AuthorizationToEnergizeRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_AuthorizationToEnergizeRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_AuthorizationToEnergizeRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_AuthorizationToEnergizeRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_AuthorizationToEnergizeRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_AuthorizationToEnergizeRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_AuthorizationToEnergizeRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_AuthorizationToEnergizeRequest*
    tms_AuthorizationToEnergizeRequestPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_AuthorizationToEnergizeRequest*
    tms_AuthorizationToEnergizeRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_AuthorizationToEnergizeRequest*
    tms_AuthorizationToEnergizeRequestPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_AuthorizationToEnergizeRequestPluginSupport_copy_data(
        tms_AuthorizationToEnergizeRequest *out,
        const tms_AuthorizationToEnergizeRequest *in);

    NDDSUSERDllExport extern void 
    tms_AuthorizationToEnergizeRequestPluginSupport_destroy_data_w_params(
        tms_AuthorizationToEnergizeRequest *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_AuthorizationToEnergizeRequestPluginSupport_destroy_data_ex(
        tms_AuthorizationToEnergizeRequest *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_AuthorizationToEnergizeRequestPluginSupport_destroy_data(
        tms_AuthorizationToEnergizeRequest *sample);

    NDDSUSERDllExport extern void 
    tms_AuthorizationToEnergizeRequestPluginSupport_print_data(
        const tms_AuthorizationToEnergizeRequest *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_AuthorizationToEnergizeRequest*
    tms_AuthorizationToEnergizeRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_AuthorizationToEnergizeRequest*
    tms_AuthorizationToEnergizeRequestPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_AuthorizationToEnergizeRequestPluginSupport_destroy_key_ex(
        tms_AuthorizationToEnergizeRequestKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_AuthorizationToEnergizeRequestPluginSupport_destroy_key(
        tms_AuthorizationToEnergizeRequestKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_AuthorizationToEnergizeRequestPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_AuthorizationToEnergizeRequestPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_AuthorizationToEnergizeRequestPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_AuthorizationToEnergizeRequestPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_AuthorizationToEnergizeRequestPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_AuthorizationToEnergizeRequest *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_AuthorizationToEnergizeRequestPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_AuthorizationToEnergizeRequest *out,
        const tms_AuthorizationToEnergizeRequest *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_AuthorizationToEnergizeRequestPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_AuthorizationToEnergizeRequest *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_AuthorizationToEnergizeRequestPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_AuthorizationToEnergizeRequest *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_AuthorizationToEnergizeRequestPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_AuthorizationToEnergizeRequest **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_AuthorizationToEnergizeRequestPlugin_deserialize_from_cdr_buffer(
        tms_AuthorizationToEnergizeRequest *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_AuthorizationToEnergizeRequestPlugin_data_to_string(
        const tms_AuthorizationToEnergizeRequest *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_AuthorizationToEnergizeRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_AuthorizationToEnergizeRequestPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_AuthorizationToEnergizeRequestPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_AuthorizationToEnergizeRequestPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_AuthorizationToEnergizeRequestPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_AuthorizationToEnergizeRequest ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_AuthorizationToEnergizeRequestPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_AuthorizationToEnergizeRequestKeyHolder *key, 
        const tms_AuthorizationToEnergizeRequest *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_AuthorizationToEnergizeRequestPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_AuthorizationToEnergizeRequest *instance, 
        const tms_AuthorizationToEnergizeRequestKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_AuthorizationToEnergizeRequestPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_AuthorizationToEnergizeRequest *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_AuthorizationToEnergizeRequestPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_AuthorizationToEnergizeRequestPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_AuthorizationToEnergizeRequestPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_AuthorizationToEnergizeRequestPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct AuthorizationToEnergizeResponse
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct AuthorizationToEnergizeResponse)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * AuthorizationToEnergizeResponse must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct AuthorizationToEnergizeResponse.
    */
    typedef  class tms_AuthorizationToEnergizeResponse tms_AuthorizationToEnergizeResponseKeyHolder;

    #define tms_AuthorizationToEnergizeResponsePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_AuthorizationToEnergizeResponsePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_AuthorizationToEnergizeResponsePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_AuthorizationToEnergizeResponsePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_AuthorizationToEnergizeResponsePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_AuthorizationToEnergizeResponsePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_AuthorizationToEnergizeResponsePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_AuthorizationToEnergizeResponse*
    tms_AuthorizationToEnergizeResponsePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_AuthorizationToEnergizeResponse*
    tms_AuthorizationToEnergizeResponsePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_AuthorizationToEnergizeResponse*
    tms_AuthorizationToEnergizeResponsePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_AuthorizationToEnergizeResponsePluginSupport_copy_data(
        tms_AuthorizationToEnergizeResponse *out,
        const tms_AuthorizationToEnergizeResponse *in);

    NDDSUSERDllExport extern void 
    tms_AuthorizationToEnergizeResponsePluginSupport_destroy_data_w_params(
        tms_AuthorizationToEnergizeResponse *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_AuthorizationToEnergizeResponsePluginSupport_destroy_data_ex(
        tms_AuthorizationToEnergizeResponse *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_AuthorizationToEnergizeResponsePluginSupport_destroy_data(
        tms_AuthorizationToEnergizeResponse *sample);

    NDDSUSERDllExport extern void 
    tms_AuthorizationToEnergizeResponsePluginSupport_print_data(
        const tms_AuthorizationToEnergizeResponse *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_AuthorizationToEnergizeResponse*
    tms_AuthorizationToEnergizeResponsePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_AuthorizationToEnergizeResponse*
    tms_AuthorizationToEnergizeResponsePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_AuthorizationToEnergizeResponsePluginSupport_destroy_key_ex(
        tms_AuthorizationToEnergizeResponseKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_AuthorizationToEnergizeResponsePluginSupport_destroy_key(
        tms_AuthorizationToEnergizeResponseKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_AuthorizationToEnergizeResponsePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_AuthorizationToEnergizeResponsePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_AuthorizationToEnergizeResponsePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_AuthorizationToEnergizeResponsePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_AuthorizationToEnergizeResponsePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_AuthorizationToEnergizeResponse *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_AuthorizationToEnergizeResponsePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_AuthorizationToEnergizeResponse *out,
        const tms_AuthorizationToEnergizeResponse *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_AuthorizationToEnergizeResponsePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_AuthorizationToEnergizeResponse *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_AuthorizationToEnergizeResponsePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_AuthorizationToEnergizeResponse *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_AuthorizationToEnergizeResponsePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_AuthorizationToEnergizeResponse **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_AuthorizationToEnergizeResponsePlugin_deserialize_from_cdr_buffer(
        tms_AuthorizationToEnergizeResponse *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_AuthorizationToEnergizeResponsePlugin_data_to_string(
        const tms_AuthorizationToEnergizeResponse *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_AuthorizationToEnergizeResponsePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_AuthorizationToEnergizeResponsePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_AuthorizationToEnergizeResponsePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_AuthorizationToEnergizeResponsePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_AuthorizationToEnergizeResponsePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_AuthorizationToEnergizeResponse ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_AuthorizationToEnergizeResponsePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_AuthorizationToEnergizeResponseKeyHolder *key, 
        const tms_AuthorizationToEnergizeResponse *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_AuthorizationToEnergizeResponsePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_AuthorizationToEnergizeResponse *instance, 
        const tms_AuthorizationToEnergizeResponseKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_AuthorizationToEnergizeResponsePlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_AuthorizationToEnergizeResponse *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_AuthorizationToEnergizeResponsePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_AuthorizationToEnergizeResponsePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_AuthorizationToEnergizeResponsePlugin_new(void);

    NDDSUSERDllExport extern void
    tms_AuthorizationToEnergizeResponsePlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct AuthorizationToEnergizeOutcome
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct AuthorizationToEnergizeOutcome)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * AuthorizationToEnergizeOutcome must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct AuthorizationToEnergizeOutcome.
    */
    typedef  class tms_AuthorizationToEnergizeOutcome tms_AuthorizationToEnergizeOutcomeKeyHolder;

    #define tms_AuthorizationToEnergizeOutcomePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_AuthorizationToEnergizeOutcomePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_AuthorizationToEnergizeOutcomePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_AuthorizationToEnergizeOutcomePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_AuthorizationToEnergizeOutcomePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_AuthorizationToEnergizeOutcomePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_AuthorizationToEnergizeOutcomePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_AuthorizationToEnergizeOutcome*
    tms_AuthorizationToEnergizeOutcomePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_AuthorizationToEnergizeOutcome*
    tms_AuthorizationToEnergizeOutcomePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_AuthorizationToEnergizeOutcome*
    tms_AuthorizationToEnergizeOutcomePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_AuthorizationToEnergizeOutcomePluginSupport_copy_data(
        tms_AuthorizationToEnergizeOutcome *out,
        const tms_AuthorizationToEnergizeOutcome *in);

    NDDSUSERDllExport extern void 
    tms_AuthorizationToEnergizeOutcomePluginSupport_destroy_data_w_params(
        tms_AuthorizationToEnergizeOutcome *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_AuthorizationToEnergizeOutcomePluginSupport_destroy_data_ex(
        tms_AuthorizationToEnergizeOutcome *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_AuthorizationToEnergizeOutcomePluginSupport_destroy_data(
        tms_AuthorizationToEnergizeOutcome *sample);

    NDDSUSERDllExport extern void 
    tms_AuthorizationToEnergizeOutcomePluginSupport_print_data(
        const tms_AuthorizationToEnergizeOutcome *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_AuthorizationToEnergizeOutcome*
    tms_AuthorizationToEnergizeOutcomePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_AuthorizationToEnergizeOutcome*
    tms_AuthorizationToEnergizeOutcomePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_AuthorizationToEnergizeOutcomePluginSupport_destroy_key_ex(
        tms_AuthorizationToEnergizeOutcomeKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_AuthorizationToEnergizeOutcomePluginSupport_destroy_key(
        tms_AuthorizationToEnergizeOutcomeKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_AuthorizationToEnergizeOutcomePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_AuthorizationToEnergizeOutcomePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_AuthorizationToEnergizeOutcomePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_AuthorizationToEnergizeOutcomePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_AuthorizationToEnergizeOutcomePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_AuthorizationToEnergizeOutcome *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_AuthorizationToEnergizeOutcomePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_AuthorizationToEnergizeOutcome *out,
        const tms_AuthorizationToEnergizeOutcome *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_AuthorizationToEnergizeOutcomePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_AuthorizationToEnergizeOutcome *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_AuthorizationToEnergizeOutcomePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_AuthorizationToEnergizeOutcome *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_AuthorizationToEnergizeOutcomePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_AuthorizationToEnergizeOutcome **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_AuthorizationToEnergizeOutcomePlugin_deserialize_from_cdr_buffer(
        tms_AuthorizationToEnergizeOutcome *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_AuthorizationToEnergizeOutcomePlugin_data_to_string(
        const tms_AuthorizationToEnergizeOutcome *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_AuthorizationToEnergizeOutcomePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_AuthorizationToEnergizeOutcomePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_AuthorizationToEnergizeOutcomePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_AuthorizationToEnergizeOutcomePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_AuthorizationToEnergizeOutcomePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_AuthorizationToEnergizeOutcome ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_AuthorizationToEnergizeOutcomePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_AuthorizationToEnergizeOutcomeKeyHolder *key, 
        const tms_AuthorizationToEnergizeOutcome *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_AuthorizationToEnergizeOutcomePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_AuthorizationToEnergizeOutcome *instance, 
        const tms_AuthorizationToEnergizeOutcomeKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_AuthorizationToEnergizeOutcomePlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_AuthorizationToEnergizeOutcome *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_AuthorizationToEnergizeOutcomePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_AuthorizationToEnergizeOutcomePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_AuthorizationToEnergizeOutcomePlugin_new(void);

    NDDSUSERDllExport extern void
    tms_AuthorizationToEnergizeOutcomePlugin_delete(struct PRESTypePlugin *);

    #define tms_PowerPortIdPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_PowerPortIdPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_PowerPortIdPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_PowerPortIdPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_PowerPortIdPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_PowerPortId*
    tms_PowerPortIdPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_PowerPortId*
    tms_PowerPortIdPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_PowerPortId*
    tms_PowerPortIdPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerPortIdPluginSupport_copy_data(
        tms_PowerPortId *out,
        const tms_PowerPortId *in);

    NDDSUSERDllExport extern void 
    tms_PowerPortIdPluginSupport_destroy_data_w_params(
        tms_PowerPortId *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_PowerPortIdPluginSupport_destroy_data_ex(
        tms_PowerPortId *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_PowerPortIdPluginSupport_destroy_data(
        tms_PowerPortId *sample);

    NDDSUSERDllExport extern void 
    tms_PowerPortIdPluginSupport_print_data(
        const tms_PowerPortId *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_PowerPortIdPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_PowerPortIdPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_PowerPortIdPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_PowerPortIdPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_PowerPortIdPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerPortId *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_PowerPortIdPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerPortId *out,
        const tms_PowerPortId *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_PowerPortIdPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_PowerPortId *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_PowerPortIdPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_PowerPortId *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerPortIdPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerPortId **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_PowerPortIdPlugin_deserialize_from_cdr_buffer(
        tms_PowerPortId *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_PowerPortIdPlugin_data_to_string(
        const tms_PowerPortId *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_PowerPortIdPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_PowerPortIdPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerPortIdPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerPortIdPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerPortIdPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerPortId ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_PowerPortIdPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_PowerPortIdPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_PowerPortIdPlugin_delete(struct PRESTypePlugin *);

    #define tms_PowerConnectionIdPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_PowerConnectionIdPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_PowerConnectionIdPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_PowerConnectionIdPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_PowerConnectionIdPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_PowerConnectionId*
    tms_PowerConnectionIdPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_PowerConnectionId*
    tms_PowerConnectionIdPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_PowerConnectionId*
    tms_PowerConnectionIdPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerConnectionIdPluginSupport_copy_data(
        tms_PowerConnectionId *out,
        const tms_PowerConnectionId *in);

    NDDSUSERDllExport extern void 
    tms_PowerConnectionIdPluginSupport_destroy_data_w_params(
        tms_PowerConnectionId *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_PowerConnectionIdPluginSupport_destroy_data_ex(
        tms_PowerConnectionId *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_PowerConnectionIdPluginSupport_destroy_data(
        tms_PowerConnectionId *sample);

    NDDSUSERDllExport extern void 
    tms_PowerConnectionIdPluginSupport_print_data(
        const tms_PowerConnectionId *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_PowerConnectionIdPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_PowerConnectionIdPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_PowerConnectionIdPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_PowerConnectionIdPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_PowerConnectionIdPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerConnectionId *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_PowerConnectionIdPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerConnectionId *out,
        const tms_PowerConnectionId *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_PowerConnectionIdPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_PowerConnectionId *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_PowerConnectionIdPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_PowerConnectionId *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerConnectionIdPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerConnectionId **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_PowerConnectionIdPlugin_deserialize_from_cdr_buffer(
        tms_PowerConnectionId *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_PowerConnectionIdPlugin_data_to_string(
        const tms_PowerConnectionId *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_PowerConnectionIdPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_PowerConnectionIdPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerConnectionIdPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerConnectionIdPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerConnectionIdPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerConnectionId ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_PowerConnectionIdPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_PowerConnectionIdPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_PowerConnectionIdPlugin_delete(struct PRESTypePlugin *);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_CableSenseTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_CableSenseTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_CableSenseTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    tms_CableSenseTypePluginSupport_print_data(
        const tms_CableSenseType *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_CableSenseStatusPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_CableSenseStatusPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_CableSenseStatusPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    tms_CableSenseStatusPluginSupport_print_data(
        const tms_CableSenseStatus *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_PowerConnectorTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_PowerConnectorTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerConnectorTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    tms_PowerConnectorTypePluginSupport_print_data(
        const tms_PowerConnectorType *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_PowerConnectorPolarityPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_PowerConnectorPolarityPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerConnectorPolarityPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    tms_PowerConnectorPolarityPluginSupport_print_data(
        const tms_PowerConnectorPolarity *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_PowerConnectorPhasesPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_PowerConnectorPhasesPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerConnectorPhasesPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    tms_PowerConnectorPhasesPluginSupport_print_data(
        const tms_PowerConnectorPhases *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_PowerSwitchControlPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_PowerSwitchControlPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerSwitchControlPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    tms_PowerSwitchControlPluginSupport_print_data(
        const tms_PowerSwitchControl *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_PowerSwitchProtectionPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_PowerSwitchProtectionPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerSwitchProtectionPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    tms_PowerSwitchProtectionPluginSupport_print_data(
        const tms_PowerSwitchProtection *sample, const char *desc, int indent_level);

    #define tms_PowerPortTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_PowerPortTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_PowerPortTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_PowerPortTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_PowerPortTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_PowerPortType*
    tms_PowerPortTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_PowerPortType*
    tms_PowerPortTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_PowerPortType*
    tms_PowerPortTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerPortTypePluginSupport_copy_data(
        tms_PowerPortType *out,
        const tms_PowerPortType *in);

    NDDSUSERDllExport extern void 
    tms_PowerPortTypePluginSupport_destroy_data_w_params(
        tms_PowerPortType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_PowerPortTypePluginSupport_destroy_data_ex(
        tms_PowerPortType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_PowerPortTypePluginSupport_destroy_data(
        tms_PowerPortType *sample);

    NDDSUSERDllExport extern void 
    tms_PowerPortTypePluginSupport_print_data(
        const tms_PowerPortType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_PowerPortTypePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_PowerPortTypePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_PowerPortTypePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_PowerPortTypePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_PowerPortTypePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerPortType *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_PowerPortTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerPortType *out,
        const tms_PowerPortType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_PowerPortTypePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_PowerPortType *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_PowerPortTypePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_PowerPortType *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerPortTypePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerPortType **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_PowerPortTypePlugin_deserialize_from_cdr_buffer(
        tms_PowerPortType *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_PowerPortTypePlugin_data_to_string(
        const tms_PowerPortType *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_PowerPortTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_PowerPortTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerPortTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerPortTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerPortTypePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerPortType ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_PowerPortTypePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_PowerPortTypePlugin_new(void);

    NDDSUSERDllExport extern void
    tms_PowerPortTypePlugin_delete(struct PRESTypePlugin *);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_CircuitContinuityPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_CircuitContinuityPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_CircuitContinuityPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    tms_CircuitContinuityPluginSupport_print_data(
        const tms_CircuitContinuity *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_PowerSwitchReasonPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_PowerSwitchReasonPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerSwitchReasonPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    tms_PowerSwitchReasonPluginSupport_print_data(
        const tms_PowerSwitchReason *sample, const char *desc, int indent_level);

    #define tms_PowerSwitchStatusPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_PowerSwitchStatusPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_PowerSwitchStatusPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_PowerSwitchStatusPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_PowerSwitchStatusPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_PowerSwitchStatus*
    tms_PowerSwitchStatusPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_PowerSwitchStatus*
    tms_PowerSwitchStatusPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_PowerSwitchStatus*
    tms_PowerSwitchStatusPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerSwitchStatusPluginSupport_copy_data(
        tms_PowerSwitchStatus *out,
        const tms_PowerSwitchStatus *in);

    NDDSUSERDllExport extern void 
    tms_PowerSwitchStatusPluginSupport_destroy_data_w_params(
        tms_PowerSwitchStatus *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_PowerSwitchStatusPluginSupport_destroy_data_ex(
        tms_PowerSwitchStatus *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_PowerSwitchStatusPluginSupport_destroy_data(
        tms_PowerSwitchStatus *sample);

    NDDSUSERDllExport extern void 
    tms_PowerSwitchStatusPluginSupport_print_data(
        const tms_PowerSwitchStatus *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_PowerSwitchStatusPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_PowerSwitchStatusPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_PowerSwitchStatusPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_PowerSwitchStatusPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_PowerSwitchStatusPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerSwitchStatus *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_PowerSwitchStatusPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerSwitchStatus *out,
        const tms_PowerSwitchStatus *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_PowerSwitchStatusPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_PowerSwitchStatus *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_PowerSwitchStatusPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_PowerSwitchStatus *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerSwitchStatusPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerSwitchStatus **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_PowerSwitchStatusPlugin_deserialize_from_cdr_buffer(
        tms_PowerSwitchStatus *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_PowerSwitchStatusPlugin_data_to_string(
        const tms_PowerSwitchStatus *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_PowerSwitchStatusPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_PowerSwitchStatusPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerSwitchStatusPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerSwitchStatusPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerSwitchStatusPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerSwitchStatus ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_PowerSwitchStatusPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_PowerSwitchStatusPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_PowerSwitchStatusPlugin_delete(struct PRESTypePlugin *);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_DesiredCircuitContinuityPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_DesiredCircuitContinuityPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_DesiredCircuitContinuityPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    tms_DesiredCircuitContinuityPluginSupport_print_data(
        const tms_DesiredCircuitContinuity *sample, const char *desc, int indent_level);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct PowerSwitchCommand
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct PowerSwitchCommand)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * PowerSwitchCommand must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct PowerSwitchCommand.
    */
    typedef  class tms_PowerSwitchCommand tms_PowerSwitchCommandKeyHolder;

    #define tms_PowerSwitchCommandPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_PowerSwitchCommandPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_PowerSwitchCommandPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_PowerSwitchCommandPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_PowerSwitchCommandPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_PowerSwitchCommandPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_PowerSwitchCommandPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_PowerSwitchCommand*
    tms_PowerSwitchCommandPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_PowerSwitchCommand*
    tms_PowerSwitchCommandPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_PowerSwitchCommand*
    tms_PowerSwitchCommandPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerSwitchCommandPluginSupport_copy_data(
        tms_PowerSwitchCommand *out,
        const tms_PowerSwitchCommand *in);

    NDDSUSERDllExport extern void 
    tms_PowerSwitchCommandPluginSupport_destroy_data_w_params(
        tms_PowerSwitchCommand *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_PowerSwitchCommandPluginSupport_destroy_data_ex(
        tms_PowerSwitchCommand *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_PowerSwitchCommandPluginSupport_destroy_data(
        tms_PowerSwitchCommand *sample);

    NDDSUSERDllExport extern void 
    tms_PowerSwitchCommandPluginSupport_print_data(
        const tms_PowerSwitchCommand *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_PowerSwitchCommand*
    tms_PowerSwitchCommandPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_PowerSwitchCommand*
    tms_PowerSwitchCommandPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_PowerSwitchCommandPluginSupport_destroy_key_ex(
        tms_PowerSwitchCommandKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_PowerSwitchCommandPluginSupport_destroy_key(
        tms_PowerSwitchCommandKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_PowerSwitchCommandPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_PowerSwitchCommandPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_PowerSwitchCommandPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_PowerSwitchCommandPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_PowerSwitchCommandPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerSwitchCommand *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_PowerSwitchCommandPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerSwitchCommand *out,
        const tms_PowerSwitchCommand *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_PowerSwitchCommandPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_PowerSwitchCommand *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_PowerSwitchCommandPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_PowerSwitchCommand *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerSwitchCommandPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerSwitchCommand **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_PowerSwitchCommandPlugin_deserialize_from_cdr_buffer(
        tms_PowerSwitchCommand *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_PowerSwitchCommandPlugin_data_to_string(
        const tms_PowerSwitchCommand *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_PowerSwitchCommandPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_PowerSwitchCommandPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerSwitchCommandPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerSwitchCommandPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerSwitchCommandPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerSwitchCommand ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerSwitchCommandPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerSwitchCommandKeyHolder *key, 
        const tms_PowerSwitchCommand *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerSwitchCommandPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerSwitchCommand *instance, 
        const tms_PowerSwitchCommandKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerSwitchCommandPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_PowerSwitchCommand *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerSwitchCommandPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_PowerSwitchCommandPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_PowerSwitchCommandPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_PowerSwitchCommandPlugin_delete(struct PRESTypePlugin *);

    #define tms_PowerPortStatusPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_PowerPortStatusPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_PowerPortStatusPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_PowerPortStatusPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_PowerPortStatusPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_PowerPortStatus*
    tms_PowerPortStatusPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_PowerPortStatus*
    tms_PowerPortStatusPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_PowerPortStatus*
    tms_PowerPortStatusPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerPortStatusPluginSupport_copy_data(
        tms_PowerPortStatus *out,
        const tms_PowerPortStatus *in);

    NDDSUSERDllExport extern void 
    tms_PowerPortStatusPluginSupport_destroy_data_w_params(
        tms_PowerPortStatus *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_PowerPortStatusPluginSupport_destroy_data_ex(
        tms_PowerPortStatus *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_PowerPortStatusPluginSupport_destroy_data(
        tms_PowerPortStatus *sample);

    NDDSUSERDllExport extern void 
    tms_PowerPortStatusPluginSupport_print_data(
        const tms_PowerPortStatus *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_PowerPortStatusPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_PowerPortStatusPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_PowerPortStatusPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_PowerPortStatusPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_PowerPortStatusPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerPortStatus *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_PowerPortStatusPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerPortStatus *out,
        const tms_PowerPortStatus *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_PowerPortStatusPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_PowerPortStatus *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_PowerPortStatusPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_PowerPortStatus *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerPortStatusPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerPortStatus **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_PowerPortStatusPlugin_deserialize_from_cdr_buffer(
        tms_PowerPortStatus *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_PowerPortStatusPlugin_data_to_string(
        const tms_PowerPortStatus *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_PowerPortStatusPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_PowerPortStatusPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerPortStatusPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerPortStatusPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerPortStatusPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerPortStatus ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_PowerPortStatusPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_PowerPortStatusPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_PowerPortStatusPlugin_delete(struct PRESTypePlugin *);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_PowerConnectionDetectionTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_PowerConnectionDetectionTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerConnectionDetectionTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    tms_PowerConnectionDetectionTypePluginSupport_print_data(
        const tms_PowerConnectionDetectionType *sample, const char *desc, int indent_level);

    #define tms_PowerConnectionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_PowerConnectionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_PowerConnectionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_PowerConnectionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_PowerConnectionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_PowerConnection*
    tms_PowerConnectionPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_PowerConnection*
    tms_PowerConnectionPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_PowerConnection*
    tms_PowerConnectionPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerConnectionPluginSupport_copy_data(
        tms_PowerConnection *out,
        const tms_PowerConnection *in);

    NDDSUSERDllExport extern void 
    tms_PowerConnectionPluginSupport_destroy_data_w_params(
        tms_PowerConnection *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_PowerConnectionPluginSupport_destroy_data_ex(
        tms_PowerConnection *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_PowerConnectionPluginSupport_destroy_data(
        tms_PowerConnection *sample);

    NDDSUSERDllExport extern void 
    tms_PowerConnectionPluginSupport_print_data(
        const tms_PowerConnection *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_PowerConnectionPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_PowerConnectionPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_PowerConnectionPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_PowerConnectionPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_PowerConnectionPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerConnection *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_PowerConnectionPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerConnection *out,
        const tms_PowerConnection *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_PowerConnectionPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_PowerConnection *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_PowerConnectionPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_PowerConnection *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerConnectionPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerConnection **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_PowerConnectionPlugin_deserialize_from_cdr_buffer(
        tms_PowerConnection *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_PowerConnectionPlugin_data_to_string(
        const tms_PowerConnection *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_PowerConnectionPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_PowerConnectionPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerConnectionPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerConnectionPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerConnectionPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerConnection ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_PowerConnectionPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_PowerConnectionPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_PowerConnectionPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct DevicePowerPortTypes
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct DevicePowerPortTypes)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * DevicePowerPortTypes must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct DevicePowerPortTypes.
    */
    typedef  class tms_DevicePowerPortTypes tms_DevicePowerPortTypesKeyHolder;

    #define tms_DevicePowerPortTypesPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_DevicePowerPortTypesPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_DevicePowerPortTypesPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_DevicePowerPortTypesPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_DevicePowerPortTypesPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_DevicePowerPortTypesPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_DevicePowerPortTypesPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_DevicePowerPortTypes*
    tms_DevicePowerPortTypesPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_DevicePowerPortTypes*
    tms_DevicePowerPortTypesPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_DevicePowerPortTypes*
    tms_DevicePowerPortTypesPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_DevicePowerPortTypesPluginSupport_copy_data(
        tms_DevicePowerPortTypes *out,
        const tms_DevicePowerPortTypes *in);

    NDDSUSERDllExport extern void 
    tms_DevicePowerPortTypesPluginSupport_destroy_data_w_params(
        tms_DevicePowerPortTypes *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_DevicePowerPortTypesPluginSupport_destroy_data_ex(
        tms_DevicePowerPortTypes *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_DevicePowerPortTypesPluginSupport_destroy_data(
        tms_DevicePowerPortTypes *sample);

    NDDSUSERDllExport extern void 
    tms_DevicePowerPortTypesPluginSupport_print_data(
        const tms_DevicePowerPortTypes *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_DevicePowerPortTypes*
    tms_DevicePowerPortTypesPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_DevicePowerPortTypes*
    tms_DevicePowerPortTypesPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_DevicePowerPortTypesPluginSupport_destroy_key_ex(
        tms_DevicePowerPortTypesKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_DevicePowerPortTypesPluginSupport_destroy_key(
        tms_DevicePowerPortTypesKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_DevicePowerPortTypesPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_DevicePowerPortTypesPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_DevicePowerPortTypesPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_DevicePowerPortTypesPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_DevicePowerPortTypesPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_DevicePowerPortTypes *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_DevicePowerPortTypesPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_DevicePowerPortTypes *out,
        const tms_DevicePowerPortTypes *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_DevicePowerPortTypesPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_DevicePowerPortTypes *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_DevicePowerPortTypesPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_DevicePowerPortTypes *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_DevicePowerPortTypesPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_DevicePowerPortTypes **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_DevicePowerPortTypesPlugin_deserialize_from_cdr_buffer(
        tms_DevicePowerPortTypes *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_DevicePowerPortTypesPlugin_data_to_string(
        const tms_DevicePowerPortTypes *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_DevicePowerPortTypesPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_DevicePowerPortTypesPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_DevicePowerPortTypesPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_DevicePowerPortTypesPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_DevicePowerPortTypesPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_DevicePowerPortTypes ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_DevicePowerPortTypesPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_DevicePowerPortTypesKeyHolder *key, 
        const tms_DevicePowerPortTypes *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_DevicePowerPortTypesPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_DevicePowerPortTypes *instance, 
        const tms_DevicePowerPortTypesKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_DevicePowerPortTypesPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_DevicePowerPortTypes *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_DevicePowerPortTypesPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_DevicePowerPortTypesPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_DevicePowerPortTypesPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_DevicePowerPortTypesPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct DevicePowerPortStatuses
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct DevicePowerPortStatuses)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * DevicePowerPortStatuses must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct DevicePowerPortStatuses.
    */
    typedef  class tms_DevicePowerPortStatuses tms_DevicePowerPortStatusesKeyHolder;

    #define tms_DevicePowerPortStatusesPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_DevicePowerPortStatusesPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_DevicePowerPortStatusesPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_DevicePowerPortStatusesPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_DevicePowerPortStatusesPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_DevicePowerPortStatusesPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_DevicePowerPortStatusesPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_DevicePowerPortStatuses*
    tms_DevicePowerPortStatusesPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_DevicePowerPortStatuses*
    tms_DevicePowerPortStatusesPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_DevicePowerPortStatuses*
    tms_DevicePowerPortStatusesPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_DevicePowerPortStatusesPluginSupport_copy_data(
        tms_DevicePowerPortStatuses *out,
        const tms_DevicePowerPortStatuses *in);

    NDDSUSERDllExport extern void 
    tms_DevicePowerPortStatusesPluginSupport_destroy_data_w_params(
        tms_DevicePowerPortStatuses *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_DevicePowerPortStatusesPluginSupport_destroy_data_ex(
        tms_DevicePowerPortStatuses *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_DevicePowerPortStatusesPluginSupport_destroy_data(
        tms_DevicePowerPortStatuses *sample);

    NDDSUSERDllExport extern void 
    tms_DevicePowerPortStatusesPluginSupport_print_data(
        const tms_DevicePowerPortStatuses *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_DevicePowerPortStatuses*
    tms_DevicePowerPortStatusesPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_DevicePowerPortStatuses*
    tms_DevicePowerPortStatusesPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_DevicePowerPortStatusesPluginSupport_destroy_key_ex(
        tms_DevicePowerPortStatusesKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_DevicePowerPortStatusesPluginSupport_destroy_key(
        tms_DevicePowerPortStatusesKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_DevicePowerPortStatusesPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_DevicePowerPortStatusesPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_DevicePowerPortStatusesPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_DevicePowerPortStatusesPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_DevicePowerPortStatusesPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_DevicePowerPortStatuses *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_DevicePowerPortStatusesPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_DevicePowerPortStatuses *out,
        const tms_DevicePowerPortStatuses *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_DevicePowerPortStatusesPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_DevicePowerPortStatuses *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_DevicePowerPortStatusesPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_DevicePowerPortStatuses *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_DevicePowerPortStatusesPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_DevicePowerPortStatuses **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_DevicePowerPortStatusesPlugin_deserialize_from_cdr_buffer(
        tms_DevicePowerPortStatuses *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_DevicePowerPortStatusesPlugin_data_to_string(
        const tms_DevicePowerPortStatuses *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_DevicePowerPortStatusesPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_DevicePowerPortStatusesPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_DevicePowerPortStatusesPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_DevicePowerPortStatusesPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_DevicePowerPortStatusesPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_DevicePowerPortStatuses ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_DevicePowerPortStatusesPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_DevicePowerPortStatusesKeyHolder *key, 
        const tms_DevicePowerPortStatuses *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_DevicePowerPortStatusesPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_DevicePowerPortStatuses *instance, 
        const tms_DevicePowerPortStatusesKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_DevicePowerPortStatusesPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_DevicePowerPortStatuses *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_DevicePowerPortStatusesPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_DevicePowerPortStatusesPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_DevicePowerPortStatusesPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_DevicePowerPortStatusesPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct PowerConnectionList
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct PowerConnectionList)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * PowerConnectionList must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct PowerConnectionList.
    */
    typedef  class tms_PowerConnectionList tms_PowerConnectionListKeyHolder;

    #define tms_PowerConnectionListPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_PowerConnectionListPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_PowerConnectionListPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_PowerConnectionListPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_PowerConnectionListPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_PowerConnectionListPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_PowerConnectionListPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_PowerConnectionList*
    tms_PowerConnectionListPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_PowerConnectionList*
    tms_PowerConnectionListPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_PowerConnectionList*
    tms_PowerConnectionListPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerConnectionListPluginSupport_copy_data(
        tms_PowerConnectionList *out,
        const tms_PowerConnectionList *in);

    NDDSUSERDllExport extern void 
    tms_PowerConnectionListPluginSupport_destroy_data_w_params(
        tms_PowerConnectionList *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_PowerConnectionListPluginSupport_destroy_data_ex(
        tms_PowerConnectionList *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_PowerConnectionListPluginSupport_destroy_data(
        tms_PowerConnectionList *sample);

    NDDSUSERDllExport extern void 
    tms_PowerConnectionListPluginSupport_print_data(
        const tms_PowerConnectionList *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_PowerConnectionList*
    tms_PowerConnectionListPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_PowerConnectionList*
    tms_PowerConnectionListPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_PowerConnectionListPluginSupport_destroy_key_ex(
        tms_PowerConnectionListKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_PowerConnectionListPluginSupport_destroy_key(
        tms_PowerConnectionListKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_PowerConnectionListPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_PowerConnectionListPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_PowerConnectionListPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_PowerConnectionListPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_PowerConnectionListPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerConnectionList *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_PowerConnectionListPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerConnectionList *out,
        const tms_PowerConnectionList *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_PowerConnectionListPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_PowerConnectionList *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_PowerConnectionListPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_PowerConnectionList *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerConnectionListPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerConnectionList **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_PowerConnectionListPlugin_deserialize_from_cdr_buffer(
        tms_PowerConnectionList *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_PowerConnectionListPlugin_data_to_string(
        const tms_PowerConnectionList *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_PowerConnectionListPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_PowerConnectionListPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerConnectionListPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerConnectionListPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerConnectionListPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerConnectionList ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerConnectionListPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerConnectionListKeyHolder *key, 
        const tms_PowerConnectionList *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerConnectionListPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerConnectionList *instance, 
        const tms_PowerConnectionListKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerConnectionListPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_PowerConnectionList *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerConnectionListPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_PowerConnectionListPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_PowerConnectionListPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_PowerConnectionListPlugin_delete(struct PRESTypePlugin *);

    #define tms_GroundingCircuitNumberPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_GroundingCircuitNumberPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_GroundingCircuitNumberPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_GroundingCircuitNumberPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_GroundingCircuitNumberPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_GroundingCircuitNumber*
    tms_GroundingCircuitNumberPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_GroundingCircuitNumber*
    tms_GroundingCircuitNumberPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_GroundingCircuitNumber*
    tms_GroundingCircuitNumberPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_GroundingCircuitNumberPluginSupport_copy_data(
        tms_GroundingCircuitNumber *out,
        const tms_GroundingCircuitNumber *in);

    NDDSUSERDllExport extern void 
    tms_GroundingCircuitNumberPluginSupport_destroy_data_w_params(
        tms_GroundingCircuitNumber *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_GroundingCircuitNumberPluginSupport_destroy_data_ex(
        tms_GroundingCircuitNumber *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_GroundingCircuitNumberPluginSupport_destroy_data(
        tms_GroundingCircuitNumber *sample);

    NDDSUSERDllExport extern void 
    tms_GroundingCircuitNumberPluginSupport_print_data(
        const tms_GroundingCircuitNumber *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    tms_GroundingCircuitNumberPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_GroundingCircuitNumber *out,
        const tms_GroundingCircuitNumber *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_GroundingCircuitNumberPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_GroundingCircuitNumberPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_GroundingCircuitNumberPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_GroundingCircuitNumberPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_GroundingDesignTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_GroundingDesignTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_GroundingDesignTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    tms_GroundingDesignTypePluginSupport_print_data(
        const tms_GroundingDesignType *sample, const char *desc, int indent_level);

    #define tms_GroundingTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_GroundingTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_GroundingTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_GroundingTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_GroundingTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_GroundingType*
    tms_GroundingTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_GroundingType*
    tms_GroundingTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_GroundingType*
    tms_GroundingTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_GroundingTypePluginSupport_copy_data(
        tms_GroundingType *out,
        const tms_GroundingType *in);

    NDDSUSERDllExport extern void 
    tms_GroundingTypePluginSupport_destroy_data_w_params(
        tms_GroundingType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_GroundingTypePluginSupport_destroy_data_ex(
        tms_GroundingType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_GroundingTypePluginSupport_destroy_data(
        tms_GroundingType *sample);

    NDDSUSERDllExport extern void 
    tms_GroundingTypePluginSupport_print_data(
        const tms_GroundingType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_GroundingTypePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_GroundingTypePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_GroundingTypePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_GroundingTypePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_GroundingTypePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_GroundingType *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_GroundingTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_GroundingType *out,
        const tms_GroundingType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_GroundingTypePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_GroundingType *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_GroundingTypePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_GroundingType *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_GroundingTypePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_GroundingType **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_GroundingTypePlugin_deserialize_from_cdr_buffer(
        tms_GroundingType *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_GroundingTypePlugin_data_to_string(
        const tms_GroundingType *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_GroundingTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_GroundingTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_GroundingTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_GroundingTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_GroundingTypePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_GroundingType ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_GroundingTypePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_GroundingTypePlugin_new(void);

    NDDSUSERDllExport extern void
    tms_GroundingTypePlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct DeviceGroundingType
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct DeviceGroundingType)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * DeviceGroundingType must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct DeviceGroundingType.
    */
    typedef  class tms_DeviceGroundingType tms_DeviceGroundingTypeKeyHolder;

    #define tms_DeviceGroundingTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_DeviceGroundingTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_DeviceGroundingTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_DeviceGroundingTypePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_DeviceGroundingTypePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_DeviceGroundingTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_DeviceGroundingTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_DeviceGroundingType*
    tms_DeviceGroundingTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_DeviceGroundingType*
    tms_DeviceGroundingTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_DeviceGroundingType*
    tms_DeviceGroundingTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceGroundingTypePluginSupport_copy_data(
        tms_DeviceGroundingType *out,
        const tms_DeviceGroundingType *in);

    NDDSUSERDllExport extern void 
    tms_DeviceGroundingTypePluginSupport_destroy_data_w_params(
        tms_DeviceGroundingType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_DeviceGroundingTypePluginSupport_destroy_data_ex(
        tms_DeviceGroundingType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_DeviceGroundingTypePluginSupport_destroy_data(
        tms_DeviceGroundingType *sample);

    NDDSUSERDllExport extern void 
    tms_DeviceGroundingTypePluginSupport_print_data(
        const tms_DeviceGroundingType *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_DeviceGroundingType*
    tms_DeviceGroundingTypePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_DeviceGroundingType*
    tms_DeviceGroundingTypePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_DeviceGroundingTypePluginSupport_destroy_key_ex(
        tms_DeviceGroundingTypeKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_DeviceGroundingTypePluginSupport_destroy_key(
        tms_DeviceGroundingTypeKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_DeviceGroundingTypePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_DeviceGroundingTypePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_DeviceGroundingTypePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_DeviceGroundingTypePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_DeviceGroundingTypePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceGroundingType *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceGroundingTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceGroundingType *out,
        const tms_DeviceGroundingType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_DeviceGroundingTypePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_DeviceGroundingType *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_DeviceGroundingTypePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_DeviceGroundingType *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceGroundingTypePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceGroundingType **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_DeviceGroundingTypePlugin_deserialize_from_cdr_buffer(
        tms_DeviceGroundingType *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_DeviceGroundingTypePlugin_data_to_string(
        const tms_DeviceGroundingType *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_DeviceGroundingTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_DeviceGroundingTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_DeviceGroundingTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_DeviceGroundingTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceGroundingTypePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceGroundingType ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceGroundingTypePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceGroundingTypeKeyHolder *key, 
        const tms_DeviceGroundingType *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceGroundingTypePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceGroundingType *instance, 
        const tms_DeviceGroundingTypeKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceGroundingTypePlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_DeviceGroundingType *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceGroundingTypePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_DeviceGroundingTypePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_DeviceGroundingTypePlugin_new(void);

    NDDSUSERDllExport extern void
    tms_DeviceGroundingTypePlugin_delete(struct PRESTypePlugin *);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_GroundFaultDetectionPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_GroundFaultDetectionPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_GroundFaultDetectionPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    tms_GroundFaultDetectionPluginSupport_print_data(
        const tms_GroundFaultDetection *sample, const char *desc, int indent_level);

    #define tms_GroundingStatusPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_GroundingStatusPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_GroundingStatusPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_GroundingStatusPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_GroundingStatusPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_GroundingStatus*
    tms_GroundingStatusPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_GroundingStatus*
    tms_GroundingStatusPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_GroundingStatus*
    tms_GroundingStatusPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_GroundingStatusPluginSupport_copy_data(
        tms_GroundingStatus *out,
        const tms_GroundingStatus *in);

    NDDSUSERDllExport extern void 
    tms_GroundingStatusPluginSupport_destroy_data_w_params(
        tms_GroundingStatus *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_GroundingStatusPluginSupport_destroy_data_ex(
        tms_GroundingStatus *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_GroundingStatusPluginSupport_destroy_data(
        tms_GroundingStatus *sample);

    NDDSUSERDllExport extern void 
    tms_GroundingStatusPluginSupport_print_data(
        const tms_GroundingStatus *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_GroundingStatusPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_GroundingStatusPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_GroundingStatusPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_GroundingStatusPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_GroundingStatusPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_GroundingStatus *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_GroundingStatusPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_GroundingStatus *out,
        const tms_GroundingStatus *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_GroundingStatusPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_GroundingStatus *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_GroundingStatusPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_GroundingStatus *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_GroundingStatusPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_GroundingStatus **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_GroundingStatusPlugin_deserialize_from_cdr_buffer(
        tms_GroundingStatus *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_GroundingStatusPlugin_data_to_string(
        const tms_GroundingStatus *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_GroundingStatusPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_GroundingStatusPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_GroundingStatusPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_GroundingStatusPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_GroundingStatusPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_GroundingStatus ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_GroundingStatusPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_GroundingStatusPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_GroundingStatusPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct DeviceGroundingStatus
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct DeviceGroundingStatus)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * DeviceGroundingStatus must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct DeviceGroundingStatus.
    */
    typedef  class tms_DeviceGroundingStatus tms_DeviceGroundingStatusKeyHolder;

    #define tms_DeviceGroundingStatusPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_DeviceGroundingStatusPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_DeviceGroundingStatusPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_DeviceGroundingStatusPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_DeviceGroundingStatusPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_DeviceGroundingStatusPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_DeviceGroundingStatusPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_DeviceGroundingStatus*
    tms_DeviceGroundingStatusPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_DeviceGroundingStatus*
    tms_DeviceGroundingStatusPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_DeviceGroundingStatus*
    tms_DeviceGroundingStatusPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceGroundingStatusPluginSupport_copy_data(
        tms_DeviceGroundingStatus *out,
        const tms_DeviceGroundingStatus *in);

    NDDSUSERDllExport extern void 
    tms_DeviceGroundingStatusPluginSupport_destroy_data_w_params(
        tms_DeviceGroundingStatus *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_DeviceGroundingStatusPluginSupport_destroy_data_ex(
        tms_DeviceGroundingStatus *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_DeviceGroundingStatusPluginSupport_destroy_data(
        tms_DeviceGroundingStatus *sample);

    NDDSUSERDllExport extern void 
    tms_DeviceGroundingStatusPluginSupport_print_data(
        const tms_DeviceGroundingStatus *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_DeviceGroundingStatus*
    tms_DeviceGroundingStatusPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_DeviceGroundingStatus*
    tms_DeviceGroundingStatusPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_DeviceGroundingStatusPluginSupport_destroy_key_ex(
        tms_DeviceGroundingStatusKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_DeviceGroundingStatusPluginSupport_destroy_key(
        tms_DeviceGroundingStatusKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_DeviceGroundingStatusPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_DeviceGroundingStatusPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_DeviceGroundingStatusPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_DeviceGroundingStatusPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_DeviceGroundingStatusPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceGroundingStatus *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceGroundingStatusPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceGroundingStatus *out,
        const tms_DeviceGroundingStatus *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_DeviceGroundingStatusPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_DeviceGroundingStatus *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_DeviceGroundingStatusPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_DeviceGroundingStatus *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceGroundingStatusPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceGroundingStatus **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_DeviceGroundingStatusPlugin_deserialize_from_cdr_buffer(
        tms_DeviceGroundingStatus *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_DeviceGroundingStatusPlugin_data_to_string(
        const tms_DeviceGroundingStatus *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_DeviceGroundingStatusPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_DeviceGroundingStatusPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_DeviceGroundingStatusPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_DeviceGroundingStatusPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceGroundingStatusPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceGroundingStatus ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceGroundingStatusPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceGroundingStatusKeyHolder *key, 
        const tms_DeviceGroundingStatus *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceGroundingStatusPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceGroundingStatus *instance, 
        const tms_DeviceGroundingStatusKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceGroundingStatusPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_DeviceGroundingStatus *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceGroundingStatusPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_DeviceGroundingStatusPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_DeviceGroundingStatusPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_DeviceGroundingStatusPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct GroundingCommand
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct GroundingCommand)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * GroundingCommand must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct GroundingCommand.
    */
    typedef  class tms_GroundingCommand tms_GroundingCommandKeyHolder;

    #define tms_GroundingCommandPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_GroundingCommandPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_GroundingCommandPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_GroundingCommandPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_GroundingCommandPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_GroundingCommandPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_GroundingCommandPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_GroundingCommand*
    tms_GroundingCommandPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_GroundingCommand*
    tms_GroundingCommandPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_GroundingCommand*
    tms_GroundingCommandPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_GroundingCommandPluginSupport_copy_data(
        tms_GroundingCommand *out,
        const tms_GroundingCommand *in);

    NDDSUSERDllExport extern void 
    tms_GroundingCommandPluginSupport_destroy_data_w_params(
        tms_GroundingCommand *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_GroundingCommandPluginSupport_destroy_data_ex(
        tms_GroundingCommand *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_GroundingCommandPluginSupport_destroy_data(
        tms_GroundingCommand *sample);

    NDDSUSERDllExport extern void 
    tms_GroundingCommandPluginSupport_print_data(
        const tms_GroundingCommand *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_GroundingCommand*
    tms_GroundingCommandPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_GroundingCommand*
    tms_GroundingCommandPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_GroundingCommandPluginSupport_destroy_key_ex(
        tms_GroundingCommandKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_GroundingCommandPluginSupport_destroy_key(
        tms_GroundingCommandKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_GroundingCommandPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_GroundingCommandPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_GroundingCommandPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_GroundingCommandPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_GroundingCommandPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_GroundingCommand *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_GroundingCommandPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_GroundingCommand *out,
        const tms_GroundingCommand *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_GroundingCommandPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_GroundingCommand *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_GroundingCommandPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_GroundingCommand *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_GroundingCommandPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_GroundingCommand **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_GroundingCommandPlugin_deserialize_from_cdr_buffer(
        tms_GroundingCommand *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_GroundingCommandPlugin_data_to_string(
        const tms_GroundingCommand *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_GroundingCommandPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_GroundingCommandPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_GroundingCommandPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_GroundingCommandPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_GroundingCommandPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_GroundingCommand ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_GroundingCommandPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_GroundingCommandKeyHolder *key, 
        const tms_GroundingCommand *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_GroundingCommandPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_GroundingCommand *instance, 
        const tms_GroundingCommandKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_GroundingCommandPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_GroundingCommand *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_GroundingCommandPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_GroundingCommandPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_GroundingCommandPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_GroundingCommandPlugin_delete(struct PRESTypePlugin *);

    #define tms_PowerMeasurementLinePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_PowerMeasurementLinePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_PowerMeasurementLinePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_PowerMeasurementLinePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_PowerMeasurementLinePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_PowerMeasurementLine*
    tms_PowerMeasurementLinePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_PowerMeasurementLine*
    tms_PowerMeasurementLinePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_PowerMeasurementLine*
    tms_PowerMeasurementLinePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerMeasurementLinePluginSupport_copy_data(
        tms_PowerMeasurementLine *out,
        const tms_PowerMeasurementLine *in);

    NDDSUSERDllExport extern void 
    tms_PowerMeasurementLinePluginSupport_destroy_data_w_params(
        tms_PowerMeasurementLine *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_PowerMeasurementLinePluginSupport_destroy_data_ex(
        tms_PowerMeasurementLine *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_PowerMeasurementLinePluginSupport_destroy_data(
        tms_PowerMeasurementLine *sample);

    NDDSUSERDllExport extern void 
    tms_PowerMeasurementLinePluginSupport_print_data(
        const tms_PowerMeasurementLine *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_PowerMeasurementLinePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_PowerMeasurementLinePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_PowerMeasurementLinePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_PowerMeasurementLinePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_PowerMeasurementLinePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerMeasurementLine *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_PowerMeasurementLinePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerMeasurementLine *out,
        const tms_PowerMeasurementLine *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_PowerMeasurementLinePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_PowerMeasurementLine *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_PowerMeasurementLinePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_PowerMeasurementLine *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerMeasurementLinePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerMeasurementLine **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_PowerMeasurementLinePlugin_deserialize_from_cdr_buffer(
        tms_PowerMeasurementLine *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_PowerMeasurementLinePlugin_data_to_string(
        const tms_PowerMeasurementLine *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_PowerMeasurementLinePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_PowerMeasurementLinePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerMeasurementLinePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerMeasurementLinePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerMeasurementLinePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerMeasurementLine ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_PowerMeasurementLinePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_PowerMeasurementLinePlugin_new(void);

    NDDSUSERDllExport extern void
    tms_PowerMeasurementLinePlugin_delete(struct PRESTypePlugin *);

    #define tms_PowerMeasurementWyePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_PowerMeasurementWyePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_PowerMeasurementWyePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_PowerMeasurementWyePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_PowerMeasurementWyePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_PowerMeasurementWye*
    tms_PowerMeasurementWyePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_PowerMeasurementWye*
    tms_PowerMeasurementWyePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_PowerMeasurementWye*
    tms_PowerMeasurementWyePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerMeasurementWyePluginSupport_copy_data(
        tms_PowerMeasurementWye *out,
        const tms_PowerMeasurementWye *in);

    NDDSUSERDllExport extern void 
    tms_PowerMeasurementWyePluginSupport_destroy_data_w_params(
        tms_PowerMeasurementWye *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_PowerMeasurementWyePluginSupport_destroy_data_ex(
        tms_PowerMeasurementWye *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_PowerMeasurementWyePluginSupport_destroy_data(
        tms_PowerMeasurementWye *sample);

    NDDSUSERDllExport extern void 
    tms_PowerMeasurementWyePluginSupport_print_data(
        const tms_PowerMeasurementWye *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_PowerMeasurementWyePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_PowerMeasurementWyePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_PowerMeasurementWyePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_PowerMeasurementWyePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_PowerMeasurementWyePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerMeasurementWye *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_PowerMeasurementWyePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerMeasurementWye *out,
        const tms_PowerMeasurementWye *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_PowerMeasurementWyePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_PowerMeasurementWye *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_PowerMeasurementWyePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_PowerMeasurementWye *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerMeasurementWyePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerMeasurementWye **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_PowerMeasurementWyePlugin_deserialize_from_cdr_buffer(
        tms_PowerMeasurementWye *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_PowerMeasurementWyePlugin_data_to_string(
        const tms_PowerMeasurementWye *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_PowerMeasurementWyePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_PowerMeasurementWyePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerMeasurementWyePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerMeasurementWyePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerMeasurementWyePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerMeasurementWye ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_PowerMeasurementWyePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_PowerMeasurementWyePlugin_new(void);

    NDDSUSERDllExport extern void
    tms_PowerMeasurementWyePlugin_delete(struct PRESTypePlugin *);

    #define tms_PowerPortMeasurementPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_PowerPortMeasurementPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_PowerPortMeasurementPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_PowerPortMeasurementPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_PowerPortMeasurementPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_PowerPortMeasurement*
    tms_PowerPortMeasurementPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_PowerPortMeasurement*
    tms_PowerPortMeasurementPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_PowerPortMeasurement*
    tms_PowerPortMeasurementPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerPortMeasurementPluginSupport_copy_data(
        tms_PowerPortMeasurement *out,
        const tms_PowerPortMeasurement *in);

    NDDSUSERDllExport extern void 
    tms_PowerPortMeasurementPluginSupport_destroy_data_w_params(
        tms_PowerPortMeasurement *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_PowerPortMeasurementPluginSupport_destroy_data_ex(
        tms_PowerPortMeasurement *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_PowerPortMeasurementPluginSupport_destroy_data(
        tms_PowerPortMeasurement *sample);

    NDDSUSERDllExport extern void 
    tms_PowerPortMeasurementPluginSupport_print_data(
        const tms_PowerPortMeasurement *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_PowerPortMeasurementPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_PowerPortMeasurementPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_PowerPortMeasurementPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_PowerPortMeasurementPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_PowerPortMeasurementPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerPortMeasurement *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_PowerPortMeasurementPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerPortMeasurement *out,
        const tms_PowerPortMeasurement *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_PowerPortMeasurementPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_PowerPortMeasurement *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_PowerPortMeasurementPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_PowerPortMeasurement *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerPortMeasurementPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerPortMeasurement **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_PowerPortMeasurementPlugin_deserialize_from_cdr_buffer(
        tms_PowerPortMeasurement *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_PowerPortMeasurementPlugin_data_to_string(
        const tms_PowerPortMeasurement *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_PowerPortMeasurementPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_PowerPortMeasurementPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerPortMeasurementPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerPortMeasurementPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerPortMeasurementPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerPortMeasurement ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_PowerPortMeasurementPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_PowerPortMeasurementPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_PowerPortMeasurementPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct DevicePowerMeasurements
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct DevicePowerMeasurements)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * DevicePowerMeasurements must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct DevicePowerMeasurements.
    */
    typedef  class tms_DevicePowerMeasurements tms_DevicePowerMeasurementsKeyHolder;

    #define tms_DevicePowerMeasurementsPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_DevicePowerMeasurementsPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_DevicePowerMeasurementsPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_DevicePowerMeasurementsPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_DevicePowerMeasurementsPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_DevicePowerMeasurementsPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_DevicePowerMeasurementsPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_DevicePowerMeasurements*
    tms_DevicePowerMeasurementsPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_DevicePowerMeasurements*
    tms_DevicePowerMeasurementsPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_DevicePowerMeasurements*
    tms_DevicePowerMeasurementsPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_DevicePowerMeasurementsPluginSupport_copy_data(
        tms_DevicePowerMeasurements *out,
        const tms_DevicePowerMeasurements *in);

    NDDSUSERDllExport extern void 
    tms_DevicePowerMeasurementsPluginSupport_destroy_data_w_params(
        tms_DevicePowerMeasurements *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_DevicePowerMeasurementsPluginSupport_destroy_data_ex(
        tms_DevicePowerMeasurements *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_DevicePowerMeasurementsPluginSupport_destroy_data(
        tms_DevicePowerMeasurements *sample);

    NDDSUSERDllExport extern void 
    tms_DevicePowerMeasurementsPluginSupport_print_data(
        const tms_DevicePowerMeasurements *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_DevicePowerMeasurements*
    tms_DevicePowerMeasurementsPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_DevicePowerMeasurements*
    tms_DevicePowerMeasurementsPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_DevicePowerMeasurementsPluginSupport_destroy_key_ex(
        tms_DevicePowerMeasurementsKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_DevicePowerMeasurementsPluginSupport_destroy_key(
        tms_DevicePowerMeasurementsKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_DevicePowerMeasurementsPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_DevicePowerMeasurementsPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_DevicePowerMeasurementsPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_DevicePowerMeasurementsPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_DevicePowerMeasurementsPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_DevicePowerMeasurements *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_DevicePowerMeasurementsPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_DevicePowerMeasurements *out,
        const tms_DevicePowerMeasurements *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_DevicePowerMeasurementsPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_DevicePowerMeasurements *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_DevicePowerMeasurementsPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_DevicePowerMeasurements *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_DevicePowerMeasurementsPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_DevicePowerMeasurements **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_DevicePowerMeasurementsPlugin_deserialize_from_cdr_buffer(
        tms_DevicePowerMeasurements *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_DevicePowerMeasurementsPlugin_data_to_string(
        const tms_DevicePowerMeasurements *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_DevicePowerMeasurementsPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_DevicePowerMeasurementsPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_DevicePowerMeasurementsPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_DevicePowerMeasurementsPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_DevicePowerMeasurementsPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_DevicePowerMeasurements ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_DevicePowerMeasurementsPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_DevicePowerMeasurementsKeyHolder *key, 
        const tms_DevicePowerMeasurements *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_DevicePowerMeasurementsPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_DevicePowerMeasurements *instance, 
        const tms_DevicePowerMeasurementsKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_DevicePowerMeasurementsPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_DevicePowerMeasurements *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_DevicePowerMeasurementsPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_DevicePowerMeasurementsPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_DevicePowerMeasurementsPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_DevicePowerMeasurementsPlugin_delete(struct PRESTypePlugin *);

    #define tms_NicknameStringPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_NicknameStringPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_NicknameStringPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_NicknameStringPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_NicknameStringPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_NicknameString*
    tms_NicknameStringPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_NicknameString*
    tms_NicknameStringPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_NicknameString*
    tms_NicknameStringPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_NicknameStringPluginSupport_copy_data(
        tms_NicknameString *out,
        const tms_NicknameString *in);

    NDDSUSERDllExport extern void 
    tms_NicknameStringPluginSupport_destroy_data_w_params(
        tms_NicknameString *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_NicknameStringPluginSupport_destroy_data_ex(
        tms_NicknameString *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_NicknameStringPluginSupport_destroy_data(
        tms_NicknameString *sample);

    NDDSUSERDllExport extern void 
    tms_NicknameStringPluginSupport_print_data(
        const tms_NicknameString *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    tms_NicknameStringPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_NicknameString *out,
        const tms_NicknameString *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_NicknameStringPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_NicknameStringPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_NicknameStringPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_NicknameStringPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct FingerprintNickname
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct FingerprintNickname)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * FingerprintNickname must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct FingerprintNickname.
    */
    typedef  class tms_FingerprintNickname tms_FingerprintNicknameKeyHolder;

    #define tms_FingerprintNicknamePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_FingerprintNicknamePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_FingerprintNicknamePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_FingerprintNicknamePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_FingerprintNicknamePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_FingerprintNicknamePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_FingerprintNicknamePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_FingerprintNickname*
    tms_FingerprintNicknamePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_FingerprintNickname*
    tms_FingerprintNicknamePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_FingerprintNickname*
    tms_FingerprintNicknamePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_FingerprintNicknamePluginSupport_copy_data(
        tms_FingerprintNickname *out,
        const tms_FingerprintNickname *in);

    NDDSUSERDllExport extern void 
    tms_FingerprintNicknamePluginSupport_destroy_data_w_params(
        tms_FingerprintNickname *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_FingerprintNicknamePluginSupport_destroy_data_ex(
        tms_FingerprintNickname *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_FingerprintNicknamePluginSupport_destroy_data(
        tms_FingerprintNickname *sample);

    NDDSUSERDllExport extern void 
    tms_FingerprintNicknamePluginSupport_print_data(
        const tms_FingerprintNickname *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_FingerprintNickname*
    tms_FingerprintNicknamePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_FingerprintNickname*
    tms_FingerprintNicknamePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_FingerprintNicknamePluginSupport_destroy_key_ex(
        tms_FingerprintNicknameKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_FingerprintNicknamePluginSupport_destroy_key(
        tms_FingerprintNicknameKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_FingerprintNicknamePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_FingerprintNicknamePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_FingerprintNicknamePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_FingerprintNicknamePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_FingerprintNicknamePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_FingerprintNickname *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_FingerprintNicknamePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_FingerprintNickname *out,
        const tms_FingerprintNickname *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_FingerprintNicknamePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_FingerprintNickname *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_FingerprintNicknamePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_FingerprintNickname *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_FingerprintNicknamePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_FingerprintNickname **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_FingerprintNicknamePlugin_deserialize_from_cdr_buffer(
        tms_FingerprintNickname *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_FingerprintNicknamePlugin_data_to_string(
        const tms_FingerprintNickname *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_FingerprintNicknamePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_FingerprintNicknamePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_FingerprintNicknamePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_FingerprintNicknamePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_FingerprintNicknamePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_FingerprintNickname ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_FingerprintNicknamePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_FingerprintNicknameKeyHolder *key, 
        const tms_FingerprintNickname *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_FingerprintNicknamePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_FingerprintNickname *instance, 
        const tms_FingerprintNicknameKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_FingerprintNicknamePlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_FingerprintNickname *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_FingerprintNicknamePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_FingerprintNicknamePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_FingerprintNicknamePlugin_new(void);

    NDDSUSERDllExport extern void
    tms_FingerprintNicknamePlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct ChangeNicknameRequest
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct ChangeNicknameRequest)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * ChangeNicknameRequest must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct ChangeNicknameRequest.
    */
    typedef  class tms_ChangeNicknameRequest tms_ChangeNicknameRequestKeyHolder;

    #define tms_ChangeNicknameRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_ChangeNicknameRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_ChangeNicknameRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_ChangeNicknameRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_ChangeNicknameRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_ChangeNicknameRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_ChangeNicknameRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_ChangeNicknameRequest*
    tms_ChangeNicknameRequestPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_ChangeNicknameRequest*
    tms_ChangeNicknameRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_ChangeNicknameRequest*
    tms_ChangeNicknameRequestPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_ChangeNicknameRequestPluginSupport_copy_data(
        tms_ChangeNicknameRequest *out,
        const tms_ChangeNicknameRequest *in);

    NDDSUSERDllExport extern void 
    tms_ChangeNicknameRequestPluginSupport_destroy_data_w_params(
        tms_ChangeNicknameRequest *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_ChangeNicknameRequestPluginSupport_destroy_data_ex(
        tms_ChangeNicknameRequest *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_ChangeNicknameRequestPluginSupport_destroy_data(
        tms_ChangeNicknameRequest *sample);

    NDDSUSERDllExport extern void 
    tms_ChangeNicknameRequestPluginSupport_print_data(
        const tms_ChangeNicknameRequest *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_ChangeNicknameRequest*
    tms_ChangeNicknameRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_ChangeNicknameRequest*
    tms_ChangeNicknameRequestPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_ChangeNicknameRequestPluginSupport_destroy_key_ex(
        tms_ChangeNicknameRequestKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_ChangeNicknameRequestPluginSupport_destroy_key(
        tms_ChangeNicknameRequestKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_ChangeNicknameRequestPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_ChangeNicknameRequestPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_ChangeNicknameRequestPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_ChangeNicknameRequestPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_ChangeNicknameRequestPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_ChangeNicknameRequest *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_ChangeNicknameRequestPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_ChangeNicknameRequest *out,
        const tms_ChangeNicknameRequest *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_ChangeNicknameRequestPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_ChangeNicknameRequest *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_ChangeNicknameRequestPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_ChangeNicknameRequest *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_ChangeNicknameRequestPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_ChangeNicknameRequest **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_ChangeNicknameRequestPlugin_deserialize_from_cdr_buffer(
        tms_ChangeNicknameRequest *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_ChangeNicknameRequestPlugin_data_to_string(
        const tms_ChangeNicknameRequest *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_ChangeNicknameRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_ChangeNicknameRequestPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_ChangeNicknameRequestPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_ChangeNicknameRequestPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_ChangeNicknameRequestPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_ChangeNicknameRequest ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_ChangeNicknameRequestPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_ChangeNicknameRequestKeyHolder *key, 
        const tms_ChangeNicknameRequest *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_ChangeNicknameRequestPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_ChangeNicknameRequest *instance, 
        const tms_ChangeNicknameRequestKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_ChangeNicknameRequestPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_ChangeNicknameRequest *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_ChangeNicknameRequestPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_ChangeNicknameRequestPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_ChangeNicknameRequestPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_ChangeNicknameRequestPlugin_delete(struct PRESTypePlugin *);

    #define tms_DeviceIconPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_DeviceIconPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_DeviceIconPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_DeviceIconPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_DeviceIconPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_DeviceIcon*
    tms_DeviceIconPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_DeviceIcon*
    tms_DeviceIconPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_DeviceIcon*
    tms_DeviceIconPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceIconPluginSupport_copy_data(
        tms_DeviceIcon *out,
        const tms_DeviceIcon *in);

    NDDSUSERDllExport extern void 
    tms_DeviceIconPluginSupport_destroy_data_w_params(
        tms_DeviceIcon *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_DeviceIconPluginSupport_destroy_data_ex(
        tms_DeviceIcon *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_DeviceIconPluginSupport_destroy_data(
        tms_DeviceIcon *sample);

    NDDSUSERDllExport extern void 
    tms_DeviceIconPluginSupport_print_data(
        const tms_DeviceIcon *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_DeviceIconPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_DeviceIconPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_DeviceIconPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_DeviceIconPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_DeviceIconPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceIcon *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceIconPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceIcon *out,
        const tms_DeviceIcon *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_DeviceIconPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_DeviceIcon *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_DeviceIconPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_DeviceIcon *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceIconPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceIcon **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_DeviceIconPlugin_deserialize_from_cdr_buffer(
        tms_DeviceIcon *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_DeviceIconPlugin_data_to_string(
        const tms_DeviceIcon *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_DeviceIconPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_DeviceIconPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_DeviceIconPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_DeviceIconPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceIconPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceIcon ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_DeviceIconPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_DeviceIconPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_DeviceIconPlugin_delete(struct PRESTypePlugin *);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_OperatingModePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_OperatingModePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_OperatingModePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    tms_OperatingModePluginSupport_print_data(
        const tms_OperatingMode *sample, const char *desc, int indent_level);

    #define tms_PriorityValuePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_PriorityValuePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_PriorityValuePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_PriorityValuePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_PriorityValuePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_PriorityValue*
    tms_PriorityValuePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_PriorityValue*
    tms_PriorityValuePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_PriorityValue*
    tms_PriorityValuePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_PriorityValuePluginSupport_copy_data(
        tms_PriorityValue *out,
        const tms_PriorityValue *in);

    NDDSUSERDllExport extern void 
    tms_PriorityValuePluginSupport_destroy_data_w_params(
        tms_PriorityValue *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_PriorityValuePluginSupport_destroy_data_ex(
        tms_PriorityValue *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_PriorityValuePluginSupport_destroy_data(
        tms_PriorityValue *sample);

    NDDSUSERDllExport extern void 
    tms_PriorityValuePluginSupport_print_data(
        const tms_PriorityValue *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    tms_PriorityValuePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_PriorityValue *out,
        const tms_PriorityValue *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_PriorityValuePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_PriorityValuePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_PriorityValuePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_PriorityValuePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define tms_GuidPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_GuidPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_GuidPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_GuidPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_GuidPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_Guid*
    tms_GuidPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_Guid*
    tms_GuidPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_Guid*
    tms_GuidPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_GuidPluginSupport_copy_data(
        tms_Guid *out,
        const tms_Guid *in);

    NDDSUSERDllExport extern void 
    tms_GuidPluginSupport_destroy_data_w_params(
        tms_Guid *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_GuidPluginSupport_destroy_data_ex(
        tms_Guid *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_GuidPluginSupport_destroy_data(
        tms_Guid *sample);

    NDDSUSERDllExport extern void 
    tms_GuidPluginSupport_print_data(
        const tms_Guid *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    tms_GuidPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_Guid *out,
        const tms_Guid *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_GuidPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_GuidPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_GuidPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_GuidPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define tms_DurationPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_DurationPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_DurationPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_DurationPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_DurationPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_Duration*
    tms_DurationPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_Duration*
    tms_DurationPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_Duration*
    tms_DurationPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_DurationPluginSupport_copy_data(
        tms_Duration *out,
        const tms_Duration *in);

    NDDSUSERDllExport extern void 
    tms_DurationPluginSupport_destroy_data_w_params(
        tms_Duration *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_DurationPluginSupport_destroy_data_ex(
        tms_Duration *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_DurationPluginSupport_destroy_data(
        tms_Duration *sample);

    NDDSUSERDllExport extern void 
    tms_DurationPluginSupport_print_data(
        const tms_Duration *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_DurationPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_DurationPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_DurationPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_DurationPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_DurationPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_Duration *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_DurationPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_Duration *out,
        const tms_Duration *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_DurationPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_Duration *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_DurationPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_Duration *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_DurationPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_Duration **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_DurationPlugin_deserialize_from_cdr_buffer(
        tms_Duration *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_DurationPlugin_data_to_string(
        const tms_Duration *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_DurationPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_DurationPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_DurationPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_DurationPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_DurationPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_Duration ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_DurationPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_DurationPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_DurationPlugin_delete(struct PRESTypePlugin *);

    #define tms_MicrogridIntentPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_MicrogridIntentPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_MicrogridIntentPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_MicrogridIntentPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_MicrogridIntentPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_MicrogridIntent*
    tms_MicrogridIntentPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_MicrogridIntent*
    tms_MicrogridIntentPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_MicrogridIntent*
    tms_MicrogridIntentPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_MicrogridIntentPluginSupport_copy_data(
        tms_MicrogridIntent *out,
        const tms_MicrogridIntent *in);

    NDDSUSERDllExport extern void 
    tms_MicrogridIntentPluginSupport_destroy_data_w_params(
        tms_MicrogridIntent *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_MicrogridIntentPluginSupport_destroy_data_ex(
        tms_MicrogridIntent *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_MicrogridIntentPluginSupport_destroy_data(
        tms_MicrogridIntent *sample);

    NDDSUSERDllExport extern void 
    tms_MicrogridIntentPluginSupport_print_data(
        const tms_MicrogridIntent *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_MicrogridIntentPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_MicrogridIntentPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_MicrogridIntentPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_MicrogridIntentPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_MicrogridIntentPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_MicrogridIntent *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_MicrogridIntentPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_MicrogridIntent *out,
        const tms_MicrogridIntent *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_MicrogridIntentPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_MicrogridIntent *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_MicrogridIntentPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_MicrogridIntent *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_MicrogridIntentPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_MicrogridIntent **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_MicrogridIntentPlugin_deserialize_from_cdr_buffer(
        tms_MicrogridIntent *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_MicrogridIntentPlugin_data_to_string(
        const tms_MicrogridIntent *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_MicrogridIntentPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_MicrogridIntentPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_MicrogridIntentPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_MicrogridIntentPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_MicrogridIntentPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_MicrogridIntent ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_MicrogridIntentPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_MicrogridIntentPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_MicrogridIntentPlugin_delete(struct PRESTypePlugin *);

    #define tms_OverCurrentDisconnectPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_OverCurrentDisconnectPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_OverCurrentDisconnectPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_OverCurrentDisconnectPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_OverCurrentDisconnectPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_OverCurrentDisconnect*
    tms_OverCurrentDisconnectPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_OverCurrentDisconnect*
    tms_OverCurrentDisconnectPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_OverCurrentDisconnect*
    tms_OverCurrentDisconnectPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_OverCurrentDisconnectPluginSupport_copy_data(
        tms_OverCurrentDisconnect *out,
        const tms_OverCurrentDisconnect *in);

    NDDSUSERDllExport extern void 
    tms_OverCurrentDisconnectPluginSupport_destroy_data_w_params(
        tms_OverCurrentDisconnect *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_OverCurrentDisconnectPluginSupport_destroy_data_ex(
        tms_OverCurrentDisconnect *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_OverCurrentDisconnectPluginSupport_destroy_data(
        tms_OverCurrentDisconnect *sample);

    NDDSUSERDllExport extern void 
    tms_OverCurrentDisconnectPluginSupport_print_data(
        const tms_OverCurrentDisconnect *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_OverCurrentDisconnectPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_OverCurrentDisconnectPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_OverCurrentDisconnectPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_OverCurrentDisconnectPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_OverCurrentDisconnectPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_OverCurrentDisconnect *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_OverCurrentDisconnectPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_OverCurrentDisconnect *out,
        const tms_OverCurrentDisconnect *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_OverCurrentDisconnectPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_OverCurrentDisconnect *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_OverCurrentDisconnectPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_OverCurrentDisconnect *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_OverCurrentDisconnectPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_OverCurrentDisconnect **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_OverCurrentDisconnectPlugin_deserialize_from_cdr_buffer(
        tms_OverCurrentDisconnect *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_OverCurrentDisconnectPlugin_data_to_string(
        const tms_OverCurrentDisconnect *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_OverCurrentDisconnectPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_OverCurrentDisconnectPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_OverCurrentDisconnectPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_OverCurrentDisconnectPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_OverCurrentDisconnectPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_OverCurrentDisconnect ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_OverCurrentDisconnectPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_OverCurrentDisconnectPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_OverCurrentDisconnectPlugin_delete(struct PRESTypePlugin *);

    #define tms_OverEnergyDisconnectPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_OverEnergyDisconnectPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_OverEnergyDisconnectPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_OverEnergyDisconnectPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_OverEnergyDisconnectPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_OverEnergyDisconnect*
    tms_OverEnergyDisconnectPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_OverEnergyDisconnect*
    tms_OverEnergyDisconnectPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_OverEnergyDisconnect*
    tms_OverEnergyDisconnectPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_OverEnergyDisconnectPluginSupport_copy_data(
        tms_OverEnergyDisconnect *out,
        const tms_OverEnergyDisconnect *in);

    NDDSUSERDllExport extern void 
    tms_OverEnergyDisconnectPluginSupport_destroy_data_w_params(
        tms_OverEnergyDisconnect *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_OverEnergyDisconnectPluginSupport_destroy_data_ex(
        tms_OverEnergyDisconnect *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_OverEnergyDisconnectPluginSupport_destroy_data(
        tms_OverEnergyDisconnect *sample);

    NDDSUSERDllExport extern void 
    tms_OverEnergyDisconnectPluginSupport_print_data(
        const tms_OverEnergyDisconnect *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_OverEnergyDisconnectPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_OverEnergyDisconnectPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_OverEnergyDisconnectPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_OverEnergyDisconnectPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_OverEnergyDisconnectPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_OverEnergyDisconnect *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_OverEnergyDisconnectPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_OverEnergyDisconnect *out,
        const tms_OverEnergyDisconnect *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_OverEnergyDisconnectPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_OverEnergyDisconnect *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_OverEnergyDisconnectPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_OverEnergyDisconnect *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_OverEnergyDisconnectPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_OverEnergyDisconnect **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_OverEnergyDisconnectPlugin_deserialize_from_cdr_buffer(
        tms_OverEnergyDisconnect *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_OverEnergyDisconnectPlugin_data_to_string(
        const tms_OverEnergyDisconnect *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_OverEnergyDisconnectPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_OverEnergyDisconnectPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_OverEnergyDisconnectPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_OverEnergyDisconnectPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_OverEnergyDisconnectPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_OverEnergyDisconnect ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_OverEnergyDisconnectPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_OverEnergyDisconnectPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_OverEnergyDisconnectPlugin_delete(struct PRESTypePlugin *);

    #define tms_UnderFrequencyDisconnectPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_UnderFrequencyDisconnectPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_UnderFrequencyDisconnectPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_UnderFrequencyDisconnectPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_UnderFrequencyDisconnectPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_UnderFrequencyDisconnect*
    tms_UnderFrequencyDisconnectPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_UnderFrequencyDisconnect*
    tms_UnderFrequencyDisconnectPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_UnderFrequencyDisconnect*
    tms_UnderFrequencyDisconnectPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_UnderFrequencyDisconnectPluginSupport_copy_data(
        tms_UnderFrequencyDisconnect *out,
        const tms_UnderFrequencyDisconnect *in);

    NDDSUSERDllExport extern void 
    tms_UnderFrequencyDisconnectPluginSupport_destroy_data_w_params(
        tms_UnderFrequencyDisconnect *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_UnderFrequencyDisconnectPluginSupport_destroy_data_ex(
        tms_UnderFrequencyDisconnect *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_UnderFrequencyDisconnectPluginSupport_destroy_data(
        tms_UnderFrequencyDisconnect *sample);

    NDDSUSERDllExport extern void 
    tms_UnderFrequencyDisconnectPluginSupport_print_data(
        const tms_UnderFrequencyDisconnect *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_UnderFrequencyDisconnectPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_UnderFrequencyDisconnectPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_UnderFrequencyDisconnectPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_UnderFrequencyDisconnectPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_UnderFrequencyDisconnectPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_UnderFrequencyDisconnect *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_UnderFrequencyDisconnectPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_UnderFrequencyDisconnect *out,
        const tms_UnderFrequencyDisconnect *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_UnderFrequencyDisconnectPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_UnderFrequencyDisconnect *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_UnderFrequencyDisconnectPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_UnderFrequencyDisconnect *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_UnderFrequencyDisconnectPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_UnderFrequencyDisconnect **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_UnderFrequencyDisconnectPlugin_deserialize_from_cdr_buffer(
        tms_UnderFrequencyDisconnect *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_UnderFrequencyDisconnectPlugin_data_to_string(
        const tms_UnderFrequencyDisconnect *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_UnderFrequencyDisconnectPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_UnderFrequencyDisconnectPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_UnderFrequencyDisconnectPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_UnderFrequencyDisconnectPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_UnderFrequencyDisconnectPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_UnderFrequencyDisconnect ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_UnderFrequencyDisconnectPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_UnderFrequencyDisconnectPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_UnderFrequencyDisconnectPlugin_delete(struct PRESTypePlugin *);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_LocalPowerPortPriorityPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_LocalPowerPortPriorityPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_LocalPowerPortPriorityPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    tms_LocalPowerPortPriorityPluginSupport_print_data(
        const tms_LocalPowerPortPriority *sample, const char *desc, int indent_level);

    #define tms_LocalPowerPortPriorityAssignmentPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_LocalPowerPortPriorityAssignmentPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_LocalPowerPortPriorityAssignmentPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_LocalPowerPortPriorityAssignmentPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_LocalPowerPortPriorityAssignmentPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_LocalPowerPortPriorityAssignment*
    tms_LocalPowerPortPriorityAssignmentPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_LocalPowerPortPriorityAssignment*
    tms_LocalPowerPortPriorityAssignmentPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_LocalPowerPortPriorityAssignment*
    tms_LocalPowerPortPriorityAssignmentPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_LocalPowerPortPriorityAssignmentPluginSupport_copy_data(
        tms_LocalPowerPortPriorityAssignment *out,
        const tms_LocalPowerPortPriorityAssignment *in);

    NDDSUSERDllExport extern void 
    tms_LocalPowerPortPriorityAssignmentPluginSupport_destroy_data_w_params(
        tms_LocalPowerPortPriorityAssignment *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_LocalPowerPortPriorityAssignmentPluginSupport_destroy_data_ex(
        tms_LocalPowerPortPriorityAssignment *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_LocalPowerPortPriorityAssignmentPluginSupport_destroy_data(
        tms_LocalPowerPortPriorityAssignment *sample);

    NDDSUSERDllExport extern void 
    tms_LocalPowerPortPriorityAssignmentPluginSupport_print_data(
        const tms_LocalPowerPortPriorityAssignment *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_LocalPowerPortPriorityAssignmentPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_LocalPowerPortPriorityAssignmentPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_LocalPowerPortPriorityAssignmentPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_LocalPowerPortPriorityAssignmentPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_LocalPowerPortPriorityAssignmentPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_LocalPowerPortPriorityAssignment *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_LocalPowerPortPriorityAssignmentPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_LocalPowerPortPriorityAssignment *out,
        const tms_LocalPowerPortPriorityAssignment *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_LocalPowerPortPriorityAssignmentPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_LocalPowerPortPriorityAssignment *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_LocalPowerPortPriorityAssignmentPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_LocalPowerPortPriorityAssignment *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_LocalPowerPortPriorityAssignmentPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_LocalPowerPortPriorityAssignment **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_LocalPowerPortPriorityAssignmentPlugin_deserialize_from_cdr_buffer(
        tms_LocalPowerPortPriorityAssignment *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_LocalPowerPortPriorityAssignmentPlugin_data_to_string(
        const tms_LocalPowerPortPriorityAssignment *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_LocalPowerPortPriorityAssignmentPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_LocalPowerPortPriorityAssignmentPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_LocalPowerPortPriorityAssignmentPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_LocalPowerPortPriorityAssignmentPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_LocalPowerPortPriorityAssignmentPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_LocalPowerPortPriorityAssignment ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_LocalPowerPortPriorityAssignmentPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_LocalPowerPortPriorityAssignmentPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_LocalPowerPortPriorityAssignmentPlugin_delete(struct PRESTypePlugin *);

    #define tms_PowerPortLoadPolicyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_PowerPortLoadPolicyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_PowerPortLoadPolicyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_PowerPortLoadPolicyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_PowerPortLoadPolicyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_PowerPortLoadPolicy*
    tms_PowerPortLoadPolicyPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_PowerPortLoadPolicy*
    tms_PowerPortLoadPolicyPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_PowerPortLoadPolicy*
    tms_PowerPortLoadPolicyPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerPortLoadPolicyPluginSupport_copy_data(
        tms_PowerPortLoadPolicy *out,
        const tms_PowerPortLoadPolicy *in);

    NDDSUSERDllExport extern void 
    tms_PowerPortLoadPolicyPluginSupport_destroy_data_w_params(
        tms_PowerPortLoadPolicy *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_PowerPortLoadPolicyPluginSupport_destroy_data_ex(
        tms_PowerPortLoadPolicy *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_PowerPortLoadPolicyPluginSupport_destroy_data(
        tms_PowerPortLoadPolicy *sample);

    NDDSUSERDllExport extern void 
    tms_PowerPortLoadPolicyPluginSupport_print_data(
        const tms_PowerPortLoadPolicy *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_PowerPortLoadPolicyPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_PowerPortLoadPolicyPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_PowerPortLoadPolicyPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_PowerPortLoadPolicyPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_PowerPortLoadPolicyPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerPortLoadPolicy *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_PowerPortLoadPolicyPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerPortLoadPolicy *out,
        const tms_PowerPortLoadPolicy *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_PowerPortLoadPolicyPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_PowerPortLoadPolicy *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_PowerPortLoadPolicyPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_PowerPortLoadPolicy *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerPortLoadPolicyPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerPortLoadPolicy **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_PowerPortLoadPolicyPlugin_deserialize_from_cdr_buffer(
        tms_PowerPortLoadPolicy *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_PowerPortLoadPolicyPlugin_data_to_string(
        const tms_PowerPortLoadPolicy *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_PowerPortLoadPolicyPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_PowerPortLoadPolicyPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerPortLoadPolicyPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerPortLoadPolicyPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerPortLoadPolicyPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerPortLoadPolicy ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_PowerPortLoadPolicyPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_PowerPortLoadPolicyPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_PowerPortLoadPolicyPlugin_delete(struct PRESTypePlugin *);

    #define tms_BusbarLoadPolicyPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_BusbarLoadPolicyPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_BusbarLoadPolicyPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_BusbarLoadPolicyPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_BusbarLoadPolicyPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_BusbarLoadPolicy*
    tms_BusbarLoadPolicyPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_BusbarLoadPolicy*
    tms_BusbarLoadPolicyPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_BusbarLoadPolicy*
    tms_BusbarLoadPolicyPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_BusbarLoadPolicyPluginSupport_copy_data(
        tms_BusbarLoadPolicy *out,
        const tms_BusbarLoadPolicy *in);

    NDDSUSERDllExport extern void 
    tms_BusbarLoadPolicyPluginSupport_destroy_data_w_params(
        tms_BusbarLoadPolicy *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_BusbarLoadPolicyPluginSupport_destroy_data_ex(
        tms_BusbarLoadPolicy *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_BusbarLoadPolicyPluginSupport_destroy_data(
        tms_BusbarLoadPolicy *sample);

    NDDSUSERDllExport extern void 
    tms_BusbarLoadPolicyPluginSupport_print_data(
        const tms_BusbarLoadPolicy *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_BusbarLoadPolicyPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_BusbarLoadPolicyPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_BusbarLoadPolicyPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_BusbarLoadPolicyPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_BusbarLoadPolicyPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_BusbarLoadPolicy *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_BusbarLoadPolicyPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_BusbarLoadPolicy *out,
        const tms_BusbarLoadPolicy *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_BusbarLoadPolicyPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_BusbarLoadPolicy *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_BusbarLoadPolicyPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_BusbarLoadPolicy *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_BusbarLoadPolicyPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_BusbarLoadPolicy **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_BusbarLoadPolicyPlugin_deserialize_from_cdr_buffer(
        tms_BusbarLoadPolicy *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_BusbarLoadPolicyPlugin_data_to_string(
        const tms_BusbarLoadPolicy *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_BusbarLoadPolicyPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_BusbarLoadPolicyPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_BusbarLoadPolicyPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_BusbarLoadPolicyPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_BusbarLoadPolicyPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_BusbarLoadPolicy ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_BusbarLoadPolicyPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_BusbarLoadPolicyPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_BusbarLoadPolicyPlugin_delete(struct PRESTypePlugin *);

    #define tms_DeviceIntentPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_DeviceIntentPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_DeviceIntentPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_DeviceIntentPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_DeviceIntentPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_DeviceIntent*
    tms_DeviceIntentPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_DeviceIntent*
    tms_DeviceIntentPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_DeviceIntent*
    tms_DeviceIntentPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceIntentPluginSupport_copy_data(
        tms_DeviceIntent *out,
        const tms_DeviceIntent *in);

    NDDSUSERDllExport extern void 
    tms_DeviceIntentPluginSupport_destroy_data_w_params(
        tms_DeviceIntent *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_DeviceIntentPluginSupport_destroy_data_ex(
        tms_DeviceIntent *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_DeviceIntentPluginSupport_destroy_data(
        tms_DeviceIntent *sample);

    NDDSUSERDllExport extern void 
    tms_DeviceIntentPluginSupport_print_data(
        const tms_DeviceIntent *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_DeviceIntentPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_DeviceIntentPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_DeviceIntentPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_DeviceIntentPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_DeviceIntentPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceIntent *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceIntentPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceIntent *out,
        const tms_DeviceIntent *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_DeviceIntentPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_DeviceIntent *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_DeviceIntentPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_DeviceIntent *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceIntentPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceIntent **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_DeviceIntentPlugin_deserialize_from_cdr_buffer(
        tms_DeviceIntent *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_DeviceIntentPlugin_data_to_string(
        const tms_DeviceIntent *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_DeviceIntentPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_DeviceIntentPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_DeviceIntentPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_DeviceIntentPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceIntentPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceIntent ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_DeviceIntentPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_DeviceIntentPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_DeviceIntentPlugin_delete(struct PRESTypePlugin *);

    #define tms_PowerPortIntentPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_PowerPortIntentPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_PowerPortIntentPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_PowerPortIntentPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_PowerPortIntentPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_PowerPortIntent*
    tms_PowerPortIntentPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_PowerPortIntent*
    tms_PowerPortIntentPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_PowerPortIntent*
    tms_PowerPortIntentPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerPortIntentPluginSupport_copy_data(
        tms_PowerPortIntent *out,
        const tms_PowerPortIntent *in);

    NDDSUSERDllExport extern void 
    tms_PowerPortIntentPluginSupport_destroy_data_w_params(
        tms_PowerPortIntent *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_PowerPortIntentPluginSupport_destroy_data_ex(
        tms_PowerPortIntent *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_PowerPortIntentPluginSupport_destroy_data(
        tms_PowerPortIntent *sample);

    NDDSUSERDllExport extern void 
    tms_PowerPortIntentPluginSupport_print_data(
        const tms_PowerPortIntent *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_PowerPortIntentPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_PowerPortIntentPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_PowerPortIntentPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_PowerPortIntentPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_PowerPortIntentPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerPortIntent *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_PowerPortIntentPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerPortIntent *out,
        const tms_PowerPortIntent *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_PowerPortIntentPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_PowerPortIntent *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_PowerPortIntentPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_PowerPortIntent *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerPortIntentPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerPortIntent **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_PowerPortIntentPlugin_deserialize_from_cdr_buffer(
        tms_PowerPortIntent *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_PowerPortIntentPlugin_data_to_string(
        const tms_PowerPortIntent *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_PowerPortIntentPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_PowerPortIntentPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerPortIntentPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerPortIntentPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerPortIntentPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerPortIntent ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_PowerPortIntentPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_PowerPortIntentPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_PowerPortIntentPlugin_delete(struct PRESTypePlugin *);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_OperatorIntentTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_OperatorIntentTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_OperatorIntentTypePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    tms_OperatorIntentTypePluginSupport_print_data(
        const tms_OperatorIntentType *sample, const char *desc, int indent_level);

    #define tms_OperatorIntentPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_OperatorIntentPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_OperatorIntentPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_OperatorIntentPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_OperatorIntentPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_OperatorIntent*
    tms_OperatorIntentPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_OperatorIntent*
    tms_OperatorIntentPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_OperatorIntent*
    tms_OperatorIntentPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_OperatorIntentPluginSupport_copy_data(
        tms_OperatorIntent *out,
        const tms_OperatorIntent *in);

    NDDSUSERDllExport extern void 
    tms_OperatorIntentPluginSupport_destroy_data_w_params(
        tms_OperatorIntent *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_OperatorIntentPluginSupport_destroy_data_ex(
        tms_OperatorIntent *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_OperatorIntentPluginSupport_destroy_data(
        tms_OperatorIntent *sample);

    NDDSUSERDllExport extern void 
    tms_OperatorIntentPluginSupport_print_data(
        const tms_OperatorIntent *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_OperatorIntentPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_OperatorIntentPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_OperatorIntentPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_OperatorIntentPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_OperatorIntentPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_OperatorIntent *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_OperatorIntentPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_OperatorIntent *out,
        const tms_OperatorIntent *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_OperatorIntentPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_OperatorIntent *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_OperatorIntentPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_OperatorIntent *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_OperatorIntentPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_OperatorIntent **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_OperatorIntentPlugin_deserialize_from_cdr_buffer(
        tms_OperatorIntent *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_OperatorIntentPlugin_data_to_string(
        const tms_OperatorIntent *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_OperatorIntentPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_OperatorIntentPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_OperatorIntentPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_OperatorIntentPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_OperatorIntentPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_OperatorIntent ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_OperatorIntentPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_OperatorIntentPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_OperatorIntentPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct OperatorIntentRequest
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct OperatorIntentRequest)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * OperatorIntentRequest must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct OperatorIntentRequest.
    */
    typedef  class tms_OperatorIntentRequest tms_OperatorIntentRequestKeyHolder;

    #define tms_OperatorIntentRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_OperatorIntentRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_OperatorIntentRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_OperatorIntentRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_OperatorIntentRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_OperatorIntentRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_OperatorIntentRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_OperatorIntentRequest*
    tms_OperatorIntentRequestPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_OperatorIntentRequest*
    tms_OperatorIntentRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_OperatorIntentRequest*
    tms_OperatorIntentRequestPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_OperatorIntentRequestPluginSupport_copy_data(
        tms_OperatorIntentRequest *out,
        const tms_OperatorIntentRequest *in);

    NDDSUSERDllExport extern void 
    tms_OperatorIntentRequestPluginSupport_destroy_data_w_params(
        tms_OperatorIntentRequest *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_OperatorIntentRequestPluginSupport_destroy_data_ex(
        tms_OperatorIntentRequest *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_OperatorIntentRequestPluginSupport_destroy_data(
        tms_OperatorIntentRequest *sample);

    NDDSUSERDllExport extern void 
    tms_OperatorIntentRequestPluginSupport_print_data(
        const tms_OperatorIntentRequest *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_OperatorIntentRequest*
    tms_OperatorIntentRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_OperatorIntentRequest*
    tms_OperatorIntentRequestPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_OperatorIntentRequestPluginSupport_destroy_key_ex(
        tms_OperatorIntentRequestKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_OperatorIntentRequestPluginSupport_destroy_key(
        tms_OperatorIntentRequestKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_OperatorIntentRequestPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_OperatorIntentRequestPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_OperatorIntentRequestPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_OperatorIntentRequestPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_OperatorIntentRequestPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_OperatorIntentRequest *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_OperatorIntentRequestPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_OperatorIntentRequest *out,
        const tms_OperatorIntentRequest *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_OperatorIntentRequestPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_OperatorIntentRequest *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_OperatorIntentRequestPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_OperatorIntentRequest *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_OperatorIntentRequestPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_OperatorIntentRequest **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_OperatorIntentRequestPlugin_deserialize_from_cdr_buffer(
        tms_OperatorIntentRequest *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_OperatorIntentRequestPlugin_data_to_string(
        const tms_OperatorIntentRequest *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_OperatorIntentRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_OperatorIntentRequestPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_OperatorIntentRequestPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_OperatorIntentRequestPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_OperatorIntentRequestPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_OperatorIntentRequest ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_OperatorIntentRequestPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_OperatorIntentRequestKeyHolder *key, 
        const tms_OperatorIntentRequest *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_OperatorIntentRequestPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_OperatorIntentRequest *instance, 
        const tms_OperatorIntentRequestKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_OperatorIntentRequestPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_OperatorIntentRequest *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_OperatorIntentRequestPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_OperatorIntentRequestPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_OperatorIntentRequestPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_OperatorIntentRequestPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct OperatorIntentState
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct OperatorIntentState)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * OperatorIntentState must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct OperatorIntentState.
    */
    typedef  class tms_OperatorIntentState tms_OperatorIntentStateKeyHolder;

    #define tms_OperatorIntentStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_OperatorIntentStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_OperatorIntentStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_OperatorIntentStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_OperatorIntentStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_OperatorIntentStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_OperatorIntentStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_OperatorIntentState*
    tms_OperatorIntentStatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_OperatorIntentState*
    tms_OperatorIntentStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_OperatorIntentState*
    tms_OperatorIntentStatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_OperatorIntentStatePluginSupport_copy_data(
        tms_OperatorIntentState *out,
        const tms_OperatorIntentState *in);

    NDDSUSERDllExport extern void 
    tms_OperatorIntentStatePluginSupport_destroy_data_w_params(
        tms_OperatorIntentState *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_OperatorIntentStatePluginSupport_destroy_data_ex(
        tms_OperatorIntentState *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_OperatorIntentStatePluginSupport_destroy_data(
        tms_OperatorIntentState *sample);

    NDDSUSERDllExport extern void 
    tms_OperatorIntentStatePluginSupport_print_data(
        const tms_OperatorIntentState *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_OperatorIntentState*
    tms_OperatorIntentStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_OperatorIntentState*
    tms_OperatorIntentStatePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_OperatorIntentStatePluginSupport_destroy_key_ex(
        tms_OperatorIntentStateKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_OperatorIntentStatePluginSupport_destroy_key(
        tms_OperatorIntentStateKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_OperatorIntentStatePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_OperatorIntentStatePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_OperatorIntentStatePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_OperatorIntentStatePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_OperatorIntentStatePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_OperatorIntentState *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_OperatorIntentStatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_OperatorIntentState *out,
        const tms_OperatorIntentState *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_OperatorIntentStatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_OperatorIntentState *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_OperatorIntentStatePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_OperatorIntentState *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_OperatorIntentStatePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_OperatorIntentState **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_OperatorIntentStatePlugin_deserialize_from_cdr_buffer(
        tms_OperatorIntentState *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_OperatorIntentStatePlugin_data_to_string(
        const tms_OperatorIntentState *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_OperatorIntentStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_OperatorIntentStatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_OperatorIntentStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_OperatorIntentStatePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_OperatorIntentStatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_OperatorIntentState ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_OperatorIntentStatePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_OperatorIntentStateKeyHolder *key, 
        const tms_OperatorIntentState *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_OperatorIntentStatePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_OperatorIntentState *instance, 
        const tms_OperatorIntentStateKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_OperatorIntentStatePlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_OperatorIntentState *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_OperatorIntentStatePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_OperatorIntentStatePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_OperatorIntentStatePlugin_new(void);

    NDDSUSERDllExport extern void
    tms_OperatorIntentStatePlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct LoadPolicyRequest
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct LoadPolicyRequest)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * LoadPolicyRequest must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct LoadPolicyRequest.
    */
    typedef  class tms_LoadPolicyRequest tms_LoadPolicyRequestKeyHolder;

    #define tms_LoadPolicyRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_LoadPolicyRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_LoadPolicyRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_LoadPolicyRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_LoadPolicyRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_LoadPolicyRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_LoadPolicyRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_LoadPolicyRequest*
    tms_LoadPolicyRequestPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_LoadPolicyRequest*
    tms_LoadPolicyRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_LoadPolicyRequest*
    tms_LoadPolicyRequestPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadPolicyRequestPluginSupport_copy_data(
        tms_LoadPolicyRequest *out,
        const tms_LoadPolicyRequest *in);

    NDDSUSERDllExport extern void 
    tms_LoadPolicyRequestPluginSupport_destroy_data_w_params(
        tms_LoadPolicyRequest *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_LoadPolicyRequestPluginSupport_destroy_data_ex(
        tms_LoadPolicyRequest *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_LoadPolicyRequestPluginSupport_destroy_data(
        tms_LoadPolicyRequest *sample);

    NDDSUSERDllExport extern void 
    tms_LoadPolicyRequestPluginSupport_print_data(
        const tms_LoadPolicyRequest *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_LoadPolicyRequest*
    tms_LoadPolicyRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_LoadPolicyRequest*
    tms_LoadPolicyRequestPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_LoadPolicyRequestPluginSupport_destroy_key_ex(
        tms_LoadPolicyRequestKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_LoadPolicyRequestPluginSupport_destroy_key(
        tms_LoadPolicyRequestKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_LoadPolicyRequestPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_LoadPolicyRequestPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_LoadPolicyRequestPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_LoadPolicyRequestPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_LoadPolicyRequestPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadPolicyRequest *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_LoadPolicyRequestPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadPolicyRequest *out,
        const tms_LoadPolicyRequest *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_LoadPolicyRequestPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_LoadPolicyRequest *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_LoadPolicyRequestPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_LoadPolicyRequest *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadPolicyRequestPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadPolicyRequest **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_LoadPolicyRequestPlugin_deserialize_from_cdr_buffer(
        tms_LoadPolicyRequest *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_LoadPolicyRequestPlugin_data_to_string(
        const tms_LoadPolicyRequest *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_LoadPolicyRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_LoadPolicyRequestPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_LoadPolicyRequestPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_LoadPolicyRequestPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadPolicyRequestPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadPolicyRequest ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadPolicyRequestPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadPolicyRequestKeyHolder *key, 
        const tms_LoadPolicyRequest *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadPolicyRequestPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadPolicyRequest *instance, 
        const tms_LoadPolicyRequestKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadPolicyRequestPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_LoadPolicyRequest *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadPolicyRequestPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_LoadPolicyRequestPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_LoadPolicyRequestPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_LoadPolicyRequestPlugin_delete(struct PRESTypePlugin *);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_LoadPolicyPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_LoadPolicyPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_LoadPolicyPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    tms_LoadPolicyPluginSupport_print_data(
        const tms_LoadPolicy *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_PowerLinePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_PowerLinePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerLinePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    tms_PowerLinePluginSupport_print_data(
        const tms_PowerLine *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_LoadPolicyContinuityPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_LoadPolicyContinuityPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_LoadPolicyContinuityPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    tms_LoadPolicyContinuityPluginSupport_print_data(
        const tms_LoadPolicyContinuity *sample, const char *desc, int indent_level);

    #define tms_PowerPortLoadPolicyReportPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_PowerPortLoadPolicyReportPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_PowerPortLoadPolicyReportPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_PowerPortLoadPolicyReportPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_PowerPortLoadPolicyReportPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_PowerPortLoadPolicyReport*
    tms_PowerPortLoadPolicyReportPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_PowerPortLoadPolicyReport*
    tms_PowerPortLoadPolicyReportPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_PowerPortLoadPolicyReport*
    tms_PowerPortLoadPolicyReportPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerPortLoadPolicyReportPluginSupport_copy_data(
        tms_PowerPortLoadPolicyReport *out,
        const tms_PowerPortLoadPolicyReport *in);

    NDDSUSERDllExport extern void 
    tms_PowerPortLoadPolicyReportPluginSupport_destroy_data_w_params(
        tms_PowerPortLoadPolicyReport *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_PowerPortLoadPolicyReportPluginSupport_destroy_data_ex(
        tms_PowerPortLoadPolicyReport *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_PowerPortLoadPolicyReportPluginSupport_destroy_data(
        tms_PowerPortLoadPolicyReport *sample);

    NDDSUSERDllExport extern void 
    tms_PowerPortLoadPolicyReportPluginSupport_print_data(
        const tms_PowerPortLoadPolicyReport *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_PowerPortLoadPolicyReportPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_PowerPortLoadPolicyReportPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_PowerPortLoadPolicyReportPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_PowerPortLoadPolicyReportPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_PowerPortLoadPolicyReportPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerPortLoadPolicyReport *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_PowerPortLoadPolicyReportPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerPortLoadPolicyReport *out,
        const tms_PowerPortLoadPolicyReport *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_PowerPortLoadPolicyReportPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_PowerPortLoadPolicyReport *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_PowerPortLoadPolicyReportPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_PowerPortLoadPolicyReport *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerPortLoadPolicyReportPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerPortLoadPolicyReport **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_PowerPortLoadPolicyReportPlugin_deserialize_from_cdr_buffer(
        tms_PowerPortLoadPolicyReport *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_PowerPortLoadPolicyReportPlugin_data_to_string(
        const tms_PowerPortLoadPolicyReport *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_PowerPortLoadPolicyReportPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_PowerPortLoadPolicyReportPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerPortLoadPolicyReportPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_PowerPortLoadPolicyReportPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_PowerPortLoadPolicyReportPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_PowerPortLoadPolicyReport ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_PowerPortLoadPolicyReportPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_PowerPortLoadPolicyReportPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_PowerPortLoadPolicyReportPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct DeviceLoadPolicyStatus
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct DeviceLoadPolicyStatus)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * DeviceLoadPolicyStatus must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct DeviceLoadPolicyStatus.
    */
    typedef  class tms_DeviceLoadPolicyStatus tms_DeviceLoadPolicyStatusKeyHolder;

    #define tms_DeviceLoadPolicyStatusPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_DeviceLoadPolicyStatusPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_DeviceLoadPolicyStatusPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_DeviceLoadPolicyStatusPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_DeviceLoadPolicyStatusPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_DeviceLoadPolicyStatusPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_DeviceLoadPolicyStatusPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_DeviceLoadPolicyStatus*
    tms_DeviceLoadPolicyStatusPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_DeviceLoadPolicyStatus*
    tms_DeviceLoadPolicyStatusPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_DeviceLoadPolicyStatus*
    tms_DeviceLoadPolicyStatusPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceLoadPolicyStatusPluginSupport_copy_data(
        tms_DeviceLoadPolicyStatus *out,
        const tms_DeviceLoadPolicyStatus *in);

    NDDSUSERDllExport extern void 
    tms_DeviceLoadPolicyStatusPluginSupport_destroy_data_w_params(
        tms_DeviceLoadPolicyStatus *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_DeviceLoadPolicyStatusPluginSupport_destroy_data_ex(
        tms_DeviceLoadPolicyStatus *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_DeviceLoadPolicyStatusPluginSupport_destroy_data(
        tms_DeviceLoadPolicyStatus *sample);

    NDDSUSERDllExport extern void 
    tms_DeviceLoadPolicyStatusPluginSupport_print_data(
        const tms_DeviceLoadPolicyStatus *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_DeviceLoadPolicyStatus*
    tms_DeviceLoadPolicyStatusPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_DeviceLoadPolicyStatus*
    tms_DeviceLoadPolicyStatusPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_DeviceLoadPolicyStatusPluginSupport_destroy_key_ex(
        tms_DeviceLoadPolicyStatusKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_DeviceLoadPolicyStatusPluginSupport_destroy_key(
        tms_DeviceLoadPolicyStatusKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_DeviceLoadPolicyStatusPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_DeviceLoadPolicyStatusPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_DeviceLoadPolicyStatusPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_DeviceLoadPolicyStatusPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_DeviceLoadPolicyStatusPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceLoadPolicyStatus *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceLoadPolicyStatusPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceLoadPolicyStatus *out,
        const tms_DeviceLoadPolicyStatus *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_DeviceLoadPolicyStatusPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_DeviceLoadPolicyStatus *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_DeviceLoadPolicyStatusPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_DeviceLoadPolicyStatus *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceLoadPolicyStatusPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceLoadPolicyStatus **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_DeviceLoadPolicyStatusPlugin_deserialize_from_cdr_buffer(
        tms_DeviceLoadPolicyStatus *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_DeviceLoadPolicyStatusPlugin_data_to_string(
        const tms_DeviceLoadPolicyStatus *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_DeviceLoadPolicyStatusPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_DeviceLoadPolicyStatusPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_DeviceLoadPolicyStatusPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_DeviceLoadPolicyStatusPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceLoadPolicyStatusPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceLoadPolicyStatus ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceLoadPolicyStatusPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceLoadPolicyStatusKeyHolder *key, 
        const tms_DeviceLoadPolicyStatus *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceLoadPolicyStatusPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_DeviceLoadPolicyStatus *instance, 
        const tms_DeviceLoadPolicyStatusKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceLoadPolicyStatusPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_DeviceLoadPolicyStatus *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_DeviceLoadPolicyStatusPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_DeviceLoadPolicyStatusPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_DeviceLoadPolicyStatusPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_DeviceLoadPolicyStatusPlugin_delete(struct PRESTypePlugin *);

    #define tms_DevicePriorityPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_DevicePriorityPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_DevicePriorityPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_DevicePriorityPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_DevicePriorityPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_DevicePriority*
    tms_DevicePriorityPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_DevicePriority*
    tms_DevicePriorityPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_DevicePriority*
    tms_DevicePriorityPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_DevicePriorityPluginSupport_copy_data(
        tms_DevicePriority *out,
        const tms_DevicePriority *in);

    NDDSUSERDllExport extern void 
    tms_DevicePriorityPluginSupport_destroy_data_w_params(
        tms_DevicePriority *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_DevicePriorityPluginSupport_destroy_data_ex(
        tms_DevicePriority *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_DevicePriorityPluginSupport_destroy_data(
        tms_DevicePriority *sample);

    NDDSUSERDllExport extern void 
    tms_DevicePriorityPluginSupport_print_data(
        const tms_DevicePriority *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_DevicePriorityPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_DevicePriorityPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_DevicePriorityPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_DevicePriorityPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_DevicePriorityPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_DevicePriority *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_DevicePriorityPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_DevicePriority *out,
        const tms_DevicePriority *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_DevicePriorityPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_DevicePriority *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_DevicePriorityPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_DevicePriority *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_DevicePriorityPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_DevicePriority **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_DevicePriorityPlugin_deserialize_from_cdr_buffer(
        tms_DevicePriority *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_DevicePriorityPlugin_data_to_string(
        const tms_DevicePriority *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_DevicePriorityPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_DevicePriorityPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_DevicePriorityPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_DevicePriorityPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_DevicePriorityPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_DevicePriority ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_DevicePriorityPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_DevicePriorityPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_DevicePriorityPlugin_delete(struct PRESTypePlugin *);

    #define tms_NsnPriorityPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_NsnPriorityPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_NsnPriorityPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_NsnPriorityPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_NsnPriorityPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_NsnPriority*
    tms_NsnPriorityPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_NsnPriority*
    tms_NsnPriorityPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_NsnPriority*
    tms_NsnPriorityPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_NsnPriorityPluginSupport_copy_data(
        tms_NsnPriority *out,
        const tms_NsnPriority *in);

    NDDSUSERDllExport extern void 
    tms_NsnPriorityPluginSupport_destroy_data_w_params(
        tms_NsnPriority *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_NsnPriorityPluginSupport_destroy_data_ex(
        tms_NsnPriority *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_NsnPriorityPluginSupport_destroy_data(
        tms_NsnPriority *sample);

    NDDSUSERDllExport extern void 
    tms_NsnPriorityPluginSupport_print_data(
        const tms_NsnPriority *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_NsnPriorityPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_NsnPriorityPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_NsnPriorityPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_NsnPriorityPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_NsnPriorityPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_NsnPriority *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_NsnPriorityPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_NsnPriority *out,
        const tms_NsnPriority *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_NsnPriorityPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_NsnPriority *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_NsnPriorityPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_NsnPriority *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_NsnPriorityPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_NsnPriority **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_NsnPriorityPlugin_deserialize_from_cdr_buffer(
        tms_NsnPriority *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_NsnPriorityPlugin_data_to_string(
        const tms_NsnPriority *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_NsnPriorityPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_NsnPriorityPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_NsnPriorityPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_NsnPriorityPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_NsnPriorityPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_NsnPriority ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_NsnPriorityPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_NsnPriorityPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_NsnPriorityPlugin_delete(struct PRESTypePlugin *);

    #define tms_GtinPriorityPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_GtinPriorityPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_GtinPriorityPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_GtinPriorityPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_GtinPriorityPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_GtinPriority*
    tms_GtinPriorityPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_GtinPriority*
    tms_GtinPriorityPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_GtinPriority*
    tms_GtinPriorityPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_GtinPriorityPluginSupport_copy_data(
        tms_GtinPriority *out,
        const tms_GtinPriority *in);

    NDDSUSERDllExport extern void 
    tms_GtinPriorityPluginSupport_destroy_data_w_params(
        tms_GtinPriority *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_GtinPriorityPluginSupport_destroy_data_ex(
        tms_GtinPriority *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_GtinPriorityPluginSupport_destroy_data(
        tms_GtinPriority *sample);

    NDDSUSERDllExport extern void 
    tms_GtinPriorityPluginSupport_print_data(
        const tms_GtinPriority *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_GtinPriorityPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_GtinPriorityPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_GtinPriorityPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_GtinPriorityPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_GtinPriorityPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_GtinPriority *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_GtinPriorityPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_GtinPriority *out,
        const tms_GtinPriority *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_GtinPriorityPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_GtinPriority *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_GtinPriorityPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_GtinPriority *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_GtinPriorityPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_GtinPriority **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_GtinPriorityPlugin_deserialize_from_cdr_buffer(
        tms_GtinPriority *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_GtinPriorityPlugin_data_to_string(
        const tms_GtinPriority *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_GtinPriorityPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_GtinPriorityPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_GtinPriorityPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_GtinPriorityPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_GtinPriorityPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_GtinPriority ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_GtinPriorityPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_GtinPriorityPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_GtinPriorityPlugin_delete(struct PRESTypePlugin *);

    #define tms_McPriorityListPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_McPriorityListPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_McPriorityListPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_McPriorityListPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_McPriorityListPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_McPriorityList*
    tms_McPriorityListPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_McPriorityList*
    tms_McPriorityListPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_McPriorityList*
    tms_McPriorityListPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_McPriorityListPluginSupport_copy_data(
        tms_McPriorityList *out,
        const tms_McPriorityList *in);

    NDDSUSERDllExport extern void 
    tms_McPriorityListPluginSupport_destroy_data_w_params(
        tms_McPriorityList *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_McPriorityListPluginSupport_destroy_data_ex(
        tms_McPriorityList *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_McPriorityListPluginSupport_destroy_data(
        tms_McPriorityList *sample);

    NDDSUSERDllExport extern void 
    tms_McPriorityListPluginSupport_print_data(
        const tms_McPriorityList *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_McPriorityListPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_McPriorityListPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_McPriorityListPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_McPriorityListPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_McPriorityListPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_McPriorityList *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_McPriorityListPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_McPriorityList *out,
        const tms_McPriorityList *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_McPriorityListPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_McPriorityList *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_McPriorityListPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_McPriorityList *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_McPriorityListPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_McPriorityList **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_McPriorityListPlugin_deserialize_from_cdr_buffer(
        tms_McPriorityList *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_McPriorityListPlugin_data_to_string(
        const tms_McPriorityList *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_McPriorityListPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_McPriorityListPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_McPriorityListPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_McPriorityListPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_McPriorityListPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_McPriorityList ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_McPriorityListPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_McPriorityListPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_McPriorityListPlugin_delete(struct PRESTypePlugin *);

    #define tms_McRedirectPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_McRedirectPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_McRedirectPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_McRedirectPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_McRedirectPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_McRedirect*
    tms_McRedirectPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_McRedirect*
    tms_McRedirectPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_McRedirect*
    tms_McRedirectPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_McRedirectPluginSupport_copy_data(
        tms_McRedirect *out,
        const tms_McRedirect *in);

    NDDSUSERDllExport extern void 
    tms_McRedirectPluginSupport_destroy_data_w_params(
        tms_McRedirect *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_McRedirectPluginSupport_destroy_data_ex(
        tms_McRedirect *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_McRedirectPluginSupport_destroy_data(
        tms_McRedirect *sample);

    NDDSUSERDllExport extern void 
    tms_McRedirectPluginSupport_print_data(
        const tms_McRedirect *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_McRedirectPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_McRedirectPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_McRedirectPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_McRedirectPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_McRedirectPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_McRedirect *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_McRedirectPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_McRedirect *out,
        const tms_McRedirect *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_McRedirectPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_McRedirect *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_McRedirectPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_McRedirect *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_McRedirectPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_McRedirect **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_McRedirectPlugin_deserialize_from_cdr_buffer(
        tms_McRedirect *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_McRedirectPlugin_data_to_string(
        const tms_McRedirect *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_McRedirectPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_McRedirectPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_McRedirectPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_McRedirectPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_McRedirectPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_McRedirect ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_McRedirectPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_McRedirectPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_McRedirectPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct EngineState
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct EngineState)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * EngineState must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct EngineState.
    */
    typedef  class tms_EngineState tms_EngineStateKeyHolder;

    #define tms_EngineStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_EngineStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_EngineStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_EngineStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_EngineStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_EngineStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_EngineStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_EngineState*
    tms_EngineStatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_EngineState*
    tms_EngineStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_EngineState*
    tms_EngineStatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_EngineStatePluginSupport_copy_data(
        tms_EngineState *out,
        const tms_EngineState *in);

    NDDSUSERDllExport extern void 
    tms_EngineStatePluginSupport_destroy_data_w_params(
        tms_EngineState *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_EngineStatePluginSupport_destroy_data_ex(
        tms_EngineState *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_EngineStatePluginSupport_destroy_data(
        tms_EngineState *sample);

    NDDSUSERDllExport extern void 
    tms_EngineStatePluginSupport_print_data(
        const tms_EngineState *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_EngineState*
    tms_EngineStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_EngineState*
    tms_EngineStatePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_EngineStatePluginSupport_destroy_key_ex(
        tms_EngineStateKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_EngineStatePluginSupport_destroy_key(
        tms_EngineStateKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_EngineStatePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_EngineStatePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_EngineStatePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_EngineStatePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_EngineStatePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_EngineState *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_EngineStatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_EngineState *out,
        const tms_EngineState *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_EngineStatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_EngineState *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_EngineStatePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_EngineState *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_EngineStatePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_EngineState **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_EngineStatePlugin_deserialize_from_cdr_buffer(
        tms_EngineState *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_EngineStatePlugin_data_to_string(
        const tms_EngineState *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_EngineStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_EngineStatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_EngineStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_EngineStatePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_EngineStatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_EngineState ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_EngineStatePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_EngineStateKeyHolder *key, 
        const tms_EngineState *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_EngineStatePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_EngineState *instance, 
        const tms_EngineStateKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_EngineStatePlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_EngineState *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_EngineStatePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_EngineStatePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_EngineStatePlugin_new(void);

    NDDSUSERDllExport extern void
    tms_EngineStatePlugin_delete(struct PRESTypePlugin *);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_SourceStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_SourceStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_SourceStatePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    tms_SourceStatePluginSupport_print_data(
        const tms_SourceState *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_SourceTransitionPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_SourceTransitionPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_SourceTransitionPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    tms_SourceTransitionPluginSupport_print_data(
        const tms_SourceTransition *sample, const char *desc, int indent_level);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct SourceTransitionState
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct SourceTransitionState)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * SourceTransitionState must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct SourceTransitionState.
    */
    typedef  class tms_SourceTransitionState tms_SourceTransitionStateKeyHolder;

    #define tms_SourceTransitionStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_SourceTransitionStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_SourceTransitionStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_SourceTransitionStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_SourceTransitionStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_SourceTransitionStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_SourceTransitionStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_SourceTransitionState*
    tms_SourceTransitionStatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_SourceTransitionState*
    tms_SourceTransitionStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_SourceTransitionState*
    tms_SourceTransitionStatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_SourceTransitionStatePluginSupport_copy_data(
        tms_SourceTransitionState *out,
        const tms_SourceTransitionState *in);

    NDDSUSERDllExport extern void 
    tms_SourceTransitionStatePluginSupport_destroy_data_w_params(
        tms_SourceTransitionState *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_SourceTransitionStatePluginSupport_destroy_data_ex(
        tms_SourceTransitionState *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_SourceTransitionStatePluginSupport_destroy_data(
        tms_SourceTransitionState *sample);

    NDDSUSERDllExport extern void 
    tms_SourceTransitionStatePluginSupport_print_data(
        const tms_SourceTransitionState *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_SourceTransitionState*
    tms_SourceTransitionStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_SourceTransitionState*
    tms_SourceTransitionStatePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_SourceTransitionStatePluginSupport_destroy_key_ex(
        tms_SourceTransitionStateKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_SourceTransitionStatePluginSupport_destroy_key(
        tms_SourceTransitionStateKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_SourceTransitionStatePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_SourceTransitionStatePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_SourceTransitionStatePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_SourceTransitionStatePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_SourceTransitionStatePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_SourceTransitionState *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_SourceTransitionStatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_SourceTransitionState *out,
        const tms_SourceTransitionState *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_SourceTransitionStatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_SourceTransitionState *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_SourceTransitionStatePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_SourceTransitionState *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_SourceTransitionStatePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_SourceTransitionState **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_SourceTransitionStatePlugin_deserialize_from_cdr_buffer(
        tms_SourceTransitionState *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_SourceTransitionStatePlugin_data_to_string(
        const tms_SourceTransitionState *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_SourceTransitionStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_SourceTransitionStatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_SourceTransitionStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_SourceTransitionStatePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_SourceTransitionStatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_SourceTransitionState ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_SourceTransitionStatePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_SourceTransitionStateKeyHolder *key, 
        const tms_SourceTransitionState *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_SourceTransitionStatePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_SourceTransitionState *instance, 
        const tms_SourceTransitionStateKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_SourceTransitionStatePlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_SourceTransitionState *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_SourceTransitionStatePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_SourceTransitionStatePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_SourceTransitionStatePlugin_new(void);

    NDDSUSERDllExport extern void
    tms_SourceTransitionStatePlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct SourceTransitionRequest
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct SourceTransitionRequest)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * SourceTransitionRequest must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct SourceTransitionRequest.
    */
    typedef  class tms_SourceTransitionRequest tms_SourceTransitionRequestKeyHolder;

    #define tms_SourceTransitionRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_SourceTransitionRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_SourceTransitionRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_SourceTransitionRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_SourceTransitionRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_SourceTransitionRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_SourceTransitionRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_SourceTransitionRequest*
    tms_SourceTransitionRequestPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_SourceTransitionRequest*
    tms_SourceTransitionRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_SourceTransitionRequest*
    tms_SourceTransitionRequestPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_SourceTransitionRequestPluginSupport_copy_data(
        tms_SourceTransitionRequest *out,
        const tms_SourceTransitionRequest *in);

    NDDSUSERDllExport extern void 
    tms_SourceTransitionRequestPluginSupport_destroy_data_w_params(
        tms_SourceTransitionRequest *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_SourceTransitionRequestPluginSupport_destroy_data_ex(
        tms_SourceTransitionRequest *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_SourceTransitionRequestPluginSupport_destroy_data(
        tms_SourceTransitionRequest *sample);

    NDDSUSERDllExport extern void 
    tms_SourceTransitionRequestPluginSupport_print_data(
        const tms_SourceTransitionRequest *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_SourceTransitionRequest*
    tms_SourceTransitionRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_SourceTransitionRequest*
    tms_SourceTransitionRequestPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_SourceTransitionRequestPluginSupport_destroy_key_ex(
        tms_SourceTransitionRequestKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_SourceTransitionRequestPluginSupport_destroy_key(
        tms_SourceTransitionRequestKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_SourceTransitionRequestPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_SourceTransitionRequestPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_SourceTransitionRequestPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_SourceTransitionRequestPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_SourceTransitionRequestPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_SourceTransitionRequest *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_SourceTransitionRequestPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_SourceTransitionRequest *out,
        const tms_SourceTransitionRequest *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_SourceTransitionRequestPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_SourceTransitionRequest *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_SourceTransitionRequestPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_SourceTransitionRequest *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_SourceTransitionRequestPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_SourceTransitionRequest **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_SourceTransitionRequestPlugin_deserialize_from_cdr_buffer(
        tms_SourceTransitionRequest *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_SourceTransitionRequestPlugin_data_to_string(
        const tms_SourceTransitionRequest *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_SourceTransitionRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_SourceTransitionRequestPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_SourceTransitionRequestPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_SourceTransitionRequestPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_SourceTransitionRequestPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_SourceTransitionRequest ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_SourceTransitionRequestPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_SourceTransitionRequestKeyHolder *key, 
        const tms_SourceTransitionRequest *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_SourceTransitionRequestPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_SourceTransitionRequest *instance, 
        const tms_SourceTransitionRequestKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_SourceTransitionRequestPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_SourceTransitionRequest *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_SourceTransitionRequestPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_SourceTransitionRequestPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_SourceTransitionRequestPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_SourceTransitionRequestPlugin_delete(struct PRESTypePlugin *);

    #define tms_ControlCurvePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_ControlCurvePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_ControlCurvePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_ControlCurvePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_ControlCurvePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_ControlCurve*
    tms_ControlCurvePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_ControlCurve*
    tms_ControlCurvePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_ControlCurve*
    tms_ControlCurvePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_ControlCurvePluginSupport_copy_data(
        tms_ControlCurve *out,
        const tms_ControlCurve *in);

    NDDSUSERDllExport extern void 
    tms_ControlCurvePluginSupport_destroy_data_w_params(
        tms_ControlCurve *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_ControlCurvePluginSupport_destroy_data_ex(
        tms_ControlCurve *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_ControlCurvePluginSupport_destroy_data(
        tms_ControlCurve *sample);

    NDDSUSERDllExport extern void 
    tms_ControlCurvePluginSupport_print_data(
        const tms_ControlCurve *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_ControlCurvePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_ControlCurvePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_ControlCurvePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_ControlCurvePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_ControlCurvePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_ControlCurve *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_ControlCurvePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_ControlCurve *out,
        const tms_ControlCurve *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_ControlCurvePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_ControlCurve *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_ControlCurvePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_ControlCurve *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_ControlCurvePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_ControlCurve **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_ControlCurvePlugin_deserialize_from_cdr_buffer(
        tms_ControlCurve *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_ControlCurvePlugin_data_to_string(
        const tms_ControlCurve *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_ControlCurvePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_ControlCurvePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_ControlCurvePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_ControlCurvePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_ControlCurvePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_ControlCurve ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_ControlCurvePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_ControlCurvePlugin_new(void);

    NDDSUSERDllExport extern void
    tms_ControlCurvePlugin_delete(struct PRESTypePlugin *);

    #define tms_DLSConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_DLSConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_DLSConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_DLSConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_DLSConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_DLSConfig*
    tms_DLSConfigPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_DLSConfig*
    tms_DLSConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_DLSConfig*
    tms_DLSConfigPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_DLSConfigPluginSupport_copy_data(
        tms_DLSConfig *out,
        const tms_DLSConfig *in);

    NDDSUSERDllExport extern void 
    tms_DLSConfigPluginSupport_destroy_data_w_params(
        tms_DLSConfig *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_DLSConfigPluginSupport_destroy_data_ex(
        tms_DLSConfig *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_DLSConfigPluginSupport_destroy_data(
        tms_DLSConfig *sample);

    NDDSUSERDllExport extern void 
    tms_DLSConfigPluginSupport_print_data(
        const tms_DLSConfig *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_DLSConfigPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_DLSConfigPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_DLSConfigPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_DLSConfigPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_DLSConfigPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_DLSConfig *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_DLSConfigPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_DLSConfig *out,
        const tms_DLSConfig *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_DLSConfigPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_DLSConfig *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_DLSConfigPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_DLSConfig *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_DLSConfigPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_DLSConfig **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_DLSConfigPlugin_deserialize_from_cdr_buffer(
        tms_DLSConfig *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_DLSConfigPlugin_data_to_string(
        const tms_DLSConfig *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_DLSConfigPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_DLSConfigPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_DLSConfigPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_DLSConfigPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_DLSConfigPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_DLSConfig ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_DLSConfigPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_DLSConfigPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_DLSConfigPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct DLSMeasurement
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct DLSMeasurement)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * DLSMeasurement must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct DLSMeasurement.
    */
    typedef  class tms_DLSMeasurement tms_DLSMeasurementKeyHolder;

    #define tms_DLSMeasurementPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_DLSMeasurementPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_DLSMeasurementPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_DLSMeasurementPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_DLSMeasurementPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_DLSMeasurementPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_DLSMeasurementPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_DLSMeasurement*
    tms_DLSMeasurementPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_DLSMeasurement*
    tms_DLSMeasurementPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_DLSMeasurement*
    tms_DLSMeasurementPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_DLSMeasurementPluginSupport_copy_data(
        tms_DLSMeasurement *out,
        const tms_DLSMeasurement *in);

    NDDSUSERDllExport extern void 
    tms_DLSMeasurementPluginSupport_destroy_data_w_params(
        tms_DLSMeasurement *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_DLSMeasurementPluginSupport_destroy_data_ex(
        tms_DLSMeasurement *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_DLSMeasurementPluginSupport_destroy_data(
        tms_DLSMeasurement *sample);

    NDDSUSERDllExport extern void 
    tms_DLSMeasurementPluginSupport_print_data(
        const tms_DLSMeasurement *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_DLSMeasurement*
    tms_DLSMeasurementPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_DLSMeasurement*
    tms_DLSMeasurementPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_DLSMeasurementPluginSupport_destroy_key_ex(
        tms_DLSMeasurementKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_DLSMeasurementPluginSupport_destroy_key(
        tms_DLSMeasurementKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_DLSMeasurementPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_DLSMeasurementPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_DLSMeasurementPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_DLSMeasurementPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_DLSMeasurementPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_DLSMeasurement *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_DLSMeasurementPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_DLSMeasurement *out,
        const tms_DLSMeasurement *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_DLSMeasurementPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_DLSMeasurement *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_DLSMeasurementPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_DLSMeasurement *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_DLSMeasurementPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_DLSMeasurement **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_DLSMeasurementPlugin_deserialize_from_cdr_buffer(
        tms_DLSMeasurement *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_DLSMeasurementPlugin_data_to_string(
        const tms_DLSMeasurement *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_DLSMeasurementPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_DLSMeasurementPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_DLSMeasurementPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_DLSMeasurementPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_DLSMeasurementPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_DLSMeasurement ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_DLSMeasurementPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_DLSMeasurementKeyHolder *key, 
        const tms_DLSMeasurement *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_DLSMeasurementPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_DLSMeasurement *instance, 
        const tms_DLSMeasurementKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_DLSMeasurementPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_DLSMeasurement *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_DLSMeasurementPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_DLSMeasurementPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_DLSMeasurementPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_DLSMeasurementPlugin_delete(struct PRESTypePlugin *);

    #define tms_LoadSharingPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_LoadSharingPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_LoadSharingPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_LoadSharingPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_LoadSharingPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_LoadSharing*
    tms_LoadSharingPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_LoadSharing*
    tms_LoadSharingPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_LoadSharing*
    tms_LoadSharingPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadSharingPluginSupport_copy_data(
        tms_LoadSharing *out,
        const tms_LoadSharing *in);

    NDDSUSERDllExport extern void 
    tms_LoadSharingPluginSupport_destroy_data_w_params(
        tms_LoadSharing *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_LoadSharingPluginSupport_destroy_data_ex(
        tms_LoadSharing *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_LoadSharingPluginSupport_destroy_data(
        tms_LoadSharing *sample);

    NDDSUSERDllExport extern void 
    tms_LoadSharingPluginSupport_print_data(
        const tms_LoadSharing *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_LoadSharingPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_LoadSharingPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_LoadSharingPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_LoadSharingPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_LoadSharingPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadSharing *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_LoadSharingPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadSharing *out,
        const tms_LoadSharing *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_LoadSharingPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_LoadSharing *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_LoadSharingPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_LoadSharing *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadSharingPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadSharing **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_LoadSharingPlugin_deserialize_from_cdr_buffer(
        tms_LoadSharing *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_LoadSharingPlugin_data_to_string(
        const tms_LoadSharing *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_LoadSharingPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_LoadSharingPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_LoadSharingPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_LoadSharingPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadSharingPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadSharing ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_LoadSharingPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_LoadSharingPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_LoadSharingPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct LoadSharingRequest
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct LoadSharingRequest)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * LoadSharingRequest must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct LoadSharingRequest.
    */
    typedef  class tms_LoadSharingRequest tms_LoadSharingRequestKeyHolder;

    #define tms_LoadSharingRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_LoadSharingRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_LoadSharingRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_LoadSharingRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_LoadSharingRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_LoadSharingRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_LoadSharingRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_LoadSharingRequest*
    tms_LoadSharingRequestPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_LoadSharingRequest*
    tms_LoadSharingRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_LoadSharingRequest*
    tms_LoadSharingRequestPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadSharingRequestPluginSupport_copy_data(
        tms_LoadSharingRequest *out,
        const tms_LoadSharingRequest *in);

    NDDSUSERDllExport extern void 
    tms_LoadSharingRequestPluginSupport_destroy_data_w_params(
        tms_LoadSharingRequest *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_LoadSharingRequestPluginSupport_destroy_data_ex(
        tms_LoadSharingRequest *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_LoadSharingRequestPluginSupport_destroy_data(
        tms_LoadSharingRequest *sample);

    NDDSUSERDllExport extern void 
    tms_LoadSharingRequestPluginSupport_print_data(
        const tms_LoadSharingRequest *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_LoadSharingRequest*
    tms_LoadSharingRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_LoadSharingRequest*
    tms_LoadSharingRequestPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_LoadSharingRequestPluginSupport_destroy_key_ex(
        tms_LoadSharingRequestKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_LoadSharingRequestPluginSupport_destroy_key(
        tms_LoadSharingRequestKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_LoadSharingRequestPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_LoadSharingRequestPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_LoadSharingRequestPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_LoadSharingRequestPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_LoadSharingRequestPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadSharingRequest *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_LoadSharingRequestPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadSharingRequest *out,
        const tms_LoadSharingRequest *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_LoadSharingRequestPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_LoadSharingRequest *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_LoadSharingRequestPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_LoadSharingRequest *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadSharingRequestPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadSharingRequest **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_LoadSharingRequestPlugin_deserialize_from_cdr_buffer(
        tms_LoadSharingRequest *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_LoadSharingRequestPlugin_data_to_string(
        const tms_LoadSharingRequest *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_LoadSharingRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_LoadSharingRequestPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_LoadSharingRequestPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_LoadSharingRequestPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadSharingRequestPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadSharingRequest ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadSharingRequestPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadSharingRequestKeyHolder *key, 
        const tms_LoadSharingRequest *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadSharingRequestPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadSharingRequest *instance, 
        const tms_LoadSharingRequestKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadSharingRequestPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_LoadSharingRequest *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadSharingRequestPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_LoadSharingRequestPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_LoadSharingRequestPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_LoadSharingRequestPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct LoadSharingStatus
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct LoadSharingStatus)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * LoadSharingStatus must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct LoadSharingStatus.
    */
    typedef  class tms_LoadSharingStatus tms_LoadSharingStatusKeyHolder;

    #define tms_LoadSharingStatusPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_LoadSharingStatusPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_LoadSharingStatusPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_LoadSharingStatusPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_LoadSharingStatusPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_LoadSharingStatusPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_LoadSharingStatusPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_LoadSharingStatus*
    tms_LoadSharingStatusPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_LoadSharingStatus*
    tms_LoadSharingStatusPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_LoadSharingStatus*
    tms_LoadSharingStatusPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadSharingStatusPluginSupport_copy_data(
        tms_LoadSharingStatus *out,
        const tms_LoadSharingStatus *in);

    NDDSUSERDllExport extern void 
    tms_LoadSharingStatusPluginSupport_destroy_data_w_params(
        tms_LoadSharingStatus *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_LoadSharingStatusPluginSupport_destroy_data_ex(
        tms_LoadSharingStatus *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_LoadSharingStatusPluginSupport_destroy_data(
        tms_LoadSharingStatus *sample);

    NDDSUSERDllExport extern void 
    tms_LoadSharingStatusPluginSupport_print_data(
        const tms_LoadSharingStatus *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_LoadSharingStatus*
    tms_LoadSharingStatusPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_LoadSharingStatus*
    tms_LoadSharingStatusPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_LoadSharingStatusPluginSupport_destroy_key_ex(
        tms_LoadSharingStatusKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_LoadSharingStatusPluginSupport_destroy_key(
        tms_LoadSharingStatusKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_LoadSharingStatusPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_LoadSharingStatusPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_LoadSharingStatusPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_LoadSharingStatusPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_LoadSharingStatusPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadSharingStatus *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_LoadSharingStatusPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadSharingStatus *out,
        const tms_LoadSharingStatus *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_LoadSharingStatusPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_LoadSharingStatus *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_LoadSharingStatusPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_LoadSharingStatus *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadSharingStatusPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadSharingStatus **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_LoadSharingStatusPlugin_deserialize_from_cdr_buffer(
        tms_LoadSharingStatus *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_LoadSharingStatusPlugin_data_to_string(
        const tms_LoadSharingStatus *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_LoadSharingStatusPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_LoadSharingStatusPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_LoadSharingStatusPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_LoadSharingStatusPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadSharingStatusPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadSharingStatus ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadSharingStatusPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadSharingStatusKeyHolder *key, 
        const tms_LoadSharingStatus *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadSharingStatusPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadSharingStatus *instance, 
        const tms_LoadSharingStatusKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadSharingStatusPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_LoadSharingStatus *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadSharingStatusPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_LoadSharingStatusPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_LoadSharingStatusPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_LoadSharingStatusPlugin_delete(struct PRESTypePlugin *);

    #define tms_LoadEstimatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_LoadEstimatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_LoadEstimatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_LoadEstimatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_LoadEstimatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_LoadEstimate*
    tms_LoadEstimatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_LoadEstimate*
    tms_LoadEstimatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_LoadEstimate*
    tms_LoadEstimatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadEstimatePluginSupport_copy_data(
        tms_LoadEstimate *out,
        const tms_LoadEstimate *in);

    NDDSUSERDllExport extern void 
    tms_LoadEstimatePluginSupport_destroy_data_w_params(
        tms_LoadEstimate *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_LoadEstimatePluginSupport_destroy_data_ex(
        tms_LoadEstimate *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_LoadEstimatePluginSupport_destroy_data(
        tms_LoadEstimate *sample);

    NDDSUSERDllExport extern void 
    tms_LoadEstimatePluginSupport_print_data(
        const tms_LoadEstimate *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_LoadEstimatePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_LoadEstimatePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_LoadEstimatePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_LoadEstimatePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_LoadEstimatePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadEstimate *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_LoadEstimatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadEstimate *out,
        const tms_LoadEstimate *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_LoadEstimatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_LoadEstimate *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_LoadEstimatePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_LoadEstimate *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadEstimatePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadEstimate **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_LoadEstimatePlugin_deserialize_from_cdr_buffer(
        tms_LoadEstimate *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_LoadEstimatePlugin_data_to_string(
        const tms_LoadEstimate *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_LoadEstimatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_LoadEstimatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_LoadEstimatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_LoadEstimatePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadEstimatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadEstimate ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_LoadEstimatePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_LoadEstimatePlugin_new(void);

    NDDSUSERDllExport extern void
    tms_LoadEstimatePlugin_delete(struct PRESTypePlugin *);

    #define tms_LoadChangePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_LoadChangePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_LoadChangePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_LoadChangePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_LoadChangePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_LoadChange*
    tms_LoadChangePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_LoadChange*
    tms_LoadChangePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_LoadChange*
    tms_LoadChangePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadChangePluginSupport_copy_data(
        tms_LoadChange *out,
        const tms_LoadChange *in);

    NDDSUSERDllExport extern void 
    tms_LoadChangePluginSupport_destroy_data_w_params(
        tms_LoadChange *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_LoadChangePluginSupport_destroy_data_ex(
        tms_LoadChange *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_LoadChangePluginSupport_destroy_data(
        tms_LoadChange *sample);

    NDDSUSERDllExport extern void 
    tms_LoadChangePluginSupport_print_data(
        const tms_LoadChange *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_LoadChangePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_LoadChangePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_LoadChangePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_LoadChangePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_LoadChangePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadChange *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_LoadChangePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadChange *out,
        const tms_LoadChange *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_LoadChangePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_LoadChange *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_LoadChangePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_LoadChange *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadChangePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadChange **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_LoadChangePlugin_deserialize_from_cdr_buffer(
        tms_LoadChange *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_LoadChangePlugin_data_to_string(
        const tms_LoadChange *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_LoadChangePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_LoadChangePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_LoadChangePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_LoadChangePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadChangePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadChange ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_LoadChangePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_LoadChangePlugin_new(void);

    NDDSUSERDllExport extern void
    tms_LoadChangePlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct LoadChangeRequest
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct LoadChangeRequest)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * LoadChangeRequest must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct LoadChangeRequest.
    */
    typedef  class tms_LoadChangeRequest tms_LoadChangeRequestKeyHolder;

    #define tms_LoadChangeRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_LoadChangeRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_LoadChangeRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_LoadChangeRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_LoadChangeRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_LoadChangeRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_LoadChangeRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_LoadChangeRequest*
    tms_LoadChangeRequestPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_LoadChangeRequest*
    tms_LoadChangeRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_LoadChangeRequest*
    tms_LoadChangeRequestPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadChangeRequestPluginSupport_copy_data(
        tms_LoadChangeRequest *out,
        const tms_LoadChangeRequest *in);

    NDDSUSERDllExport extern void 
    tms_LoadChangeRequestPluginSupport_destroy_data_w_params(
        tms_LoadChangeRequest *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_LoadChangeRequestPluginSupport_destroy_data_ex(
        tms_LoadChangeRequest *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_LoadChangeRequestPluginSupport_destroy_data(
        tms_LoadChangeRequest *sample);

    NDDSUSERDllExport extern void 
    tms_LoadChangeRequestPluginSupport_print_data(
        const tms_LoadChangeRequest *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_LoadChangeRequest*
    tms_LoadChangeRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_LoadChangeRequest*
    tms_LoadChangeRequestPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_LoadChangeRequestPluginSupport_destroy_key_ex(
        tms_LoadChangeRequestKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_LoadChangeRequestPluginSupport_destroy_key(
        tms_LoadChangeRequestKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_LoadChangeRequestPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_LoadChangeRequestPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_LoadChangeRequestPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_LoadChangeRequestPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_LoadChangeRequestPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadChangeRequest *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_LoadChangeRequestPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadChangeRequest *out,
        const tms_LoadChangeRequest *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_LoadChangeRequestPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_LoadChangeRequest *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_LoadChangeRequestPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_LoadChangeRequest *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadChangeRequestPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadChangeRequest **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_LoadChangeRequestPlugin_deserialize_from_cdr_buffer(
        tms_LoadChangeRequest *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_LoadChangeRequestPlugin_data_to_string(
        const tms_LoadChangeRequest *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_LoadChangeRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_LoadChangeRequestPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_LoadChangeRequestPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_LoadChangeRequestPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadChangeRequestPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadChangeRequest ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadChangeRequestPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadChangeRequestKeyHolder *key, 
        const tms_LoadChangeRequest *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadChangeRequestPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_LoadChangeRequest *instance, 
        const tms_LoadChangeRequestKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadChangeRequestPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_LoadChangeRequest *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_LoadChangeRequestPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_LoadChangeRequestPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_LoadChangeRequestPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_LoadChangeRequestPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct SimulationCapabilities
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct SimulationCapabilities)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * SimulationCapabilities must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct SimulationCapabilities.
    */
    typedef  class tms_SimulationCapabilities tms_SimulationCapabilitiesKeyHolder;

    #define tms_SimulationCapabilitiesPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_SimulationCapabilitiesPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_SimulationCapabilitiesPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_SimulationCapabilitiesPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_SimulationCapabilitiesPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_SimulationCapabilitiesPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_SimulationCapabilitiesPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_SimulationCapabilities*
    tms_SimulationCapabilitiesPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_SimulationCapabilities*
    tms_SimulationCapabilitiesPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_SimulationCapabilities*
    tms_SimulationCapabilitiesPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_SimulationCapabilitiesPluginSupport_copy_data(
        tms_SimulationCapabilities *out,
        const tms_SimulationCapabilities *in);

    NDDSUSERDllExport extern void 
    tms_SimulationCapabilitiesPluginSupport_destroy_data_w_params(
        tms_SimulationCapabilities *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_SimulationCapabilitiesPluginSupport_destroy_data_ex(
        tms_SimulationCapabilities *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_SimulationCapabilitiesPluginSupport_destroy_data(
        tms_SimulationCapabilities *sample);

    NDDSUSERDllExport extern void 
    tms_SimulationCapabilitiesPluginSupport_print_data(
        const tms_SimulationCapabilities *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_SimulationCapabilities*
    tms_SimulationCapabilitiesPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_SimulationCapabilities*
    tms_SimulationCapabilitiesPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_SimulationCapabilitiesPluginSupport_destroy_key_ex(
        tms_SimulationCapabilitiesKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_SimulationCapabilitiesPluginSupport_destroy_key(
        tms_SimulationCapabilitiesKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_SimulationCapabilitiesPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_SimulationCapabilitiesPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_SimulationCapabilitiesPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_SimulationCapabilitiesPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_SimulationCapabilitiesPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_SimulationCapabilities *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_SimulationCapabilitiesPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_SimulationCapabilities *out,
        const tms_SimulationCapabilities *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_SimulationCapabilitiesPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_SimulationCapabilities *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_SimulationCapabilitiesPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_SimulationCapabilities *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_SimulationCapabilitiesPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_SimulationCapabilities **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_SimulationCapabilitiesPlugin_deserialize_from_cdr_buffer(
        tms_SimulationCapabilities *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_SimulationCapabilitiesPlugin_data_to_string(
        const tms_SimulationCapabilities *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_SimulationCapabilitiesPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_SimulationCapabilitiesPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_SimulationCapabilitiesPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_SimulationCapabilitiesPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_SimulationCapabilitiesPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_SimulationCapabilities ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_SimulationCapabilitiesPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_SimulationCapabilitiesKeyHolder *key, 
        const tms_SimulationCapabilities *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_SimulationCapabilitiesPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_SimulationCapabilities *instance, 
        const tms_SimulationCapabilitiesKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_SimulationCapabilitiesPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_SimulationCapabilities *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_SimulationCapabilitiesPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_SimulationCapabilitiesPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_SimulationCapabilitiesPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_SimulationCapabilitiesPlugin_delete(struct PRESTypePlugin *);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_TimeModePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_TimeModePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_TimeModePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    tms_TimeModePluginSupport_print_data(
        const tms_TimeMode *sample, const char *desc, int indent_level);

    #define tms_TimeSchemePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_TimeSchemePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_TimeSchemePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_TimeSchemePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_TimeSchemePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_TimeScheme*
    tms_TimeSchemePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_TimeScheme*
    tms_TimeSchemePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_TimeScheme*
    tms_TimeSchemePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_TimeSchemePluginSupport_copy_data(
        tms_TimeScheme *out,
        const tms_TimeScheme *in);

    NDDSUSERDllExport extern void 
    tms_TimeSchemePluginSupport_destroy_data_w_params(
        tms_TimeScheme *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_TimeSchemePluginSupport_destroy_data_ex(
        tms_TimeScheme *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_TimeSchemePluginSupport_destroy_data(
        tms_TimeScheme *sample);

    NDDSUSERDllExport extern void 
    tms_TimeSchemePluginSupport_print_data(
        const tms_TimeScheme *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_TimeSchemePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_TimeSchemePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_TimeSchemePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_TimeSchemePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_TimeSchemePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_TimeScheme *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_TimeSchemePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_TimeScheme *out,
        const tms_TimeScheme *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_TimeSchemePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_TimeScheme *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_TimeSchemePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_TimeScheme *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_TimeSchemePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_TimeScheme **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_TimeSchemePlugin_deserialize_from_cdr_buffer(
        tms_TimeScheme *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_TimeSchemePlugin_data_to_string(
        const tms_TimeScheme *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_TimeSchemePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_TimeSchemePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_TimeSchemePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_TimeSchemePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_TimeSchemePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_TimeScheme ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_TimeSchemePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_TimeSchemePlugin_new(void);

    NDDSUSERDllExport extern void
    tms_TimeSchemePlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct TimeAdvance
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct TimeAdvance)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * TimeAdvance must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct TimeAdvance.
    */
    typedef  class tms_TimeAdvance tms_TimeAdvanceKeyHolder;

    #define tms_TimeAdvancePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_TimeAdvancePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_TimeAdvancePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_TimeAdvancePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_TimeAdvancePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_TimeAdvancePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_TimeAdvancePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_TimeAdvance*
    tms_TimeAdvancePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_TimeAdvance*
    tms_TimeAdvancePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_TimeAdvance*
    tms_TimeAdvancePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_TimeAdvancePluginSupport_copy_data(
        tms_TimeAdvance *out,
        const tms_TimeAdvance *in);

    NDDSUSERDllExport extern void 
    tms_TimeAdvancePluginSupport_destroy_data_w_params(
        tms_TimeAdvance *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_TimeAdvancePluginSupport_destroy_data_ex(
        tms_TimeAdvance *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_TimeAdvancePluginSupport_destroy_data(
        tms_TimeAdvance *sample);

    NDDSUSERDllExport extern void 
    tms_TimeAdvancePluginSupport_print_data(
        const tms_TimeAdvance *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_TimeAdvance*
    tms_TimeAdvancePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_TimeAdvance*
    tms_TimeAdvancePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_TimeAdvancePluginSupport_destroy_key_ex(
        tms_TimeAdvanceKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_TimeAdvancePluginSupport_destroy_key(
        tms_TimeAdvanceKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_TimeAdvancePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_TimeAdvancePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_TimeAdvancePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_TimeAdvancePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_TimeAdvancePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_TimeAdvance *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_TimeAdvancePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_TimeAdvance *out,
        const tms_TimeAdvance *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_TimeAdvancePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_TimeAdvance *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_TimeAdvancePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_TimeAdvance *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_TimeAdvancePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_TimeAdvance **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_TimeAdvancePlugin_deserialize_from_cdr_buffer(
        tms_TimeAdvance *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_TimeAdvancePlugin_data_to_string(
        const tms_TimeAdvance *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_TimeAdvancePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_TimeAdvancePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_TimeAdvancePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_TimeAdvancePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_TimeAdvancePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_TimeAdvance ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_TimeAdvancePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_TimeAdvanceKeyHolder *key, 
        const tms_TimeAdvance *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_TimeAdvancePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_TimeAdvance *instance, 
        const tms_TimeAdvanceKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_TimeAdvancePlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_TimeAdvance *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_TimeAdvancePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_TimeAdvancePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_TimeAdvancePlugin_new(void);

    NDDSUSERDllExport extern void
    tms_TimeAdvancePlugin_delete(struct PRESTypePlugin *);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_MicrogridMembershipPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_MicrogridMembershipPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_MicrogridMembershipPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    tms_MicrogridMembershipPluginSupport_print_data(
        const tms_MicrogridMembership *sample, const char *desc, int indent_level);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct MicrogridMembershipRequest
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct MicrogridMembershipRequest)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * MicrogridMembershipRequest must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct MicrogridMembershipRequest.
    */
    typedef  class tms_MicrogridMembershipRequest tms_MicrogridMembershipRequestKeyHolder;

    #define tms_MicrogridMembershipRequestPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_MicrogridMembershipRequestPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_MicrogridMembershipRequestPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_MicrogridMembershipRequestPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_MicrogridMembershipRequestPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_MicrogridMembershipRequestPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_MicrogridMembershipRequestPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_MicrogridMembershipRequest*
    tms_MicrogridMembershipRequestPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_MicrogridMembershipRequest*
    tms_MicrogridMembershipRequestPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_MicrogridMembershipRequest*
    tms_MicrogridMembershipRequestPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_MicrogridMembershipRequestPluginSupport_copy_data(
        tms_MicrogridMembershipRequest *out,
        const tms_MicrogridMembershipRequest *in);

    NDDSUSERDllExport extern void 
    tms_MicrogridMembershipRequestPluginSupport_destroy_data_w_params(
        tms_MicrogridMembershipRequest *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_MicrogridMembershipRequestPluginSupport_destroy_data_ex(
        tms_MicrogridMembershipRequest *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_MicrogridMembershipRequestPluginSupport_destroy_data(
        tms_MicrogridMembershipRequest *sample);

    NDDSUSERDllExport extern void 
    tms_MicrogridMembershipRequestPluginSupport_print_data(
        const tms_MicrogridMembershipRequest *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_MicrogridMembershipRequest*
    tms_MicrogridMembershipRequestPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_MicrogridMembershipRequest*
    tms_MicrogridMembershipRequestPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_MicrogridMembershipRequestPluginSupport_destroy_key_ex(
        tms_MicrogridMembershipRequestKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_MicrogridMembershipRequestPluginSupport_destroy_key(
        tms_MicrogridMembershipRequestKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_MicrogridMembershipRequestPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_MicrogridMembershipRequestPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_MicrogridMembershipRequestPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_MicrogridMembershipRequestPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_MicrogridMembershipRequestPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_MicrogridMembershipRequest *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_MicrogridMembershipRequestPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_MicrogridMembershipRequest *out,
        const tms_MicrogridMembershipRequest *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_MicrogridMembershipRequestPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_MicrogridMembershipRequest *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_MicrogridMembershipRequestPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_MicrogridMembershipRequest *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_MicrogridMembershipRequestPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_MicrogridMembershipRequest **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_MicrogridMembershipRequestPlugin_deserialize_from_cdr_buffer(
        tms_MicrogridMembershipRequest *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_MicrogridMembershipRequestPlugin_data_to_string(
        const tms_MicrogridMembershipRequest *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_MicrogridMembershipRequestPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_MicrogridMembershipRequestPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_MicrogridMembershipRequestPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_MicrogridMembershipRequestPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_MicrogridMembershipRequestPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_MicrogridMembershipRequest ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_MicrogridMembershipRequestPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_MicrogridMembershipRequestKeyHolder *key, 
        const tms_MicrogridMembershipRequest *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_MicrogridMembershipRequestPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_MicrogridMembershipRequest *instance, 
        const tms_MicrogridMembershipRequestKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_MicrogridMembershipRequestPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_MicrogridMembershipRequest *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_MicrogridMembershipRequestPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_MicrogridMembershipRequestPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_MicrogridMembershipRequestPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_MicrogridMembershipRequestPlugin_delete(struct PRESTypePlugin *);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_MicrogridMembershipResultPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    tms_MicrogridMembershipResultPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_MicrogridMembershipResultPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    tms_MicrogridMembershipResultPluginSupport_print_data(
        const tms_MicrogridMembershipResult *sample, const char *desc, int indent_level);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct MicrogridMembershipApproval
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct MicrogridMembershipApproval)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * MicrogridMembershipApproval must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct MicrogridMembershipApproval.
    */
    typedef  class tms_MicrogridMembershipApproval tms_MicrogridMembershipApprovalKeyHolder;

    #define tms_MicrogridMembershipApprovalPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define tms_MicrogridMembershipApprovalPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define tms_MicrogridMembershipApprovalPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define tms_MicrogridMembershipApprovalPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define tms_MicrogridMembershipApprovalPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define tms_MicrogridMembershipApprovalPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define tms_MicrogridMembershipApprovalPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern tms_MicrogridMembershipApproval*
    tms_MicrogridMembershipApprovalPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern tms_MicrogridMembershipApproval*
    tms_MicrogridMembershipApprovalPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_MicrogridMembershipApproval*
    tms_MicrogridMembershipApprovalPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    tms_MicrogridMembershipApprovalPluginSupport_copy_data(
        tms_MicrogridMembershipApproval *out,
        const tms_MicrogridMembershipApproval *in);

    NDDSUSERDllExport extern void 
    tms_MicrogridMembershipApprovalPluginSupport_destroy_data_w_params(
        tms_MicrogridMembershipApproval *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    tms_MicrogridMembershipApprovalPluginSupport_destroy_data_ex(
        tms_MicrogridMembershipApproval *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_MicrogridMembershipApprovalPluginSupport_destroy_data(
        tms_MicrogridMembershipApproval *sample);

    NDDSUSERDllExport extern void 
    tms_MicrogridMembershipApprovalPluginSupport_print_data(
        const tms_MicrogridMembershipApproval *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern tms_MicrogridMembershipApproval*
    tms_MicrogridMembershipApprovalPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern tms_MicrogridMembershipApproval*
    tms_MicrogridMembershipApprovalPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    tms_MicrogridMembershipApprovalPluginSupport_destroy_key_ex(
        tms_MicrogridMembershipApprovalKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    tms_MicrogridMembershipApprovalPluginSupport_destroy_key(
        tms_MicrogridMembershipApprovalKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    tms_MicrogridMembershipApprovalPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    tms_MicrogridMembershipApprovalPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    tms_MicrogridMembershipApprovalPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    tms_MicrogridMembershipApprovalPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    tms_MicrogridMembershipApprovalPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_MicrogridMembershipApproval *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    tms_MicrogridMembershipApprovalPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        tms_MicrogridMembershipApproval *out,
        const tms_MicrogridMembershipApproval *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    tms_MicrogridMembershipApprovalPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const tms_MicrogridMembershipApproval *sample); 

    NDDSUSERDllExport extern RTIBool
    tms_MicrogridMembershipApprovalPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const tms_MicrogridMembershipApproval *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    tms_MicrogridMembershipApprovalPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        tms_MicrogridMembershipApproval **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    tms_MicrogridMembershipApprovalPlugin_deserialize_from_cdr_buffer(
        tms_MicrogridMembershipApproval *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    tms_MicrogridMembershipApprovalPlugin_data_to_string(
        const tms_MicrogridMembershipApproval *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    tms_MicrogridMembershipApprovalPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    tms_MicrogridMembershipApprovalPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    tms_MicrogridMembershipApprovalPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    tms_MicrogridMembershipApprovalPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    tms_MicrogridMembershipApprovalPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_MicrogridMembershipApproval ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    tms_MicrogridMembershipApprovalPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        tms_MicrogridMembershipApprovalKeyHolder *key, 
        const tms_MicrogridMembershipApproval *instance);

    NDDSUSERDllExport extern RTIBool 
    tms_MicrogridMembershipApprovalPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        tms_MicrogridMembershipApproval *instance, 
        const tms_MicrogridMembershipApprovalKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    tms_MicrogridMembershipApprovalPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const tms_MicrogridMembershipApproval *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    tms_MicrogridMembershipApprovalPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *tms_MicrogridMembershipApprovalPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    tms_MicrogridMembershipApprovalPlugin_new(void);

    NDDSUSERDllExport extern void
    tms_MicrogridMembershipApprovalPlugin_delete(struct PRESTypePlugin *);

}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* tmsTestExamplePlugin_396845832_h */

