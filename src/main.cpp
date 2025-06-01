#include <SFML/Graphics.hpp>
#include "GameEngine.h"
#include <states/GameplayState.h>

int main() {
    GameEngine gameEngine;
    int statusCode = gameEngine.startGame();
    return statusCode;
}
