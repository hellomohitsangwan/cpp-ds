#include<bits/stdc++.h>
using namespace std;

//  @desc : return the indec of find element an if it's not present in the aray then return -1
// @params : array , elemen to find , length of array
int binarySearch(int a[] , int find , int len) {
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
    } return -1;  //element is not present in the array
}

int orderArgonsticBS(int a[] , int find , int l) {

    bool isAsec = a[0] < a[l-1];

    int start  = 0;
    int end = l;
    while(start <= end) {
        int midIndex = start + (end - start)/2;
        if(a[midIndex] == find) {
            return midIndex;
        }
        if(isAsec) {
        if(a[midIndex] > find) {  //element is present in the left side
            end = midIndex - 1;
        } else if(a[midIndex] < find) {  //element is present in the right side
            start = midIndex + 1;
        }
        }
         else {   //descnding order
        if(a[midIndex] < find) {  //element is present in the right side
            end = midIndex - 1;
        } else if(a[midIndex] > find) {  //element is present in the left side
            start = midIndex + 1;
        } 
        }
    } return -1;  //element is not present in the array
}

int main() {
   int a[] = {1 , 3, 5, 7,99};
   int b[] = {43 , 21 , 10 , 1 , 0};
   cout<<"the element is currently present int the arrya at index : "<<binarySearch(a , 99 , 4)<<endl<<orderArgonsticBS(b , 21 , 5);
}