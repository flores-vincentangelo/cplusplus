#include <iostream>
using namespace std;
int main() 
{
    enum paintType {GREEN, RED, BLUE, BROWN, WHITE, ORANGE, YELLOW};
    double paintSale[7];
    paintType paint;
    for(paint = GREEN; paint <= YELLOW; paint = static_cast<paintType>(paint+1))
    {
        paintSale[paint] = 0.0;
        cout << paintSale[paint] << endl;
    }
    return 0;
}