#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

/*
problem link : https://leetcode.com/problems/split-array-largest-sum/

problem statement:
Given an array nums which consists of non-negative integers and an integer m, you can split the array into m non-empty continuous subarrays.

Write an algorithm to minimize the largest sum among these m subarrays.

 

Example 1:

Input: nums = [7,2,5,10,8], m = 2
Output: 18
Explanation:
There are four ways to split nums into two subarrays.
The best way is to split it into [7,2,5] and [10,8],
where the largest sum among the two subarrays is only 18.
Example 2:

Input: nums = [1,2,3,4,5], m = 2
Output: 9
Example 3:

Input: nums = [1,4,4], m = 3
Output: 4
 

Constraints:

1 <= nums.length <= 1000
0 <= nums[i] <= 106
1 <= m <= min(50, nums.length)
*/

int splitArray(vector<int> v, int m)
{
    int start = 0;
    int end = 0;
    for (auto e : v)
    {
        start = max(start, e);
        end += e;
    }
    while (start < end)
    {
        int midSum = (start+end)/2;
        int sum = 0;
        int sa  = 1;  //subarrays
        for(auto e:v) {
            if(e+sum > midSum) {
                //we have to make new subarray and 
                //new sub array = e (as first element)
                sum = 0;
                sum += e;
                sa++;
            } else {
                sum += e;
            }
        }
        if(sa <= m) {
            // then we have to decrease the midSum and to that we we'll put the end to the middle
            end = midSum;
        } else {
            // means that no. of subarray are more so to handle that we'll increase the midSum
            start = midSum+1;
        }

    }
    return start;
}
int main()
{
    vector<int> a{7,2,5,10,8};
    int m = 2;
    cout << splitArray(a, m) << endl;
}

// [7 , 2 , 5 ,10 ,8]