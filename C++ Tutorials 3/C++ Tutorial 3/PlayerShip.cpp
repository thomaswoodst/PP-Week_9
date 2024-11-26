#include "PlayerShip.h"
#include "Colour.h"
#include "PowerUp.h"
#include "Vector2f.h"

#include <cstdlib>
#include <iostream>
using std::cout;
using std::endl;

const int PlayerShip::MAX_INVENTORY;

const int PlayerShip::MAX_ENERGY = 100;

PlayerShip::PlayerShip() : OnScreenObject()
{
    energy = MAX_ENERGY;
    itemCount = 0;
    colour = nullptr;
}

PlayerShip::PlayerShip(Vector2f* pos, Colour* col) : OnScreenObject(pos)
{
    energy = MAX_ENERGY;
    itemCount = 0;
    setColour(col);
}

PlayerShip::~PlayerShip()
{
    delete colour;
    colour = nullptr;

    for (int i = 0; i < itemCount; i++)
    {
        delete inventory[i];
    }
}

void PlayerShip::takeHit(int points)
{
    energy -= points;
}

Colour* PlayerShip::getColour()
{
    return colour;
}

void PlayerShip::setColour(Colour* value)
{
    colour = value;
}

void PlayerShip::collectPowerUp(PowerUp* powerUp)
{
    /* Some power ups may change energy,
     * code to handle this would go here
     */

    if (itemCount < MAX_INVENTORY)
    {
        inventory[itemCount] = powerUp;
        itemCount++;
    }
}

// Note: This is only for the class examples 
// * adding test code like this into our classes
// * increases the coupling (e.g. to cout etc.)
// * we'd normally use friend clasesses or a
// * test framework 

void PlayerShip::printShipInfo()
{
    cout << "** Player Ship **" << endl;

    if (colour != nullptr)
        cout << "Colour is:(R: " << +colour->getRed() <<
        " , G: " << +colour->getGreen() <<
        " , B: " << +colour->getBlue() <<
        " )" << endl;

    if (position != nullptr)
        cout << "Position is:(X: " << position->getX() <<
        " , Y: " << position->getY() <<
        " )" << endl;

    cout << "Ship Inventory:" << endl;

    for (int i = 0; i < itemCount; i++)
    {
        cout << "\t" << inventory[i]->getName() << endl;
    }

}

void PlayerShip::draw()
{
    //Draw code here.
    cout << "DEBUG: Drawing PlayerShip" << endl;
}