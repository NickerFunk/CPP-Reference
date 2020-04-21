
// 2-1.cpp

#include <iostream>

using namespace std;

int main()
{
	int number1, number2;

	cout << "  Enter the first number: ";
	cin >> number1;

	cout << "  Enter the second number: ";
	cin >> number2;

	number1 = number1 + number2;
	number2 = number1 - number2;
	number1 = number1 - number2;

	cout << "\n  The final numbers are " << number1 << " for the first number in the order, and " << number2 << " for the second number.";


	return 0;

}