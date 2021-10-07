#include<iostream>
using namespace std;

int binary(int a[] , int target , int start , int end) {
    while(start <= end) {
        int midIndex = start + (end - start)/2;
        if(target > a[midIndex]) {
            start = midIndex + 1;
        } else if(target < a[midIndex]) {
            end = midIndex - 1;
        } else {
            return midIndex;
        } 
    } return -1;
}

int ansIndex(int a[] , int target) {

    //inntial window size would be of 2
    int start = 0;
    int end = 1;

    while(target > a[end]) {   //means the element is not present in that window of array from start to end
    //we have  to increase t he window/array size twice everytime
        int temp = end + 1;   // new start
        end = end + (end - start + 1) * 2;  //new end would be after twice the length of the current array
        start = temp;
    }
    return binary(a , target , start , end);
}

int main() {
    int a[] = {1 ,2 ,45, 67,89 ,90, 100};
    cout<<ansIndex(a, 67);
}