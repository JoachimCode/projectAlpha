#ifndef STATECHANGEREQUEST_H
#define STATECHANGEREQUEST_H
#include <memory>
#include <GameState.h>
#include <Type.h>
struct StateChangeRequest{
    Type type;
    std::unique_ptr<GameState> newState;
};

    
#endif