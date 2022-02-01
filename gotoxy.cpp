#ifndef GAME_12
#define GAME_12
#include "classHangman.cpp"

/* function to set cursor position on output window */
// parameters (x,y) coordinates
void Hangman::gotoXY(int X, int Y)
{
	COORD position; // creating a variable of COORD structure
	position.X = X;
	position.Y = Y;

	// we have to give handle and coord/position
	// getstdhandle would then get the output handle
	// because we want to save it at output file
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}
#endif
