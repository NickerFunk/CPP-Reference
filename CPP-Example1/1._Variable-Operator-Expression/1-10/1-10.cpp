
// VARIABLE-OPERATOR-EXPRESSION

// 1-10.cpp
// Write a program to check whether the given number is even or odd (using ? : ternary operator )

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::setw;
using std::endl;

int main()
{
	int number;

	cout << "\n  Enter a number to determine if it is even or odd:  ";
	cin >> number;

	(number % 2 == 0) ?
		cout << "\n\n  The number is EVEN\n" : cout << "\n\n  The number is ODD\n";

	return 0;
}
