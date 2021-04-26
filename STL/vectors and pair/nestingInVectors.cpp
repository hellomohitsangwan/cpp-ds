#include<iostream>
#include<vector>
using namespace std;

void printVec(vector<int> v) {
    cout<<"size: "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}
int main() {
    //vector of pairs
    vector<pair<int ,int>> vp;
    int n;cin >>n;
    for (int i = 0; i < n; i++)
    {
        int x , y;cin >>x>>y;
        vp.push_back({x , y});
    }

    //array or vectors
    vector<int> va[10];
}