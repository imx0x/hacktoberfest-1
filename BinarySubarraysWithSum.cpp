// Given a binary array nums and an integer goal, return the number of non-empty subarrays with a sum goal.

// A subarray is a contiguous part of the array.

 

// Example 1:

// Input: nums = [1,0,1,0,1], goal = 2
// Output: 4
// Explanation: The 4 subarrays are bolded and underlined below:
// [1,0,1,0,1]
// [1,0,1,0,1]
// [1,0,1,0,1]
// [1,0,1,0,1]
// Example 2:

// Input: nums = [0,0,0,0,0], goal = 0
// Output: 15




//SOLUTION:

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int i= 0, j =0, ans =0, sum=0;
        map<int,int> m;
        while(j < nums.size())
        {
            sum+=nums[j];
            if(sum == goal)
            ans++;
            if(m.count(sum-goal))
                ans+=m[sum-goal];
            m[sum]++;
            j++;
        }
        return ans;
    }
};
