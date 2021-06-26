#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void print(set<string> s) {
    for(auto sv : s) {
        cout<<sv<<" ";
    }
}
int main() {
    set<string> s;  // SET IS JUST A map but without values
    s.insert("abd");
    s.insert("ewrt");
    s.insert("ghr");
    s.insert("q23wed");

    //in set we can only access any value by find() method and it return a iterator to that value
    auto it = s.find("ewrt");
    if(it != s.end())  {
    cout<<*it;
    }

    //erasing in set
    s.erase("ewrt");
    print(s);
}