#include "Header.h"
using namespace std;

	Angle::Angle() { //Конструктор по умолчанию ( без аргументов )
		deg = 0;
		min = 0;
		radian = 0;
		degrees = 0;
		sinus = 0;
	}
	
	
	Angle::Angle(int valueDeg, int valueMin, float valueRad, float valueDegrees, float valueSin) {
		deg = valueDeg;
		min = valueMin;
		radian = valueRad;
		degrees = valueDegrees;
		sinus = valueSin;
	}

	Angle::Angle(const Angle& other) { //Конструктор копирывания
		this->deg = other.deg;
		this->min = other.min;
		this->radian = other.radian;
		this->degrees = other.degrees;
		this->sinus = other.sinus;
	}



	Angle::~Angle() { //Деструктор

	}

	void Angle::Read() {
		int valueDeg;
		int valueMin;
		int counter = 0;

		while (counter == 0) {
			cout << "Enter value of degrees" << endl;
			cin >> valueDeg;
			cout << "Enter value of minutes" << endl;
			cin >> valueMin;
			if (valueDeg <= 360 & valueDeg > 0) {
				deg = valueDeg;
				if (valueMin <= 60 & valueMin >= 0) {
					min = valueMin;
					counter++;
				}
				else {
					cout << "Wrong value, try again!" << endl;
				}
			}
			else {
				cout << "Wrong value, try again!" << endl;
			}
		}
	}

	int Angle::GetDeg() {
		return deg;
	}

	int Angle::GetMin() {
		return min;
	}

	float Angle::GetRadian() {
		return radian;
	}

	float Angle::GetDegrees() {
		return degrees;
	}

	float Angle::GetSinus() {
		return sinus;
	}

	void Angle::Display() {
		cout << "Deg: " << deg << endl << "Min: " << min << endl;
	}

	void Angle::Radian() {
		radian = ((deg + min / 60) * 3.14) / 180;
		cout << "Angle in radians: " << radian << endl;
	}

	void Angle::Degrees() {
		degrees = (radian * 180) / 3.14;
		cout << "Angle in degrees: " << degrees << endl << endl;
	}

	void Angle::Increase() {
		int temp = 0;
		bool flag = true;
		cout << "How much do you want to increase the angle?" << endl;
		while (flag) {
			cin >> temp;
			if ((deg + temp) <= 360) {
				deg += temp;
				flag = false;
			}
			else {
				cout << "Try againg" << endl;
			}
		}
		cout << "Now the angle is: " << deg << " degrees" << endl;
	}

	void Angle::Decrease() {
		int temp = 0;
		bool flag = true;
		cout << "How much do you want to decrease the angle?" << endl;
		while (flag) {
			cin >> temp;
			if ((deg - temp) >= 0) {
				deg -= temp;
				flag = false;
			}
			else {
				cout << "Try againg" << endl;
			}
		}
		cout << "Now the angle is: " << deg << " degrees" << endl;
	}

	void Angle::Sinus() {
		sinus = sin(radian);
		cout << "Sin of the angle is: " << sinus << endl << endl;
	}



