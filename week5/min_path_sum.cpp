class Solution {
public:
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
        int k = grid[start][end]+min(solve(grid,start+1,end,m,n),solve(grid,start,end+1,m,n));
        return k;
    }
    int minPathSum(vector<vector<int>>& grid) {
       return solve(grid,0,0,grid.size(),grid[0].size());
    }
};