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
typedef struct {
    void (*init_adc)(void);
    void (*deinit_adc)(void);
    void (*enable_adc_channel)(uint32_t adc_number);
    void (*disable_adc_channel)(uint32_t adc_number);
    uint32_t (*read_adc_channel)(uint32_t adc_number);
} adc_hal_handler;

/*----------------------------------------------------------------------------*/
/*                         Public Function Prototypes                         */
/*----------------------------------------------------------------------------*/
/* none */

#endif /* ADC_HAL_H_ */
