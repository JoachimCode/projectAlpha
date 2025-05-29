#ifndef CUTSCENE_H
#define CUTSCENE_H
#include <GameState.h>
#include <GameplayState.h>
#include <memory>


class CutsceneState : public GameState {
    public: 
    CutsceneState(std::unique_ptr<GameplayState> nextGameState_) : nextGamestate(std::move(nextGameState_)) {}
    void update() override;
    void renderScreen() override;   
    StateChangeRequest getChangeRequest() const;

    private: 
    void updateChangeRequest(Type requestType, std::unique_ptr<GameplayState> nextState);
    StateChangeRequest stateChangeRequest;
    std::unique_ptr<GameplayState> nextGamestate;


};


#endif