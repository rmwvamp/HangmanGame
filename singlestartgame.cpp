#include "classHangman.cpp"
void Hangman::singlestartGame()
{
    // Providing time as seed to rand function
    srand(time(0));
    Hangman::gotoXY(31, 16);
    cout << "Difficulty level!";
    Hangman::gotoXY(31, 18);
    cout << "(1)->    EASY    ";
    Hangman::gotoXY(31, 20);
    cout << "(2)->   MEDIUM   ";
    Hangman::gotoXY(31, 22);
    cout << "(3)->    HARD    ";
    int difficulty;
    // Selecting difficulty
    while (true)
    {
        Hangman::gotoXY(0, 29);
        char ch = getch();
        if (ch == '1' || ch == '2' || ch == '3')
        {
            difficulty = int(ch) - 48;
            break;
        }
        else
            continue;
    }
    // Starting game
    while (true)
    {
        Hangman::singleplayGame(difficulty);
        // Waiting for 'y' or 'n'
        int check = 0;
        while (true)
        {
            Hangman::gotoXY(15, 22);
            cout << "Play again :: Y//N";
            char ch = getche();
            if (ch == 'y' || ch == 'Y')
            {
                check = 1;
                break;
            }
            if (ch == 'n' || ch == 'N')
                break;
        }
        if (check == 1) // If want to play again
            continue;
        else // If don't want to play again
            break;
    }
    Hangman::singlehangmanGame();
}