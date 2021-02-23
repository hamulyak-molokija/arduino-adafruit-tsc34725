/*
 * Arduino Adafruit_TCS34725 library API wrapper
 */

#include "Adafruit_TCS34725.h"

#ifdef __cplusplus
extern "C"
{
#endif

/*
 * Create an TCS34725 instance, with the given I2C address.
 */
Adafruit_TCS34725 *mgos_TCS34725_create(int i2cAddress);

/*
 * Close the given TCS34725/TCS34725 instance; no methods can be called on this
 * instance after that.
 */
void mgos_TCS34725_close(Adafruit_TCS34725 *ads);

/*
 * Set up the TCS34725/TCS34725 instance; no methods can be called on this
 * instance after that.
 */
void mgos_TCS34725_begin(Adafruit_TCS34725 *ads);

void mgos_TCS34725_setIntegrationTime(Adafruit_TCS34725 *ads, tcs34725IntegrationTime_t it);

void mgos_TCS34725_setGain(Adafruit_TCS34725 *ads, tcs34725Gain_t gain);

void mgos_TCS34725_setGain(Adafruit_TCS34725 *ads, tcs34725Gain_t gain);

void mgos_TCS34725_getRawData(Adafruit_TCS34725 *ads, uint16_t *r, uint16_t *g, uint16_t *b, uint16_t *c);

void mgos_TCS34725_getRGB(Adafruit_TCS34725 *ads, float *r, float *g, float *b);

void mgos_TCS34725_getRawDataOneShot(Adafruit_TCS34725 *ads, uint16_t *r, uint16_t *g, uint16_t *b, uint16_t *c);

uint16_t mgos_TCS34725_calculateColorTemperature(Adafruit_TCS34725 *ads, uint16_t r, uint16_t g, uint16_t b);

uint16_t mgos_TCS34725_calculateColorTemperature_dn40(Adafruit_TCS34725 *ads, uint16_t r, uint16_t g, uint16_t b, uint16_t c);

uint16_t mgos_TCS34725_calculateLux(Adafruit_TCS34725 *ads, uint16_t r, uint16_t g, uint16_t b);

void mgos_TCS34725_write8(Adafruit_TCS34725 *ads, uint8_t reg, uint32_t value);

uint8_t mgos_TCS34725_read8(Adafruit_TCS34725 *ads, uint8_t reg);

uint8_t mgos_TCS34725_read16(Adafruit_TCS34725 *ads, uint8_t reg);


#ifdef __cplusplus
}
#endif  /* __cplusplus */
