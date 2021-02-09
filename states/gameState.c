#include <ngdevkit/neogeo.h>
#include <stdio.h>
#include "../fixmap.h"
#include "../state.h"

int static counter = 0;
extern State titleState;

void gameInit() {
  ng_cls();
  ng_text(8, 8, "Game started");
}

void gameUpdate(int delta) {
    counter ++;
    char buffer[50];
    sprintf(buffer, "counter %i", counter);
    ng_text(8,9, buffer);

    if(counter == 1000) {
        counter = 0;
        State_setState(&titleState);
    }
}

State gameState = {
    "game",
    gameInit,
    gameUpdate
};
