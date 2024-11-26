
#include "OnScreenObject.h"
#include "Vector2f.h"

OnScreenObject::OnScreenObject()
{
    position = nullptr;
}

OnScreenObject::~OnScreenObject()
{
    delete position;
    position = nullptr;
}

OnScreenObject::OnScreenObject(Vector2f* position)
{
    setPosition(position);
}

void OnScreenObject::setPosition(Vector2f* value)
{
    position = value;
}

Vector2f* OnScreenObject::getPosition() {
    return position;
}
