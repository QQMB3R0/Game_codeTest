#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <iomanip>
class drawHangman
{
public:
	drawHangman();
	void setXY(short X, short Y);
	void printHuman(int score);
	void Field();
	~drawHangman() {};

private:
	HANDLE hStdOut;
};
