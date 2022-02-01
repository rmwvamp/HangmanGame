#ifndef classHangman_1
#define classHangman_1
#include "Hangman.hpp"
class Hangman
{

private:
    
    char *response = ""; // This stores the word to be guessed

    string shown = ""; // This is used to show user how far they have gotten in guessing

    string hint; // hint for the word to be guessed

    int p1_count = 0; // count of number of rounds won by Player 1

    int p2_count = 0; // count of number of rounds won by Player 2

    int count = 1; // total rounds played

    string p1 = "Player 1"; // default name of Player 1, which can be changed in the Menu

    string p2 = "Player 2"; // default name of Player , which can be changed in the Menu

public:
    HANDLE H_Console = GetStdHandle(STD_OUTPUT_HANDLE); // declaring a handle to the output device

    /* function to set cursor position on output window */
    // parameters (x,y) coordinates
    void gotoXY(int X, int Y);

    void printBox(int X, int Y, int width, int length);

    // function to clear the screen without clearing the border
    void clearScreen();

    // function to display the start page of the game
    void twoplayerhangmanGame();

    // function that initializes game
    void starttwoplayerGame();

    // function where letters are guessed
    void playtwoplayerGame();

    /*function that returns word to be guessed*/
    char *gettwoplayerWord()
    {
        return response;
    }

    // function to mask/encrypt word to be guessed
    //  parameters word and partially guessed word
    void encryptWord(char *word, char *guess);

    // function to display how close the person is to being hanged depending on number of tries/lives left
    // parameter : number of wrong guesses so far
    void hanging(int wrong);

    void loading();

    // function to check if guessed letter is correct
    // parameters word, partially complete guessed word, guessed letter
    bool checkGuess(char *word, char *guess, char ch);

    // check if guessed word is same as word to be guessed
    // parameters, word and guessed word
    bool checkWord(string word, char *guess);

    // function to print instructions on the screen
    void twoplayerinstructions();

    void storetheword(char *x) // simply storing the secret phrase in a private member
    {
        response = x;
    }

    // declaring functions for single player

    void singlehangmanGame();
    void singleplayGame(int difficulty);
    void singlestartGame();
    char* getsingleWord(int index);
    // char* getsingleWord(int index);
    void singleabout();
    void singleplayerinstructions();

    // main functions
    void twoplayermain();
    void singleplayermain();
    void mainmenu();
};
#endif
