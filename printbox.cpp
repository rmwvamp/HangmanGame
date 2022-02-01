#ifndef GAME_4
#define GAME_4
#include "classHangman.cpp"

/*
 *function to print boxes on the screen*
 *parameters : (x,y) coordinates ; length and width of the box
 */
void Hangman::printBox(int X, int Y, int width, int length)
{
    /*
    U_L_C = Upper Left Corner   ╔
    U_R_C = Upper Right Corner         ╗
    L_L_C = Lower Left Corner   ╚
    L_R_C = Lower Right Corner         ╝
    H_L	= Horizontal Line  ═
    V_L = Vertical Line   ║
    */

    char U_L_C = 201, U_R_C = 187, L_L_C = 200, L_R_C = 188;

    char H_L = 205, V_L = 186;

    // subtracting -2 to compensate two corners
    // at each side
    width -= 2;
    length -= 2;

    // Printing upper horizontal line
    Hangman::gotoXY(X, Y);
    cout << U_L_C;

    for (int i = 0; i < width; i++) // loops stops before=>  _ ╗
        cout << H_L;

    cout << U_R_C;

    // Printing vertical lines

    for (int i = 0; i < length; i++)
    {
        Hangman::gotoXY(X, Y + (i + 1));
        cout << V_L;
        Hangman::gotoXY(X + (width + 1), Y + (i + 1));
        cout << V_L;
    }
    // Printing bottom horizontal line
    Hangman::gotoXY(X, Y + length);
    cout << L_L_C;

    for (int i = 0; i < width; i++)
        cout << H_L;

    cout << L_R_C;
}
#endif