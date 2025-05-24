#ifndef GAMEPLAYSTATE_H
#define GAMEPLAYSTATE_H
#include "GameState.h"

class GameplayState : public GameState {
    public:
    Input getInput() override;
    void updateEntities() override;
    void renderScreen() override;
};



#endif 