//question link:- https://leetcode.com/problems/find-target-indices-after-sorting-array/submissions/
class Solution {
public:
    int solve1(vector<int> &nums,int left,int right,int target)
    {
        int ans = 0;
        while(left<=right)
        {
            int mid = left+(right-left)/2;
            if(nums[mid]==target)
            {
                ans = mid;
                right = mid-1;
            }
            else if(nums[mid]>target)
            {
                right = mid-1;
            }
            else
            {
                left = mid+1;
            }
        }
        return ans;
    }
    int solve2(vector<int> &nums,int left,int right,int target)
    {
        int ans = -1;
        while(left<=right)
        {
            int mid = left+(right-left)/2;
            if(nums[mid]==target)
            {
                ans = mid;
                left = mid+1;
            }
            else if(nums[mid]>target)
            {
                right = mid-1;
            }
            else
            {
                left = mid+1;
            }
        }
        return ans;
    }
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int left = solve1(nums,0,nums.size()-1,target);
        int right = solve2(nums,0,nums.size()-1,target);
        for(int i = left ;i<=right;i++)
        {
            ans.push_back(i);
        }
        return ans;
        
    }
};