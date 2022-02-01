#ifndef GAME_15
#define GAME_15
#include "classHangman.cpp"
// function to print instructions on the screen
void Hangman::twoplayerinstructions()
{
    SetConsoleTextAttribute(H_Console, 12);
    Hangman::clearScreen();
    char about[19][78];
    strcpy(about[0], "                                :: HANGMAN ::                                ");
    strcpy(about[1], "                                                                             ");
    strcpy(about[2], "                   In this game, you have to guess a word!                   ");
    strcpy(about[3], "             													               ");
    strcpy(about[4], "                                                                             ");
    strcpy(about[5], "                 You will have 7 lives for guessing the word                 ");
    strcpy(about[6], "                        If you guessed the word right                        ");
    strcpy(about[7], "                       	you win the round!				               ");
    strcpy(about[8], "                                                                             ");
    strcpy(about[9], "                But if you're not able to guess the word and                 ");
    strcpy(about[10], "                   lives finish then you lose the round!                    ");
    strcpy(about[11], "                                                                            ");
    strcpy(about[12], "                     First, Player 1 must enter word to be                   ");
    strcpy(about[13], "                                                                             ");
    strcpy(about[14], "                          guessed, along with the hint                       ");
    strcpy(about[15], "                                                                             ");
    strcpy(about[16], "                         Player 2 will try to guess the word                 ");
    strcpy(about[17], "                                                                             ");
    strcpy(about[18], "                          Positions swap after each round                    ");
    // printing Instruction
    for (int i = 0; i < 19; i++)
    {
        Hangman::gotoXY(1, 5 + i);
        puts(about[i]);
    }
    Hangman::gotoXY(0, 29);
    getch();
    Hangman::twoplayerhangmanGame();
}
#endif