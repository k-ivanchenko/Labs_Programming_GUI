#include <QCoreApplication>
#include<iostream>
#include "Vector.h"
#include "Vector2D.h"
#include "Vector3D.h"
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    float k , b, c;
    cout << "Source values of Vector2D" << endl;
    cout << "x = ";cin >> k;
    cout << "y = ";cin >> b;
    Vector2D v2d = Vector2D(k, b);
    cout << endl;
    cout << "Vvedite chislo na kototroe nado dobavit:";
    int d;
    int h;
    cin >> d;
    v2d.add(d);
    cout << "Vector2D after using add(" << d << ")" << endl;
    cout << "  X: " << v2d.getX() << endl;
    cout << "  Y: " << v2d.getY() << endl;
    cout << "z = ";cin >> c;
    Vector3D v3d = Vector3D(k, b, c);
    cout << "Source values of Vector3D" << endl;
    cout << "  X: " << v3d.getX() << endl;
    cout << "  Y: " << v3d.getY() << endl;
    cout << "  Z: " << v3d.getZ() << endl;
    cout << "Vvedite chislo na kototroe nado dobavit:";
    cin >> h;
    cout << endl;
    v3d.add(h);
    cout << "Vector3D after using add(" << h << ")" << endl;
    cout << "  X: " << v3d.getX() << endl;
    cout << "  Y: " << v3d.getY() << endl;
    cout << "  Z: " << v3d.getZ() << endl;
    cout << endl;
cout << "Hotite vity ?" << endl;
cout << "1.Da" << endl;
cout << "2.Net"<< endl;
int r;
cin >>  r;
if (r == 1)
{
    exit(1);
}
if (r == 2)
{
    main(argc, argv);
}





    return a.exec();
}
