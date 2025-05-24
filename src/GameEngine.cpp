#include "GameEngine.h"

sf::RenderWindow screen;
sf::Clock gameClock;

void GameEngine::gameLoop() {

}

void GameEngine::setUpScreen() {
    screen.create(sf::VideoMode(Constants::widthWindow, Constants::heightWindow), 
    "Project---Alpha", sf::Style::Default);
    screen.setVerticalSyncEnabled(true);
    screen.setFramerateLimit(Constants::frameRate);
}

sf::RenderWindow& GameEngine::getScreen() {
    return screen;
}

int GameEngine::startGame() {
    gameLoop();
    return 0;
}

float GameEngine::getDeltaTime() {
    float deltaTime = getGameClock().restart().asSeconds();
    return deltaTime;
}

sf::Clock& GameEngine::getGameClock() {
    return gameClock;
}





