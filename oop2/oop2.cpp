#include <iostream>
#include "Triangle.h"

using namespace std;

int main()
{
	Triangle* ABC = new Triangle(3, 4, 5);
	
	ABC->Print();
	delete ABC;

}

