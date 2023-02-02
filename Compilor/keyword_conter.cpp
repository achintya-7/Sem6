#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

map<string, string> keywords = {
    {"if", "keyword"},
    {"else", "keyword"},
    {"for", "keyword"},
    {"while", "keyword"},
    {"do", "keyword"},
    {"int", "keyword"},
    {"float", "keyword"},
    {"char", "keyword"},
    {"double", "keyword"},
    {"return", "keyword"},
};

map<string, string> operators = {
    {"+", "operator"},
    {"-", "operator"},
    {"*", "operator"},
    {"/", "operator"},
    {"%", "operator"},
    {"=", "operator"},
    {"+=", "operator"},
};

map<string, string> brackets = {
    {"(", "bracket"},
    {")", "bracket"},
    {"{", "bracket"},
    {"}", "bracket"},
    {"[", "bracket"},
    {"]", "bracket"},
};

vector<string> tokenize(string s)
{
    vector<string> tokens;
    string current = "";
    for (char c : s)
    {
        if (isspace(c))
        {
            if (!current.empty())
            {
                tokens.push_back(current);
                current = "";
            }
        }
        else if (operators.count(current + c) || (operators.count(string(1, c)) && !current.empty()))
        {
            if (!current.empty())
            {
                tokens.push_back(current);
                current = "";
            }
            tokens.push_back(string(1, c));
        }
        else
        {
            current += c;
        }
    }
    if (!current.empty())
    {
        tokens.push_back(current);
    }
    return tokens;
}

int main()
{
    string s = "for (int i = 0; i < 10; i++) { cout << i << endl; }";

    vector<string> tokens = tokenize(s);

    int keyword_count = 0;
    int operator_count = 0;
    int bracket_count = 0;

    for (string token : tokens)
    {
        if (keywords.count(token))
        {
            keyword_count++;
        }
        else if (operators.count(token))
        {
            operator_count++;
        }
        else if (brackets.count(token))
        {
            bracket_count++;
        }
    }

    cout << "Keyword count: " << keyword_count << endl;
    cout << "Operator count: " << operator_count << endl;
    cout << "Bracket count: " << bracket_count << endl;
    cout << "Total count: " << keyword_count + operator_count + bracket_count << endl;
}