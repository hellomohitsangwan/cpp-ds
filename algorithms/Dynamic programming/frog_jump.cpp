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


int main() {
  int a[] = {10, 30, 40, 20};
  cout<<findMin(a , 3 , vector<int>(4 , -1));
}