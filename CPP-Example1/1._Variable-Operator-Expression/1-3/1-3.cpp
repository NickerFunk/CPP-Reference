
// VARIABLE-OPERATOR-EXPRESSION

// 1-3.cpp
// Write a program which accept two numbers and print their sum.

#include <iostream>

using namespace std;

int main()
{
	int number1;
	int number2;
	int sum;

	cout << "Enter the First Integer: ";
	cin >> number1;

	cout << "Enter the Second Integer: ";
	cin >> number2;

	sum = number1 + number2;

	cout << "\n\nThe Sum of the Numbers You Entered Is: " << sum << "\n\n";

}