
// 1-9.cpp
// Write a program to check whether the given number is positive or negative (using ? : ternary operator )

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::setw;
using std::endl;

int main()
{
	float number;

	cout << "\n  Enter a number to determine if it is postive or negative:  ";
	cin >> number;

	if (number == 0)
	{
		cout << "\n\n  The number is NEUTRAL. It is neither positive nor negative\n";
	}
	else
	{
		(number < 0) ? cout << "\n\n  The number is NEGATIVE\n" : cout << "\n\n  The number is POSITIVE\n";
	}

	return 0;
}