#ifndef twoplayermain_1
#define twoplayermain_1
/*----------------------------Main function-------------------------*/
#include "checkguess.cpp"
#include "checkword.cpp"
#include "classHangman.cpp"
#include "clearscreen.cpp"
#include "encryptword.cpp"
#include "firstmenutwoplayer.cpp"
#include "gotoxy.cpp"
#include "twoplayerinstructions.cpp"
#include "lettersguess.cpp"
#include "printbox.cpp"
#include "starttwoplayergame.cpp"
#include "visualhanging.cpp"
#include "loading.cpp"

void Hangman::twoplayermain()
{

    system("title TWO PLAYER HANGMAN"); // Setting title
    system("mode 80,30");               // Setting screen mode
    system("color 09");                 // Setting color

    Hangman::printBox(0, 0, 80, 30);
    Hangman::loading(); // Printing box border

    Hangman::twoplayerhangmanGame(); // Displaying menu
}
#endif