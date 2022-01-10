class Solution {
public:
    void solve(string output,int n, int open,int close,int index,vector<string> &ans)
    {
        if(index == 2*n)
        {
            ans.push_back(output);
            return;
        }
        if(open<n)
        {
            solve(output+'(',n,open+1,close,index+1,ans);
        }
        if(close<open)
        {
            solve(output+')',n,open,close+1,index+1,ans);
            
        }
        return ;
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string output = "";
        solve(output,n,0,0,0,ans);
        return ans;
        
    }
};