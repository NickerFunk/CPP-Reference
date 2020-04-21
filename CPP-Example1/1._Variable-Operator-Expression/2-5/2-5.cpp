
// 2-5.cpp

#include <iostream>

using namespace std;

int main()
{
	int numberofDays;
	int years, months, days;

	cout << "  Enter in the number of days to convert: ";
	cin >> numberofDays;
	cout << "\n  ";

	if (numberofDays != NULL && numberofDays != 0)
	{
		int timeRemainder;
		if (numberofDays >= 365)
		{
			years = numberofDays / 365;
			timeRemainder = numberofDays % 365;
			cout << years << " years ";
		}
		if (timeRemainder >= 30 && timeRemainder < 365)
		{
			months = timeRemainder / 30;
			timeRemainder = timeRemainder % 30;
			cout << months << " months ";
		}
		if (timeRemainder < 30 && timeRemainder != 0)
		{
			days = timeRemainder;
			cout << days << " days";
		}
	}
}