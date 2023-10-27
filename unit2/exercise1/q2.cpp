#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const double PI = 3.1416;

double calcDistance(double x2, double y2, double x1, double y1);
double calcRadius(double centerX, double centerY, double x, double y);
double calcCircumference(double radius);
double calcArea(double radius);
int main()
{
    double centerX = 0.0, centerY = 0.0, x = 2.0, y = 2.0, radius = 0.0, circumference = 0.0, area = 0.0;
    cout << "Enter the x and y coordinates of the circle separated by spaces: ";
    // cin >> centerX >> centerY;
    cout << endl;
    cout << "Enter a point on the circle's x and y coordinate separated by spaces: ";
    // cin >> x >> y;
    cout << endl;
    radius = calcRadius(centerX, centerY, x, y);
    circumference = calcCircumference(radius);
    area = calcArea(radius);

    cout << fixed << showpoint << setprecision(2);

    cout << "Radius: " << radius << endl;
    cout << "Diameter: " << radius * 2 << endl;
    cout << "Circumference: " << circumference << endl;
    cout << "Area: " << area << endl;

    return 0;
}

double calcDistance(double x2, double y2, double x1, double y1)
{
    return pow(pow(x2 - x1, 2) + pow(y2 - y1, 2), .5);
}

double calcRadius(double centerX, double centerY, double x, double y)
{
    return calcDistance(centerX, centerY, x , y);
}

double calcCircumference(double radius)
{
    return (2 * PI * radius);
}
double calcArea(double radius)
{
    return (PI * pow(radius, 2));
}
