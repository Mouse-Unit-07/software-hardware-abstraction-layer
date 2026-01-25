/*-------------------------------- FILE INFO ---------------------------------*/
/* Filename           : timer_counter_hal.h                                   */
/*                                                                            */
/* Timer counter HAL interface                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#ifndef TIMER_COUNTER_HAL_H_
#define TIMER_COUNTER_HAL_H_

/*----------------------------------------------------------------------------*/
/*                             Public Definitions                             */
/*----------------------------------------------------------------------------*/
typedef struct {
    void (*init_timer_counter)(void);
    void (*deinit_timer_counter)(void);
    uint32_t (*get_timer_count)(void);
    void (*restart_timer)(void);
} tc_hal_handler;

/*----------------------------------------------------------------------------*/
/*                         Public Function Prototypes                         */
/*----------------------------------------------------------------------------*/
/* none */

#endif /* TIMER_COUNTER_HAL_H_ */
