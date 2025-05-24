#ifndef GAMEPLAYSTATE_H
#define GAMEPLAYSTATE_H
#include "GameState.h"
#include <vector>

class GameplayState : public GameState {
    public:
    Input getInput() override;
    void update() override;
    void renderScreen() override;

    private: 
    std::vector<int> enemies;
};



#endif 