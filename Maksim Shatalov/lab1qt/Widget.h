#include<iostream>
#include<cmath>
using namespace std;
class point
{
    float x, y;
    int i, k;
public:
    point();
    void Read(float X, float Y);
    void Display();
    void counter(int I, int K);
    void r1();
    void peremestX();
    void peremestY();
    void r2(point p);
    void sravnit(point p);
    void polyar();
    float getX() { return x; };
    float getY() { return y; };
    int getcounter() { return i; };
    int getcounterk() { return k; };

};
point::point()
{
    x = 0;
    y = 0;
}

void point::Read(float X, float Y)
{
    x = X;
    y = Y;
}
void point::counter(int I, int K)
{
    i = I;
    k = K;
    i++;
}
void point::Display()
{
    cout << "№" << i << " " << "(" << x << ";" << y << ");" << endl;
}
void point::r1()
{
    float r;
    r = sqrt(x*x + y * y);
    cout << "Расстояние до начала координат = " << r << endl;
}
void point::peremestX()
{
    float rx;
    cout << "Введите число на котороое нужно переместить точку по оси X : "; cin >> rx;
    x += rx;
    cout << "Текущее положение точки ";
    Display();
}
void point::peremestY()
{
    float ry;
    cout << "Введите число на котороое нужно переместить точку по оси Y : ";
    cin >> ry;
    y += ry;
    cout << "Текущее положение точки ";
    Display();
}
void point::r2(point p)
{
    float r;
    r = sqrt((x - p.getX())*(x - p.getX()) + (y - p.getY())*(y - p.getY()));
    cout << "Растояние между точками = " << r << endl;
}
void point::sravnit(point p)
{

    if (x == p.getX() && y != p.getY())
        cout << "Точки не совпадают" << endl;
    else
        cout << "Точки совпадают" << endl;

}
void point::polyar()
{
    float e, r;
    r = sqrt(x*x + y * y);
    e = acos(x / r)*180.0 / 3.14;
    cout << "Полярная координата точки ";
    cout << "(" << r << ";" << e << ");" << endl;
}
