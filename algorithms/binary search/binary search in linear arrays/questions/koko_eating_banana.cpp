#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
bool isValidHours(vector<int>v , int h , int mid) {
    int timeTaken = 0;
    for(auto e : v) {
        if(mid == e) timeTaken += 1;
        else {
        timeTaken += (int)ceil(e*1.0/mid);
        }
    }
    return timeTaken <= h;
}
int minEatingSpeed(vector<int>& piles, int h) {
    int lowestSpeed = 0;
    int maxSpeed = *max_element(piles.begin() , piles.end());  //max ppossible speed can be max. element in the array
    int ans = 0;
    //now we will apply binary search in the speed (min - max)
    while(lowestSpeed <= maxSpeed) {
        int mid = lowestSpeed + (maxSpeed-lowestSpeed)/2;  //just to avoid overflow
        //we check if the current mid speed gives the answer the we put the end to mid - 1 bec. there midght be possibility that s smaller can lie
        // and if it takes more no. of hours then we put start to mid+1
        if(isValidHours(piles,h,mid)) {
            ans = mid;
            maxSpeed = mid-1;
        } else {
            lowestSpeed = mid+1;
        }
    } return ans;
}

int main() {
  vector<int> v{3,6,7,11};
  int h = 8;
  cout<<minEatingSpeed(v,h);
  }