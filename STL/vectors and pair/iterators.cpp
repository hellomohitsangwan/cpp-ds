#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3 , 4};
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    // iterator syntax
    // data_type :: iterator it;  //its just a pointer pointig to the value you equate
        // it++ : next iterator  //use this always;
    // it+1 : next location;
    vector<int> :: iterator it;  
    for(it= v.begin(); it!= v.end(); it++) {
        cout<<(*it)<<" ";
    }

    vector<pair<int, int>> vp = {{1 , 2} , {3, 4}};
    vector<pair<int, int>> :: iterator vpit;
    for(vpit= vp.begin() ; vpit != vp.end(); vpit++) {
        cout<<(*vpit).first<<" "<<(*vpit).second<<endl;
        //or  ((*vpit).first ==== vpit->first)
        cout<<(vpit)->first<<" "<<(vpit)->second<<endl;
        
    }
}