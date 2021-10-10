#include<iostream>
#include<vector>
using namespace std;
    int pivot(vector<int> a , int l) {
    int s = 0;
    int e = l-1;
    int mid;
  while(s <= e) {
        mid = (s+e)/2;
        // we found the correct element
        if(mid < e && a[mid] > a[mid+1]) {
            return mid;
        }
        if(mid > s && a[mid - 1] > a[mid]) {
            return mid - 1;
        }

        //if start and are equal so we have to remove the duplicates
        if(a[s] == a[mid] && a[mid] == a[e]) {
            //what if start is our pivot index,so we have to check for that also without directing s++;
            if(s<e && a[s] > a[s+1]) {
                return s;
            }
            s++;
            //what if end is our pivot index,so we have to check for that also without directing s++;
            if(e>s && a[e-1] > a[e]) {
                return e-1;
            }
            e--;
        }
        // then we are present in right side(rotated side) of the sorted array
        else if(a[mid] > a[s] || a[mid] == a[s] ) {
            s = mid + 1;
            // then we are present in left side(rotated side) of the sorted array
        } else{
            e = mid - 1;
        }
    } return mid;
    }
    int bs(vector<int> a , int find , int start , int end) {
        // while(s<=e) {
        //     int mid = (s+e)/2;
        //     if(a[mid] == a[f]) {
        //         return true;
        //     }
        //     else if(a[mid] > a[f]) {
        //         e = mid-1;
        //     } else{
        //         s = mid+1;
        //     }
        // } return false;
        
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
    bool search(vector<int> &nums, int target) {
        int pi = pivot(nums , nums.size()); 
        if(bs(nums , target , 0 , pi)) {
            cout<<"call" << target << pi;
            return true;
        } else {
            return (bs(nums , target , pi + 1 , nums.size()-1));
        }
        // return bs(nums , target , 0 , pi);
    }
int main() {
    vector<int>a {2,5,6,0,0,1,2};
    cout<<search(a,3)<<endl;
    // cout<<bs(a,3,0,2)<<endl;
}