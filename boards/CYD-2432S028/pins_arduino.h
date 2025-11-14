
#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

static const uint8_t TX = 1;
static const uint8_t RX = 3;

static const uint8_t SDA = 21;
static const uint8_t SCL = 22;

// SPI PINS - تم توحيدها مع دبابيس الشاشة (12, 13, 14)
static const uint8_t SS = 5;      // تم الحفاظ على قيمتها الأصلية
static const uint8_t MOSI = 13;   // تم التعديل من 23 إلى 13 (لتطابق TFT)
static const uint8_t MISO = 12;   // تم التعديل من 19 إلى 12 (لتطابق TFT)
static const uint8_t SCK = 14;    // تم التعديل من 18 إلى 14 (لتطابق TFT)

static const uint8_t A0 = 36;
static const uint8_t A3 = 39;
static const uint8_t A4 = 32;
static const uint8_t A5 = 33;
static const uint8_t A6 = 34;
static const uint8_t A7 = 35;
static const uint8_t A10 = 4;
static const uint8_t A11 = 0;
static const uint8_t A12 = 2;
static const uint8_t A13 = 15;
static const uint8_t A14 = 13;
static const uint8_t A15 = 12;
static const uint8_t A16 = 14;
static const uint8_t A17 = 27;
static const uint8_t A18 = 25;
static const uint8_t A19 = 26;

static const uint8_t T0 = 4;
static const uint8_t T1 = 0;
static const uint8_t T2 = 2;
static const uint8_t T3 = 15;
static const uint8_t T4 = 13;
static const uint8_t T5 = 12;
static const uint8_t T6 = 14;
static const uint8_t T7 = 27;
static const uint8_t T8 = 33;
static const uint8_t T9 = 32;

static const uint8_t DAC1 = 25;
static const uint8_t DAC2 = 26;

// Deepsleep
#define DEEPSLEEP_WAKEUP_PIN 36 // Touch interrupt
#define DEEPSLEEP_PIN_ACT LOW
#endif /* Pins_Arduino_h */