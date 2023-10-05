#include <iostream>
using namespace std;
int main()
{
    int num1, num2, fibonacciIndex, counter = 3, sum = 0, outputNum = 0;

    cout << "Input first number in fibonacci sequence: ";
    cin >> num1;
    cout << "Input second number in fibonacci sequence: ";
    cin >> num2;
    cout << "Input fibonacci index: ";
    cin >> fibonacciIndex;
    cout << endl;

    if (fibonacciIndex <= 0 )
        cout << "Sorry you must input a number greater than 0" << endl;
    
    while (counter <= fibonacciIndex)
    {
        sum = num1 + num2;
        cout << "Index: " << counter << " Number: " << sum << endl;
        counter++;
        num1 = num2;
        num2 = sum;
    }

    cout << "The number at index " << fibonacciIndex << " is " << num2;

}