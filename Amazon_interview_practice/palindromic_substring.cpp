class Solution {
public:
    int countSubstrings(string s) {
        int count =0;
        
        int m = s.length();
        bool dp[m][m];
        for(int g = 0;g<m;g++)
        {
            for(int i = 0,j=g;j<m;i++,j++)
            {
                if(g == 0)
                {
                    dp[i][j] = 1;
                }
                else if(g == 1)
                {
                    if(s[i] == s[j])
                    {
                        dp[i][j] = 1;
                    }
                    else
                    {
                        dp[i][j] = 0;
                    }
                }
                else
                {
                    if(s[i] == s[j] and dp[i+1][j-1] ==1 )
                    {
                        dp[i][j] = 1;
                    }
                    else
                    {
                        dp[i][j] = 0;
                    }
                }
                 if(dp[i][j])
            {
                count++;
            }
            }
           
        }
        return count;
        
    }
};