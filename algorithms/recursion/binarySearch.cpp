#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>v , int s , int e , int target) {
    int mid = (s+e)/2;
    //base caes:
    if(s > e) {
        return -1; //no element founnd
    }
    //element is found
    if(v[mid] == target) return mid;
    if(target > v[mid]) {  //means target is present on right side
    return binarySearch(v , mid+1 , e , target);
    } else{
        return binarySearch(v , s , mid -1  , target);
    }
}

int main() {
  vector<int> v{0 , 1 , 2,4};
  cout<<binarySearch(v , 0 ,  3 , 4);
}