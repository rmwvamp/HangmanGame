#include "classHangman.cpp"

void Hangman::singleplayGame(int difficulty)
{
    Hangman::clearScreen();
    int index, lifes = 0, check = 0;
    // Generating index according to difficulty
    if (difficulty == 1)
        index = rand() % 10;
    else if (difficulty == 2)
        index = (rand() % 10) + 10;
    else
        index = (rand() % 10) + 20;
    char guess[8]; // max word length is 7 so +1 for null char
    char input;
    char *word; // using string literal concept here
    // Getting and storing word
    word = getsingleWord(index);
    // Converting word into astericks
    Hangman::encryptWord(word, guess);
    Hangman::printBox(10, 3, 19, 4);  // word box, U_R_C
    Hangman::printBox(56, 3, 14, 4);  // lifes box
    Hangman::printBox(46, 9, 24, 17); // hangman box
    Hangman::printBox(10, 9, 25, 9);  // guess box
    while (true)
    {
        // Printing word to word box, U_R_C
        Hangman::gotoXY(12, 4);
        cout << "WORD :: ";
        puts(guess);
        // Printing remaining lifes
        Hangman::gotoXY(58, 4);
        cout << "LIFES :: " << (7 - lifes);
        // Displaying man hanging
        Hangman::hanging(lifes);
        if (lifes == 7) // If lifes are finished
            break;
        if (Hangman::checkWord(word, guess))
        { // If word has been guessed
            check = 1;
            break;
        }
        // Taking guess
        Hangman::gotoXY(12, 11);
        cout << "Enter your guess :: ";
        input = getche();
        Hangman::gotoXY(14, 14);
        if (Hangman::checkGuess(word, guess, input)) // If guessed character is found
            cout << "You saved a life!";
        else
        { // If guessed character isn't found
            cout << "You loose a life!";
            lifes++;
        }
    }
    // Printing result
    Hangman::printBox(10, 18, 25, 8);
    SetConsoleTextAttribute(H_Console, 12);
    Hangman::gotoXY(18, 20);
    if (check == 1)
        cout << "!YOU WIN!";
    else
        cout << "!YOU LOSE!";
    SetConsoleTextAttribute(H_Console, 9);
}
char *Hangman::getsingleWord(int index)
{
    static char words[][8] = {
        // 3 characters words
        "PEN", "EYE", "CAR", "HEN", "MAN", "SKY", "EAR", "EGG", "PIN", "FAN",
        // 5 characters words
        "FIGHT", "FLOOR", "PLANE", "ROBOT", "PHONE", "HOUSE", "ELBOW", "NOKIA", "WATER", "TRAIN",
        // 7 characters words
        "BALANCE", "TEACHER", "STUDENT", "CRICKET", "SAMSUNG", "PROGRAM", "EDITING", "MESSAGE", "HACKING", "LECTURE"};
    return words[index];
}