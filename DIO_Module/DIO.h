/**
 *  @file           DIO.h
 *  @version        2.1.4
 *  @brief          AUTOSAR DIO high level code.
 *  @details        AUTOSAR DIO "Digital input output" header file. it contains API specifications 
 *                  and other variables and functions that are exported by the DIO driver.
 *  @author mustafa sayed
*/

/**=======================================================================================================
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
==========================================================================================================*/

#ifndef COMPILER_CFG_H
#define COMPILER_CFG_H

#ifdef __cplusplus
extern "C" {
#endif

/** =======================================================================================================
                                          INCLUDE FILES
 =========================================================================================================*/
#include "Std_Types.h"
#include "DIO_Cfg.h"


/** =======================================================================================================
                                 SOURCE FILE VERSION INFORMATION
 =========================================================================================================*/
/**
 *  @brief Parameters that shall be published within the DIO header file.
*/
#define DIO_VENDOR_ID                       125
#define DIO_MODULE_ID                       122

#define DIO_AR_RELEASE_MAJOR_VERSION        2
#define DIO_AR_RELEASE_MINOR_VERSION        1
#define DIO_AR_RELEASE_REVISION_VERSION     4

#define DIO_SW_MAJOR_VERSION                2
#define DIO_SW_MINOR_VERSION                1
#define DIO_SW_PATCH_VERSION                3

/** =======================================================================================================
                                        FILE VERSION CHECK
==========================================================================================================*/
/* Check if header file and Std_Types.h file are of the same Autosar version*/
#if ((DIO_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION) || \
    (DIO_AR_RELEASE_MINOR_VERSION  != STD_AR_RELEASE_MINOR_VERSION))
    #error "Autosar Version Numbers of DIO.h and Std_Types.h are different"
#endif

/* Check if current file and DIO configuration header fil are of the same vendor */
#if (DIO_VENDOR_ID != DIO_VENDOR_ID_CFG)
    #error " DIO.h and DIO_Cfg.h are different"
#endif

/* Check if current file and DIO configuration header fil are of the same Autosar version */
#if ((DIO_AR_RELEASE_MAJOR_VERSION   != DIO_AR_RELEASE_MAJOR_VERSION_CFG) || \
    (DIO_AR_RELEASE_MINOR_VERSION    != DIO_AR_RELEASE_MINOR_VERSION_CFG) || \
    (DIO_AR_RELEASE_REVISION_VERSION != DIO_AR_RELEASE_REVISION_VERSION_CFG))
    #error "Autosar Version Numbers of DIO.h and DIO_Cfg.h are different"
#endif


/** =======================================================================================================
                                                CONSTANTS
==========================================================================================================*/
/**
 * @param Invalid channel requested.
 * @implements
*/
#define DIO_E_PARAM_INVALID_CHANNEL_ID  (uint8)0x0A

/**
 * @param Invalid port requested.
 * @implements
*/
#define DIO_E_PARAM_INVALID_PORT_ID     (uint8)0x14

/**
 * @param Invalid channel group requested.
 * @implements
*/
#define DIO_E_PARAM_INVALID_GROUP       (uint8)0x1F

/**
 * @param API service called with a NULL pointer.
 * @implements
 * @details 
*/
#define DIO_E_PARAM_POINTER             (uint8)0x20

/**
 * @param Invalid channel requested
 * @implements
 * @details 

/**
 * @brief 
 * @details
*/
#define DIO_READCHANNEL_ID             (uint8_t)0x00
/**
 * @brief 
 * @details
*/
#define DIO_WRITECHANNEL_ID            (uint8_t)0x01
/**
 * @brief 
 * @details
*/
#define DIO_READPORT_ID                (uint8_t)0x02
/**
 * @brief 
 * @details
*/
#define DIO_WRITEPORT_ID               (uint8_t)0x03
/**
 * @brief 
 * @details
*/
#define DIO_READCHANNELGROUP_ID        (uint8_t)0x04
/**
 * @brief 
 * @details
*/
#define DIO_WRITECHANNELGROUP_ID       (uint8_t)0x05
/**
 * @brief 
 * @details
*/
#define DIO_GETVERSIONINFO_ID          (uint8_t)0x12
/**
 * @brief 
 * @details
*/
#define DIO_FLIPCHANNEL_ID             (uint8_t)0x11
/**
 * @brief 
 * @details
*/
#define DIO_MASKEDWRITEPORT_ID         (uint8_t)0x13
/**
 * @brief Instance ID of the DIO driver.
*/
#define DIO_INSTANCE_ID                (uint8_t)0x00

/** =======================================================================================================
                                                 ENUMS
==========================================================================================================*/


/** =======================================================================================================
                                      STRUCTURES AND OTHER TYPEDEFS
==========================================================================================================*/


/** =======================================================================================================
                                      GLOBAL VARIABLE DECLARATIONS
==========================================================================================================*/


/** =======================================================================================================
                                      STRUCTURES AND OTHER TYPEDEFS
==========================================================================================================*/


/** =======================================================================================================
                                          FUNCTION PROTOTYPES
==========================================================================================================*/
#define DIO_START_SEC_CODE
#include "MemMap.h"

FUNC(void, DIO_CODE) Dio_Init
(
    P2CONST(Dio_ConfigType, AUTOMATIC, DIO_APPL_CONST) configptr
);

Dio_LevelType Dio_ReadChannel(
Dio_ChannelType ChannelId
);

#define DIO_STOP_SEC_CODE
#include "MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /* COMPILER_CFG_H */