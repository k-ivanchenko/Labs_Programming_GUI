// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Header.h"
#include <cmath>
#include <math.h>

using namespace std;

void Comparsion(Angle& Fangle, Angle& Sangle) {
	if (Fangle.radian > Sangle.radian) {
		cout << Fangle.deg << " bigger than " << Sangle.deg << endl;
	}
	else {
		cout << Sangle.deg << " bigger than " << Fangle.deg << endl;
	}
}

int main()
{
	Angle FirstAngle;
	Angle SecAngle;

	FirstAngle.Read();
	FirstAngle.Display();
	FirstAngle.Radian();
	FirstAngle.Degrees();
	FirstAngle.Increase();
	FirstAngle.Decrease();
	FirstAngle.Sinus();

	SecAngle.Read();
	SecAngle.Display();
	SecAngle.Radian();
	SecAngle.Degrees();
	SecAngle.Increase();
	SecAngle.Decrease();
	SecAngle.Sinus();

	Comparsion(FirstAngle, SecAngle);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
