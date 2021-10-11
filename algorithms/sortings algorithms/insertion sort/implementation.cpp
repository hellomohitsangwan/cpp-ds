#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int> &v) {
    // si the idea/intitution behind this is simple that => first we sort the first 2 elements of the array i.e till j = 1
    // in second iteration j = j+1 and then we sort the array till j index 

    for(int i = 0 ; i< v.size()-1 ; i++) {
        int j = i+1;
        while(v[j-1] > v[j]) {
                //swap
                int temp = v[j-1];
                v[j-1] = v[j];
                v[j] = temp;
                j--;
            //if suppose array is below and j = 2
            // [2,3,4,8,7,5,0] so now if 8 is greater than it's prevoius element then it should be greater other prevoius elements too bec. pre. array is sorted 
            if(v[j-1] < v[j] || j<=0) {
                break;
            }
        }
    }
}

int main() {
    vector<int> v{2,3,4,8,7,5,0};
    insertionSort(v);
    for(auto e:v) {
        cout<<e<<" ";
    }
}