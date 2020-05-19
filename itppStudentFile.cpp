// itppStudentFile.cpp : This file contains the 'main' function. Program execution begins and ends there.
// coded by Oratile Godiragetse Mogorosi

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int list = 10;
string names[list];
string surnames[list];
int mark[list];

int main()
{
	string name, surname;
	int marks;
	ofstream studentFile;
	studentFile.open("marks.txt");

	//Populate file through array
	for (int i = 0; i < list - 1; i++)
	{
		cout << "What is your name ";
		cin >> name;
		names[i] = name;

		cout << "What is your surname ";
		cin >> surname;
		surnames[i] = surname;

		cout << "Enter your mark ";
		cin >> marks;
		mark[i] = marks;
	}

	//Display data in file
	for (int k = 0; k < list ; k++)
	{
		studentFile << names[k] << " " << surnames[k] << " " << mark[k] << endl;
	}

	studentFile.close();

	system("pause");
	return 0;
}


