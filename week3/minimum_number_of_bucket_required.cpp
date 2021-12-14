//question link:- https://leetcode.com/problems/minimum-number-of-buckets-to-filling-all-water/
class Solution {
public:
    int minimumBuckets(string street) {
        int count_empty = 0;
        int count_house = 0;
        for(auto &x:street)
        {
            if(x=='.')
            {
                count_empty++;
            }
            else if(x=='H')
            {
                count_house++;
            }
        }
        if(count_empty ==0)
        {
            return -1;
        }
        if(count_house == 0)
        {
            return 0;
        }
        int ans = 0;
        int n = street.length();
        for(int i = 0;i<street.length();i++)
        {
            if(street[i]=='H')
            {
                if(i>0 and street[i-1]=='B')
                {
                    continue;
                }
                if(i<n+1 and street[i+1]=='.')
                {
                    street[i+1] = 'B';
                    ans++;
                }
                else if(i>0 and street[i-1] == '.')
                {
                    street[i-1] = 'B';
                    ans++;
                }
                else return -1;
            }
        }
        return ans;
        
        
        
        
        
    }
};