//question link :- https://leetcode.com/problems/maximum-product-of-length-of-two-palindromic-substrings/
class Solution {
public:
    int ans = 0;
    bool isPalin(string &s1)
    {
        int i = 0;
        int j = s1.length()-1;
        while(i<=j)
        {
            if(s1[i]!=s1[j])
            {
                return false;
                
            }
            i++;
            j--;
        }
        return true;
    }
    void solve(string &s,int index,string s1,string s2)
    {
        
        if(index>=s.length())
        {
            if(isPalin(s1) and isPalin(s2))
            {
                int a = s1.length();
                int b = s2.length();
                ans = max(ans,a*b);
            }
            return ;
        }
        solve(s,index+1,s1,s2);
        s1.push_back(s[index]);
        solve(s,index+1,s1,s2);
        s1.pop_back();
        s2.push_back(s[index]);
        solve(s,index+1,s1,s2);
        s2.pop_back();
    }
    int maxProduct(string s) {
        string s1 = "";
        string s2 = "";
       solve(s,0,s1,s2);
        return ans;
        
        
    }
};