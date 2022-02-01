#ifndef loading_1
#define loading_1
#include "classHangman.cpp"
void Hangman::loading()
{

	char F_B = 254; // Filled Box ■
	char H_B = 207; // Hollow Box ¤
	gotoXY(32, 12);
	cout << "Loading HANGMAN!";
	// for showing blinking boxes
	for (int i = 0; i < 6; i++) // total loading time 2.7 seconds
	{
		Sleep(150); // sleep time of 150 microseconds
		gotoXY(36, 14);
		cout << F_B << "  " << H_B << "  " << H_B;
		Sleep(150);
		gotoXY(36, 14);
		cout << H_B << "  " << F_B << "  " << H_B;
		Sleep(150);
		gotoXY(36, 14);
		cout << H_B << "  " << H_B << "  " << F_B;
	}
}
#endif