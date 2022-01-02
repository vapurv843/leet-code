class Solution {
public:
    int dp[201][201];
    int solve(vector<vector<int>>& grid,int start,int end,int m,int n)
    {
       
        if(start==m or end==n)
        {
            return INT_MAX;
        }
        if(start == m-1 and end == n-1)
        {
            return grid[start][end];
        }
        if(dp[start][end]!=-1)
        {
            return dp[start][end];
        }
       dp[start][end]= grid[start][end]+min(solve(grid,start+1,end,m,n),solve(grid,start,end+1,m,n));
        return dp[start][end];
    }
    int minPathSum(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
       return solve(grid,0,0,grid.size(),grid[0].size());
    }
};