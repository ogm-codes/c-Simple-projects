// bubbleSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
// an algorithm to sort out stuff
// OS : Windows 10
// 01 June 2019

#include "pch.h"
#include <iostream>
using namespace std;

void bubbleSort(int array[], int size);
void swap(int &a, int &b);
const int SIZE = 6;

int main()
{
	int numbers[SIZE];

	//Populate array
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter a value : ";
		cin >> numbers[i];
	}

	cout << " ";

	//Display array
	for (int k = 0; k < SIZE; k++)
	{
		cout << numbers[k] << endl;
	}

	cout << "Sort the sequence" << endl;
	
	//Sort the array
	for (int r = 0; r < SIZE; r++)
	{
		bubbleSort(numbers, SIZE);
		cout << numbers[r] << endl;
	}


	system("pause");
	return 0;
}

void bubbleSort(int array[], int size)
{
	int maxElement;
	int index;

	for (maxElement = size - 1; maxElement >= 0; maxElement--)
	{
		for (index = 0; index <= maxElement - 1; index++)
		{
			if (array[index] > array[index + 1])
			{
				swap(array[index], array[index + 1]);
			}
		}
	}
}

void swap(int & a, int & b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
