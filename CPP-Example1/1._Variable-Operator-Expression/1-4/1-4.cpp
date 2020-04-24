
// VARIABLE-OPERATOR-EXPRESSION

// 1-4.cpp
// Write a program which accept temperature in Farenheit and print it in centigrade.

#include <iostream>

using namespace std;

int main()
{
	float fahrenheit;
	float celsius;

	cout << "Enter the Fahrenheit Temperature: ";
	cin >> fahrenheit;

	celsius = (fahrenheit - 32) * 5 / 9;

	cout << "\n\nThe celsius conversion of " << fahrenheit << " degrees fahrenheit is " << celsius << " degrees celsius\n";

	return 0;
}