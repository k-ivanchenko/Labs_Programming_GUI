#include <QCoreApplication>
#include <iostream>
#include <conio.h>
#include<widget.h>
#include<cmath>
using namespace std;


   int main(int argc, char *argv[])
    {
        QCoreApplication e(argc, argv);
        setlocale(LC_ALL,"Russian");
        int x, y, z, i, j, k;
        Vector a, b, c;
        Vector2D a2,b2,c2;
        Vector3D a3,b3,c3;
        cout << "Введите координаты вектора a: " << endl;
        cin >> x >> y >> z;
        cout << "Введите координаты вектора b: " << endl;
        cin >> i >> j >> k;
        a = Vector(x, y, z);
        a2 = Vector2D(x, y, z);
        a3 = Vector3D(x, y, z);
        b = Vector(i, j, k);
        b2 = Vector2D(i,j,k);
        b3 = Vector3D(i, j, k);
        c = a + b;
        c2 = a2 + b2;
        c3 = a3 + b3;
        cout << "Vector = "; a.add(); cout << endl;
        cout << "Vector2D = ";	a2.add(); cout << endl;
        cout << "Vector3D = "; a3.add(); cout << endl;
        a.scalyar();
        a2.scalyar();
        a3.scalyar();
        cout << "Сложение a("; a.add(); cout << ") + b("; b.add(); cout << ") = c("; c.add(); cout << ")" << endl;
        cout << "Сложение a2("; a2.add(); cout << ") + b2("; b2.add(); cout << ") = c2("; c2.add(); cout << ")" << endl;
        cout << "Сложение a3("; a3.add(); cout << ") + b3("; b3.add(); cout << ") = c3("; c3.add(); cout << ")" << endl;

     return e.exec();
    }

