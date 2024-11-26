#include "Vector2f.h"

Vector2f::Vector2f() {
    x = 0.0f;
    y = 0.0f;
}

Vector2f::Vector2f(float x, float y) {
    this->x = x;
    this->y = y;
}

Vector2f::~Vector2f() {

}

float Vector2f::getX() {
    return x;
}

void Vector2f::setX(float value) {
    x = value;
}

float Vector2f::getY() {
    return y;
}

void Vector2f::setY(float value) {
    y = value;
}
