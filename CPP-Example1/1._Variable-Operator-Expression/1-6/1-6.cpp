
// 1-6.cpp
// Write a program which accepts a character and display its ASCII value.

#include <iostream>

using namespace std;

int main()
{
	char character;
	int ASCII;

	cout << "Enter the Character You Want to Convert to an ASCII Value: ";
	cin >> character;

	ASCII = static_cast<int>(character);

	cout << "\nThe " << character << " character has an ASCII value of " << ASCII << endl;
}