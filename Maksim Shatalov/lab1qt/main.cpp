#include <QCoreApplication>
#include<iostream>
#include"Widget.h"
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    setlocale(LC_ALL, "Russian");
        int i, n, s, c;
        float X, Y;
        const int k = 4;
        point p[k];
        do
        {
        cout << "1. Задать точки" << endl;
        cout << "2. Вывести точку с номером" << endl;
        cout << "3. Вывести все точки" << endl;
        cout << "4. Определить расстояние до начала координат" << endl;
        cout << "5. Переместить точку по оси X" << endl;
        cout << "6. Переместить точку по оси Y" << endl;
        cout << "7. Определить расстояние между двумя точками" << endl;
        cout << "8. Сравнить точки на совпадение" << endl;
        cout << "9. Преобразовать декартовые координаты в полярные" << endl;
        cout << "Ваш выбор : "; cin >> s;
        switch (s)
        {
        case 1:
            for (i = 0; i < k; i++)
            {
                cout << "Введите коорджинаты точки № " << i + 1 << endl;
                cout << "x = "; cin >> X;
                cout << "y = "; cin >> Y;
                p[i].Read(X, Y);
                p[i].counter(i, k);
            }
            cout << "Точки успешно записаны" << endl;
            break;

        case 2:

            do {
                cout << "Введите номер точки : "; cin >> i;
            } while (i > k);
            i--;
            p[i].Display();
                break;
        case 3:
                for (i = 0; i < k; i++)
                    p[i].Display();
            break;
        case 4:
            do {
                cout << "Введите номер точки : "; cin >> i;
            } while (i > k);

            p[i].r1();
            break;
        case 5:
            do {
                cout << "Введите номер точки : "; cin >> i;
            } while (i > k);
            p[i].peremestX();
            break;
        case 6:
            do {
                cout << "Введите номер точки : "; cin >> i;
            } while (i > k);
            p[i].peremestY();
            break;
        case 7:
            do {
                cout << "Введите номер первой точки : "; cin >> i;
            } while (i > k);
            do {
                cout << "Введите номер второй точки : "; cin >> n;
            } while (n > k);
            p[i].r2(p[n]);
            break;
        case 8:
            do {
                cout << "Введите номер первой точки : "; cin >> i;
            } while (i > k);
            do {
                cout << "Введите номер второй точки : "; cin >> n;
            } while (n > k);
            p[i].sravnit(p[n]);
            break;
        case 9:
            do {
                cout << "Введите номер точки : "; cin >> i;
            } while (i > k);
            p[i].polyar();
            break;
        default:
            cout << "Неверный номер операции!!!" << endl;
        }
    }while (s != 0);
    return a.exec();
}
