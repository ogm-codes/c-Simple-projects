// Vibe.cpp : This file contains the 'main' function. Program execution begins and ends there.
// OS : Windows 10
// 15 June 2019
/* A draft of a "bigger picture" app I want to develop.
  As soon as i complete the Vibe app : a full description of the open source version
  will be released to the public.

  coded by Oratile Godiragetse Mogorosi
*/

#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

const int SIZE = 10;
void welcomeMessage();

int main()
{
	string location;
	string cities[SIZE];
	ifstream inputFile;	
	bool found;
	int count;

	inputFile.open("Hotcity.txt");
	welcomeMessage();
	cout << " " << endl;
	cout << "Where do wana vibe!?" << endl;
	getline(cin, location);

	//Populate the array with latest "Party" cities
	for (int i = 0; i < SIZE; i++)
	{
		getline(inputFile, cities[i]);
	}

	//Search for the city
	found = false;
	count = 0;
	while (found == false && count < SIZE)
	{
		if (cities[count] == location)
		{
			found = true;
		}
		else
		{
			count++;
		}
	}

	// Only basic no error detection and all that.
	if (found)
	{
		cout << " We do vibe in " << location << endl;
	}
	else
	{
		cout << " Sorry, we don't vibe in " << location << endl;
	}

	inputFile.close();
	system("pause");
	return 0;
}

void welcomeMessage()
{
	cout << "      Vibe!!" << endl;
	cout << " We Vibe everyday!!" << endl;
}
