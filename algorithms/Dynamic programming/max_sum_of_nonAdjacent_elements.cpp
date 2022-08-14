#include<iostream>
#include<vector>
using namespace std;

int maxrec(int a[] , int n , int ind) {
    if(ind == 0) return a[0];
    if(ind < 0) return 0;

    int pick = a[ind] + maxrec(a , n , ind - 2);
    int notPick = 0 + maxrec(a , n , ind - 1);

    return max(pick , notPick);
}

int maxDp(int a[] , int n , int ind , vector<int> dp) {
    if(ind == 0) return a[0];
    if(ind < 0) return 0;
    if(dp[ind] != -1) return dp[ind];

    int pick = a[ind] + maxDp(a , n , ind - 2 , dp);
    int notPick = 0 + maxDp(a , n , ind - 1 , dp);

    return dp[ind] = max(pick , notPick);
}

int main() {
  int a[4] = {2 , 1 , 4 , 9};
  cout<<maxrec(a , 4 , 3);

  vector<int> dp(4, -1);
  cout<<maxDp(a , 4 , 3 , dp);

}