/**
 *  @file           Compiler.h
 *  @version        2.1.4
 *  @brief          AUTOSAR Base - Compiler types  definition
 *  @details        AUTOSAR Compiler types header file. it contains all Compiler dependent types and symbols.
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
#ifndef COMPILER_H
#define COMPILER_H

#include "Compiler_Cfg.h"

#ifdef __cplusplus
extern "C" {
#endif

/** =======================================================================================================
                                 SOURCE FILE VERSION INFORMATION
==========================================================================================================*/
/**
 *  @brief Parameters that shall be published within the standard types header file and also in the modules's description file
*/
#define COMPILER_VENDOR_ID                       56

#define COMPILER_AR_RELEASE_MAJOR_VERSION        2
#define COMPILER_AR_RELEASE_MINOR_VERSION        1
#define COMPILER_AR_RELEASE_REVISION_VERSION     4

#define COMPILER_SW_MAJOR_VERSION                2
#define COMPILER_SW_MINOR_VERSION                1
#define COMPILER_SW_PATCH_VERSION                3

/** =======================================================================================================
                                    DEFINES AND MACROS
==========================================================================================================*/

#ifndef GCC_ARM_NONE_EABI
    #define GCC_ARM_NONE_EABI
#endif

/**
 * @brief The memory class AUTOMATIC shall be provided as empty definition, used for the declaration of local pointers.
*/
#define AUTOMATIC

/**
 * @brief The memory class TYPEDEF shall be provided as empty definition. This memory class shall be used within type definitions,
 *         where no memory qualifier can be specified. This can be necessary for defining pointer types, with e.g. P2VAR, 
 *         where the macros require two parameters. First parameter can be specified in the  type definition 
 *         (distance to the memory location referenced by the pointer), but the second one (memory allocation of the pointer itself) 
 *          cannot be defined at this time. Hence, memory class TYPEDEF shall be applied.
*/
#define TYPEDEF

/** 
 * @brief The compiler abstraction shall provide the INLINE define for abstraction of the keyword inline. 
*/
#define INLINE 

/**
 * @brief The compiler abstraction shall provide the LOCAL_INLINE define for abstraction of the keyword 
 *        inline in functions with “static” scope.
*/
#define LOCAL_INLINE

/** 
 * @brief The compiler abstraction shall provide the STATIC define for abstraction of the keyword static. 
*/
#define STATIC 

/**
 *  @brief The compiler abstraction shall provide the INTERRUPT define for abstraction of the interrupt handler. 
*/
#define INTERRUPT_FUNC

/**
 * @brief The compiler abstraction shall provide the NULL_PTR define for zero void-casted value.
*/
#define NULL_PTR    ((void *) 0)

/*--------------------------------------COMPILER_OF_SOME_TARGET--------------------------------------------------*/
#ifdef COMPILER_OF_SOME_TARGET
    #define keyword
#endif /* COMPILER_OF_SOME_TARGET */

/*----------------------------------------------------------------------------------------------------------------*/
#ifdef sGCC_ARM_NONE_EABI
    #define keyword_2
#endif /* COMPILER_OF_SOME_TARGET */

/*----------------------------------------GCC_ARM_NONE_EABI-------------------------------------------------------*/
#ifdef GCC_ARM_NONE_EABI
    #define INLINE              inline
    #define LOCAL_INLINE        static inline
    #define STATIC              static
    #define INTERRUPT_FUNC       
#endif /* GNU_ARM_C_STM32F407_ */
/*----------------------------------------------------------------------------------------------------------------*/

/**
 * @brief The compiler abstraction shall define the FUNC macro for the declaration and
 *         definition of functions that ensures correct syntax of function declarations as 
 *         required by a specific compiler.
*/
#define FUNC(rettype, memclass) rettype

/**
 * @brief The compiler abstraction shall define the FUNC_P2CONST macro for the 
 *        declaration and definition of functions returning a pointer to a constant. This shall
 *        ensure the correct syntax of function declarations as required by a specific compiler.
 * @return 
*/
#define FUNC_P2CONST(rettype, ptrclass, memclass)

/**
 * @brief The compiler abstraction shall define the P2VAR macro for the declaration and
 *        definition of pointers in RAM, pointing to variables.
*/
#define P2VAR(ptrtype, memclass, ptrclass)

/**
 * @brief The compiler abstraction shall define the P2CONST macro for the declaration
 *        and definition of pointers in RAM pointing to constants
*/
#define P2CONST(ptrtype, memclass, ptrclass)

/**
 * @brief The compiler abstraction shall define the CONSTP2VAR macro for the
 *        declaration and definition of constant pointers accessing variables.
*/
#define CONSTP2VAR (ptrtype, memclass, ptrclass)

/**
 * @brief The compiler abstraction shall define the CONSTP2CONST macro for the
 *        declaration and definition of constant pointers accessing constants.
 */
#define CONSTP2CONST(ptrtype, memclass, ptrclass)

/**
 * @brief The compiler abstraction shall define the P2FUNC macro for the type definition of pointers to functions.
*/
#define P2FUNC(rettype, ptrclass, fctname)

/**
 * @brief The compiler abstraction shall define the CONST macro for the declaration and definition of constants.
*/
#define CONST(consttype, memclass)

/**
 * @brief The compiler abstraction shall define the VAR macro for the declaration and definition of variables.
*/
#define VAR(vartype, memclass)

#ifdef __cplusplus
}
#endif

#endif  /* COMPILER_H */