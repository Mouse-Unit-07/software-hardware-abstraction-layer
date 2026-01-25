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
typedef struct {
    void (*init_pwm)(void);
    void (*deinit_pwm)(void);
    void (*set_pwm_duty_cycle_percent)(uint32_t line, uint32_t percent);
} pwm_hal_handler;

/*----------------------------------------------------------------------------*/
/*                         Public Function Prototypes                         */
/*----------------------------------------------------------------------------*/
/* none */

#endif /* PWWM_HAL_H_ */
