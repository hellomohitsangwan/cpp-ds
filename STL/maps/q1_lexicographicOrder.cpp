#include<bits/stdc++.h>
using namespace std;

int main() {
    map<string , int> m;
    int n; cin >>n;
    for (int i = 0; i < n; i++)
    {
        string s;cin>>s;
        m[s] = m[s] + 1;
    }
    for(auto kp : m) {
        cout<<kp.first<<" "<<kp.second<<endl;
    }



    string s = "mohit";
    map<char , int> mp;
    for (int i = 0; i < s.length(); i++) {
        mp[s[i]]++;
    }
        for(auto kp : mp) {
        cout<<kp.first<<" "<<kp.second<<endl;
    }
    

}