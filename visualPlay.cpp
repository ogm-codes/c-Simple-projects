// visualPlay.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Program displays number of seats occupied and seats unoccupied
// 1 - represents occupied
// 0 - represents unoccupied
// coded by Oratile Godiragetse Mogorosi

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

const int ROW = 6;
void showInstruction();

int main()
{
	int seats[ROW];

	showInstruction();

	//Populate array
	for (int i = 0;i < 6; i++)
	 {
		cin >> seats[i];
	 }

	//Display seats 
	cout << "Row 1: ";
	for (int s = 0; s < 6; s++)
	{
		cout << seats[s] << " " ;
	}

	system("pause");
	return 0;
}

void showInstruction()
{
	cout << "======================" << endl;
	cout << "Enter only 1 or 0" << endl;
	cout << "1 represents present" << endl;
	cout << "0 represents absent" << endl;
	cout << "======================" << endl;
}
