#ifndef REGIONS_H
#define REGIONS_H

namespace re {
namespace hw {

#define MEMORY_REGION(name, start, end) \
  name##_BEGIN = start, name##_END = end, name##_SIZE = end - start + 1

// clang-format off
enum {
  MEMORY_REGION(AREA0,       0x00000000, 0x03ffffff),
  MEMORY_REGION(BIOS,        0x00000000, 0x001fffff),
  MEMORY_REGION(FLASH,       0x00200000, 0x0021ffff),
  MEMORY_REGION(HOLLY_REG,   0x005f6000, 0x005f7fff),
  MEMORY_REGION(PVR_REG,     0x005f8000, 0x005f8fff),
  MEMORY_REGION(PVR_PALETTE, 0x005f9000, 0x005f9fff),
  MEMORY_REGION(MODEM_REG,   0x00600000, 0x0067ffff),
  MEMORY_REGION(AICA_REG,    0x00700000, 0x00710fff),
  MEMORY_REGION(WAVE_RAM,    0x00800000, 0x009fffff),
  MEMORY_REGION(EXPDEV,      0x01000000, 0x01ffffff),

  MEMORY_REGION(AREA1,       0x04000000, 0x07ffffff),
  MEMORY_REGION(PVR_VRAM32,  0x04000000, 0x047fffff),
  MEMORY_REGION(PVR_VRAM64,  0x05000000, 0x057fffff),

  MEMORY_REGION(AREA2,       0x08000000, 0x0bffffff),

  MEMORY_REGION(AREA3,       0x0c000000, 0x0cffffff),  // 16 mb ram, mirrored 4x
  MEMORY_REGION(MAIN_RAM_1,  0x0c000000, 0x0cffffff),
  MEMORY_REGION(MAIN_RAM_2,  0x0d000000, 0x0dffffff),
  MEMORY_REGION(MAIN_RAM_3,  0x0e000000, 0x0effffff),
  MEMORY_REGION(MAIN_RAM_4,  0x0f000000, 0x0fffffff),

  MEMORY_REGION(AREA4,       0x10000000, 0x13ffffff),
  MEMORY_REGION(TA_POLY,     0x10000000, 0x107fffff),
  MEMORY_REGION(TA_TEXTURE,  0x11000000, 0x11ffffff),

  MEMORY_REGION(AREA5,       0x14000000, 0x17ffffff),
  MEMORY_REGION(MODEM,       0x14000000, 0x17ffffff),

  MEMORY_REGION(AREA6,       0x18000000, 0x1bffffff),
  MEMORY_REGION(UNASSIGNED,  0x18000000, 0x1bffffff),

  MEMORY_REGION(AREA7,       0x1c000000, 0x1fffffff),
  MEMORY_REGION(SH4_REG,     0x1e000000, 0x1fffffff),
  MEMORY_REGION(SH4_CACHE,   0x7c000000, 0x7fffffff),
  MEMORY_REGION(SH4_SQ,      0xe0000000, 0xe3ffffff),

  MEMORY_REGION(P0_1,        0x00000000, 0x1fffffff),
  MEMORY_REGION(P0_2,        0x20000000, 0x3fffffff),
  MEMORY_REGION(P0_3,        0x40000000, 0x5fffffff),
  MEMORY_REGION(P0_4,        0x60000000, 0x7fffffff),
  MEMORY_REGION(P1,          0x80000000, 0x9fffffff),
  MEMORY_REGION(P2,          0xa0000000, 0xbfffffff),
  MEMORY_REGION(P3,          0xc0000000, 0xdfffffff),
  MEMORY_REGION(P4,          0xe0000000, 0xffffffff),
};
// clang-format on
}
}

#endif