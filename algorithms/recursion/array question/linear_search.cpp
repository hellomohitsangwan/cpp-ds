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

vector<int> allIndexes(vector<int> v , int t , int i , vector<int>ans) {
    if(i == v.size()) return ans;
    if(v[i] == t) ans.push_back(i);
    return (allIndexes(v , t , ++i , ans));
}
int main() {
    vector<int> v{1, 1, 2, 4};
    cout << ifPresent(v , 5 , 0)<<endl<<index(v , 4 , 0);
    vector<int>ans;
    for(auto e:allIndexes(v , 1 , 0 , ans)) {
        cout<<endl<<e;
    }
}