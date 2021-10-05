#include<iostream>
using namespace std;

int piirsa(int a[] , int l) {
    int s = 0;
    int e = l-1;
    int mid;
    while(s < e) {
        mid = (s+e)/2;
        if(a[mid] > a[mid+1]) {
            return mid;
        }
        if(a[mid - 1] > a[mid]) {
            return mid - 1;
        }
        if(a[mid] > a[s]) {
            s = mid;
        } else if(a[mid] < a[s]) {
            e = mid - 1;
        }
    } return mid;
}

int main() {
    int a[] = {3 ,4 ,5, 0, 1, 2};
    cout<<piirsa(a , 6);
}