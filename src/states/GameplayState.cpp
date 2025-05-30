#include "GameplayState.h"

std::vector<int> enemies;
InputHandler inputHandler;
Player player;

Input GameplayState::getInput() { 
    return inputHandler.getInput();
}

 
void GameplayState::update() {

}

void GameplayState::renderScreen() const {

}

