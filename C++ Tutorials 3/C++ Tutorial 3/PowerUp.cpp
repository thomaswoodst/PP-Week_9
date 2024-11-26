#include "PowerUp.h"
#include "Vector2f.h"

#include <iostream>
using std::cout;
using std::endl;

PowerUp::PowerUp() : OnScreenObject()
{
    name = nullptr;
}

PowerUp::PowerUp(string name) : OnScreenObject()
{
    this->setName(name);
}

/* Get the parent constructor to do the work */
PowerUp::PowerUp(Vector2f* pos, string name) : OnScreenObject(pos)
{
    this->setName(name);
}

PowerUp::~PowerUp()
{

}

void PowerUp::setName(string name)
{
    this->name = name;
}

string PowerUp::getName()
{
    return name;
}

void PowerUp::draw()
{
    //Draw code here.
    cout << "DEBUG: Drawing PowerUp : - " << this->getName() << endl;
}
