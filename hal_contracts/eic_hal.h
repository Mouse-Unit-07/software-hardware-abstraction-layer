/*-------------------------------- FILE INFO ---------------------------------*/
/* Filename           : eic_hal.h                                             */
/*                                                                            */
/* External interrupt controller HAL interface                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#ifndef EIC_HAL_H_
#define EIC_HAL_H_

/*----------------------------------------------------------------------------*/
/*                             Public Definitions                             */
/*----------------------------------------------------------------------------*/
struct eic_handle;

struct eic_hal_handler{
    void (*init_eic)(void);
    void (*deinit_eic)(void);
    void (*set_external_callback)(const struct eic_handle *handle, 
        void (*callback)(void));
};

/*----------------------------------------------------------------------------*/
/*                         Public Function Prototypes                         */
/*----------------------------------------------------------------------------*/
/* none */

#endif /* EIC_HAL_H_ */
