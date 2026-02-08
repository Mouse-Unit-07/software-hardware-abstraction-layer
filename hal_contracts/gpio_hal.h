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
struct gpio_handle;

struct gpio_hal_handler {
    void (*init_gpio)(void);
    void (*deinit_gpio)(void);
    bool (*read_gpio_pin)(const struct gpio_handle *handle);
    void (*write_gpio_pin)(const struct gpio_handle *handle, bool value);
    void (*toggle_gpio_pin)(const struct gpio_handle *handle);
};

/*----------------------------------------------------------------------------*/
/*                         Public Function Prototypes                         */
/*----------------------------------------------------------------------------*/
/* none */

#endif /* GPIO_HAL_H_ */
