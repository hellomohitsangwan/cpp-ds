#include<iostream>
#include<vector>
using namespace std;

void allPermutations(string p , string up ) {
    if(up.length() == 0) {
        cout<<p<<endl;
        return;
    }
    for(int i = 0 ; i <= p.length() ; i++) {
        string s = p.substr(0 , i);
        string e = p.substr(i , p.length());
        allPermutations(s+up[0]+e , up.substr(1));
    }
}
int allPermutationsAndReturnCount(string p , string up ) {
    if(up.length() == 0) {
        cout<<p<<endl;
        return 1;
    }
    int count = 0 ;
    for(int i = 0 ; i <= p.length() ; i++) { 
        string s = p.substr(0 , i);
        string e = p.substr(i , p.length());
        count =  count + allPermutationsAndReturnCount(s+up[0]+e , up.substr(1));
    }
    return count;
}

int main() {
  cout<<allPermutationsAndReturnCount("" , "abc");
}