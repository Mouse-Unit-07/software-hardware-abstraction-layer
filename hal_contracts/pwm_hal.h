/*-------------------------------- FILE INFO ---------------------------------*/
/* Filename           : pwm_hal.h                                             */
/*                                                                            */
/* Pulse width modulation HAL interface                                       */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#ifndef PWM_HAL_H_
#define PWM_HAL_H_

/*----------------------------------------------------------------------------*/
/*                             Public Definitions                             */
/*----------------------------------------------------------------------------*/
struct pwm_handle;

struct pwm_hal_handler {
    void (*init_pwm)(void);
    void (*deinit_pwm)(void);
    void (*set_pwm_duty_cycle_percent)(const struct pwm_handle *handle, uint32_t percent);
};

/*----------------------------------------------------------------------------*/
/*                         Public Function Prototypes                         */
/*----------------------------------------------------------------------------*/
/* none */

#endif /* PWWM_HAL_H_ */
