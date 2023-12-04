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
    string longestPalindrome = "-1";
    string testPalindrome = "";
    bool willContinue = true;
    
    for (size_t i = 0; i < lengthA; i++)
    {
        for (size_t j = 0; j < lengthB; j++)
        {
            testPalindrome = a.substr(0,i) + b.substr(0,j);

            int k = 0;
            // do
            // {
            //     if(testPalindrome[k] == testPalindrome[testPalindrome.size() - k])
            //     else
            //         willContinue = false;
            // } while (willContinue);
            

        }
        
    }
    

    string output;
    return output;
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
