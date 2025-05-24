#include <SFML/Graphics.hpp>
#include "GameEngine.h"

int main() {
    GameEngine gameEngine;
    int statusCode = gameEngine.startGame();
    return statusCode;
}
