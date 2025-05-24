#ifndef ENTITY_H
#define ENTITY_H

class Entity {
    public:
    Entity(float xPosition_, float yPosition_, float ms_, int health_, int id_)
     : xPosition(xPosition_), yPosition(yPosition_), movementSpeed(ms_), health(health_), id(id_) {}

    void move(float xNewPosition, float yNewPosition) {xPosition = xNewPosition, yPosition = yNewPosition;}
    float getPositionX() const {return xPosition;}
    float getPositionY() const {return yPosition;}
    float getMovementSpeed() const {return movementSpeed;}
    int getId() const {return id;}
    void increaseHealth(int hpGained) {health += hpGained;}
    void decreaseHealth(int hpLost) {health -= hpLost;}
    void setHealth(int health_) {health = health_;}
    void setMovemenetSpeed(float ms) {movementSpeed = ms;}  

    virtual ~Entity() = default;


    private:
    int id;
    int health;
    float xPosition;
    float yPosition;
    float movementSpeed;
};



#endif