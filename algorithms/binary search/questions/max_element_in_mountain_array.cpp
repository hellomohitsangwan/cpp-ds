#include<iostream>
using namespace std;
 // @nameing (piimai) = pivot index in a mountain array
 // desc. = return the topmost elemet of a mountain arrat or the max. element of an mountain array
int piima(int a[] , int l){
    int s = 0;
    int e = l-1;
    int midIndex;
    while(s<e) {
        midIndex = (s+e)/2;
        if(a[midIndex] < a[midIndex+1]) { //element in present in increasing part 
            s = midIndex+1;
        } else {  //decreasing part
            e = midIndex;
        }
    } return midIndex;
}

int main() {
    int a[] = {1 , 2 , 3 , 4 , 1 , 0};
    cout<<piima(a , 5);
}
  
// [1 ,2 ,,3 , 4  1 , 0]