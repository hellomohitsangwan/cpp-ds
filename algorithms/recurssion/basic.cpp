#include<bits/stdc++.h>
using namespace std;


//print (1-n) in increasing order
    //1 , 2, 3, 4, 5 ...
void inc(int n) {
    if(n == 0) {
        return;
    }
    inc(n-1);
    cout<<n<<" ";
}

//print (1-n) in decreasing order
    //.. , 4 ,3 ,2 , 1
void dec(int n) {
    if(n == 0) {
        return;
    }
    cout<<n<<" ";
    dec(n-1);
}

//reverse string
void reverse(string s) {
    if(s.length() == 0) {
        return;
    }
    reverse(s.substr(1));
    cout<<s[0]<<" ";
}

int main() {
    inc(4);
    cout<<endl;
    dec(4);
    cout<<endl;
    reverse("mohit");
}