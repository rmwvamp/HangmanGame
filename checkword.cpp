#ifndef GAME_8
#define GAME_8
#include "classHangman.cpp"

// check if guessed word is same as word to be guessed
// parameters, word and guessed word
bool Hangman::checkWord(string word, char *guess)
{
    int i = 0;
    while (word[i] != '\0')
    {
        if (word[i] != guess[i]) // If any character didn't matched
            return false;
        i++;
    }
    return true;
}
#endif