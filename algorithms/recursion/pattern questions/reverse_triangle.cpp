#include<iostream>
using namespace std;

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

//iterative
void print_Rev_tri_Ite(int r , int c) {
    for(int i  = r ; i > 0 ; i--) {
        for(int j = 0 ; j < i ; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main() {
    print_Rev_tri_Ite(4 , 0);
}