#include <iostream>
using namespace std;
int main()
{
    int sharesNumber;
    double shareBuyUnitPrice = 0.0, shareSellUnitPrice = 0.0, totalAmountInvested = 0.0, totalAmountSold = 0.0, investedServiceCharge = 0.0, SoldServiceCharge = 0.0, totalServiceCharge = 0.0, netAmount = 0.0;
    const double serviceCharge = 0.015;

    cout << "Input number of shares sold, purchase price of each share, and sell price of each share in this format <number_sold purchase_price sell_price>: ";
    cin >> sharesNumber >> shareBuyUnitPrice >> shareSellUnitPrice;
    totalAmountInvested = sharesNumber * shareBuyUnitPrice;
    totalAmountSold = sharesNumber * shareSellUnitPrice;
    investedServiceCharge = totalAmountInvested * serviceCharge;
    SoldServiceCharge = totalAmountSold * serviceCharge;
    totalServiceCharge = investedServiceCharge + SoldServiceCharge;
    netAmount = totalAmountSold - totalAmountInvested - totalServiceCharge;
    
    cout << "Amount Invested: " << totalAmountInvested << endl;
    cout << "Total service charges: " << totalServiceCharge << endl;
    cout << "Amount gained or lost: " << netAmount << endl;
    cout << "Amount received after selling stock: " << totalAmountSold << endl;
    return 0;
}