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
    m["abc"] = 1;  //means that key is abc and value is 1  //o(log(N))
    m["bcd"] = 2;
    m["fef"];  //by default fef value insert  ho jayege as a keuy and value 0 ho ajyege agar ham kuch specify nhi krege to
    // 2nd method
    m.insert({"def" , 3});
    m["abc"] = 4;//replaces the key abc with teh nwew valuend no dublicates are allowed

    //finding in maps
    // find(value) method returns iterator to the value in map and if that doesn't exists then it return teh iterator to the the last value in map
    auto it = m.find("abcd");  //o(log(N))
    if(it == m.end()) {
        cout<<"no value";
    } else {
        cout<<it->first<<" "<<it->second<<endl;
    }
    // cout<<(*it).first<<endl;
    print(m);
}