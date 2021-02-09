#ifndef __STATE_H__
#define __STATE_H__

typedef void (*InitFunction)();
typedef void (*UpdateFunction)(int delta);

typedef struct State {
    char* name;
    InitFunction init;
    UpdateFunction update;
} State;

State_setState(State * state);

#endif