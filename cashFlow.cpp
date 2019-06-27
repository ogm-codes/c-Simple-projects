// cashFlow.cpp : This file contains the 'main' function. Program execution begins and ends there.
/* Any amount entered, interested is calculated.
   The initial goal of this piece of code I wrote
   is to calculate how much I can make by saving
   a set sum of money for a set number of months*/
// OS : Windows 10
// 28 June 2019
// Oratile Godiragetse Mogorosi

#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;

const double INTEREST = 0.04;// Below R2500
void calculateInterest(double amount);

int main()
{
	int months;
	double amount,total;
	double interest;

	amount = 0;
	interest = 0;
	total = 0;

	cout << " How many months are you investing " << endl;
	cin >> months;

	for (int i = 0; i < months; i++)
	{
		cout << " Month " << i + 1 << " :R";
		cin >> amount;
		if (amount < 0)
		{
			cout << " Error!!!" << endl;
			break;
		}
		total = total + amount;
		calculateInterest(amount);
	}

	cout << " You managed to save R" << total << endl;
	
	system("pause");
	return 0;
}

void calculateInterest(double amount)
{
	double finalValue,total;
	
	finalValue = 0;
	total = 0;

		finalValue = finalValue + (amount * 0.04);
		if (amount > 2500)
		{
			finalValue = amount * 0.0525;
		} 
		
	cout << " You earned an interest of R" << finalValue << " on the amount" << endl;
	cout << " Total interest : R" << total << endl;
	
}

