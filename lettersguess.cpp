#ifndef GAME_5
#define GAME_5
#include "classHangman.cpp"
// function where letters are guessed
void Hangman::playtwoplayerGame()
{
    Hangman::clearScreen();

    int lives = 0, check = 0;

    char guess[100], input; // a variable guess is used to encrypt the word to be guessed , input is the guessed character

    char *word; // word to be guessed

    // Getting and storing word
    word = Hangman::gettwoplayerWord();

    // Converting word into astericks
    Hangman::encryptWord(word, guess);

    // Boxes to display tries left, the hangman, etc
    Hangman::printBox(10, 3, 19, 4);
    Hangman::printBox(56, 3, 14, 4);
    Hangman::printBox(46, 9, 24, 17);

    while (true)
    {

        // Printing word to guess
        Hangman::gotoXY(12, 4);
        cout << "Word : ";
        puts(guess);

        Hangman::gotoXY(12, 6);
        cout << "Hint : "; // display hint
        cout << hint;

        // Printing remaining lives
        Hangman::gotoXY(58, 4);
        cout << "Lives : " << (7 - lives);

        // Displaying man hanging
        Hangman::hanging(lives);

        if (lives == 7) // If lives are finished
            break;

        if (Hangman::checkWord(word, guess))
        { // If word has been guessed
            check = 1;
            break;
        }

        // Taking guess
        Hangman::gotoXY(12, 11);
        cout << "Enter your guess : ";
        input = getche();

        Hangman::gotoXY(14, 14);

        if (Hangman::checkGuess(word, guess, input))
        {
            // If guessed character is found
            cout << "                        ";
            Hangman::gotoXY(14, 14);
            cout << "Good guess!";
        }

        else
        {
            // If guessed character isn't found
            cout << "One step closer to death";
            lives++; // lives is incremented and once it reaches 7, player loses
        }
    }

    // Printing result
    Hangman::printBox(10, 18, 25, 8);
    SetConsoleTextAttribute(H_Console, 12);
    Hangman::gotoXY(18, 20);

    if (check == 1)
    { // if word is guessed correctly check is set to 1
        cout << "YOU WIN!";

        /* if count is odd, player 1 is currently playing, otherwise it's player 2*/
        if (!(count & 1))  // if count is odd
            p1_count += 1; // increment score of player 1 by 1

        else               // if count is even
            p2_count += 1; // increment score of player 2 by 1
    }

    else // if player has run of tries and word isn't correct
        cout << "YOU LOSE!";

    SetConsoleTextAttribute(H_Console, 9);
}
#endif