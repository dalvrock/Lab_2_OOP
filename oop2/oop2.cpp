#include <iostream>
#include "Triangle.h"

using namespace std;

int main()
{
	Triangle* ABC = new Triangle(3, 4, 5);
	
	Triangle* BCA = new Triangle(*ABC);

	BCA->Print();
	ABC->Print();


	delete ABC;
	delete BCA;
}

