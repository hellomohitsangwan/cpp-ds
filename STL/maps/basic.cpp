#include<bits/stdc++.h>
using namespace std;

void print(map<string , int> mp) {
    for(auto pv : mp) {
        cout<<pv.first<<" "<<pv.second<<endl;
    }
}
int main() {
    map<string , int> m;
    //inserting values to map
    m["abc"] = 1;  //means that key is abc and value is 1
    m["bcd"] = 2;
    // 2nd method
    m.insert({"def" , 3});
    print(m);
}