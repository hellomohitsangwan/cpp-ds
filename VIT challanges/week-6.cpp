#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int>& arr, int maxi) {
    long x = 0;
    for(int i : arr) 
    {
        if(i > maxi) 
        {
            long c = i - maxi;
            if(c > x) return false;
            x -= c; 
        }
        else x += (maxi - i);
    }
    return true;
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) 
    {
        cin>>arr[i];
    }
    int left = 0;
    int right = INT_MAX;
    int res = 0;
    while(left <= right) {
        int mid = left + (right - left)/2;
        if(check(arr, mid)) {
            right = mid - 1;
            res = mid;
        }
        else left = mid + 1;
    }
    cout<<res;
    return 0;
}