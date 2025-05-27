#ifndef GAMESTATE_H
#define GAMESTATE_H
#include "Input.h"
#include "InputHandler.h"
#include <StateChangeRequest.h>

class GameState {
    public:
    InputHandler inputHandler;
    StateChangeRequest currentChangeRequest;
    GameState() {
        currentChangeRequest.type = currentChangeRequest.NONE;
    }

    virtual Input getInput() = 0;
    virtual void update() = 0;
    virtual void renderScreen() = 0;

    const StateChangeRequest& getChangeRequest() const {return currentChangeRequest;}
};


#endif