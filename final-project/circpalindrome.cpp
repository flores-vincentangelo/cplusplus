#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
int longestPalindrome(string s);

/*
 * Complete the 'circularPalindromes' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts STRING s as parameter.
 */

vector<int> circularPalindromes(string s) {
    
    int sSize = s.size();
    vector<int> returnNumbers (sSize);

    for (size_t i = 0; i < sSize; i++)
    {
        string palidromicSubString;

        if(i == 0)
        {
            palidromicSubString = s;
        }
        else
        {
            string palindromicStringEnd = s.substr(0,i);
            string palindromicStringStart = s.substr(i);
            palidromicSubString = palindromicStringStart + palindromicStringEnd;
        }

        returnNumbers[i] = longestPalindrome(palidromicSubString);
        cout << endl;
        cout << returnNumbers[i];
    }
    

    return returnNumbers;
}

int longestPalindrome(string s)
{
    int longestPalindromeLength = 0;

    for (size_t length = 0; length < s.size(); length++)
    {

        for (size_t i = 0; i < s.size() - i + 1; i++)
        {
            string testPalindrome = s.substr(i, length);
            bool isPalindrome = true;
            for (size_t j = 0; j < testPalindrome.size(); j++)
            {
                if (testPalindrome[j] != testPalindrome[testPalindrome.size() - 1 -j])
                {
                    isPalindrome = false;
                    break;
                }
            }

            if(!isPalindrome)
            {
                continue;
            }
            else
            {
                longestPalindromeLength = longestPalindromeLength > testPalindrome.size() ? longestPalindromeLength : testPalindrome.size();
            }
            
        }
        
    }
    
    return longestPalindromeLength;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string s;
    getline(cin, s);

    vector<int> result = circularPalindromes(s);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
