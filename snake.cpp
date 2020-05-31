// snake.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;


bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
enum eDirection{STOP =0,LEFT,RIGHT,UP,DOWN};
eDirection dir;
void setup();
void draw();
void logic();
void input();

int main()
{
	setup();
	while (!gameOver)
	{
		draw();
		//input();
		//logic();
	}

	return 0;
}

void setup()
{
	gameOver = false;
	dir = STOP;
	x = width / 2;
	y = height / 2;
	fruitX = rand() % width;
	fruitY = rand() % height;
	score = 0;
}

void draw()
{
	system("cls");
	for (int i = 0; i < width; i++)
	{
		cout << "#";
		cout << endl;
	}

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == 0)
				cout << "#";
			if (i == y && j == x)
				cout << "0";
			else if (i == fruitY && j == fruitX)
				cout << "F";
			else
				cout << " ";

				if (j == width - 1)
					cout << "#";
		}
		cout << endl;
	}

	for (int i = 0; i < width + 2; i++)
	{
		cout << "#";
		cout << endl;
	}
}

void logic()
{
	switch (dir)
	{
	case STOP:
		break;
	case LEFT:
		break;
	case RIGHT:
		break;
	case UP:
		break;
	case DOWN:
		break;
	default:
		break;
	}
}

void input()
{
	if (_kbhit())
	{
		switch (_getch())
		{
		case 'a' :
			dir = LEFT;
			break;
		case 'd':
			dir = RIGHT;
			break;
		case 'w':
			dir = UP;
			break;
		case 's':
			dir = DOWN;
			break;
		case 'x':
			gameOver = true;
			break;
		}
	}
}
