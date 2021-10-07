#include<iostream>
using namespace std;

int piirsa(int a[] , int l) {
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

int main() {
    int a[] = {3 ,4 ,5, 0, 1, 2};
    cout<<piirsa(a , 6);
}