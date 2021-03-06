class Solution {
public:
    int dp[105][105];
    int solve(int m,int n,int i,int j)
    {
        if(i>=m or j>=n) return 0;
        if(i==m-1 and j==n-1) return 1;
        if(dp[i][j]) return dp[i][j];
        dp[i][j] =  solve(m,n,i+1,j) + solve(m,n,i,j+1);
        return dp[i][j];
    }
    int uniquePaths(int m, int n) {
        return solve(m,n,0,0);
        
    }
};