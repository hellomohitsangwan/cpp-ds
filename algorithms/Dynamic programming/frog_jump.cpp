#include<iostream>
#include<vector>
using namespace std;

int findMin(int a[] , int i , vector<int>dp) {
    if(i == 0) return 0;

    if(dp[i] != -1) return dp[i];
    int os = findMin(a , i-1 , dp) + abs(a[i] - a[i-1]);
    int ts = INT_MAX;
    if(i > 1) ts = findMin(a , i-2 , dp) + abs(a[i] - a[i-2]);

    return dp[i] = min(os , ts);
}

int findMinTab(int a[] , int n , vector<int>dp) {
    dp[0] = 0;
    for(int i = 1 ; i < n ; i++) {
        int os = dp[i-1] + abs(a[i] - a[i-1]);
        int ts = INT_MAX;
        if(i>1) ts = dp[i-2] + abs(a[i] - a[i-2]);
        dp[i] = min(os , ts);
    }
    return dp[n-1];
}
int main() {
  int a[] = {10, 30, 40, 20};
  cout<<findMinTab(a , 3 , vector<int>(4 , -1));
}