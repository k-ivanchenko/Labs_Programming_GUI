#include <iostream>
#include <cmath>
#include "header.h"


using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    Triangle t1;
   cout << "Создан Tреугольник "<<endl;
   t1.Read();
    t1.Display();

cout << "Perimeter = "<<t1.Perimeter()<<endl;

    cout << "Square = "<<t1.Square()<<endl;
    cout<<"Height="<<t1.Hight()<<endl;
 cout<<"Type = "<<t1.Type()<<endl;


    system("pause");
    return 0;
}






















