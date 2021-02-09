#include "state.h"

State* currentState = 0;

State_setState(State * state) {
    currentState = state;
    currentState->init();
}