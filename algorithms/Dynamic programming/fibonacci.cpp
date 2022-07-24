#include<iostream>
#include<vector>
using namespace std;

/*
Recursion
*/
int recursiveFib(int n) {
    if(n == 0 || n == 1) {
        return n;
    }
    return recursiveFib(n-1) + recursiveFib(n-2);
}

// memoization
int memFib(int n , vector<int> &dp) {
    if(n <= 1)  return n;
    if(dp[n] != -1) return dp[n];
    return dp[n] = memFib(n-1 , dp) + memFib(n-2 , dp);
}


int main() {
    vector<int> dp (6 , -1);
  cout<<recursiveFib(5)<<endl<<memFib(5 , dp);
}