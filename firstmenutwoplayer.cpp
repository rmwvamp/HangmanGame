#ifndef GAME_10
#define GAME_10
#include "classHangman.cpp"
// function to display the start page of the game
void Hangman::twoplayerhangmanGame()
{

    while (true)
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
            Hangman::gotoXY(3, 1 + i);
            puts(logo[i]);
        }

        SetConsoleTextAttribute(H_Console, 9);

        Hangman::printBox(28, 8, 30, 14); // box for the menu

        Hangman::printBox(14, 22, 22, 4); // player1 score box

        Hangman::printBox(46, 22, 22, 4); // player2 score box

        // menu starts
        /*---------------------------MENU-------------------------*/
        Hangman::gotoXY(31, 10);
        cout << "(1)->  Play game ";

        Hangman::gotoXY(31, 12);
        cout << "(2)->  Change Names ";

        Hangman::gotoXY(31, 14);
        cout << "(3)-> How to play";

        Hangman::gotoXY(31, 16);
        cout << "(4)-> Store Word and Hint";

        Hangman::gotoXY(31, 18);
        cout << "(5)->    Back    ";

        // menu ends

        /*---------------------------Player Scores and Name-------------------------*/

        Hangman::gotoXY(18, 23);
        cout << p1 << " : " << p1_count; // display player 1 name and score

        Hangman::gotoXY(50, 23);
        cout << p2 << " : " << p2_count; // display player 2 name and score

        // Selecting option
        Hangman::gotoXY(0, 29);
        char ch = getch();

        if (ch == '1')
            Hangman::starttwoplayerGame(); // play game

        else if (ch == '2') // take player 1 and player 2 name as input
        {
            SetConsoleTextAttribute(H_Console, 12);
            Hangman::clearScreen();
            Hangman::gotoXY(31, 16);
            cout << "Player 1 : ";
            Hangman::gotoXY(31, 18);
            getline(cin, p1);
            Hangman::gotoXY(31, 20);
            cout << "Player 2 : "; // scanf("\n") ;
            Hangman::gotoXY(31, 22);
            getline(cin, p2);
            continue;
        }

        else if (ch == '3')
            Hangman::twoplayerinstructions(); // display instructions

        else if (ch == '4') // take word to be guessed and hint as input
        {
            SetConsoleTextAttribute(H_Console, 12);
            Hangman::clearScreen();
            char word1[100];
            Hangman::gotoXY(31, 16);
            cout << "Enter the secret word"; // enter word to be guessed
            Hangman::gotoXY(31, 18);
            cin >> word1;
            Hangman::storetheword(word1); // store word
            Hangman::gotoXY(31, 20);
            cout << "Enter a hint : ";
            scanf("\n"); // enter a hint for the other player
            Hangman::gotoXY(31, 22);
            getline(cin, hint); // store hint
            continue;
        }

        else if (ch == '5')
        {
            system("title HANGMAN");
            Hangman::mainmenu();
        }

        else
            continue;
    }
}
#endif