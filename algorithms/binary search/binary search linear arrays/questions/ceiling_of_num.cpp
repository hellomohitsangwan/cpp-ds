#include<bits/stdc++.h>
using namespace std;

//  @desc : return the index of smallest number greater than or equal to find element 
// @params : array , elemen to find , length of array
int findCeil(int a[] , int find , int len) {
    int start  = 0;
    int end = len;

    // what if no number is greater than the given nuberity?
    if(find > a[len - 1]) {
        return -1;
    }
    while(start <= end) {
            int midIndex = start + (end - start)/2;
        if(a[midIndex] > find) {  //element is present in the left side
            end = midIndex - 1;
        } else if(a[midIndex] < find) {  //element is present in the right side
            start = midIndex + 1;
        } else {
            return midIndex;
        }
    } return start;  //element is not present in the array
}

int main() {
    int a[] = {1 ,2 ,4 , 6 ,8 , 89,99};
    cout<<findCeil(a , 90, 7);   //just dry you'll while revising
}