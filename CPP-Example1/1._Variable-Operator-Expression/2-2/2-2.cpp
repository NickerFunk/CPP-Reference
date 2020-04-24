
// VARIABLE-OPERATOR-EXPRESSION

// 2-2.cpp

#include <iostream>

using namespace std;

int main()
{
	float number1, number2, number3;
	float greatestNumber;

	cout << "  Enter the first number: ";
	cin >> number1;
	cout << "  Enter the second number: ";
	cin >> number2;
	cout << "  Enter the third number: ";
	cin >> number3;

	greatestNumber = (number1 > number2 && number1 > number3) ? number1 : (number2 > number3) ? number2 : number3;
	
	cout << "\n  The greatest number out of all three is " << greatestNumber;
}