#include<iostream>
#include<vector>
using namespace std;

bool ifPresent(vector<int> v , int t , int i) {
    if(i == v.size()) return 0;
    return (v[i] == t) || (ifPresent(v , t , ++i));
}

int index(vector<int> v , int t , int i) {
    if(i == v.size()) return -1;
    if(v[i] == t) return i;
    return (index(v , t , ++i));
}

int main() {
    vector<int> v{1, 1, 2, 4};
    cout << ifPresent(v , 5 , 0)<<endl<<index(v , 4 , 0);
}