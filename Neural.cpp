// Neural.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <algorithm>
using namespace std;

class Neuron
{

public:
	float weight, bias;

	Neuron()
		:weight(2.0), bias(1.0)
	{}

	// identity activation function
	float getActivationIdentity(const float& x)
	{
		return x;
	}

	// Relu activation function
	float getActivationRelu(const float& x)
	{
		return max(0.0f, x);
	}

	float moveForward(const float& x)
	{
		const float sum = weight * x + bias;//neuron activation
		return getActivationRelu(sum);
	}
};

void main()
{
	Neuron my_neuron;

	cout << my_neuron.moveForward(-1.0) << endl;
	cout << my_neuron.moveForward(-0.5) << endl;
	cout << my_neuron.moveForward(0.0) << endl;
	cout << my_neuron.moveForward(0.5) << endl;
	cout << my_neuron.moveForward(1.0) << endl;

}

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
