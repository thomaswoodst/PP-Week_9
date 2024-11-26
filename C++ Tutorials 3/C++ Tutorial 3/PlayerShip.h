#ifndef _PLAYERSHIP_H
#define _PLAYERSHIP_H


#include "OnScreenObject.h"
#include "Vector2f.h"

class Colour;
class PowerUp;

class PlayerShip : public OnScreenObject {
public:
    static const int MAX_INVENTORY = 10;

private:
    int energy;
    Colour* colour;

    PowerUp* inventory[MAX_INVENTORY];
    int itemCount;

public:
    static const int MAX_ENERGY;

    PlayerShip();
    PlayerShip(Vector2f* pos, Colour* col);
    ~PlayerShip();

    void takeHit(int points);

    Colour* getColour();
    void setColour(Colour* value);

    void collectPowerUp(PowerUp* powerUp);

    //for the examples
    void printShipInfo();

    void draw();

};
#endif