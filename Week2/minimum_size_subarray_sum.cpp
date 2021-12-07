//question link:- https://leetcode.com/problems/minimum-size-subarray-sum/
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left =0;
        int sum = 0;
        int ans = INT_MAX;
        for(int i = 0;i<nums.size();i++)
        {
            sum+=nums[i];
            while(sum>=target)
            {
                ans = min(i-left+1,ans);
                sum = sum-nums[left];
                left++;
            }
            
        }
        return ans!=INT_MAX?ans:0;
        
    }
};