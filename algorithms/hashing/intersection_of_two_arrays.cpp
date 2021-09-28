#include<bits/stdc++.h>
using namespace std;

int intersect_hashing(int a[] , int sa , int b[] , int sb) {
    int count = 0;
    set<int> s;
    for(int i = 0; i < sa; i++) {
        s.insert(a[i]);
    }
    for(int i = 0; i < sb; i++) {
        auto it = s.find(b[i]);
        if(it != s.end())  {   //element is present
        count++;
        s.erase(*it);
    }
    }
    return count;
}

int main() {
    int a[] = {1 ,2 , 3 ,2 ,4 , 4, 3, 2};
    int b[] = {4 ,3 ,5 , 2, 34, 9};
    cout<<intersect_hashing(a , 8 , b , 6);
}