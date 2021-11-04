#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED
#include <iostream>

using namespace std;
 class vector
 { protected:
      double x, y,z;
       public:

           void setdim(double i, double j,double k)
        {
            x=i;
            y=j;
            z=k;
            }
            virtual void add() = 0;
            };
    class vector2d:
         public vector
         {
               void add()
               {

                     cout << "Skalar1= "<< x*x+y*y<<endl; }
                      };
        class vector3d : public vector
            {
                 void add()
                             {
                    cout <<"Skalar2= "<<x*x+y*y+z*z << endl;
                        }
                };







#endif // VECTOR_H_INCLUDED
