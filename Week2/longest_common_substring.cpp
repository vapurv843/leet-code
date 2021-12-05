#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    
    int longestCommonSubstr (string s1, string s2, int n, int m)
    
    {
        int res=0;
        int dp[n+1][m+1];
        for(int i = 0;i<n+1;i++)
        {
            for(int j = 0;j<m+1;j++)
            {
                if(i==0 or j==0)
                {
                    dp[i][j] = 0;
                }
            }
        }
        for(int i = 1;i<n+1;i++)
        {
            for(int j = 1;j<m+1;j++)
            {
                if(s1[i-1]==s2[j-1])
                {
                    dp[i][j] = 1+dp[i-1][j-1];
                    res = max(res,dp[i][j]);
                }
                else
                {
                    dp[i][j] = 0;
                }
            }
        }
        return res;
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends