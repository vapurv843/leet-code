//question link:- https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/submissions/
class Solution {
public:
    int minDays(vector<int>& arr, int m, int k) {
        int n = arr.size();
        if(m*k>n)
        {
            return -1;
        }
        int low = *min_element(arr.begin(),arr.end());
        int high = *max_element(arr.begin(),arr.end());
        
        int res = 0;
        while(low<high)
        {
            int ans = 0;
        int boquet = 0;
            int mid = low+(high-low)/2;
            for(int i = 0;i<n;i++)
            {
                if(arr[i]<=mid)
                {
                    boquet++;
                }
                else
                {
                    boquet = 0;
                }
                if(boquet==k)
                {
                    ans++;
                    boquet = 0;
                }
                
            }
            if(ans<m)
            {
                    //res = mid+1;
                   low = mid+1;
            }
            else
            {
                
                high = mid;
            }
            
        }
        return low;
        
        
    }
};