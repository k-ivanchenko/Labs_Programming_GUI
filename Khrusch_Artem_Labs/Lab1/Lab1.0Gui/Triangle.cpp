#include "Triangle.h"

Triangle::Triangle() : s1(0), s2(0), s3(0), a1(0), a2(0), a3(0)
{
	cout << "Default constructor: " << endl;
	cout << s1 << " " << s2 << " " << s3 << " " << a1 << " " << a2 << " " << a3 << endl;
	cout << "\n";
}

Triangle::Triangle(int z, int x, int c, int v, int n, int m)
{
	s1 = z; s2 = x; s3 = c; a1 = v; a2 = n; a3 = m;
}

Triangle::Triangle(const Triangle& copy)
{
	if(i == 4 || j == 2 || k == 3)
	{
		cout << "\nCopy constructor:" << endl;
		s1 = copy.s1;
		s2 = copy.s2;
		s3 = copy.s3;
		a1 = copy.a1;
		a2 = copy.a2;
		a3 = copy.a3;
		cout << copy.s1 << endl;
		cout << copy.s2 << endl;
		cout << copy.s3 << endl;
		cout << copy.a1 << endl;
		cout << copy.a2 << endl;
		cout << copy.a3 << endl;
	}
	else
	{
		cout << " ";
	}
	
}

void Triangle::Setp()
{
	if (i == 4)
	{
		P = s1 + s2 + s3;
	}
	else if (j == 2)
	{
		P = 3 * s1;
	}
	else if (k == 3)
	{
		P = 2 * s1 + s3;
	}
	else
	{
		cout << "!";
	}
}

void Triangle::SetSq()
{
	if (i == 4)
	{
		square = 0.5 * (s3 * height);
	}
	else if (j == 2)
	{
		square = (pow(3, 0.5) / 4) * s1 * s1;
	}
	else if (k == 3)
	{
		square = 0.5 * height * s3;
	}
	else
	{
		cout << "!" << endl;
	}
}

void Triangle::SetHt()
{
	if (i == 4)
	{
		height = (s1 * s2) / s3;
	}
	else if (j == 2)
	{
		height = 0.5 * pow(4 * s1 * s2 - s3 * s3, 0.5);
	}
	else if (k == 3)
	{
		height = (pow(3, 0.5) / 2) * s1;
	}
	else
	{
		cout << "!";
	}
}

void Triangle::Setf()
{
	if (i == 4)
	{
		F = "Right Triangle.";
	}
	else if (j == 2)
	{
		F = "Equilateral Triangle.";
	}
	else if (k == 3)
	{
		F = "Isosceles Triangle.";
	}
	else
	{
		cout << "!";
	}
}

int Triangle::Getp()
{
	return P;
}

double Triangle::GetSq()
{
	return square;
}

double Triangle::GetHt()
{
	return height;
}

string Triangle::Getf()
{
	return F;
}

void Triangle::Init()
{
	if ((a1 == 90 && (a2 + a3 <= 90)) || (a2 == 90 && (a1 + a3 <= 90)) || (a3 == 90 && (a1 + a2 <= 90)) && (a1 + a2 + a3 <= 180))
	{
		i = 4;
	}
	else if (a1 == 60 && a2 == 60 && a3 == 60 && s1 == s2 && s1 == s3)
	{
		j = 2;
	}
	else if (a1 == 60 && a2 == 60 || a3 <= 60 && s1 == s2 && s1 + s2 < s3)
	{
		k = 3;
	}
	else
	{
		cout << "It's not triangle!";
	}
}

void Triangle::Display()
{
	cout << "Form: " << F << endl;
	cout << "Height: " << height << endl;
	cout << "Perimetre: " << P << endl;
	cout << "Square: " << square << endl;
}
