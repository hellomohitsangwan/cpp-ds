#include<iostream>
#include<vector>
using namespace std;

int sumOfDigits(int n) {
    if(n == 0) return n;
    return sumOfDigits(n/10) + n%10;
}
int productOfDigits(int n) {
    if(n%10 == n) return n;  //if only 1 digit left then return that digit
    return productOfDigits(n/10) * (n%10);
}
int main() {
  cout<<sumOfDigits(124)<<endl;
  cout<<productOfDigits(1234);
}