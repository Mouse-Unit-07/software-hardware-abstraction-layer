/*-------------------------------- FILE INFO ---------------------------------*/
/* Filename           : internal_interrupt_controller_hal.h                   */
/*                                                                            */
/* Internal interrupt controller HAL interface                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#ifndef INTERNAL_INTERRUPT_CONTROLLER_HAL_H_
#define INTERNAL_INTERRUPT_CONTROLLER_HAL_H_

/*----------------------------------------------------------------------------*/
/*                             Public Definitions                             */
/*----------------------------------------------------------------------------*/
typedef struct {
    void (*init_internal_interrupt_controller)(void);
    void (*deinit_internal_interrupt_controller)(void);
    void (*enable_global_interrupts)(void);
    void (*disable_global_interrupts)(void);
} iic_hal_handler;

/*----------------------------------------------------------------------------*/
/*                         Public Function Prototypes                         */
/*----------------------------------------------------------------------------*/
/* none */

#endif /* INTERNAL_INTERRUPT_CONTROLLER_HAL_H_ */
