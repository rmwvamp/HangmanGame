#include "classHangman.cpp"
void Hangman::singleplayerinstructions()
{
    SetConsoleTextAttribute(H_Console, 12);
    char about[19][78];
    strcpy(about[0], "                                :: HANGMAN ::                                ");
    strcpy(about[1], "                                                                             ");
    strcpy(about[2], "                   In this game, you have to guess a word!                   ");
    strcpy(about[3], "             Any word will be given according to the difficulty.             ");
    strcpy(about[4], "                                                                             ");
    strcpy(about[5], "                 You will have 7 lifes for guessing the word                 ");
    strcpy(about[6], "                        If you guessed the word right                        ");
    strcpy(about[7], "                       man will be saved from hanging.                       ");
    strcpy(about[8], "                                                                             ");
    strcpy(about[9], "                But if you're not able to guess the word and,                ");
    strcpy(about[10], "                   lifes finish then person will be hanged                   ");
    strcpy(about[11], "                                                                             ");
    strcpy(about[12], "                     Difficulty levels are as follows :-                     ");
    strcpy(about[13], "                                                                             ");
    strcpy(about[14], "                          EASY :: 3 character words                          ");
    strcpy(about[15], "                                                                             ");
    strcpy(about[16], "                         MEDIUM :: 5 character words                         ");
    strcpy(about[17], "                                                                             ");
    strcpy(about[18], "                          HARD :: 7 character words                          ");
    // printing Instruction
    for (int i = 0; i < 19; i++)
    {
        Hangman::gotoXY(1, 5 + i);
        puts(about[i]);
    }
    Hangman::gotoXY(0, 29);
    getch();
    Hangman::singlehangmanGame();
}