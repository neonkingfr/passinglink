#include <stdint.h>

// 'microdash', 128x24px
static constexpr uint8_t display_logo[] = {
  0xf0, 0x3f, 0x00, 0xf0, 0x3f, 0x00, 0x20, 0x00, 0x00, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x10,
  0x00, 0x00, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x30, 0x00, 0x00, 0xf0, 0x3f, 0x00, 0xe0, 0x3f,
  0x00, 0x20, 0x00, 0x00, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x30, 0x00, 0x00, 0xe0, 0x3f, 0x00, 0xc0, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf1, 0x3f, 0x00, 0xf1, 0x3f, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x0f, 0x00, 0xe0, 0x1f, 0x00, 0x30, 0x30, 0x00,
  0x10, 0x20, 0x00, 0x10, 0x20, 0x00, 0x10, 0x20, 0x00, 0x10, 0x20, 0x00, 0x10, 0x20, 0x00, 0x10,
  0x20, 0x00, 0x30, 0x30, 0x00, 0x60, 0x18, 0x00, 0x60, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xf0, 0x3f, 0x00, 0xf0, 0x3f, 0x00, 0x20, 0x00, 0x00, 0x10, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x70,
  0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x0f, 0x00, 0xe0, 0x1f, 0x00, 0x30, 0x10,
  0x00, 0x10, 0x20, 0x00, 0x10, 0x20, 0x00, 0x10, 0x20, 0x00, 0x10, 0x20, 0x00, 0x10, 0x20, 0x00,
  0x10, 0x20, 0x00, 0x10, 0x20, 0x00, 0x30, 0x10, 0x00, 0xe0, 0x1f, 0x00, 0xc0, 0x0f, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x0f, 0x00, 0xe0, 0x1f, 0x00, 0x30, 0x10, 0x00, 0x10, 0x20,
  0x00, 0x10, 0x20, 0x00, 0x10, 0x20, 0x00, 0x10, 0x20, 0x00, 0x10, 0x20, 0x00, 0x10, 0x20, 0x00,
  0x10, 0x20, 0x00, 0x20, 0x10, 0x00, 0xff, 0x3f, 0x00, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x1e, 0x00, 0x20, 0x1e, 0x00, 0x30, 0x31, 0x00, 0x10, 0x21, 0x00, 0x10, 0x21,
  0x00, 0x10, 0x21, 0x00, 0x10, 0x21, 0x00, 0x10, 0x21, 0x00, 0x10, 0x21, 0x00, 0x30, 0x12, 0x00,
  0xe0, 0x3f, 0x00, 0xc0, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0,
  0x11, 0x00, 0xe0, 0x33, 0x00, 0x30, 0x22, 0x00, 0x10, 0x22, 0x00, 0x10, 0x22, 0x00, 0x10, 0x22,
  0x00, 0x10, 0x22, 0x00, 0x10, 0x22, 0x00, 0x10, 0x22, 0x00, 0x30, 0x22, 0x00, 0x60, 0x3e, 0x00,
  0x60, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x3f, 0x00, 0xff,
  0x3f, 0x00, 0x20, 0x00, 0x00, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x10, 0x00,
  0x00, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x30, 0x00, 0x00, 0xe0, 0x3f, 0x00, 0xc0, 0x3f, 0x00};
