#include <iostream>
using namespace std;
bool  isUpperCase(char testChar);
int main()
{
    char letter = '2';
    // cin >> letter;
    cout << isUpperCase(letter) << endl;
    return 0;
}

bool isUpperCase(char testChar)
{
    if(testChar >= 65 && testChar <= 90)
        return true;
    else if (testChar >= 97 && testChar <= 122)
        return false;
    else 
        cout << "Character is not a letter" << endl;
        return false;

}