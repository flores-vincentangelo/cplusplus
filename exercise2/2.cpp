#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
    ifstream inData;
    ofstream outData;
    string firstName, lastName;
    double salary, increase;
    char ch;
    inData.open("./Ch3_Ex8Data.txt");
    outData.open("./Ch3_Ex8Output.dat");
    ch = inData.peek();
    outData << fixed << showpoint << setprecision(2);
    while (ch != -1)
    {
        inData >> lastName >> firstName >> salary >> increase;
        outData << firstName << " " << lastName << " " << salary * (1 + (increase / 100)) << endl;
        ch = inData.peek();
    }
    inData.close();
    outData.close();
    return 0;
}