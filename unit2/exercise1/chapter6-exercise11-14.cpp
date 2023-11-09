#include <cmath>
#include <cassert>
bool isUpperCase(char testChar);
bool isToThePowerOf(double first, double second, double third);
void test_isUpperCase();
void test_isToThePowerOf();
int main()
{
    test_isUpperCase();
    test_isToThePowerOf();
    return 0;
}

bool isUpperCase(char testChar)
{
    if(testChar >= 65 && testChar <= 90)
        return true;
    else if (testChar >= 97 && testChar <= 122)
        return false;
    else 
        return false;

}

bool isToThePowerOf(double first, double second, double third)
{
    return pow(first, second) == third;
}

void test_isUpperCase()
{
    assert(isUpperCase('A') == true);
    assert(isUpperCase('B') == true);
    assert(isUpperCase('a') == false);
    assert(isUpperCase('1') == false);
}

void test_isToThePowerOf()
{
    assert(isToThePowerOf(2.0, 2.0, 4.0) == true);
    assert(isToThePowerOf(3.0, 2.0, 4.0) == false);
    assert(isToThePowerOf(3.0, 2.0, 9.0) == true);
}
 

