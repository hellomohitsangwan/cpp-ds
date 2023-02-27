#include <iostream>
#include <vector>
using namespace std;

vector<string> allsubset(string p, string up)
{
    if (up.length() == 0)
    {
        vector<string> internal = {};
        internal.push_back(p);
        return internal;
    }
    vector<string> includingChar = allsubset(p + up[0], up.substr(1));
    vector<string> notIncludingChar = allsubset(p, up.substr(1));

    includingChar.insert(includingChar.end(), notIncludingChar.begin(), notIncludingChar.end());

    return includingChar;
}

int main()
{
    vector<string> ans = allsubset("", "abc");
    for(auto e: ans) {
        cout<<e<<endl;
    }
}