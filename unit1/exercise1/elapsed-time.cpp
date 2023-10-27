#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int elapsedSeconds = 0, hours = 0, minutes = 0, seconds = 0;
    cout << "Input elapsed time in seconds: ";
    cin >> elapsedSeconds;
    hours = floor(elapsedSeconds / 3600);
    minutes = floor((elapsedSeconds - (hours * 3600))/60);
    seconds = elapsedSeconds - (hours * 3600) - (minutes * 60);
    cout << hours << ":" << minutes << ":" << seconds << endl;
    return 0;
}