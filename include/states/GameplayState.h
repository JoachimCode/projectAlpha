#ifndef GAMEPLAYSTATE_H
#define GAMEPLAYSTATE_H
#include "GameState.h"
#include <vector>
#include <Player.h>
#include <CutsceneState.h>
#include <Painter.h>



class GameplayState : public GameState {
    public:
    //send player into factory and it sets it for next stage
    GameplayState(std::unique_ptr<CutsceneState> nextCutscene_, Player& player_) : nextCutScene(std::move(nextCutscene_)), player(player_)
    {}
    Player player;
    void update() override;
    void renderScreen(sf::RenderWindow& window, Painter painter) const override;   
    

    private: 
    std::unique_ptr<CutsceneState> nextCutScene;
    std::vector<int> enemies;
    
};



#endif 