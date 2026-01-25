/*-------------------------------- FILE INFO ---------------------------------*/
/* Filename           : external_interrupt_controller_hal.h                   */
/*                                                                            */
/* External interrupt controller HAL interface                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#ifndef EXTERNAL_INTERRUPT_CONTROLLER_HAL_H_
#define EXTERNAL_INTERRUPT_CONTROLLER_HAL_H_

/*----------------------------------------------------------------------------*/
/*                             Public Definitions                             */
/*----------------------------------------------------------------------------*/
typedef void (*external_callback_function)(void);

typedef struct {
    void (*init_external_interrupt_controller)(void);
    void (*deinit_external_interrupt_controller)(void);
    void (*set_external_callback)(uint32_t line, 
        external_callback_function callback);
} eic_hal_handler;

/*----------------------------------------------------------------------------*/
/*                         Public Function Prototypes                         */
/*----------------------------------------------------------------------------*/
/* none */

#endif /* EXTERNAL_INTERRUPT_CONTROLLER_HAL_H_ */
