#ifndef VECTOR3D_H
#define VECTOR3D_H
#include "Vector.h"

class Vector3D : Vector {
private:
    float x;
    float y;
    float z;

public:
    Vector3D(float x, float y, float z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    float getX() {
        return x;
    }

    float getY() {
        return y;
    }

    float getZ() {
        return z;
    }

    void add(float value) {
        this->x += value;
        this->y += value;
        this->z += value;
    }
};

#endif // VECTOR3D_H
