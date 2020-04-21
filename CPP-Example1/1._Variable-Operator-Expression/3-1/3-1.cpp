
// 3-1.cpp
// Write a program that takes length as input in feet and inches. The program should then convert the lengths in centimeters and display it on screen.

#include <iostream>

using namespace std;

const int FTtIn = 12;
const float INtCM = 2.54;

int main()
{
	// Initialize variables
	float feet, inches, totalInches;
	double centimeterValue;

	// Title
	cout << "\n  CONVERTING IMPERIAL TO METRIC" << endl;

	// Get the value for feet
	cout << "\n  Enter the value for FEET: ";
	cin >> feet;

	// Get the value for inches
	cout << "  Enter the value for INCHES: ";
	cin >> inches;

	// Check whether the inputs are valid (POSITIVE NUMBERS ONLY)
	if (feet > 0 || inches >= 0)
	{
		// Checks whether a foot to inch conversion is needed and does it
		if (feet > 0)
		{
			totalInches = (FTtIn * feet);
			totalInches = totalInches + inches;
		}
		// If there was no foot valued entered and it went in as 0 feet, then inches would be initialized into a different variable
		if (feet == 0)
		{
			totalInches = inches;
		}

		// Inch to centimeter conversion
		centimeterValue = INtCM * totalInches;

		// Prints out the final line
		cout << "\n  " << feet << " feet and " << inches << " inch(es) equals " << centimeterValue << " centimeter(s)\n";
	}
	else	// If the values input are negative, an error would be returned
	{
		cout << "\n  THE NUMBER YOU ENTERED WAS INVALID!\n";
		return 1;
	}
}