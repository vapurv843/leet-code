class Solution {
public:
    int dp[601][101];
    int solve(vector<string>& strs, int m, int n,int index)
    {
        if(index>= strs.size() or m<0 or n<0 ) return 0;
        //if(m==0 and n==0) return 0;
        int zero = count(strs[index].begin(),strs[index].end(),'0');
        int one = strs[index].length()-zero;
        int consider = 0;
        int skip = 0;
        if(m>=zero and n>=one)
        {
            consider = (1+solve(strs,m-zero,n-one,index+1));
        }
        skip = solve(strs,m,n,index+1);
        return max(skip,consider);
        
       
         
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        memset(dp,-1,sizeof(dp));
        return solve(strs,m,n,0);
        
        
    }
};