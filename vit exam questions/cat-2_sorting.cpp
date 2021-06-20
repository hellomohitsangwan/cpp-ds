
// Given two list of integers, design an algorithm and write a C++ program to form a third list of integers with elements in list1 and list2  sorted in the descending order. The resultant list must not contain duplicates. For example, if list1 contains 34, 17, 15, 25 and 5,  list2 contains 12, 15, 17, 39, 36 then the resultant list must be 39,36,34,25,17,15,12,5

// Input Format:

// Number of integers in list1,'n'

// integer1 in list1

// integer2 in list1

// …

// Integer-n in list1

// Number of integers in list2,'m'

// integer1 in list2

// integer2 in list2

// …

// Integer-m in list2

// Output Format:

// integer1 in list3

// integer2 in list3

// …

// Integer-p in list3


#include<iostream>
#include<set>
using namespace std;

int main() {
    set <int> s;
    int n1; cin >>n1;
    for (int i = 0; i < n1; i++) {
        int x;cin >>x;
        s.insert(x);
    }
    int n2; cin >>n2;
    for (int i = 0; i < n2; i++) {
        int x; cin >>x;
        s.insert(x);
    }
    set<int>::reverse_iterator it;  
    for(it = s.rbegin(); it != s.rend(); it++){
        cout<<*(it)<<endl;
    }
}