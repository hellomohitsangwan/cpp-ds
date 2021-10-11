#include<iostream>
#include<vector>
using namespace std;


// cycle sort conditions :
/*
1 - elements are continuous
2 - should start from 1
*/
void cycleSort(vector<int> &v) {
    int i = 0;
    while(i < v.size() - 1) {
        // the index at which the element should be present
        // i.e element = index+1
        int correctIndex = v[i] - 1;
        
        // now we'll check if the element is preent at the correct index or not
        // if not then we'll swap
        if(v[i] != v[correctIndex]) {
            // swap 
            int temp = v[i];
            v[i] = v[correctIndex];
            v[correctIndex] = temp;
        } else {
            i++;
        }
    }
}

int main() {
    vector<int> v{5,4,3,2,1,6,9,7,8};
    cycleSort(v);
    for(auto e:v) {
        cout<<e<<" ";
    }
}