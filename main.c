#include <ngdevkit/neogeo.h>
#include "states/titleState.h"
#include "state.h"

extern State* currentState;
extern State titleState;

int main(void) {
  int delta = 0;

  // Set up a minimal palette
  const u16 palette[]={0x8000, 0x0fff, 0x0555};
  for (u16 i=0; i<3; i++) {
    MMAP_PALBANK1[i]=palette[i];
  }

  State_setState(&titleState);

  for(;;) {
    ng_text(1,2, currentState->name);
    currentState->update(delta);
    delta ++;
  }
  return 0;
}
