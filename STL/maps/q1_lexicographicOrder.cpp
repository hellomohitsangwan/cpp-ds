#include<bits/stdc++.h>
using namespace std;

int main() {
    map<string , int> m;
    int n; cin >>n;
    for (int i = 0; i < n; i++)
    {
        string s;cin>>s;
        m[s] = m[s] + 1;
        // or
        // m[s]++;
    }
    for(auto kp : m) {
        cout<<kp.first<<" "<<kp.second<<endl;
    }

    // for(int i = 0 ; i < 1000 ; i++) {

    //     int n = rand() % 49 + 2;
    //     // while(n < 2 || n > 50) {
    //     //     n = rand();
    //     // }
    //     cout<<n<<endl;
    //     for(int i = 0 ; i < 2*n ; i++) {
    //         int value =  rand() % 99 + 2;
    //         // while(value < 1 || value > 101) {
    //         //     value = rand();
    //         // }
    //         cout<<value<<" ";
    //     }
    //     cout<<endl;
    // }



    // string s = "mohit";





    // map<char , int> mp;
    // for (int i = 0; i < s.length(); i++) {
    //     mp[s[i]]++;
    // }









    //     for(auto kp : mp) {
    //     cout<<kp.first<<" "<<kp.second<<endl;
    // }
    

}