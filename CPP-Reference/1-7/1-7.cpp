
// 1-7.cpp
// Write a program to swap the values of two variables

#include <iostream>
#include <iomanip>

using namespace std;

void swap(int* number1, int* number2);

int main()
{
	int integer1, integer2, numberStoring;
	integer1 = 100;
	integer2 = 500;
	numberStoring = 0;

	cout << "\n  The first integer store in memory is " << setw(10) << integer1 << endl;
	cout << "  The second integer store in memory is " << setw(9) << integer2;

	swap(&integer1, &integer2);

	cout << "\n\n  Now the first integer is " << setw(10) << integer1 << endl;
	cout << "  Now the second integer is " << setw(9) << integer2 << "\n";

	return 0;
}

void swap(int* number1, int* number2)
{
	int numberStorage = *number2;
	*number2 = *number1;
	*number1 = numberStorage;
}