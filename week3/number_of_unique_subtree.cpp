//question link :- https://leetcode.com/problems/unique-binary-search-trees/
class Solution {
public:
    int numTrees(int n) {
        vector<int> dp(n+1,0);
        dp[0] = 1;
        dp[1] = 1;
       for(int i = 2;i<=n;i++)
       {
           int left = 0;
           int right = i-1;
           while(left<=i-1)
           {
               dp[i] +=dp[left]*dp[right];
               left++;
               right--;
           }
       }
        return dp[n];
        
    }
};