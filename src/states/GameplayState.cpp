#include "states/GameplayState.h"

std::vector<int> enemies;
InputHandler inputHandler;
Player player;



 
void GameplayState::update() {

}

void GameplayState::renderScreen(sf::RenderWindow& window, Painter painter) const {
    window.clear(sf::Color::Black);
    painter.drawEntity(player);
    window.display();
}

