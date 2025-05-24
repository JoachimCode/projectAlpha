#ifndef GAMESTATE_H
#define GAMESTATE_H
#include "Input.h"

class GameState {
    public:
    virtual Input getInput() = 0;
    virtual void updateEntities() = 0;
    virtual void renderScreen() = 0;
};


#endif