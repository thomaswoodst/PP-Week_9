#ifndef _MINE_H
#define _MINE_H


#include "OnScreenObject.h"



class Mine : public OnScreenObject {
public:
    static const int MAX_INVENTORY = 10;

private:
    int damage;
    Colour* colour;

    PowerUp* inventory[MAX_INVENTORY];
    int itemCount;

public:
    static const int MAX_ENERGY;

    Mine();
    Mine(Vector2f* pos, Colour* col);
    ~Mine();

    void takeHit(int points);

    Colour* getColour();
    void setColour(Colour* value);

    void collectPowerUp(PowerUp* powerUp);

    //for the examples
    void printShipInfo();

    void draw();

};