class Solution {
public:
    int lcs(string &a,string &b)
    {
        int m = a.length();
        int n = b.length();
        int dp[m+1][n+1];
        for(int i = 0;i<=m;i++)
        {
            for(int j = 0;j<=n;j++)
            {
                if(i == 0 or j == 0)
                {
                    dp[i][j] = 0;
                }
            }
        }
        for(int i = 1;i<=m;i++)
        {
            for(int j = 1;j<=n;j++)
            {
                if(a[i-1] == b [j-1])
                {
                    dp[i][j] = 1+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[m][n];
    }
    int longestPalindromeSubseq(string s) {
        string k = s;
        reverse(s.begin(),s.end());
        int lp = lcs(k,s);
        return lp;
        
    }
};