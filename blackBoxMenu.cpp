// blackBoxMenu.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Sample of blackBox
// OS : Windows 10
// 08 June 2019
// Created by : Oratile Godiragetse Mogorosi

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

const double VAT = 0.15;
const double SPECIAL = 0.2;
void showBlackBoxDetails();
double specialDeduction(double price);

int main()
{
	string password,username;
	string endLoop;
	int choice;
	double price;
    
	showBlackBoxDetails();
	cout << " " << endl;
	cout << "Enter username :";
	cin >> username;
	cout << "Enter your password :";
	cin >> password;
	cout << " " << endl;
	endLoop = "no";

	cout << "1. Wings" << endl;
	cout << "2.Burgers" << endl;
	cout << "3.Fries" << endl;
	cout << "4.Drinks" << endl;

	while (endLoop == "no" || endLoop == "No")
	{
		cout << " Choose an option :";
		cin >> choice;

		switch (choice)
		{
		case 1: cout << " Wings are R67.90" << endl;
			price = 67.90;
			break;
		case 2: cout << " Burgers are R 87.90" << endl;
			price = 87.90;
			break;
		case 3: cout << " Fries are R43.80" << endl;
			price = 43.80;
			break;
		case 4: cout << " Drinks are R23.60" << endl;
			price = 23.60;
			break;
		default: cout << " You chose an invalid option" << endl;
			break;
		}
		cout << " Is it all?";
		cin >> endLoop;
	}

	cout << "You get " << specialDeduction(price) << " off your meal" << endl;

	system("pause");
	return 0;
}

void showBlackBoxDetails()
{
	cout << "  Welcome to Black Box  " << endl;
	cout << "  Create your own meal  " << endl;
}

double specialDeduction(double price)
{
	double mealPrice;
	mealPrice = price * SPECIAL;
	return mealPrice;
}
