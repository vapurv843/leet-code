// Question link:- https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/

class Solution {
public:
    bool valid(int mid,vector<int>&arr,int m,int k )
    {
        int flower = 0;
        int boquet = 0;
        for(auto &x:arr)
        {
            if(x<=mid)
            {
                flower++;
            }
            else
            {
                flower = 0;
            }
            if(flower>=k)
            {
                flower = 0;
                boquet++;
            }
        }
        if(boquet>=m) return 1;
        return 0;
    }
    int minDays(vector<int>& arr, int m, int k) {
        int ans = -1;
        int low = *min_element(arr.begin(),arr.end());
        int high = *max_element(arr.begin(),arr.end());
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            if(valid(mid,arr,m,k))
            {
                ans = mid;
                high = mid-1;

            }
            else
            {
                low = mid+1;
            }
        }
        return ans;
        
    }
};