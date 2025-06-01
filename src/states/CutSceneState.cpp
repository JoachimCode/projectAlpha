#include <CutsceneState.h>


void CutsceneState::update() {
    Input currentInput =  getInput();
    if (currentInput.isShooting) {

    }
}

/*
void CutsceneState::renderScreen(sf::RenderWindow& window, Painter painter){

}
*/
void CutsceneState::updateChangeRequest(Type requestType, std::unique_ptr<GameplayState> nextState) {
    currentChangeRequest.type = requestType;
    currentChangeRequest.newState =  std::move(nextState);
}
