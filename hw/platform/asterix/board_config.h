/* board_config.h
 * Board-specific peripheral configuration for Asterix.
 * RebbleOS
 *
 * Joshua Wise <joshua@joshuawise.com>
 */

#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#if defined(ASTERIX_BOARD_ASTERIX)

#define BOARD_BUTTON_BACK_PIN   NRF_GPIO_PIN_MAP(1,01)
#define BOARD_BUTTON_UP_PIN     NRF_GPIO_PIN_MAP(1,02)
#define BOARD_BUTTON_SELECT_PIN NRF_GPIO_PIN_MAP(1,03)
#define BOARD_BUTTON_DOWN_PIN   NRF_GPIO_PIN_MAP(1,04)

#define BOARD_DISPLAY_PIN_MOSI 15
#define BOARD_DISPLAY_PIN_SCK  14
#define BOARD_DISPLAY_PIN_SCS  16

#define BOARD_QSPI_SCK_PIN 19
#define BOARD_QSPI_CSN_PIN 17
#define BOARD_QSPI_IO0_PIN 20
#define BOARD_QSPI_IO1_PIN 21
#define BOARD_QSPI_IO2_PIN 22
#define BOARD_QSPI_IO3_PIN 23
#define BOARD_QSPI_IS_QUAD 1

#define BOARD_QSPI_JEDEC_ID QSPI_JEDEC_ID_W25Q128JV

#define BOARD_DEBUG_UART_TXD 8

#define BOARD_BACKLIGHT_PIN 13


#elif defined(ASTERIX_BOARD_VLA_DVB1)

#define BOARD_BUTTON_BACK_PIN   NRF_GPIO_PIN_MAP(0,27)
#define BOARD_BUTTON_UP_PIN     NRF_GPIO_PIN_MAP(0,11)
#define BOARD_BUTTON_SELECT_PIN NRF_GPIO_PIN_MAP(1,00)
#define BOARD_BUTTON_DOWN_PIN   NRF_GPIO_PIN_MAP(1,02)

#define BOARD_DISPLAY_PIN_MOSI 6
#define BOARD_DISPLAY_PIN_SCK  8
#define BOARD_DISPLAY_PIN_SCS  26

#define BOARD_QSPI_SCK_PIN 17
#define BOARD_QSPI_CSN_PIN 14
#define BOARD_QSPI_IO0_PIN 20 /* MOSI */
#define BOARD_QSPI_IO1_PIN 24 /* MISO */

#define BOARD_QSPI_JEDEC_ID QSPI_JEDEC_ID_XT25F64B

#define BOARD_DEBUG_UART_TXD 29

#define BOARD_BACKLIGHT_PIN NRF_GPIO_PIN_MAP(1,04)

#define BOARD_DISPLAY_ROT180

#elif defined(ASTERIX_BOARD_VLA_DVB2)

#define BOARD_BUTTON_BACK_PIN   NRF_GPIO_PIN_MAP(0,27)
#define BOARD_BUTTON_UP_PIN     NRF_GPIO_PIN_MAP(1,0)
#define BOARD_BUTTON_SELECT_PIN NRF_GPIO_PIN_MAP(0,11)
#define BOARD_BUTTON_DOWN_PIN   NRF_GPIO_PIN_MAP(1,2)

#define BOARD_DISPLAY_PIN_MOSI  NRF_GPIO_PIN_MAP(0,3)
#define BOARD_DISPLAY_PIN_SCK   NRF_GPIO_PIN_MAP(0,2)
#define BOARD_DISPLAY_PIN_SCS   NRF_GPIO_PIN_MAP(0,25)

#define BOARD_QSPI_SCK_PIN      NRF_GPIO_PIN_MAP(0,2)
#define BOARD_QSPI_CSN_PIN      NRF_GPIO_PIN_MAP(0,5)
#define BOARD_QSPI_IO0_PIN      NRF_GPIO_PIN_MAP(0,3) /* MOSI */
#define BOARD_QSPI_IO1_PIN      NRF_GPIO_PIN_MAP(0,4) /* MISO */
#define BOARD_QSPI_SHARED_DISPLAY 1

#define BOARD_QSPI_JEDEC_ID QSPI_JEDEC_ID_XT25F64B

#define BOARD_DEBUG_UART_TXD 35

#define BOARD_BACKLIGHT_PIN     NRF_GPIO_PIN_MAP(1,4)

#define BOARD_DISPLAY_ROT180

#else

#error unknown Asterix board

#endif

#endif
