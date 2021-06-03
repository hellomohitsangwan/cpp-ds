#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
    pair<int , char> p;
    p.first = 4;
    p.second = 'd';

    cout<<p.first<<" "<<p.second<<endl;

    //or we can also use make_pair() function also to make a pair
    pair<int , char>p2;
    p2 = make_pair(8 , 'h');
    cout<<p2.first<<" "<<p2.second;
    
    return 0;
}
