#ifndef _POWERUP_H
#define _POWERUP_H

/* Need to include, can't use a forward deceleration for this */
#include "OnScreenObject.h"
#include <string>
using namespace std;

class Vector2f;

/* Inheritance is essentially the : xxxx in this line */

class PowerUp : public OnScreenObject
{
private:
    string name;
public:
    PowerUp();
    explicit PowerUp(string name);
    PowerUp(Vector2f* postion, string name);
    ~PowerUp();

    void setName(string name);
    string getName();

    /* This overrides a virtual method in the parent */
    void draw();

};
#endif