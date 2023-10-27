#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double calcAverage (double x1, double x2, double x3, double x4, double x5); 
double calcStdDev (double mean, double x1, double x2, double x3, double x4, double x5); 
int main()
{
    double x1 = 0.0, x2 = 0.0, x3 = 0.0, x4 = 0.0, x5 = 0.0, average = 0.0, stDev = 0.0;
    cout << "Input 5 numbers separated by spaces: ";
    cin >> x1 >> x2 >> x3 >> x4 >> x5; 
    cout << endl;
    average = calcAverage(x1, x2, x3, x4, x5);
    stDev = calcStdDev(average, x1, x2, x3, x4, x5);

    cout << fixed << showpoint << setprecision(2);
    cout << "Mean: " << average << endl;
    cout << "Standard Deviation: " << stDev << endl;

    return 0;
}

double calcAverage (double x1, double x2, double x3, double x4, double x5)
{
    double average = 0.0;
    average = (x1 + x2 + x3 + x4 + x5)/5;
    return average;
} 

double calcStdDev (double mean, double x1, double x2, double x3, double x4, double x5)
{
    double stDev = 0.0, numerator = 0.0;
    numerator = pow(x1 - mean, 2) + pow(x2 - mean, 2) + pow(x3 - mean, 2) + pow(x4 - mean, 2) + pow(x5 - mean, 2);
    stDev = pow(numerator/5, 0.5);
    return stDev;
}

