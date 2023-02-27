#include <iostream>
#include <vector>
#include <map>
using namespace std;

void combn(string p, string up, map<char,string> mp) {
    if(up.length() == 0) {
        cout<<p<<endl;
        return;
    }
    for(int i = 0; i < mp[up[0]].length(); i++) {
        char ch = mp[up[0]][i];
        combn(p+ch, up.substr(1), mp);
    }
}

vector<string> combnReturnVector(string p, string up)
{
    if (up.length() == 0)
    {
        vector<string> sa = {};
        sa.push_back(p);
        return sa;
    }
    vector<string> ans;
    int digit = up[0] - '0';

    for (int i = ((digit-2)*3); i < (digit-1)*3; i++)
    {
        char ch = 'a' + i;
        cout<<ch<<" ";
        vector<string> da = combnReturnVector(p + ch, up.substr(1));
        ans.insert(ans.end(), da.begin(), da.end());
    }
    return ans;
}


int combnReturnCount(string p, string up)
{
    if (up.length() == 0)
    {
        return 1;
    }
    int digit = up[0] - '0';
    int ans = 0;
    for (int i = ((digit-2)*3); i < (digit-1)*3; i++)
    {
        char ch = 'a' + i;
        ans += combnReturnCount(p + ch, up.substr(1));
    }
    return ans;
}

int main()
{
    map<char, string> mp;
    mp['2'] = "abc";
    mp['3'] = "def";
    // for (auto e : combnReturnVector("", "23"))
    // {
    //     cout << e << endl;
    // }
    cout<<combnReturnCount("" , "23");
}