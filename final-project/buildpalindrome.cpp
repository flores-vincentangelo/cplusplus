#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'buildPalindrome' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING a
 *  2. STRING b
 */

string buildPalindrome(string a, string b) {

    int lengthA = a.size();
    int lengthB = b.size();
    string longestPalindrome = "";
    string testPalindrome = "";
    bool willContinue = true;
    
    for (size_t i = 0; i <= lengthA; i++)
    {
        for (size_t j = 0; j <= lengthA; j++)
        {
            for (size_t k = 0; k <= lengthB; k++)
            {
                for (size_t l = 0; l <= lengthB; l++)
                {
                    string aSubString = a.substr(i,j);
                    string bSubString = b.substr(k,l);
                    if(aSubString.size() == 0 || bSubString.size() == 0)
                        continue;
                    testPalindrome = aSubString + bSubString;
                    int testPalindromeLength = testPalindrome.size();
                    bool isPalindrome = true;

                    for (size_t m = 0; m <= testPalindromeLength; m++)
                    {
                        if(testPalindrome[m] != testPalindrome[testPalindromeLength - m -1] && testPalindromeLength != 0)
                        {
                            isPalindrome = false;
                            break;
                        }

                    }

                    if(isPalindrome)
                    {
                        if(longestPalindrome.size() < testPalindrome.size())
                        {
                            longestPalindrome = testPalindrome;
                        }
                    } 
                }   
            }
        }
    }
    
    if(longestPalindrome.size() == 0)
        longestPalindrome = "-1";
    return longestPalindrome;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));
    for (int t_itr = 0; t_itr < t; t_itr++) {
        string a;
        getline(cin, a);

        string b;
        getline(cin, b);

        string result = buildPalindrome(a, b);
        fout << result << "\n";
    }

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
