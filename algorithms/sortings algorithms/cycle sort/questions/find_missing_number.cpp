
/*
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

 

Example 1:

Input: nums = [3,0,1]
Output: 2
Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.
Example 2:

Input: nums = [0,1]
Output: 2
Explanation: n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.
Example 3:

Input: nums = [9,6,4,2,3,5,7,0,1]
Output: 8
Explanation: n = 9 since there are 9 numbers, so all numbers are in the range [0,9]. 8 is the missing number in the range since it does not appear in nums.
Example 4:

Input: nums = [0]
Output: 1
Explanation: n = 1 since there is 1 number, so all numbers are in the range [0,1]. 1 is the missing number in the range since it does not appear in nums.
 

Constraints:

n == nums.length
1 <= n <= 104
0 <= nums[i] <= n
All the numbers of nums are unique.
 

Follow up: Could you implement a solution using only O(1) extra space complexity and O(n) runtime complexity?
*/



#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int>& v) {
    int i = 0;
    // before going into while loop
    //  v = {9,6,4,2,3,5,7,0,1}
    while(i < v.size()) {
        int correctIndex = v[i];
        //check if currect element is present at its correct index
        //but before that we have to check if element is eqals to the length , bec. range is 0-n and n is included
        //  so if the current element is n then we have to ignotr it bec. it's corect index i.e v.size() if not available
        if(correctIndex == v.size() || v[i] == v[correctIndex]) i++;
        else {
            //swap
            int temp = v[i];
            v[i] = v[correctIndex];
            v[correctIndex] = temp;
        }

    }

    // after coming
    // v = {0,1,2,3,4,5,6,7,9}
    //now as our array is sorted and we know that v[i] = i (bec. elements starts from 0 and are cntinuos) so we cabn just directly iterate into the array find the missing element by the condn.
    for(int j = 0 ; j < v.size() ; j++) {
        // v = {0,1,2,3,4,5,6,7,9}  
        // so now on index 8 element 8 should be present but it's not so 8 is missing
        if(v[j] != j) {
            return j;
        }

    } return v.size();  //if incase no element is missing
}

int main() {
    vector<int> v{3,0,1};
    cout<<missingNumber(v);

}