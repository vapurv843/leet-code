class Solution {
public:
    static int comp(string x,string y)
    {
        string a = x.append(y);
        string b = y.append(x);
        return a.compare(b)>0?1:0;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> ans;
        for(int i = 0;i<nums.size();i++)
        {
            ans.push_back(to_string(nums[i]));
        }
        sort(ans.begin(),ans.end(),comp);
        string res = "";
        for(auto &x:ans)
        {
            res+=x;
        }
        int count = 0;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i] == 0)
            {
                count ++;
            }
        }
        if(count == nums.size())
        {
            return "0";
        }
        return res;
        
    }
};