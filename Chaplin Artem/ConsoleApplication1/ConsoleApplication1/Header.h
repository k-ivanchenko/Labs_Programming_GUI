#pragma once
#ifndef ANGLE
#define ANGLE

#include <iostream>

class Angle {
	int deg;
	int min;
	float radian;
	float degrees;
	float sinus;
public:
	Angle();
	Angle(const Angle& other);
	Angle(int valueDeg, int valueMin, float valueRad, float valueDegrees, float valueSin);
	~Angle();
	void Read();
	int GetDeg();
	int GetMin();
	float GetRadian();
	float GetDegrees();
	float GetSinus();
	void Display();
	void Radian();
	void Degrees();
	void Increase();
	void Decrease();
	void Sinus();
	friend void Comparsion(Angle& Fangle, Angle& Sangle);
};

#endif