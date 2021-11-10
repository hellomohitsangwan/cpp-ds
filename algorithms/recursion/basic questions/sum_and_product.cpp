#include<iostream>
#include<vector>
using namespace std;

int sumOfDigits(int n) {
    if(n == 0) return n;
    return sumOfDigits(n/10) + n%10;
}

int main() {
  cout<<sumOfDigits(124);
}