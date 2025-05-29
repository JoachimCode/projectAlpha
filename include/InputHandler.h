#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H
#include "Input.h"
#include <SFML/Graphics.hpp>
#include "Direction.h"

class InputHandler {
    public:
    Input& getInput() const;
    
    private:
    Input currentInput;
    bool holdingDownTab;
    void setDirections();
    void setIsShootin();
    void setIsChangingTarget();
    void handleTabPressed();
    void handleTabNotPressed();
};

#endif 