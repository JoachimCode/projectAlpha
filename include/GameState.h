#ifndef GAMESTATE_H
#define GAMESTATE_H
#include "Input.h"
#include "InputHandler.h"

class GameState {
    public:
    InputHandler inputHandler;
    virtual Input getInput() = 0;
    virtual void update() = 0;
    virtual void renderScreen() = 0;

    private:

};


#endif