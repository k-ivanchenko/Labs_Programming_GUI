// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

using namespace std;

class Number {
public:
	virtual void toFloat() = 0;
};

class Rational : public Number {
private:
float Rational;
public:
	void SetRational(float temp) {
		Rational = temp;
	}
	void toFloat() override {
		cout << "Рациональное число: " << Rational << " является действительным числом!" << endl;
	}
};

class Decimal : public Number {
private:
float Decimal;
public:
	void SetDecimal(float temp) {
		Decimal = temp;
	}
	void toFloat() override {
		cout << "Десятичная дробь: " << Decimal <<  " является действительным числом!" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");

	Rational rational;
	Decimal decimal;

	float tempR;
	float tempD;

	cout << "Введите Рациональное число: " << endl;
	cin >> tempR;
	rational.SetRational(tempR);

	cout << "Введите Десятичную дробь" << endl;
	cin >> tempD;
	decimal.SetDecimal(tempD);


	rational.toFloat();
	decimal.toFloat();
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
