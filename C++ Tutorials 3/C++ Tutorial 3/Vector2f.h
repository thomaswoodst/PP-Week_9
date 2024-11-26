#ifndef _VECTOR2F_H
#define _VECTOR2F_H


#include "OnScreenObject.h"

class Vector2f {
private:
    float x;

    float y;


public:
    Vector2f();

    Vector2f(float x, float y);

    ~Vector2f();

    float getX();

    void setX(float value);

    float getY();

    void setY(float value);

};
#endif
