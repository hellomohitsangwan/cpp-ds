#include<iostream>
#include<vector>
using namespace std;

void diceCombn(int p, int up, int ts, vector<int>as) {
    if(p == ts) {
        for(auto e:as) {
            cout<<e<<" ";
        }
        cout<<endl;
        return;
    }
    
    // int cs = 0;
    for(int i = 1 ; i <= up ; i++) {
        as.push_back(i);
        diceCombn(p+i , up-i , ts , as);
        as.pop_back();
    }
}


int diceCombnCount(int p, int up, int ts, vector<int>as) {
    if(p == ts) {
        for(auto e:as) {
            cout<<e<<" ";
        }
        cout<<endl;
        return 1;
    }
    
    int cs = 0;
    for(int i = 1 ; i <= up ; i++) {
        as.push_back(i);
        cs += diceCombnCount(p+i , up-i , ts , as);
        as.pop_back();
    }
    return cs;
}

int main() {
  cout<<diceCombnCount(0,4,4,vector<int>{});
}