#ifndef main_1 // header guards
#define main_1
/*----------------------------Main function-------------------------*/
#include "singleplayermain.cpp"
#include "mainmenu.cpp"
#include "twoplayermain.cpp"

int main()
{

    Hangman instance; // creating an object instance of class hangman

    system("title HANGMAN"); // title of window file
    system("mode 80,30");    // Setting screen width*length
    system("color 09");      // Setting color as Light Blue

    instance.printBox(0, 0, 80, 30);
    instance.loading(); // Printing box border

    instance.mainmenu(); // Displaying menu

    return 0;
}
#endif