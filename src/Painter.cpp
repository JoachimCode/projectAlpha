#include <Painter.h>



// just make it draw the entities sprite, but drawing box for now.
void Painter::drawEntity(Entity entity) {
    sf::RectangleShape shape(sf::Vector2f(120.f, 50.5));
    shape.setPosition(entity.getPositionX(), entity.getPositionY());
    window.draw(shape);
}