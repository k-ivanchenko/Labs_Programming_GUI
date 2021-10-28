#ifndef WIDGET_H
#define WIDGET_H
#include<iostream>
#include<cmath>
using namespace std;
class Vector
{
public:
    int x;
    int y;
    int z;
    Vector() : x(0), y(0), z(0)
    {}
    Vector(int vx, int vy, int vz) : x(vx), y(vy), z(vz)
    {}
    virtual void add()
    {
        cout << "(" << x << ":" << y << ")";
    }
    void showProizVector()
    {
        cout << x + y + z << "";
    }
    void scalyar()
    {
        cout << "Длинна вектора: " << sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2)) << endl;
    }

    Vector operator+(Vector)const;
    Vector operator%(Vector)const;
    Vector operator*(Vector)const;
};
class Vector2D : public Vector
{
public:
    int x;
    int y;
    int z;
    Vector2D() : x(0), y(0), z(0)
    {}
    Vector2D(int vx, int vy, int vz) : x(vx), y(vy), z(vz)
    {}
    void add() override
    {
        cout << "(" << x << ":" << y << ")";
    }
    void scalyar()
    {
        cout << "Длинна вектора 2D: " << sqrt(pow(x, 2) + pow(y, 2)) << endl;
    }
    Vector2D operator+(Vector2D)const;

};

class Vector3D : public Vector
{
public:
    int x;
    int y;
    int z;
    Vector3D() : x(0), y(0), z(0)
    {}
    Vector3D(int vx, int vy, int vz) : x(vx), y(vy), z(vz)
    {}
    void add()override
    {
        cout << "(" << x << ":" << y << ":" << z << ")";
    }
    void showProizVector()
    {
        cout << x + y + z << "";
    }
    void scalyar()
    {
        std::cout << "Длинна вектора 3D: " << sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2)) << endl;
    }
    Vector3D operator+(Vector3D)const;

};

//Сложение
Vector Vector :: operator+ (Vector d)const
{
    int vx = x + d.x;
    int vy = y + d.y;
    int vz = z + d.z;
    return Vector(vx, vy, vz);
}
Vector2D Vector2D :: operator+ (Vector2D d2)const
{
    int vx = x + d2.x;
    int vy = y + d2.y;
    int vz = z + d2.z;
    return Vector2D(vx, vy, vz);
}
Vector3D Vector3D :: operator+ (Vector3D d3)const
{
    int vx = x + d3.x;
    int vy = y + d3.y;
    int vz = z + d3.z;
    return Vector3D(vx, vy, vz);
}

//Скалярное произведение
Vector Vector :: operator% (Vector d2)const
{
    int vx = x * d2.x;
    int vy = y * d2.y;
    int vz = z * d2.z;
    return Vector((vx + vy + vz), vx * 0, vy * 0);
}

//Векторное произведение
Vector Vector :: operator* (Vector d2)const
{
    int vx = y * d2.z - z * d2.y;
    int vy = z * d2.x - x * d2.z;
    int vz = x * d2.y - y * d2.x;
    return Vector((vx + vy + vz), vx * 0, vy * 0);
}
#endif // WIDGET_H
