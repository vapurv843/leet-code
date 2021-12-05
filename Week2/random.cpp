class Solution {
public:
    string solve(int &pos,string s)
    {
        int num = 0;
        string word = "";
        for(;pos<s.length();pos++)
        {
            char curr = s[pos];
            if(curr == '[')
            {
                string currStr = solve(++pos,s);
                for(;num>0;num--)
                {
                    word +=currStr;
                }
            }
            else if(curr>='0' and curr<='9')
            {
                num = num*10+curr-'0';
            }
            else if(curr == ']')
            {
                return word;
            }
            else
            {
                word +=curr;
            }
        }
        return word;
    }
    string decodeString(string s) {
        int pos = 0;
        return solve(pos,s);
        
        
    }
};