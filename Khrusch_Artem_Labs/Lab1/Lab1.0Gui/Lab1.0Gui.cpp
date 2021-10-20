#include <iostream>
#include "Triangle.h"

int main()
{
	Triangle();
	Triangle V1(5, 5, 5, 60, 60, 60);
	V1.Init();
	V1.Setf();
	V1.Getf();
	V1.GetHt();
	V1.SetHt();
	V1.Setp();
	V1.Getp();
	V1.SetSq();
	V1.GetSq();
	V1.Display();
	Triangle V2 = V1;
}
