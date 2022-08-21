#define PIN_LED NO_PIN
//#define PIN_LED_ACTIVE_LO
#define PIN_LED_GND NO_PIN

#define PIN_PWR NO_PIN
#define PIN_P0 NO_PIN
#define PIN_P1 NO_PIN

#define UART_PIN PB_6
#define UART_PIN_AF LL_GPIO_AF_0
#define USART_IDX 1

#define BOARD_STARTUP_CODE LL_SYSCFG_EnablePinRemap(LL_SYSCFG_PIN_RMP_PA11 | LL_SYSCFG_PIN_RMP_PA12)

#define DEVICE_DMESG_BUFFER_SIZE 0

#define PIN_RST PA_0
#define PIN_INT PC_15 

#define PIN_SCL PA_9  // I2C2
#define PIN_SDA PA_10 // I2C2
#define I2C_AF LL_GPIO_AF_6
#define I2C_IDX 1

// RGB LED sink connected to these pins
#define PIN_LED_R PB_0
#define PIN_LED_G PA_7
#define PIN_LED_B PB_8

// these values calibrate to ~60lux for each of ff0000, 00ff00, 0000ff
#define LED_R_MULT 250
#define LED_G_MULT 76
#define LED_B_MULT 221
#define RGB_LED_PERIOD 600


#define PIN_BL_LED PIN_LED_B
#define PIN_BL_PERIOD 300

#define PIN_ACC_INT PIN_INT

