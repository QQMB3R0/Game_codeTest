#include "drawHangman.h"

drawHangman::drawHangman()
{
	hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
}

void drawHangman::setXY(short X, short Y)
{
	COORD coord = { X, Y };
	SetConsoleCursorPosition(hStdOut, coord);
}

void drawHangman::printHuman(int score)
{
    if (score == 7) {
        for (int m = 19; m < 26; m++) {
            setXY(m, 6); std::cout << "_";
        }

        for (int m = 7; m < 13; m++) {
            setXY(18, m); std::cout << "|";
        }
    }
    else if (score == 6) {
        setXY(26, 7); std::cout << "|" << std::endl;
    }
    else if (score == 5) {
        setXY(26, 8); std::cout << "0" << std::endl;
    }
    else if (score == 4) {
        setXY(26, 9); std::cout << "|" << std::endl;
    }
    else if (score == 3) {
        setXY(25, 9); std::cout << "/" << std::endl;
    }
    else if (score == 2) {
        setXY(27, 9); std::cout << "\\" << std::endl;
    }
    else if (score == 1) {
        setXY(25, 10); std::cout << "/" << std::endl;
    }
    else if (score == 0) {
        setXY(27, 10); std::cout << "\\" << std::endl;
    }

}

void drawHangman::Field()
{

	for (int m = 15; m < 31; m++) {
		setXY(m, 5); std::cout << "*";
		setXY(m, 14); std::cout << "*";
	}

	for (int m = 6; m < 14; m++) {
		setXY(15, m); std::cout << "*";
		setXY(30, m); std::cout << "*";
	}
	std::cout << std::endl;
}
#include "pch.h"