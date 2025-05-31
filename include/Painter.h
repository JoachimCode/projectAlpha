#ifndef PAINTER_H
#define PAINTER_H
#include <Entity.h>
#include <SFML/Graphics.hpp>

class Painter {
    public:
     Painter(sf::RenderWindow& window_) : window(window_)  {}
    void drawEntity(Entity entity); 

    private:
    sf::RenderWindow& window;
};


#endif