/**
 *  @file           Platform_Types.h
 *  @version        2.1.4
 *  @brief          AUTOSAR Base - Platform  types  definition
 *  @details        AUTOSAR Platform types header file. it contains all platform dependent types and symbols.
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
 * @section PLATFORM_Types.h_REF_1
 * 
*/
#ifndef PLATFORM_TYPES_H
#define PLATFORM_TYPES_H

#include "inttypes.h" 

#ifdef __cplusplus
extern "C" {
#endif

/** =======================================================================================================
                                 SOURCE FILE VERSION INFORMATION
==========================================================================================================*/
/**
 *  @brief Parameters that shall be published within the standard types header file and also in the modules's description file
*/
#define PLATFORM_VENDOR_ID                       56

#define PLATFORM_AR_RELEASE_MAJOR_VERSION        2
#define PLATFORM_AR_RELEASE_MINOR_VERSION        1
#define PLATFORM_AR_RELEASE_REVISION_VERSION     4

#define PLATFORM_SW_MAJOR_VERSION                2
#define PLATFORM_SW_MINOR_VERSION                1
#define PLATFORM_SW_PATCH_VERSION                3

/** =======================================================================================================
                                    DEFINES AND MACROS
==========================================================================================================*/
#define CPU_TYPE_8                          8
#define CPU_TYPE_16                         16 
#define CPU_TYPE_32                         32
#define CPU_TYPE_64                         64

#define MSB_FIRST                           0
#define LSB_FIRST                           1

#define HIGH_BYTE_FIRST                     0
#define LOW_BYTE_FIRST                      1

#define CPU_TYPE (CPU_TYPE_32)                    
#define CPU_BIT_ORDER (LSB_FIRST)
#define CPU_BYTE_ORDER  (HIGH_BYTE_FIRST)

/*---------------------------------------------------*/
#ifndef TRUE
    #define TRUE    1
#endif

#ifndef FALSE
    #define FALSE   0
#endif


#if (CPU_TYPE == CPU_TYPE_16)
typedef unsigned char boolean;
typedef signed char sint8; 
typedef unsigned char uint8;
typedef signed short sint16;
typedef unsigned short uint16;
typedef signed long sint32; 
typedef signed long long sint64;
typedef unsigned long uint32;
typedef unsigned long long uint64;
typedef signed char sint8_least;
typedef unsigned char uint8_least;
typedef signed short sint16_least;
typedef unsigned short uint16_least;
typedef signed long sint32_least;
typedef unsigned long uint32_least;
typedef float float32;
typedef double float64;

#elif (CPU_TYPE == CPU_TYPE_32)
typedef unsigned char boolean;
typedef signed char sint8;
typedef unsigned char uint8;
typedef signed short sint16;
typedef unsigned short uint16;
typedef signed long sint32;
typedef signed long long sint64;
typedef unsigned long uint32;
typedef unsigned long long uint64;
typedef unsigned long uint8_least;
typedef unsigned long uint16_least;
typedef unsigned long uint32_least;
typedef signed long sint8_least;
typedef signed long sint16_least;
typedef signed long sint32_least;
typedef float float32;
typedef double float64;

#elif (CPU_TYPE == CPU_TYPE_64)
typedef unsigned char boolean;
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
typedef unsigned long long uint64;
typedef signed char sint8;
typedef signed short sint16;
typedef signed int sint32;
typedef signed long long sint64;
typedef unsigned int uint8_least;
typedef unsigned int uint16_least;
typedef unsigned int uint32_least;
typedef signed int sint8_least;
typedef signed int sint16_least;
typedef signed int sint32_least;
typedef float float32;
typedef double float64;
#endif


/*---------------------------------------------------*/
#ifdef __cplusplus
}
#endif
#endif /* PLATFORM_TYPES_H */