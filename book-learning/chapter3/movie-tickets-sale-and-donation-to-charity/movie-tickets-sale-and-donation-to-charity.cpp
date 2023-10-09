#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    string movie = "Jumanji lol";
    double adultTixPrice = 250.00, childTixPrice = 200.0, charityPercent = 10.0, grossAmount = 0.0;
    int adultTixSold = 20, childTixSold = 100, leftLineLength = 35, tixSold = 0, rightLineLength = 10, precision = 2;

    cout << "Input movie name: ";
    getline(cin, movie);
    cout << "Input price of Adult tickets: ";
    cin >> adultTixPrice;
    cout << "Input price of Child tickets: ";
    cin >> adultTixSold;
    cout << "Input number of Adult tickets sold: ";
    cin >> childTixPrice;
    cout << "Input number of Child tickets sold: ";
    cin >> childTixSold;
    cout << "Input percentage to be donated to charity: ";
    cin >> charityPercent;
    cout << endl
         << endl;

    tixSold = adultTixSold + childTixSold;
    grossAmount = (adultTixPrice * adultTixSold) + (childTixPrice * childTixSold);

    cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"
         << "-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
    cout << left;
    cout << setfill('.') << setw(leftLineLength) << "Movie Name: "
         << " " << movie << endl;
    cout << setfill('.') << setw(leftLineLength) << "Number of Tickets Sold: " << setfill(' ') << setw(rightLineLength) << right << tixSold << endl;
    cout << fixed << setprecision(precision);
    cout << left;
    cout << setfill('.') << setw(leftLineLength) << "Gross Amount: "
         << " $" << setfill(' ') << right << setw(rightLineLength) << grossAmount << endl;
    cout << left;
    cout << setfill('.') << setw(leftLineLength) << "Percentage of Gross Amount Donated: " << setfill(' ') << right << setw(rightLineLength + 1) << charityPercent;
    cout.unsetf(ios::left);
    // cout << endl;
    cout << "%" << endl;
    cout << setfill('.') << left << setw(leftLineLength) << "Amount Donated: "
         << setfill(' ') << right << " $" << setw(rightLineLength) << grossAmount * charityPercent / 100 << endl;
    cout << left;
    cout << setfill('.') << setw(leftLineLength) << "Net Sale: "
         << " $" << right << setfill(' ') << setw(rightLineLength) << grossAmount - (grossAmount * charityPercent / 100) << endl;
}