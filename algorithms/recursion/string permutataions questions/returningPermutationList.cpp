#include<iostream>
#include<vector>
using namespace std;


vector<string> allPermList(string up , string p) {
    if(p.length() == 0) {
        vector<string> lst;
        lst.push_back(up);
        return lst;
    }
    vector<string> ans = {};
    for(int i = 0 ; i <= up.length(); i++) {
        string f = up.substr(0, i);
        string l = up.substr(i, p.length());
        ans.insert(ans.end(), allPermList(f+p[0]+l , l).begin(), allPermList(f+p[0]+l , l).end());
    }
    return ans;
}

int main() {
  for(auto e:allPermList("" , "abc")) {
    cout<<e<<endl;
  }
}