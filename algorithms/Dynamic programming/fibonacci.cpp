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

// tabulation
int tabFib(int n) {
    vector<int> v(n+1 , 0);
    v[0] = 0;
    v[1] = 1;
    
    for(int i  = 2 ; i <= n ; i++) {
        v[i] = v[i-1] + v[i-2];
    }
    return v[n];
}


int main() {
    vector<int> dp (6 , -1);
    cout<<recursiveFib(5)<<endl<<memFib(5 , dp)<<endl<<tabFib(5);
}