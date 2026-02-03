/*-------------------------------- FILE INFO ---------------------------------*/
/* Filename           : iic_hal.h                                             */
/*                                                                            */
/* Internal interrupt controller HAL interface                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#ifndef IIC_HAL_H_
#define IIC_HAL_H_

/*----------------------------------------------------------------------------*/
/*                             Public Definitions                             */
/*----------------------------------------------------------------------------*/
struct iic_hal_handler {
    void (*init_iic)(void);
    void (*deinit_iic)(void);
    void (*enable_global_interrupts)(void);
    void (*disable_global_interrupts)(void);
};

/*----------------------------------------------------------------------------*/
/*                         Public Function Prototypes                         */
/*----------------------------------------------------------------------------*/
/* none */

#endif /* IIC_HAL_H_ */
