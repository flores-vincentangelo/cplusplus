#include <iostream>
using namespace std;
int main()
{
    float len = 0, wid = 0, area = 0, peri = 0;
    cout << "Input length and width in meters in this format: " << "x y" << endl;
    cin >> len >> wid;
    cout << endl;

    cout << "Area: " << len * wid << "m" << endl;
    cout << "Perimeter: " << (2 * len) + (2 * wid) << "m" << endl;
}