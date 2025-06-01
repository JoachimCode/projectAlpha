#ifndef GAMEENGINE_H
#define GAMEENGINE_H
#include <SFML/Graphics.hpp>
#include "Constants.h"
#include <stack>
#include <vector>
#include <memory>
#include <states/GameplayState.h>
#include <states/GameState.h>
#include <entities/Player.h>



class GameEngine {
    public:
    int startGame();
    void gameLoop();

    //fix this, then create state in testStart() and test.
    GameEngine() : painter(screen), player(500, 500, 100, 100, 0) {};

    private:
    Player player;
    Painter painter;
    sf::RenderWindow screen;
    sf::Clock gameClock;
    float getDeltaTime();
    void setUpScreen();
    sf::RenderWindow& getScreen();
    sf::Clock& getGameClock();
    void testStart();
};



#endif 