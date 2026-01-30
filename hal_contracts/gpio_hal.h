/*-------------------------------- FILE INFO ---------------------------------*/
/* Filename           : gpio_hal.h                                            */
/*                                                                            */
/* General purpose input/ouput HAL interface                                  */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#ifndef GPIO_HAL_H_
#define GPIO_HAL_H_

/*----------------------------------------------------------------------------*/
/*                             Public Definitions                             */
/*----------------------------------------------------------------------------*/
struct gpio_hal_handler {
    void (*init_gpio)(void);
    void (*deinit_gpio)(void);
    uint32_t (*read_gpio_pin)(uint32_t gpio_number);
    void (*write_gpio_pin)(uint32_t gpio_number);
    void (*toggle_gpio_pin)(uint32_t gpio_number);
};

/*----------------------------------------------------------------------------*/
/*                         Public Function Prototypes                         */
/*----------------------------------------------------------------------------*/
/* none */

#endif /* GPIO_HAL_H_ */
