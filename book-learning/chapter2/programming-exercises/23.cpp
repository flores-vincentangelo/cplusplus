#include <iostream>
using namespace std;
int main() 
{
    const double k = 6.67e-8;
    double m1 = 0.0, m2 = 0.0, d = 0.0, F = 0.0;

    cout << "Input data in this format <Mass1 Mass2 distance>: ";
    cin >> m1 >> m2 >> d;

    F = ((m1 * m2)/d) * k;

    cout << "The force between the two objects is: " << F << endl;

}