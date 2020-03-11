#pragma once
class Triangle
{
	private:
		double a, b, c;
	public:
		
		Triangle(double a, double b, double c);
		Triangle(const Triangle& triangle);
		~Triangle();

		double GetA();
		double GetB();
		double GetC();

		void SetA();
		void SetB();
		void SetC();

		double Area();
		double Perimeter();
		long double Angle1();
		long double Angle2();
		long double Angle3();

		void Print();
};

