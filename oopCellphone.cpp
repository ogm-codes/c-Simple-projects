// oopCellphone.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Cellphone OOP
// OperatingSystem : windows 10
// 05/28/2019

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class cellPhone
{
private:
	string manufacture;
	string modelNumber;
	double retailPrice;
// OOP based programming --mI love Menlyn Main!!
public:
	void setManufacturer(string manufact)
	{
		manufacture = manufact;
	}

	void setModelNumber(string modNum)
	{
		modelNumber = modNum;
	}

	void setRetailPrice(double retail)
	{
		retailPrice = retail;
	}

	string getManufacturer()
	{
		return manufacture;
	}

	string getModelNumber()
	{
		return modelNumber;
	}

	double getRetailPrice()
	{
		return retailPrice;
	}
};

int main()
{
	cellPhone myPhone;

	myPhone.setManufacturer("Nokia");
	myPhone.setModelNumber("N32110");
	myPhone.setRetailPrice(2499.99);

	cout << "The make is " << myPhone.getManufacturer() << endl;
	cout << "The Model number is " << myPhone.getModelNumber() << endl;
	cout << "The retail price is " << myPhone.getRetailPrice() << endl;

	system("pause");
	return 0;
	
}
