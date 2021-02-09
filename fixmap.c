#include <ngdevkit/neogeo.h>
#include "fixmap.h"


/// Clear the 40*32 tiles of fix map
void ng_cls() {
    u16 val = SROM_EMPTY_TILE;
    *REG_VRAMADDR = ADDR_FIXMAP;
    *REG_VRAMMOD = 1;
    for (u16 i=1280; i!=0; i--) *REG_VRAMRW = val;
}

/// Handy function to display a string on the fix map
void ng_text(u8 x, u8 y, const char *text) {
    u16 base_val = SROM_TXT_TILE_OFFSET;
    *REG_VRAMADDR=ADDR_FIXMAP+(x<<5)+y;
    *REG_VRAMMOD=32;
    while (*text) *REG_VRAMRW = (u16)(base_val+*text++);
}
