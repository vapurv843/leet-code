class Solution {
public:
    string toLowerCase(string s) {
        string ans="";
        for(auto x:s)
        {
            ans.push_back(tolower(x));
            
        }
        return ans;
        
    }
};