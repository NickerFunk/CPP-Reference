
// VARIABLE-OPERATOR-EXPRESSION

// 1-8.cpp
// Write a program to calculate area of circle.

#include <iostream>
#include <iomanip>
#include <math.h>

using std::cout;
using std::cin;
using std::setw;
using std::endl;

float areaOfCircle(float* fRadius);

int main()
{
	float radius, output;

	cout << "\n  Enter the length of the circle's radius (in units): ";
	cin >> radius;
	radius = pow(radius, 2);

	output = areaOfCircle(&radius);

	cout << "\n\n  After calculating using pi (3.14) in this instance. The answer would be " << output << " units\n\n";
}

float areaOfCircle(float* fRadius)
{
	float pi = 3.14;

	return (*fRadius * pi);
}