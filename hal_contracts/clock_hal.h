/*-------------------------------- FILE INFO ---------------------------------*/
/* Filename           : clock_hal.h                                           */
/*                                                                            */
/* Clock HAL interface                                                        */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#ifndef CLOCK_HAL_H_
#define CLOCK_HAL_H_

/*----------------------------------------------------------------------------*/
/*                             Public Definitions                             */
/*----------------------------------------------------------------------------*/
typedef struct {
    void (*init_clock)(void);
    void (*deinit_clock)(void);
    void (*delay_ms)(uint32_t delay_time);
    void (*delay_us)(uint32_t delay_time);
} clock_hal_handler;

/*----------------------------------------------------------------------------*/
/*                         Public Function Prototypes                         */
/*----------------------------------------------------------------------------*/
/* none */

#endif /* CLOCK_HAL_H_ */
