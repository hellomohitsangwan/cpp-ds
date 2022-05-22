#include<iostream>
#include<vector>
using namespace std;

//iterative
void print_Rev_tri_Ite(int r , int c) {
    for(int i  = r ; i > 0 ; i--) {
        for(int j = 0 ; j < i ; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}
//Recursive
//  r = 4, c = 0;
// ****
// ***
// **
// *
void print_Rev_Tri_Rec(int r , int c) {
    if(r == 0) {
        return;
    }
    if(r > c) {
        cout<<"*";
        print_Rev_Tri_Rec(r , ++c);
    }else {
        cout<<endl;
        print_Rev_Tri_Rec(--r , 0);
    }
} 

//bubble sort recur
void bubbleSortRecur(vector<int> &a , int r , int c) {
    if(r == 0) {
        return;
    }
    if(r > c) {
        if(a[c] > a[c+1]) {
            //swap
            int temp = a[c];
            a[c] = a[c+1];
            a[c+1] = temp;
        }
        bubbleSortRecur(a , r , ++c);
    } else {
        bubbleSortRecur(a , --r , 0);
    }
}

void selecctionSortRecur(vector<int> &a , int r , int c , int maxI) {
    if(r == 0) {
        return;
    }
    if(r > c) {
        if(a[c] > a[maxI]) {
            selecctionSortRecur(a , r , ++c , c);
        } else {
            selecctionSortRecur(a , r , ++c , maxI);
        }
    } else {
        int temp = a[maxI];
        a[maxI] = a[r-1];
        a[r-1] = temp;
        selecctionSortRecur(a , --r , 0 , 0);
    }
}

int main() {
    // print_Rev_tri_Ite(4 , 0);
    vector<int> a = {5 , 3 , 9 , 7, 2};
    bubbleSortRecur(a  , 5, 0 );
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";
    }
    
}