#include<iostream>
#include<vector>
using namespace std;

void printSubsequecne(int i , vector<int> ds , int cs , int ts , int a[] , int l) {
    if(i == l) {
        if(cs == ts) {
            for(auto e:ds) {
                cout<<e<< " ";
            }
            cout<<endl;
            return;
        }
        return;
    }
    // C-1 : taking the element
    ds.push_back(a[i]);
    cs += a[i];
    printSubsequecne(i+1 , ds , cs , ts , a , l);
    cs -= a[i];
    ds.pop_back();
    // C-2 : not taking the element
    printSubsequecne(i+1 , ds , cs , ts , a , l);
} 

//Trick to return only one subsequence or one answer nd avoid future recursion calls
bool printOneSubsequecne(int i , vector<int> ds , int cs , int ts , int a[] , int l) {
    if(i == l) {
        if(cs == ts) {
            for(auto e:ds) {
                cout<<e<< " ";
            }
            return true;
        } else {
            return false;
        }
    }
    // C-1 : taking the element
    ds.push_back(a[i]);
    cs += a[i];
    if(printOneSubsequecne(i+1 , ds , cs , ts , a , l) == true) return true;
    cs -= a[i];
    ds.pop_back();
    // C-2 : not taking the element
    if(printOneSubsequecne(i+1 , ds , cs , ts , a , l) == true) return true;
    return false;
} 

int main() {
  int a[] = {1 , 2 , 1};
  vector<int> ds;
  int ts = 2;
  int l = 3;
  printOneSubsequecne(0 , ds , 0 , ts , a , l);
}