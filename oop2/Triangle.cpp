#include "Triangle.h"
#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>
#define _USE_MATH_DEFINES

using namespace std;

Triangle::Triangle(const Triangle& triangle)
{
	this->a = triangle.a;
	this->b = triangle.b;
	this->c = triangle.c;
}

Triangle::Triangle(double a, double b, double c)
{
	this->a = a;
	this->b = b;
	this->c = c;
	printf("Constructor\n");
}

Triangle::~Triangle()
{
	printf("\nDestructor");
}

double Triangle::GetA() { return a; }
double Triangle::GetB() { return b; }
double Triangle::GetC() { return c; }

void Triangle::SetA()
{
	if (a > 0)
	{
		this->a = a;
	}
}

void Triangle::SetB()
{
	if (b > 0)
	{
		this->b = b;
	}
}

void Triangle::SetC()
{
	if (c > 0)
	{
		this->c = c;
	}
}

double Triangle::Area()
{
	return sqrt((((a + b + c) / 2) * ((a + b + c) / 2 - a) * ((a + b + c) / 2 - b) * ((a + b + c) / 2 - c)));
}

double Triangle::Perimeter()
{
	return (a + b + c);
}

long double Triangle::Angle1()
{
	long double ang1;
	return ang1 = 180 / M_PI * acos((b * b + c * c - a * a) / 2 * b * c);
}

long double Triangle::Angle2()
{
	long double ang2;
	return ang2 = 180 / M_PI * acos((a * a + c * c - b * b) / 2 * a * c);
}

long double Triangle::Angle3()
{
	long double ang3;
	return ang3 = 180 / M_PI * acos((a * a + b * b - c * c) / 2 * a * b);
}

void Triangle::Print()
{
	cout << GetA() << endl;
	cout << GetB() << endl;
	cout << GetC() << endl;
	cout << Area() << endl;
	cout << Perimeter() << endl;
	cout << Angle1() << endl;
	cout << Angle2() << endl;
	cout << Angle3() << endl;
}