#include<iostream>
#include<vector>
using namespace std;

//to be solved with dp lated
// not the correct ans.
void numRollsToTarget(int p, int t, int r, int n, vector<int> as) {
    // if(n == 0) {
        if(p == t) {
            for(auto e : as) {
                cout<<e;
            }
         } return;
    // }

    for(int i = 1 ; i <= r ; i++) {
        as.push_back(i);
        numRollsToTarget(p+i , t , r-i , --n , as);
        as.pop_back();
    }
}

int main() {
  numRollsToTarget(0 , 7 , 6 , 2 , vector<int>{});
}