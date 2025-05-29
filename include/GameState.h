#ifndef GAMESTATE_H
#define GAMESTATE_H
#include "Input.h"
#include "InputHandler.h"
#include <StateChangeRequest.h>
#include <Type.h>

class GameState {
    public:
    InputHandler inputHandler;
    StateChangeRequest currentChangeRequest;
    GameState() {
        currentChangeRequest.type = Type::NONE;
    }

    virtual void update() = 0;
    virtual void renderScreen() = 0;


    const StateChangeRequest& getChangeRequest() const {return currentChangeRequest;}

    Input getInput() const {return inputHandler.getInput();}
};


#endif