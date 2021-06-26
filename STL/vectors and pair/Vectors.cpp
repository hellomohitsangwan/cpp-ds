#include <bits/stdc++.h>

using namespace std; 

int main() {
    vector<int> v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(36);
    
    //method 1 for printitng the element in the vector
    for(int i = 0 ; i < v.size() ; i++) {
        cout<<v[i]<<" "<<endl;
    }

    //method 2 = using the itrator
    vector<int>::iterator it;  //making a iterator int vector of type int nameda as it
    for(it = v.begin() ; it!= v.end() ; it++) {
        cout<<*it<<" "<<endl;  //iterator is a just a pointer to the vector so we used '*' to print the element 
    }

    //method 3 = for-each loop
    for(auto element:v) {  //auto is just a keyword that we are saying our compiler to decide itlelf that which datatype is it like int  , boolean , float , etc
        cout<<element<<" "<<endl;
    }

    v.pop_back(); //pops the last element //3 5

     vector<int> v2(3 , 50); //it means hamne 3 size ka vector banaya hai aur unme sare 3 elements 50 hai  //50 50 50 

    swap(v2 , v);  //the swap function swap the values that are passed in the function in this case it swaps all the values of v and v2
    for(int e:v) {
        cout<<e<<endl;`
    }
    for(int e:v2) {
        cout<<e<<endl;
    }


    sort(v2.begin() , v2.end());
    for(auto e:v) {
        cout<<e<<endl;
    }
    return 0;
}