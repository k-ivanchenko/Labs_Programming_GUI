#ifndef VECTOR2D_H
#define VECTOR2D_H
#include "Vector.h"

class Vector2D : Vector {
private:
    float x;
    float y;

public:
    Vector2D(float x, float y) {
        this->x = x;
        this->y = y;
    }

    float getX() {
        return x;
    }

    float getY() {
        return y;
    }

    void add(float value) {
        this->x += value;
        this->y += value;
    }
};
#endif // VECTOR2D_H
