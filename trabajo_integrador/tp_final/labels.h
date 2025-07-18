#ifndef _LABELS_H_
#define _LABELS_H_

#include <stdbool.h>


#define REF_POT_CH 8
#define LM35_CH 0
#define LED GPIO, 0, 29
#define BLED GPIO, 1, 1
#define RLED GPIO, 1, 2

// Etiquetas de pines
#define SEG_A GPIO, 0, 10
#define SEG_B GPIO, 0, 11
#define SEG_C GPIO, 0, 6
#define SEG_D GPIO, 0, 14
#define SEG_E GPIO, 0, 0
#define SEG_F GPIO, 0, 13
#define SEG_G GPIO, 0, 15
#define SEG_DP GPIO, 0, 12 
#define COM_1 GPIO, 0, 8
#define COM_2 GPIO, 0, 9

// Etiquetas de botones
#define USR_BTN GPIO, 0, 4
#define ISP_BTN GPIO, 0, 12
#define S1_BTN GPIO, 0, 16
#define S2_BTN GPIO, 0, 25

#define BUZZER GPIO, 0, 28
#define CNY70 GPIO, 0, 19
#define CNY70_EN GPIO, 0, 17


#define BH1750_ADDR 0x5C

#define IOCON_PIO_CLKDIV0 0x00u		 /*!<@brief IOCONCLKDIV0 */
#define IOCON_PIO_HYS_EN 0x20u		 /*!<@brief Enable hysteresis */
#define IOCON_PIO_INV_DI 0x00u		 /*!<@brief Input not invert */
#define IOCON_PIO_MODE_INACT 0x00u	 /*!<@brief No addition pin function */
#define IOCON_PIO_MODE_PULLUP 0x10u	 /*!<@brief Selects pull-up function */
#define IOCON_PIO_OD_DI 0x00u		 /*!<@brief Disables Open-drain function */
#define IOCON_PIO_SMODE_BYPASS 0x00u /*!<@brief Bypass input filter */

#define IOCON_CAPT_CONFIG (IOCON_MODE_INACT | IOCON_PIO_HYS_EN | IOCON_PIO_INV_DI | IOCON_PIO_OD_DI | IOCON_PIO_SMODE_BYPASS | IOCON_PIO_CLKDIV0)

typedef struct {
    uint16_t temp_raw;
    uint16_t ref_raw;
} adc_data_t;

// Enum para indicar que se muestra en el display
typedef enum {
    kDISPLAY_LUX,
    kDISPLAY_SETPOINT
} display_variable_t;


// Estructura para pasar datos al display
typedef struct {
    uint16_t value;
    bool show_dp;
} display_data_t;

#endif 