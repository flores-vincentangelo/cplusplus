#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    // char name3[];
    char name[] = "John";
    string name2 = "John";
    string str="We think in generalities, but we live in details.";
    // int length = strlen(name);
    size_t pos = str.find("live");
    string str3 = str.substr (pos); 
    string str4 = name2.substr (1); 
    int length = name2.size();
    
    cout << name2.size() ;
}