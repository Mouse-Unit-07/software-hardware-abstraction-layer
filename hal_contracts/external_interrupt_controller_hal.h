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
struct eic_handle;

struct eic_hal_handler{
    void (*init_external_interrupt_controller)(void);
    void (*deinit_external_interrupt_controller)(void);
    void (*set_external_callback)(const struct eic_handle *handle, 
        void (*callback)(void));
};

/*----------------------------------------------------------------------------*/
/*                         Public Function Prototypes                         */
/*----------------------------------------------------------------------------*/
/* none */

#endif /* EXTERNAL_INTERRUPT_CONTROLLER_HAL_H_ */
