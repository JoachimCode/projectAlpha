#ifndef PLAYER_H
#define PLAYER_H
#include <Entity.h>


class Player : public Entity {
    public:
    Player(float xPosition, float yPosition, float ms, int health, int id);
};


#endif