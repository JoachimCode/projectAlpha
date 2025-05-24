#include "InputHandler.h"

Input currentInput;
bool holdingDownTab = false;

Input& InputHandler::getInput() {
    setDirections();
    setIsShootin();
    setIsChangingTarget();
}

void InputHandler::setIsChangingTarget() {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Tab)) handleTabPressed();
    else handleTabNotPressed();
}

void InputHandler::handleTabPressed() {
    if (holdingDownTab) currentInput.isChangingTarget = false;
    else currentInput.isChangingTarget = true;
}

void InputHandler::handleTabNotPressed() {
    currentInput.isChangingTarget = false;
     if (holdingDownTab) holdingDownTab = false;
}

void InputHandler::setIsShootin() {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) currentInput.isShooting = true;
    else currentInput.isShooting = false;
}

void InputHandler::setDirections() {    
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))) currentInput.direction = Direction::NorthEast;
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))) currentInput.direction = Direction::SouthEast;
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))) currentInput.direction = Direction::NorthWest;
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))) currentInput.direction = Direction::SouthWest;
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) currentInput.direction = Direction::East;
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) currentInput.direction = Direction::South;
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) currentInput.direction = Direction::West;
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) currentInput.direction = Direction::North;
    else currentInput.direction = Direction::None;
}
