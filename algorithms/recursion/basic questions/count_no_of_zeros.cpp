#include<iostream>
#include<vector>
using namespace std;
int helper(int n , int c) {
    if(n == 0) return c;
    int rem = n%10;
    if(rem == 0) return helper(n/10 , ++c);
    else return helper(n/10 , c);
}
int zeroes(int n) {
    return helper(n , 0);
}
int main() {
  cout<<zeroes(8309030);
}