#ifndef GAME_13
#define GAME_13
#include "classHangman.cpp"
// function to mask/encrypt word to be guessed
//  parameters word and partially guessed word
void Hangman::encryptWord(char *word, char *guess)
{
    int i = 1;

    // Storing first character of word as it is
    // as we are giving it as a hint
    guess[0] = word[0];

    // Storing all other characters of word as astericks
    while (word[i] != '\0')
    {
        guess[i] = '*';
        i++;
    }

    // Storing NULL at the last index
    guess[i] = '\0';
}
#endif