#include<iostream>
#include<vector>
using namespace std;

void quick(int a[] , int l , int h) {
    if(l>=h) return;
    int s = l , e = h;
    int mid = (s+e)/2;
    int pivot = a[mid];
    //puttng the pivot index to the right index
    while(s <= e) {
        while(a[s] < pivot) {
            s++;
        } while(a[e] > pivot) {
            e--;
        }

        //if values are not as required
        //we'll swap them 
        if(s<=e) {
            int temp = a[s];
            a[s] = a[e];
            a[e] = temp;
            s++;
            e--;
        }
    }
    quick(a , l , e);
    quick(a , s , h);
}

int main() {
  int a[] = {4  ,2 ,5 , 6, 2, 0};
  quick(a , 0 , 5);

  for(int i = 0 ; i < 6 ; i++) {
      cout<<a[i]<<" ";
  }
}