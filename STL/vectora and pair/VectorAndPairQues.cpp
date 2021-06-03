#include<bits/stdc++.h>
#include <iostream>
using namespace std;

bool myCompare(pair<int , int> p1 , pair<int , int> p2) {
        return p1.first < p2.first;
    }

int main()  {
    int a[] = {10 , 3 ,4 ,6 , 45 , 34 , 6 ,10};
    vector<pair<int , int>> v;

    for(int i = 0 ; i < sizeof(a)/sizeof(a[0]) ; i++) {
        v.push_back(make_pair(a[i] , i));
    }

    sort(v.begin() , v.end() , myCompare);

    for(int i = 0 ; i < sizeof(a)/sizeof(a[0]) ; i++) {
        a[v[i].second] = i;
    }
    for(int i = 0 ; i < sizeof(a)/sizeof(a[0]) ; i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}