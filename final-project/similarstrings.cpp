#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
void setString (vector<string> &, vector<string> input);

/*
 * Complete the 'similarStrings' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. 2D_INTEGER_ARRAY queries
 */

vector<int> similarStrings(int n, vector<vector<int>> queries, vector<string> stringS) {

    vector<int> returnNumbers(queries.size());


    for (size_t i = 0; i < queries.size(); i++)
    {
        int startStrIndex = queries[i][0] -1;
        int subStrLen = queries[i][1] - queries[i][0] == 0 ? 1 : queries[i][1] - queries[i][0] + 1;
        string sSubstring = stringS[0].substr(startStrIndex, subStrLen);
        int subStringSize = sSubstring.size();

        int similarCount = 0;
        for (size_t j = 0; j < stringS[0].size() - subStringSize + 1; j++)
        {
            string testSubstring = stringS[0].substr(j, subStringSize);

            bool isSimilar = true;
            for (size_t k = 0; k < subStringSize; k++)
            {
                for (size_t l = 0; l < subStringSize; l++)
                {
                    bool isMatchSsubstring = sSubstring[k] == sSubstring[l];
                    bool isMatchTestString = testSubstring[k] == testSubstring[l];
                    if (isMatchSsubstring != isMatchTestString)
                    {
                        isSimilar = false;
                        break;
                    }
                }
                if(!isSimilar)
                {
                    break;
                }
            }

            if(isSimilar)
            {
                similarCount += 1;
            }
            
            
        }
        returnNumbers[i] = similarCount;
    }
    
    return returnNumbers;
}

void setString (vector<string> &output, vector<string> input)
{
    output = input;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int q = stoi(first_multiple_input[1]);

    vector<vector<int>> queries(q);

    string stringS_row_temp_temp;
    getline(cin, stringS_row_temp_temp);
    vector<string> stringS = split(rtrim(stringS_row_temp_temp));

    for (int i = 0; i < q; i++) {
        queries[i].resize(2);

        string queries_row_temp_temp;
        getline(cin, queries_row_temp_temp);

        vector<string> queries_row_temp = split(rtrim(queries_row_temp_temp));

        for (int j = 0; j < 2; j++) {
            int queries_row_item = stoi(queries_row_temp[j]);

            queries[i][j] = queries_row_item;
        }
    }

    vector<int> result = similarStrings(n, queries, stringS);

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
