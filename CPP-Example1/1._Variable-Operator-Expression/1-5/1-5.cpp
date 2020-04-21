
// 1-5.cpp
// Write a program which accept principle, rate and time from user and print the simple interest.

#include <iostream>

using namespace std;

float simpleInterest_Calculate(float* moneyValue, float* rateValue, int* time);

int main()
{
	float simpleInterest;
	float money;
	float rate;
	int years;

	cout << "\n  Enter the beginning money amount IN WHOLE OR DECIMAL QUANTITY (i.e. 15000):  ";
	cin >> money;

	cout << "\n  Enter the annual rate IN PERCENT (i.e. 3.5):  ";
	cin >> rate;

	cout << "\n  Enter the length of time in which the money would stay IN YEARS (i.e. 5): ";
	cin >> years;

	simpleInterest = simpleInterest_Calculate(&money, &rate, &years);

	cout << "\n\n\n  After adding you will be left with a total of $" << simpleInterest << " dollars after " << years << " years\n\n";

}

float simpleInterest_Calculate(float* pMoney, float* pRate, int* pTime)
{
	float InterestEarned = (*pMoney * *pRate * *pTime) / 100;
	float simpleInterestTotal = *pMoney + InterestEarned;

	return simpleInterestTotal;
}