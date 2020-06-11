// referenceFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int addOne(int &);

int main()
{
	int number;

	cout << "Change the world by typing a number :";
	cin >> number;
	cout << "And the number is :" << number << endl;
	cout << "The game changer is :" << addOne(number) << endl;

	system("pause");
	return 0;
}

int addOne(int &num)
{
	num = num + 1;
	return num;
}
