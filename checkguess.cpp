#ifndef checkguess_1
#define checkguess_1
#include "classHangman.cpp"
// function to check if guessed letter is correct
// parameters word, partially complete guessed word, guessed letter
bool Hangman::checkGuess(char *word, char *guess, char ch)
{
    bool check = false;
    int i = 0;

    // Converting character to uppercase
    ch = toupper(ch);

    char temp; // temp variable to store uppercase of word

    while (word[i] != '\0')
    {
        temp = toupper(word[i]);

        if (temp == ch)
        {
            // If character is found in word
            guess[i] = word[i]; // store character in guess, thus revealing all occurences of the character guessed
            check = true;       // set check as true, i.e., guessed character is valid
        }
        i++; // increment i to check next index
    }
    return check;
}
#endif