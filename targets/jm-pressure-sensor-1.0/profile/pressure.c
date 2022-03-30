#include "jdprofile.h"

// Edit the string below to match your company name, the device name, and hardware revision.
// The 0x0 will be replaced with a unique identifier the first time you run make.
// Do not change the 0x3.... value, as that would break the firmware update process.
FIRMWARE_IDENTIFIER(0x3277416c, "JM Pressure Sensor v1.0");


void app_init_services() {
    barometer_init(&pressure_lps33hwtr);
    thermometer_init(&temperature_lps33hwtr);
}
