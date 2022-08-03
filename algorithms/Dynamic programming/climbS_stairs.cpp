#include<iostream>
#include<vector>
using namespace std;

int computSteps(int n , int i) {
    if(i == n) return 1;
    if(i > n) return 0;

    int os = computSteps(n , i+1);
    int ts = computSteps(n , i+2);
    return os+ts;
}

int computStepsDp(int n , int i , vector<int> dp) {
    if(i == n) return 1;
    if(i > n) return 0;

    if(dp[i] != -1) return dp[i];
    int os = computSteps(n , i+1);
    int ts = computSteps(n , i+2);
    return dp[i] =  os+ts;
}

int main() {
  int n; cin>>n;
  cout<<computStepsDp(n , 0 , vector<int>(n+1 , -1));
}