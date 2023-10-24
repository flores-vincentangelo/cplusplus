#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double netBalance = 0.0, payment = 0.0, averageDailyBalance = 0.0, interest = 0.0;
    const double interestPerMonth = 0.0152;
    int d1 = 0, d2 = 0;

    cout << "Input details in this format: <Net_Balance Payment Days_in_Billing_Cycle Days_before_billing_Cycle>: ";
    cin >> netBalance >> payment >> d1 >> d2;
    averageDailyBalance = ((netBalance * d1) - (payment * d2))/1;
    interest = averageDailyBalance * interestPerMonth;
    cout << fixed << showpoint << setprecision(2);
    cout << interest;
    return 0;
}