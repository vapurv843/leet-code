class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(nums.size()==1)
        {
            return nums[0];
        }
        if(nums[0]!=nums[1])
        {
            return nums[0];
        }
        if(nums[n-1]!=nums[n-2])
        {
            return nums[n-1];
        }
        int low = 0;
        int high = n-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(nums[mid]!=nums[mid+1] and nums[mid]!=nums[mid-1])
            {
                return nums[mid];
            }
            else if(nums[mid]==nums[mid-1])
            {
                int left = mid-low+1;
                if(left%2==0)
                {
                    low = mid+1;
                }
                else
                {
                    high = mid-2;
                }
            }
            else if(nums[mid]==nums[mid+1])
            {
                int right = high-mid+1;
                if(right%2==0)
                {
                    high = mid-1;
                }
                else
                {
                    low = mid+2;
                }
            }
        }
        return -1;
        
    }
};