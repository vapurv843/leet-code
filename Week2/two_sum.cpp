//question link:- https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        unordered_map<int,int> mp;
        int n = nums.size();
        for(int i = 0;i<n;i++)
        {
            if(mp.find(target-nums[i])!=mp.end())
            {
                v.push_back(i);
                v.push_back(mp[target-nums[i]]);
                return v;
                
            }
            else
            {
                mp[nums[i]]=i;
            }
        }
        
        return v;
        
        
    }
};