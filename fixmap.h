#ifndef __FIXMAP_H__
#define __FIXMAP_H__

/// Start of character tiles in GAME ROM
#define SROM_TXT_TILE_OFFSET 0

/// Transparent tile in GAME ROM
#define SROM_EMPTY_TILE 255

void ng_cls();
void ng_text(u8 x, u8 y, const char *text);

#endif