#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int> &v) {
    for(int i = 0 ; i < v.size() ; i++) {
        //the idea is simple => find the current max. indexx and swap it with the current last index
        //the last index:
        int lastIndex = v.size() - i - 1;
        //int max. index:
        int maxIndex;
        int max = -999999;
        for(int j = 0; j < v.size() - i; j++) {
            if(v[j] > max) {
                maxIndex = j;
                max = v[j];
            }
        }
        //swap the max index with the last index possible
        int temp = v[maxIndex];
        v[maxIndex] = v[lastIndex];
        v[lastIndex] = temp;
    }
}

int main() {
    vector<int> v{3 ,2 ,5 ,6 , 4, 6};
    selectionSort(v);
    for(auto e:v) {
        cout<<e<<" ";
    }
}