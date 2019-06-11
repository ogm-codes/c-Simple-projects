// Math.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 10 June 2019
// OS : Windows 10
/* This program does simple math
	It can add, subtract, multipy and divide numbers
*/
// Made by Oratile Godiragetse Mogorosi

/* I chose to limit the number of values to multiply due to debugging purposes.
   The program is completed and compiles successfully. Further improvements will
   be made as time goes on. */

#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;

const int SIZE = 5;
void introMessage();
void displayOptions();
double multiplyFunction(double array[]);
double divideFunction(double array[]);

int main()
{
	int choice;// Option selection of what you want the program to do!
	int addNumbers,subtractNumbers;
	double total;
	double value;
	double multiples[SIZE];
	double divisionValues[SIZE];

	introMessage();
	cout << " " << endl;
	displayOptions();
	cout << " Enter your choice: " << endl;
	cin >> choice;

	value = 0;
	total = 0;
	switch (choice)
	{
	case 1: cout << " Adding Numbers +++" << endl;
		cout << " How many numbers do you want to add : ";
		cin >> addNumbers;
		for (int i = 0; i < addNumbers; i++)
		{
			cout << " Enter a value ";
			cin >> value;
			total = total + value;
		}
		cout << " Total is " << total << endl;
		break;
	case 2: cout << " Subtracting numbers ---" << endl;
		cout << " How many numbers are you subtracting : ";
		cin >> subtractNumbers;
		for (int s = 0; s < subtractNumbers; s++)
		{
			cout << " Enter a value ";
			cin >> value;
			total = value - total;
		}
		cout << " Total subtracted value is " << total << endl;
		break;
	case 3: cout << " Multiplying numbers xxx" << endl;
		cout << " Multiply five numbers  " << endl;
		
			for (int m = 0; m < 5; m++)			
			{
				cout << "enter a value : ";
				cin >> multiples[m];
			}
			total = multiplyFunction(multiples);
			cout << "The total is " << total << endl;
			break;
	case 4: cout << " Division ///" << endl;
		cout << " Divide two values" << endl;

		for (int k = 0; k < 2; k++)
		{
			cout << "enter a value : ";
			cin >> divisionValues[k];
		}
		total = divideFunction(divisionValues);
		cout << "The total divided value is " << total << endl;
		break;
		
	default: cout << " You chose an invalid option" << endl;
		break;
	}

	system("pause");
	return 0;
}

//Opening message of the program
void introMessage()
{
	cout << "  Welcome to the Math program!!" << endl;
	cout << " Add - Subtract - Multiply - Divide" << endl;
}

// Menu to choose an option
void displayOptions()
{
	cout << "1. Add" << endl;
	cout << "2. Subtract" << endl;
	cout << "3. Multiply" << endl;
	cout << "4. Divide" << endl;
}

double multiplyFunction(double array[])
{
	double total;
	total = array[0] * array[1] * array[2] * array[3] * array[4];
	return total;;
}

double divideFunction(double array[])
{
	double total;
	total = array[0] / array[1];
	return total;
}