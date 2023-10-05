#include <iostream>
using namespace std;
int main()
{
    int lengthFt, lengthIn, totalInches = 0; 
    float cm;
    cout << "Input length in this format <Length_Feet Length_Inches>: ";
    cin >> lengthFt >> lengthIn;

    totalInches = (12 * lengthFt) + lengthIn;
    cm = totalInches * 2.54;
    cout << cm << " cm" << endl;
}