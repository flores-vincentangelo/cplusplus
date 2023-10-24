#include <fstream>
#include <iostream>
using namespace std;
int larger (int testNumber, int maxNumber);
void innerFunction ();
int main()
{
    ifstream inData;
    inData.open("./data.txt");
    char sentinel;
    int number = 0, maxNumber = 0;

    while (inData)
    {
        inData >> number;
        maxNumber = larger(number, maxNumber);
    }

    cout << maxNumber << endl;
    return 0;
}

int larger (int testNumber, int maxNumber)
{
    if (testNumber > maxNumber)
    {
        innerFunction();
        return testNumber;
    }
    else 
    {
        return maxNumber;
    }
}

void innerFunction ()
{
    cout << "inside inner function" << endl;
}