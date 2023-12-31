#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
int calcTotalHealth(vector<string>, vector<int>, int, int, string);

int calcTotalHealth(vector<string> genes, vector<int> health, int first, int last, string d)
{
    int healthTotal = 0;
    for (size_t i = 0; i <= d.size(); i++)
    {
        for (size_t j = 0; j <= d.size()-i; j++)
        {
            string dSubString = d.substr(i,j);
            if(dSubString.size() == 0)
                continue;
            
            for (size_t k = first; k <= last; k++)
            {
                if(genes[k] == dSubString)
                    healthTotal+= health[k];
            }
            
        }
        
    }
    
    return healthTotal;
}


int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string genes_temp_temp;
    getline(cin, genes_temp_temp);

    vector<string> genes_temp = split(rtrim(genes_temp_temp));

    vector<string> genes(n);

    for (int i = 0; i < n; i++) {
        string genes_item = genes_temp[i];

        genes[i] = genes_item;
    }

    string health_temp_temp;
    getline(cin, health_temp_temp);

    vector<string> health_temp = split(rtrim(health_temp_temp));

    vector<int> health(n);

    for (int i = 0; i < n; i++) {
        int health_item = stoi(health_temp[i]);

        health[i] = health_item;
    }

    string s_temp;
    getline(cin, s_temp);

    int s = stoi(ltrim(rtrim(s_temp)));
    int lowestHealth = 0;
    int highestHealth = 0;

    for (int s_itr = 0; s_itr < s; s_itr++) {
        string first_multiple_input_temp;
        getline(cin, first_multiple_input_temp);

        vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

        int first = stoi(first_multiple_input[0]);

        int last = stoi(first_multiple_input[1]);

        string d = first_multiple_input[2];

        int healthValue = calcTotalHealth(genes, health, first, last, d);
        if(s_itr == 0)
        {
            lowestHealth = healthValue;
            highestHealth = healthValue;
        }
        highestHealth = healthValue > highestHealth ? healthValue : highestHealth;
        lowestHealth = healthValue < lowestHealth ? healthValue : lowestHealth;
    }

    cout << lowestHealth << " " << highestHealth << "\n";
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
