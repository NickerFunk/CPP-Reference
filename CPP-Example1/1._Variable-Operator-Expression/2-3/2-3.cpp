
// 2-3.cpp
// Write a program which accepts amount as integer and display total number of Notes of Rs

#include <iostream>

using namespace std;

int main()
{
	int money;
	int numberofBills, remainderMoney;

	cout << "  Enter in a value: ";
	cin >> money;

	if (money >= 500)
	{
		numberofBills = money / 500;
		money = money % 500;
		cout << "\n 500: " << numberofBills;
	} 
	else
	{
		cout << "\n 500: 0";
	}
	if (money >= 100) 
	{
		numberofBills = money / 100;
		money = money % 100;
		cout << "\n 100: " << numberofBills;
	}
	else
	{
		cout << "\n 100: 0";
	}
	if (money >= 50) {
		numberofBills = money / 50;
		money = money % 50;
		cout << "\n  50: " << numberofBills;
	}
	else
	{
		cout << "\n  50: 0";
	}
	if (money >= 20) {
		numberofBills = money / 20;
		money = money % 20;
		cout << "\n  20: " << numberofBills;
	}
	else
	{
		cout << "\n  20: 0";
	}
	if (money >= 10) {
		numberofBills = money / 10;
		money = money % 10;
		cout << "\n  10: " << numberofBills;
	}
	else
	{
		cout << "\n  10: 0";
	}
	if (money >= 5) {
		numberofBills = money / 5;
		money = money % 5;
		cout << "\n   5: " << numberofBills;
	}
	else
	{
		cout << "\n   5: 0";
	}
	if (money >= 1) {
		numberofBills = money / 1;
		money = money % 1;
		cout << "\n   1: " << numberofBills;
	}
	else
	{
		cout << "\n   1: 0";
	}
}