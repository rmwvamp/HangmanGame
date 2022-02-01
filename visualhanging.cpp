#ifndef visualdefining_1
#define visualdefining_1
#include "classHangman.cpp"

// function to display how close the person is to being hanged depending on number of tries/lives left
// parameter : number of wrong guesses so far
void Hangman::hanging(int wrong)
{

    static char hang[12][20];

    if (wrong == 0)
    {
        strcpy(hang[0], " _____________    ");
        strcpy(hang[1], " |           |    ");
        strcpy(hang[2], " |           |    ");
        strcpy(hang[3], "             |    ");
        strcpy(hang[4], "             |   ");
        strcpy(hang[5], "             |    ");
        strcpy(hang[6], "             |   ");
        strcpy(hang[7], "             |    ");
        strcpy(hang[8], "             |    ");
        strcpy(hang[9], "             |    ");
        strcpy(hang[10], "             |    ");
        strcpy(hang[11], "         ---------");
    }

    else if (wrong == 1)
        strcpy(hang[3], " O           |    ");

    else if (wrong == 2)
        strcpy(hang[4], " |           |   ");

    else if (wrong == 3)
        strcpy(hang[4], "/|           |   ");

    else if (wrong == 4)
        strcpy(hang[4], "/|\\          |   ");

    else if (wrong == 5)
        strcpy(hang[5], " |           |    ");

    else if (wrong == 6)
        strcpy(hang[6], "/            |   ");

    else
        strcpy(hang[6], "/ \\          |   ");

    // Displaying man hanging

    for (int i = 0; i < 12; i++)
    {
        if (wrong == 7)
            SetConsoleTextAttribute(H_Console, 12);
        Hangman::gotoXY(49, 11 + i);
        puts(hang[i]);
    }

    if (wrong == 7)
        SetConsoleTextAttribute(H_Console, 9);
}
#endif