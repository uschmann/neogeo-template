
#include <ngdevkit/neogeo.h>
#include <stdio.h>
#include "../fixmap.h"
#include "../state.h"
#include "gameState.h"

int static counter = 0;
int static shown = 0;

extern State gameState;

void titleInit() 
{
  shown ++;

  ng_cls();
  ng_text(8, 8, "Title");
}

void titleUpdate(int delta)
{
  counter ++;

  char buffer[50];
  sprintf(buffer, "Delta: %i", counter);
  ng_text(8, 9, buffer);

  sprintf(buffer, "Shown: %i", shown);
  ng_text(8, 10, buffer);


  int foo = counter;

  if(counter == 1000) {
    counter = 0;
    State_setState(&gameState);
  }
}

State titleState = {
    "title",
    titleInit,
    titleUpdate
};

