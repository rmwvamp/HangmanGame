#ifndef GAME_3
#define GAME_3
#include "classHangman.cpp"
// function that initializes game
void Hangman::starttwoplayerGame()
{

    if (response == "" or strlen(response) <= 1) // if initially no word is entered or word has only one letter, user is asked to enter a valid word
    {
        SetConsoleTextAttribute(H_Console, 12);
        Hangman::clearScreen();
        Hangman::gotoXY(25, 12);
        cout << "Enter a valid word first!";
        Hangman::gotoXY(25, 14);
        cout << "Press any key to return to Menu";
        char any = getch();
        return;
    }
    while (true)
    {
        count += 1;                   // total rounds is incremented by one
        Hangman::playtwoplayerGame(); // game starts
                                      //				int check = 0;
        char chek = getch();          // after the round, control returns here, from where it is redirected back to hangmanGame()
        break;
    }
    Hangman::twoplayerhangmanGame();
}
#endif