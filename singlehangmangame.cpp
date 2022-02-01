#ifndef singlehangman_1
#define singlehangman_1
#include "classHangman.cpp"
void Hangman::singlehangmanGame()
{
    Hangman::clearScreen();
    char logo[7][75];
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
        SetConsoleTextAttribute(H_Console, 12);
        Hangman::gotoXY(3, 5 + i);
        puts(logo[i]);
    }
    SetConsoleTextAttribute(H_Console, 9);
    Hangman::printBox(29, 15, 23, 10);
    Hangman::gotoXY(31, 16);
    cout << "(1)->  Play game ";
    Hangman::gotoXY(31, 18);
    cout << "(2)-> How to play";
    Hangman::gotoXY(31, 20);
    cout << "(3)->   Project By ";
    Hangman::gotoXY(31, 22);
    cout << "(4)->    Back    ";
    // Selecting option
    while (true)
    {
        Hangman::gotoXY(0, 29);
        char ch = getch();
        if (ch == '1')
            Hangman::singlestartGame();
        else if (ch == '2')
            Hangman::singleplayerinstructions();
        else if (ch == '3')
            Hangman::singleabout();
        else if (ch == '4')
        {
            system("title HANGMAN");
            Hangman::mainmenu();
        }
        else
            continue;
    }
}
#endif