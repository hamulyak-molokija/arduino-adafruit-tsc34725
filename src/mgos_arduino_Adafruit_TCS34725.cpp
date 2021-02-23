#include "mgos_arduino_Adafruit_TCS34725.h"

Adafruit_TCS34725 *mgos_TCS34725_create() {
  return new Adafruit_TCS34725();
}

void mgos_TCS34725_close(Adafruit_TCS34725 *ads) {
  if (ads != nullptr) {
    delete ads;
    ads = nullptr;
  }
}

void mgos_TCS34725_begin(Adafruit_TCS34725 *ads) {
  if (ads == nullptr) return;
  ads->begin();
}

void mgos_TCS34725_setIntegrationTime(Adafruit_TCS34725 *ads, tcs34725IntegrationTime_t it) {
  if (ads == nullptr) return;
  ads->setIntegrationTime(it);
}

void mgos_TCS34725_setGain(Adafruit_TCS34725 *ads, tcs34725Gain_t gain) {
  if (ads == nullptr) return;
  ads->setGain(gain);
}

void mgos_TCS34725_getRawData(Adafruit_TCS34725 *ads, uint16_t *r, uint16_t *g, uint16_t *b, uint16_t *c){
  if (ads == nullptr) return ;
  ads->getRawData(r, g, b, c);
}

void mgos_TCS34725_getRGB(Adafruit_TCS34725 *ads, float *r, float *g, float *b) {
  if (ads == nullptr) return;
  ads->getRGB(r, g, b);
}

void mgos_TCS34725_getRawDataOneShot(Adafruit_TCS34725 *ads, uint16_t *r, uint16_t *g, uint16_t *b, uint16_t *c) {
  if (ads == nullptr) return;
  return ads->getRawDataOneShot(r, g, b, c);
}

uint16_t mgos_TCS34725_calculateColorTemperature(Adafruit_TCS34725 *ads, uint16_t r, uint16_t g, uint16_t b) {
  if (ads == nullptr) return 0;
  return ads->calculateColorTemperature(r, g, b);
}

uint16_t mgos_TCS34725_calculateColorTemperature_dn40(Adafruit_TCS34725 *ads, uint16_t r, uint16_t g, uint16_t b, uint16_t c) {
  if (ads == nullptr) return 0;
  return ads->calculateColorTemperature_dn40(r, g, b, c);
}

uint16_t mgos_TCS34725_calculateLux(Adafruit_TCS34725 *ads, uint16_t r, uint16_t g, uint16_t b) {
  if (ads == nullptr) return 0;
  return ads->calculateLux(r, g, b);
}

void mgos_TCS34725_write8(Adafruit_TCS34725 *ads, uint8_t reg, uint32_t value) {
  if (ads == nullptr) return;
  ads->write8(reg, value);
}

uint8_t mgos_TCS34725_read8(Adafruit_TCS34725 *ads, uint8_t reg) {
  if (ads == nullptr) return 0;
  return ads->read8(reg);
}

uint8_t mgos_TCS34725_read16(Adafruit_TCS34725 *ads, uint8_t reg) {
  if (ads == nullptr) return 0;
  return ads->read16(reg);
}

