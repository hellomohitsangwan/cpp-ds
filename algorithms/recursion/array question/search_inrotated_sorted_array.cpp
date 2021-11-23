#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> v , int s , int e , int t) {
    int mid = (s + e)/2;
    if(s > e) return -1; //base case
    if(v[mid] == t) return mid; //element found

    //if first half is is sorted
    if(v[s] <= v[mid]) {
        //if element is present in that sorted area
        if(v[s] <= t && t <= v[mid]) return search(v , s , mid-1 , t); 
        //if not on first then it should present in the seconf part of the array
        else return search(v , mid+1 , e , t);
    } 
    //second half is Sorted
    else {
        //check in second half
        if(v[mid] <= t && t <= v[e]) return search(v , mid+1 , e , t);
        else return search(v , s , mid-1 , t);
    }
    
}

int main() {
  vector<int>v{5, 6 ,7 , 8 , 2, 4};
  cout<<search(v , 0 , 5 , 8);
}