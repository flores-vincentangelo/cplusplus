#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double a = 0.0, b = 0.0, c = 0.0, disc = 0.0, r1 = 0.0, r2 = 0.0;
    cout << "Input the value of a b c in this format <a b c>: ";
    cin >> a >> b >> c;
    disc  = pow(b, 2) - (4 * a * c);

    if(disc < 0)
        cout << "The equation has imaginary roots" << endl;
    else if (disc == 0)
        cout << "The equation has 1 root: " << b << endl;
    else if (disc > 0)
        r1 = (-b + pow(disc, .5))/(2*a);
        r2 = (-b - pow(disc, .5))/(2*a);
        cout << fixed << setprecision(2);
        cout << "The equation has 2 roots. r1: " << r1 << " r2: " << r2 << endl;
}