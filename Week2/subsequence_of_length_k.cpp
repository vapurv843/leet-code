class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int,int>> v;
        for(int i = 0;i<nums.size();i++)
        {
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        vector<pair<int,int>> b1;
        for(int i = 0;i<k;i++)
        {
            b1.push_back({v[i].second,v[i].first});
        }
        sort(b1.begin(),b1.end());
        
        vector<int> ans;
        for(int i = 0;i<k;i++)
        {
            ans.push_back(b1[i].second);
        }
        return ans;
        
    }
};