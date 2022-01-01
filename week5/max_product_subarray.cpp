class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        int ans = INT_MIN;
        int min_prod = 1;
        int max_prod = 1;
        for(int i = 0;i<n;i++)
        {
            if(nums[i]<0)
            {
                swap(min_prod,max_prod);
            }
            min_prod = min(min_prod*nums[i],nums[i]);
            max_prod = max(max_prod*nums[i],nums[i]);
            ans = max(ans,max_prod);
        }
        return ans;
        
    }
};