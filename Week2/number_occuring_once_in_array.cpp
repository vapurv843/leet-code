class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int xr = 0;
        for(auto &x :nums)
        {
            xr = xr^x;
        }
        return xr;
        
    }
};