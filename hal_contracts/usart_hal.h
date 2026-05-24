/*-------------------------------- FILE INFO ---------------------------------*/
/* Filename           : usart_hal.h                                           */
/*                                                                            */
/* Universal synchronous/asynchronous receiver/transmitter HAL interface      */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#ifndef USART_HAL_H_
#define USART_HAL_H_

/*----------------------------------------------------------------------------*/
/*                             Public Definitions                             */
/*----------------------------------------------------------------------------*/
struct usart_hal_handler {
    void (*init_usart)(void);
    void (*deinit_usart)(void);
    bool (*is_rx_buffer_empty)(void);
    bool (*is_rx_buffer_full)(void);
    char (*pop_rx_buffer)(void);
    void (*clear_rx_buffer)(void);
};

/*----------------------------------------------------------------------------*/
/*                         Public Function Prototypes                         */
/*----------------------------------------------------------------------------*/
/* none */

#endif /* USART_HAL_H_ */
