#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int reversedDigit;

void reverseMethodOne(int n)
{
    if (n == 0)
        return;
    reversedDigit = (reversedDigit * 10) + n % 10;
    return reverseMethodOne(n / 10);
}
int helper(int n, int d)
{
    if (n % 10 == n)
        return n;
    return (n % 10) * pow(10, d - 1) + helper(n / 10, --d);
}
int reverseMethodTwo(int n)
{
    int noOfDigits = (int)log10(n) + 1;
    return helper(n, noOfDigits);
}
bool isPalindrome(int n)
{
    if (n == reverseMethodTwo(n))
        return true;
    return false;
}
int main()
{
    reverseMethodOne(129);
    cout << reversedDigit << endl
         << reverseMethodTwo(129) << endl
         << isPalindrome(123) << endl;
}