#include<bits/stdc++.h>
using namespace std;

//brute force
int distinctElements_BruteForce(int a[] , int s) {
    int count = 0;
    for (int i = 0; i < s; i++) {
        bool isUnique = true;
        for(int j = 0 ; j < i ; j++) {
            if(a[i] == a[j]) {
                isUnique = false;
                break;
            }
        }
        if(isUnique) {
            count++;
        }
    }
    return count;
}

int main() {
    int a[] = { 0, 1, 2, 1 , 3 , 2 , 4 , 1 , 4};
    cout<<distinctElements_BruteForce(a , 9);
}