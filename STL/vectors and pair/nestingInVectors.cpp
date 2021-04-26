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
    vector<int> va[10];   //array of vectos of size 10
    for (int i = 0; i < 10; i++) {
        int sov; cin >>sov;
        for (int i = 0; i < sov; i++)
        {
            int x;cin >>x;
            va[i].push_back(x);
        }
                
    }

    //vector of vectors
    vector<vector<int>> vv;
    int s; cin >>s;
    for (int i = 0; i < s; i++)
    {
        int n;cin>>n;
        vector<int>tbi;
        for (int i = 0; i < n; i++)
        {
            int x;cin>>x;
            tbi.push_back(x);
        }
        vv.push_back(tbi);  
    }
    
}


