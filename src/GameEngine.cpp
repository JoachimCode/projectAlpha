#include "GameEngine.h"

sf::RenderWindow screen;
sf::Clock gameClock;
std::stack<std::unique_ptr<GameState>> GameStateStack;
Player player; 


void GameEngine::gameLoop() {
        while (screen.isOpen())
    {
        sf::Event event;
        while (screen.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) {
                screen.close();
                
            }
        }

        

    }
}

int GameEngine::startGame() {
    setUpScreen();
    gameLoop();
    return 0;
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

float GameEngine::getDeltaTime() {
    float deltaTime = getGameClock().restart().asSeconds();
    return deltaTime;
}

sf::Clock& GameEngine::getGameClock() {
    return gameClock;
}





