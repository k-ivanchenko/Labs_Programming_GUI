#pragma once
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Triangle
{
private:
	int s1{}, s2{}, s3{}, a1{}, a2{}, a3{}, P{}, i{ 0 }, j{ 0 }, k{ 0 };
	double square = { 0.0 }, height{ 0.0 };
	string F{};
public:
	Triangle();
	Triangle(int z, int x, int c, int v, int n, int m);
	Triangle(const Triangle& copy);

	void Setp();
	void SetSq();
	void SetHt();
	void Setf();

	int Getp();
	double GetSq();
	double GetHt();
	string Getf();

	void Init();
	void Display();

};

