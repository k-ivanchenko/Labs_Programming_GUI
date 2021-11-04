#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <cmath>
#include <math.h>

using namespace std;

class Triangle
{
private:
    int a,b, c,hc,hb,ha;


public:

        Triangle(int _a,int _b,int _c): a(_a),b(_b),c(_c) // напрямую инициализируем переменные-члены класс
        {
        }
        Triangle()
            :a(0),b(0),c(0){}
~Triangle(){}
            void Read(){

            cout << "Введите  A: ";
            cin >> a;
            cout << "ВВедите B: ";
            cin >> b;
            cout << "Введите C: ";
            cin >> c;

            }
            void Display(){

            cout<<"Вы ввели A="<<a<<endl<<"Вы ввели B="<<b<<endl<<"Вы ввели C="<<c<<endl;
            }

            double Perimeter()
    {
        return (a+b+c);
    }
    double Square(){
    return sqrt(Perimeter()/2*(Perimeter()/2-a)*(Perimeter()/2-b)*(Perimeter()/2-c));;
    }

         double Hight(){
double ha,hb,hc;


ha=2*Square()/a;
hb=2*Square()/b;
hc=2*Square()/c;

return ha,hb,hc;

         }
         int Type(){
         if (a==b && b==c && c==a) {
                cout<<"равносторонний"<<endl;
return 0;
}
else{
    cout<<"Прямоугольный"<<endl;
}
if (a==b || b==c ||c==a) {
         cout<<"равнобедренный"<<endl;
return 0;
}


}

};
        /*


int getA() {return a;}
    int getB() {return b;}
    int getC() {return c;}
  /*  Triangle(int at, int bt, int ct)
    {
       at=a;
       bt=b;
       ct=c;
    }
*/

/*
void setSides()
{   cout<<"\tSide a\t";
        cin>>a;
        cout<<"\tSide b:\t";
        cin>>b;
           cout<<"\Side c:\t";
        cin>>c;


    }

    double getPerimeter()
    {
        return (a+b+c);
    }
    double polperimeter(){
    this->getPerimeter()/2;
    }

    double getSquare(){
    this->polperimeter;
     double Square= sqrt(&polperimeter*(&polperimeter - a)*(&polperimeter - b)*(&polperimeter -c));

    }

    double GetHeight()
    {
     this->polperimeter;
         return sqrt(4*polperimeter*((polperimeter-a)*(polperimeter-b)*(polperimeter-c))/(a*a));
    }

    static bool IsExist(int _a, int _b, int _c)
    {
        return ((a + b > c) && (a + c > b) && ( b+ c > a));
    }

};
*/

#endif // HEADER_H_INCLUDED
