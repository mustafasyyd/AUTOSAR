/**
 *  @file           Std_Types.h
 *  @version        2.1.4
 *  @brief          AUTOSAR Base - Standard types  definition
 *  @details        AUTOSAR standard types header file. it contains all types, which are used 
 *                      across all modules of the basic software and are platform and compiler independent.
 *  
 * @addtogroup      BASE_COMPONENT
 * @author mustafa sayed
*/

/** =======================================================================================================
 *  Project                : AUTOSAR 2.1.4 MCAL 
 *  Platform               : ARM
 *  Peripheral             : STM32F103C
 *  Dependencies           : None
 *  
 *  AUTOSAR version        : 2.1.4
 *  AUTOSAR Revision       : ASR_REL_1.4_REV__000 
 *  AUTOSAR conf. variant  :
 *  SW version             : 2.1.3
 *  Build version          : 2.1.4
 =========================================================================================================*/

/**
 * @page misra_violation MISRA-C:2012 violations    
 * 
 * @section Std_Types.h_REF_1
 * 
*/

#ifndef STD_TYPES_H
#define STD_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

/** =======================================================================================================
                                          INCLUDE FILES
 =========================================================================================================*/
#include "inttypes.h"
#include "Platform_Types.h"
#include "Compiler.h"

/** =======================================================================================================
                                 SOURCE FILE VERSION INFORMATION
 =========================================================================================================*/
/**
 *  @brief Parameters that shall be published within the standard types header file and also in the modules's description file
*/
#define STD_VENDOR_ID

#define STD_AR_RELEASE_MAJOR_VERSION        2
#define STD_AR_RELEASE_MINOR_VERSION        1
#define STD_AR_RELEASE_REVISION_VERSION     4

#define STD_SW_MAJOR_VERSION                2
#define STD_SW_MINOR_VERSION                1
#define STD_SW_PATCH_VERSION                3

/** =======================================================================================================
                                 FILE VERSION CHECK
==========================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if source file and platform_Types header file are of the same Autosar version*/
#if ((STD_AR_RELEASE_MAJOR_VERSION != PLATFORM_AR_RELEASE_MAJOR_VERSION) || \
    (STD_AR_RELEASE_MINOR_VERSION != PLATFORM_AR_RELEASE_MINOR_VERSION))
    #error "Autosar Version Numbers of Std_Types.h and Platform_Types.h are different"
#endif
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
#if ((STD_AR_RELEASE_MAJOR_VERSION != COMPILER_AR_RELEASE_MAJOR_VERSION) || \
    (STD_AR_RELEASE_MINOR_VERSION != COMPILER_AR_RELEASE_MINOR_VERSION))
    #error "Autosar Version Numbers of Std_Types.h and Platform_Types.h are different"
#endif
#endif

/** =======================================================================================================
                                    DEFINES AND MACROS
==========================================================================================================*/
#ifndef STATUSTYPEDEFINED 
#define STATUSTYPEDEFINED
    #define E_OK        0X00u
    typedef unsigned char StatusType; /* OSED compliance */
#endif

#define E_NOT_OK    0X01u

#define STD_HIGH    0x01u   /* Physical state 5V 0r 3.3V */
#define STD_LOW     0x00u   /* Physical state 0V */

#define STD_ACTIVE  0x01u   /* Logical state active */
#define STD_IDLE    0x00u   /* Logical state idle   */

#define STD_ON      0x01u   
#define STD_OFF     0x00u   

typedef uint8_t Std_ReturnType              ;
#define E_OK            ((Std_ReturnType)0)
#define E_NOT_OK        ((Std_ReturnType)1)



/**
 * @brief This type shall be used to request the version of a BSW module using the <Module name>_Get
            VersionInfo() function.
 * @implements  Std_VersionInfoType Structure
*/
typedef struct
{
    uint16_t vendorID                       ;
    uint16_t moduleId                       ;
    uint8_t  sw_major_version               ;
    uint8_t  sw_minor_version               ;
    uint8_t  sw_patch_version               ;

    
} Std_VersionInfoType;


/**
 * @brief Std_TransformerError represents a transformer error in the context of a certain transformer chain
 * @implements Std_TransformerError Structure
*/
typedef struct
{
    Std_TransormerErrorCode errorCode       ;
    Std_TransormerClass transormerClass     ;

} Std_TransormerError;


typedef uint8_t Std_TransormerClass         ;
typedef uint8_t Std_TransormerErrorCode     ;

typedef struct
{
    Std_TransormerForwardCode errorCode     ;
    Std_TransormerClass transformerClass    ;

} Std_TransormerForward ;


typedef uint8_t Std_TransormerForwardCode   ;

typedef uint8_t Std_MessageTypeType         ;

Std_ReturnType (* Std_ExactProtocolHeaderFieldType ) (
    const uint8_t* buffer , 
    uint32_t bufferLength ,
    Std_MessageTypeType* messageType,
    Std_MessageResultType* messageResult
);

typedef uint8_t Std_MessageResultType       ;

#ifdef __cplusplus
}
#endif

#endif /* STD_TYPES_H */
