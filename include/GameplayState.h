#ifndef GAMEPLAYSTATE_H
#define GAMEPLAYSTATE_H
#include "GameState.h"
#include <vector>
#include <Player.h>


class GameplayState : public GameState {
    public:
    Player player;
    Input getInput() override;
    void update() override;
    void renderScreen() override;   




    private: 
    std::vector<int> enemies;
    
};



#endif 