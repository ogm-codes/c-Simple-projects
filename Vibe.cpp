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
const double PTA = 100.00;
const double JHB = 120.00;
const double CPT = 180.00;
const double DBN = 150.00;
void welcomeMessage();

int main()
{
	string location;
	string cities[SIZE];
	ifstream inputFile;	
	bool found,hit;
	int count;
	unsigned int tickets;
	float bill;

	inputFile.open("Hotcity.txt");
	welcomeMessage();
	tickets = 0;
	bill = 0;
	
	cout << " " << endl;
	
	cout << "Where do you wana vibe!? ";
	getline(cin, location);

	//Populate the array with latest "Party" cities
	for (int i = 0; i < SIZE; i++)
	{
		getline(inputFile, cities[i]);
	}

	//Search for the city
	found = false;
	hit = false;
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

	// Important loactions 
	if (found)
	{
		cout << " We do vibe in " << location << endl;
		if (location == "Pretoria")
		{
			hit = true;
			cout << " Tickets cost R100.00 per Gig." << endl;
			cout << " How many tickets do you want ?" << endl;
			cin >> tickets;
			bill = tickets * PTA;
		}
		if (location == "Cape Town")
		{
			hit = true;
			cout << " Tickets cost R180.00 per Gig." << endl;
			cout << " How many tickets do you want ?" << endl;
			cin >> tickets;
			bill = tickets * CPT;
		}
		if (location == "Durban")
		{
			hit = true;
			cout << " Tickets cost R150.00 per Gig." << endl;
			cout << " How many tickets do you want ?" << endl;
			cin >> tickets;
			bill = tickets * DBN;
		}
		if (location == "Johannesburg")
		{
			hit = true;
			cout << " Tickets cost R120.00 per Gig." << endl;
			cout << " How many tickets do you want ?" << endl;
			cin >> tickets;
			bill = tickets * JHB;
		}

	}
	else
	{
		cout << " Sorry, we don't vibe in " << location << endl;
	}

	cout << " Enjoy the Vibe in " << location << endl;
	if (hit == true)
	{
		cout << " Tickets bought = R" << bill << endl;
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
