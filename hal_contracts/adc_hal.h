/*-------------------------------- FILE INFO ---------------------------------*/
/* Filename           : adc_hal.h                                             */
/*                                                                            */
/* Analog to digital conversion HAL interface                                 */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#ifndef ADC_HAL_H_
#define ADC_HAL_H_

/*----------------------------------------------------------------------------*/
/*                             Public Definitions                             */
/*----------------------------------------------------------------------------*/
struct adc_handle;

struct adc_hal_handler {
    void (*init_adc)(void);
    void (*deinit_adc)(void);
    uint32_t (*read_adc_channel)(const struct adc_handle *handle);
};

/*----------------------------------------------------------------------------*/
/*                         Public Function Prototypes                         */
/*----------------------------------------------------------------------------*/
/* none */

#endif /* ADC_HAL_H_ */
