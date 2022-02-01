#ifndef GAME_7
#define GAME_7
#include "classHangman.cpp"
// function to clear the screen without clearing the border
void Hangman::clearScreen()
{
    //	Clearing screen from point (3,3) to (77,27)
    for (int i = 0; i < 24; i++)
    {
        Hangman::gotoXY(3, 1 + i);

        for (int j = 0; j < 74; j++)
            cout << " ";
    }
}
#endif