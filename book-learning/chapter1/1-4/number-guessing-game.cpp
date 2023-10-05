#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
    srand(time(NULL));
    int guess, randNum = rand() % 101;
    cout << "Guess a number between 0 and 100: ";
    cin >> guess;

    while(guess != randNum)
    {
        if(guess > randNum)
            cout << "Your guess is too high. Guess lower" << endl;
        else
            cout << "Your guess is too low. Guess higher" << endl;

        cout << "Input your new guess: ";
        cin >> guess;
    }

    cout << "Congratulations! You guessed right!" << endl;
}