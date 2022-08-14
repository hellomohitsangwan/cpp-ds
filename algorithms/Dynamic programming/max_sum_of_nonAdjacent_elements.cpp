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

int main() {
  int a[4] = {2 , 1 , 4 , 9};
  cout<<maxrec(a , 4 , 3);
}