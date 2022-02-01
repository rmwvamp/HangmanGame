#ifndef singleplayermain_1
#define singleplayermain_1
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
#include "singleabout.cpp"
#include "singlehangmangame.cpp"
#include "singleinstructions.cpp"
#include "singleplaygame.cpp"
#include "singlestartgame.cpp"
#include "singleabout.cpp"
#include "singleabout.cpp"

void Hangman::singleplayermain()
{

	system("title SINGLE PLAYER HANGMAN"); // Setting title
	system("mode 80,30");				   // Setting screen mode
	system("color 09");					   // Setting color
	Hangman::printBox(0, 0, 80, 30);	   // Printing box border
	Hangman::loading();					   // Loading game
	Hangman::singlehangmanGame();		   // Displaying menu
}
#endif