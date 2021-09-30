#include<bits/stdc++.h>
using namespace std;

//  @desc : return the index of greatest number less than or equal to find element 
// @params : array , elemen to find , length of array
int findFloor(int a[] , int find , int len) {
    int start  = 0;
    int end = len;
    while(start <= end) {
            int midIndex = start + (end - start)/2;
        if(a[midIndex] > find) {  //element is present in the left side
            end = midIndex - 1;
        } else if(a[midIndex] < find) {  //element is present in the right side
            start = midIndex + 1;
        } else {
            return midIndex;
        }
    } return end;  //element is not present in the array
}

int main() {
    int a[] = {1 ,2 ,4 , 6 ,8 , 89,99};
    cout<<findFloor(a , 90, 7);   //just dry you'll while revising
}