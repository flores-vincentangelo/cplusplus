#include <fstream>
#include <iostream>
using namespace std;
void initializeValues(int& zeroCount,int& oddCount,int& evenCount);
void classifyNumber(int& number, int& zeroCount,int& oddCount,int& evenCount);
void printResults(int& zeroCount,int& oddCount,int& evenCount);
void getNumber(ifstream& inputData, int& number, char& sentinel);
int main()
{
    ifstream inData;
    int zeroCount, evenCount, oddCount, number = 0;
    char sentinel;

    inData.open("./data.txt");
    initializeValues(zeroCount, oddCount, evenCount);
    while(sentinel != -1)
    {
        getNumber(inData, number, sentinel);
        classifyNumber(number, zeroCount, oddCount, evenCount);
    }

    printResults(zeroCount, oddCount, evenCount);

    return 0;
}

void initializeValues(int& zeroCount,int& oddCount,int& evenCount)
{
    zeroCount = 0;
    oddCount = 0;
    evenCount = 0;
}

void getNumber(ifstream& inputData, int& number, char& sentinel)
{
    inputData >> number;
    sentinel = inputData.peek();
}

void classifyNumber(int& number, int& zeroCount,int& oddCount,int& evenCount)
{
    if (number == 0)
        zeroCount += 1;
    else if (number % 2 == 0)
        evenCount += 1;
    else 
        oddCount += 1;
}

void printResults(int& zeroCount,int& oddCount,int& evenCount)
{
    cout << "Zeros: " << zeroCount << endl;
    cout << "Odd numbers: " << oddCount << endl;
    cout << "Even numbers: " << evenCount << endl;
}