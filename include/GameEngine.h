#ifndef GAMEENGINE_H
#define GAMEENGINE_H
#include <SFML/Graphics.hpp>
#include "Constants.h"

class GameEngine {
    public:
    int startGame();
    void gameLoop();

    private:
    sf::RenderWindow screen;
    sf::Clock gameClock;
    float getDeltaTime();
    void setUpScreen();
    sf::RenderWindow& getScreen();
    sf::Clock& getGameClock();
};



#endif 