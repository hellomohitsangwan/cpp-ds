#include<iostream>
#include<vector>
using namespace std;

int countPaths(int r , int c) {
    if(r == 1 || c == 1) {
        return 1;
    }
    int up = countPaths(r-1 , c);
    int dw = countPaths(r , c-1);
    return up+dw;
}

void printPaths(string p , int r , int c) {
    if(r == 1 && c == 1) {
        cout<<p<<endl;
    }
    if(r > 1) printPaths(p + 'd' , r-1 , c);

    if(c > 1) printPaths(p + 'r' , r , c-1);

}

void printPathsDiagonalAlso(string p , int r , int c) {
    if(r == 1 && c == 1) {
        cout<<p<<endl;
    }
    if(r > 1) printPaths(p + 'd' , r-1 , c);
    if(r > 1 && c > 1) printPaths(p + 'v' , r-1 , c-1);
    if(c > 1) printPaths(p + 'r' , r , c-1);

}

int main() {
//   cout<<countPaths(3 , 3);
  printPathsDiagonalAlso("" , 3 , 3);
}