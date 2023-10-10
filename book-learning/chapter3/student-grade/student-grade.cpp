#include <fstream>
#include <iostream>
using namespace std;
int main() 
{
    ifstream inData;
    ofstream outData;
    string firstName, lastName;
    double score1 = 0.0, score2 = 0.0, score3 = 0.0, score4 = 0.0, score5 = 0.0, average = 0.0;
    
    inData.open("./test.txt");
    outData.open("./testavg.out");

    inData >> firstName >> lastName >> score1 >> score2 >> score3 >> score4 >> score5;
    average = (score1 + score2 + score3 + score4 + score5) / 5.0;
    outData << firstName << " " << lastName << " " << score1 << " " << score2 << " " << score3 << " " << score4 << " " << score5 << " " << average << endl;

    inData.close();
    outData.close();
    return 0;
}