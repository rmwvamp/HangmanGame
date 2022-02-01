#ifndef singleabout_1
#define singleabout_1
#include "classHangman.cpp"
void Hangman::singleabout()
{
	SetConsoleTextAttribute(H_Console, 12);
	char about[23][78];
	strcpy(about[0], "                                                                             ");
	strcpy(about[1], "                                                                             ");
	strcpy(about[2], "                                                                             ");
	strcpy(about[3], "                                                                             ");
	strcpy(about[4], "                                                                             ");
	strcpy(about[5], "                               :: About Us ::                                ");
	strcpy(about[6], "                                                                             ");
	strcpy(about[7], "                    Created by: Vaibhav Anand                                ");
	strcpy(about[8], "                                (2k20/CO/472)                                ");
	strcpy(about[9], "                                      and                                   ");
	strcpy(about[10], "                               Vernika Panchal                               ");
	strcpy(about[11], "                               (2k20/CO/480)                                 ");
	strcpy(about[12], "                                                                             ");
	strcpy(about[13], "                                                                             ");
	strcpy(about[14], "                                                                             ");
	strcpy(about[15], "                         Studying in Delhi Technoogical University           ");
	strcpy(about[16], "                                                                             ");
	strcpy(about[17], "                                                                             ");
	strcpy(about[18], "                                                                             ");
	// Printing about
	for (int i = 0; i < 19; i++)
	{
		Hangman::gotoXY(1, 5 + i);
		puts(about[i]);
	}
	Hangman::gotoXY(0, 29);
	getch();
	Hangman::singlehangmanGame();
}
#endif