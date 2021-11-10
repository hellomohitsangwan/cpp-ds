#include<iostream>
#include<vector>
using namespace std;

void func(int n) {
    if(n == 0) return;
    cout<<n<<" ";
    func(n--);  //it will give us segmentation fault bec. it'll run infinitely bec.:
    // (n--) ==> this will pass the value of n first and then subtract , so everytime same value of n is passing
    // (--n) ==> this will subtract first and then pass the value of n.

}

int main() {
  func(4);
}