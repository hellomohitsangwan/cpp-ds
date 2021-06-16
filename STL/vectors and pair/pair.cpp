#include<iostream>
using namespace std;

int main() {
    pair<int , char> p;
    p.first = 4;
    p.second = 'd';

    cout<<p.first<<" "<<p.second<<endl;

    //or we can also use make_pair() function also to make a pair
    pair<int , char>p2;
    p2 = make_pair(8 , 'h');
    cout<<p2.first<<" "<<p2.second;

    //or we can create in this way also
    pair<int , int> p3 = {4 , 8};
        cout<<p3.first<<" "<<p3.second;
    return 0;
}
