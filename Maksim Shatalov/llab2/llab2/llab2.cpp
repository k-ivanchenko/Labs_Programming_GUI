// llab2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>
#include<cmath>
using namespace std;

class Vector
{
public:
	int x;
	int y;
	int z;
	Vector() : x(0), y(0), z(0)
	{}
	Vector(int vx, int vy, int vz) : x(vx), y(vy), z(vz)
	{}
	virtual void add()
	{
		cout << "(" << x << ":" << y << ")";
	}
    void showProizVector()
	{
		cout << x + y + z << "";
	}
	void scalyar()
	{
		cout << "Длинна вектора: " << sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2)) << endl;
	}

	Vector operator+(Vector)const;
	Vector operator%(Vector)const;
	Vector operator*(Vector)const;
};
class Vector2D : public Vector
{
public:
	int x;
	int y;
	int z;
	Vector2D() : x(0), y(0), z(0)
	{}
	Vector2D(int vx, int vy, int vz) : x(vx), y(vy), z(vz)
	{}
    void add() override
	{
		cout << "(" << x << ":" << y << ")";
	}
	void scalyar()
	{
		cout << "Длинна вектора 2D: " << sqrt(pow(x, 2) + pow(y, 2)) << endl;
	}
	Vector2D operator+(Vector2D)const;

};

class Vector3D : public Vector
{
public:
	int x;
	int y;
	int z;
	Vector3D() : x(0), y(0), z(0)
	{}
	Vector3D(int vx, int vy, int vz) : x(vx), y(vy), z(vz)
	{}
	void add()override
	{
		cout << "(" << x << ":" << y << ":" << z << ")";
	}
	void showProizVector()
	{
		cout << x + y + z << "";
	}
	void scalyar()
	{
		std::cout << "Длинна вектора 3D: " << sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2)) << endl;
	}
	Vector3D operator+(Vector3D)const;

};

//Сложение
Vector Vector :: operator+ (Vector d)const
{
	int vx = x + d.x;
	int vy = y + d.y;
	int vz = z + d.z;
	return Vector(vx, vy, vz);
}
Vector2D Vector2D :: operator+ (Vector2D d2)const
{
	int vx = x + d2.x;
	int vy = y + d2.y;
	int vz = z + d2.z;
	return Vector2D(vx, vy, vz);
}
Vector3D Vector3D :: operator+ (Vector3D d3)const
{
	int vx = x + d3.x;
	int vy = y + d3.y;
	int vz = z + d3.z;
	return Vector3D(vx, vy, vz);
}

//Скалярное произведение
Vector Vector :: operator% (Vector d2)const
{
	int vx = x * d2.x;
	int vy = y * d2.y;
	int vz = z * d2.z;
	return Vector((vx + vy + vz), vx * 0, vy * 0);
}

//Векторное произведение
Vector Vector :: operator* (Vector d2)const
{
	int vx = y * d2.z - z * d2.y;
	int vy = z * d2.x - x * d2.z;
	int vz = x * d2.y - y * d2.x;
	return Vector((vx + vy + vz), vx * 0, vy * 0);
}


int main()
{
	setlocale(LC_ALL, "Russian");
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
	system("pause");
	return 0;
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
