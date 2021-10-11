#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> &v) {
    // we will do total (n-1)(n-i) comparisions
    for(int i = 0; i < v.size() ; i++) {
        //the biggest element of array we be pushed at the last index in the array in each loop
        //so no need to compare a[j] and a[j-1] in the end bec. they are largest numbers so the 
        //loop will run till (n-i-1)
        for(int j = 1 ; j < (v.size()-i) ; j++) {
            if(v[j] < v[j-1]) {  //then we have to swap
                int temp = v[j];
                v[j] = v[j-1];
                v[j-1] = temp;
            }
        }
    }
}

int main() {
    vector<int> v{3 ,2 ,5 ,6 , 4, 6};
    bubbleSort(v);
    for(auto e:v) {
        cout<<e<<" ";
    }
}