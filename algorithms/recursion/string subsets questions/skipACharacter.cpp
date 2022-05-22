#include<iostream>
#include<string>
using namespace std;

// ques: return a string after removing all the a's from the string.

// M-1 passing the processed string in the function argument
string skip(string p , string up) {
    if(up.length() == 0){
        return p;
    }
    if(up[0] == 'a') {
        return skip(p , up.substr(1));
    } else {
        return skip(p+up[0] , up.substr(1));
    }
}

// M-2 not passing the string in function
string skipWPA(string up) {
    if(up.length() == 0) return "";

    if(up[0] == 'a') {
       return skipWPA(up.substr(1));
    } else {
        return up[0] + skipWPA(up.substr(1));
    }
}
int main() {
  cout<<skipWPA("uyihahushuahahahaah")<<endl;
  cout<<skip(" " , uyihahushuahahahaah");
}