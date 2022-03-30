#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x36a8433b, "JM SPI bridge v3.3");

void bridge_init(void);

void app_init_services() {
    bridge_init();
}
