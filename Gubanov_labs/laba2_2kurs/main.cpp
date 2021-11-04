#include <iostream>
#include "vector.h"


using namespace std;


int main ( ) {
    vector *p;

    vector2d t;
    vector3d s;
    p = &t;
    p->setdim(10,5,0);
    p->add();
    p = &s;
    p->setdim(3,9,2);
    p->add();

return 0;
                 }


/*
int main() {
    Vector *v;
   // cout << "Vvedite radius of Sphere: ";
  //  cin >> y;
  //  Vector2D &vector(float x);
    //cout << "Vvedite dliny storoni of Cube: ";
   // cin >> line;
 //   Vector3D &vector3D();
// Vector2D d;
 Vector3D d3;
// v=&d;
 //v->setkord(4,6);
// v->add();
 v=&d3;
 v->setkord(3,5,7);
 v->add();

    return 0;
    }
*/
/*int main(int argc, char* argv[])
{
    float x,y,z;
   setlocale(LC_ALL, "Russian");
    Vector *shd;
cin>>x;
cin>>y;
cin>>z;
 //Vector2D vectorw;
        Vector2D *ap;
    ap=&Vector2D;
      ap->add();

return 0;

}

*/
