#ifndef FIMC_IS_VENDOR_CONFIG_A8_H
#define FIMC_IS_VENDOR_CONFIG_A8_H

#include "fimc-is-eeprom-rear-3p3_v001.h"
#include "fimc-is-eeprom-front-5e3_v001.h"

#define SENSOR_5E3_EEPROM_I2C_NEED_CAMIO_1_8V
#define CAMERA_MODULE_ES_VERSION	FIMC_IS_LATEST_FROM_VERSION_A
#define CAL_MAP_ES_VERSION		FROM_VERSION_V001

#define BINNING_CLOSEST

#define CONFIG_SKIP_TORCH_SET_FRONT

#endif /* FIMC_IS_VENDOR_CONFIG_A8_H */
