#ifndef mainmenu_1
#define mainmenu_1
#include "singleplayermain.cpp"
#include "twoplayermain.cpp"

#include "classHangman.cpp"
void Hangman::mainmenu()
{
    Hangman::clearScreen();
    char logo[7][75];
    // storing logo in logo, by creating a 2-d array
    strcpy(logo[0], "HH    HH     AA     NN    NN     GGG    MM          MM     AA     NN    NN");
    strcpy(logo[1], "HH    HH   AA  AA   NNN   NN   GG   GG  MMM        MMM   AA  AA   NNN   NN");
    strcpy(logo[2], "HH    HH  AA    AA  NNNN  NN  GG        MMMM      MMMM  AA    AA  NNNN  NN");
    strcpy(logo[3], "HHHHHHHH  AAAAAAAA  NN NN NN  GG        MM MM    MM MM  AAAAAAAA  NN NN NN");
    strcpy(logo[4], "HH    HH  AA    AA  NN  NNNN  GG   GGG  MM  MM  MM  MM  AA    AA  NN  NNNN");
    strcpy(logo[5], "HH    HH  AA    AA  NN   NNN   GG   GG  MM   MMMM   MM  AA    AA  NN   NNN");
    strcpy(logo[6], "HH    HH  AA    AA  NN    NN     GGG    MM    MM    MM  AA    AA  NN    NN");

    // Printing logo
    for (int i = 0; i < 7; i++)
    {
        // changing colour to Light Red
        // it takes two parameters output handle and colour
        SetConsoleTextAttribute(H_Console, 12);
        Hangman::gotoXY(3, 5 + i);
        puts(logo[i]); // prints each logo[i] with newline
    }

    // setting colour back to light blue
    SetConsoleTextAttribute(H_Console, 9);
    Hangman::printBox(29, 15, 28, 10);
    Hangman::gotoXY(31, 16);
    cout << "(1)-> Single Player Game ";
    Hangman::gotoXY(31, 18);
    cout << "(2)-> 2 Player Game";
    Hangman::gotoXY(31, 20);
    cout << "(3)->   Created By  ";
    Hangman::gotoXY(31, 22);
    cout << "(4)->    Exit    ";

    // Selecting option
    while (true)
    {
        Hangman::gotoXY(2, 29);
        char ch = getch(); // using getch to get any character
        if (ch == '1')
            Hangman::singleplayermain();
        else if (ch == '2')
            Hangman::twoplayermain();
        else if (ch == '3')
            Hangman::singleabout();
        else if (ch == '4')
            exit(0);
        else
            continue;
    }
}
#endif