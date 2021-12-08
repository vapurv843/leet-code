// Question link:- https://leetcode.com/problems/sentence-similarity-iii/
class Solution {
public:
    bool areSentencesSimilar(string s1, string s2) {
        int m = s1.length();
        int n = s2.length();
        stringstream ss(s1);
        stringstream ss1(s2);
        string word;
        vector<string> v1;
        vector<string> v2;
        while(ss1>>word)
        {
            v1.push_back(word);
        }
        while(ss>>word)
        {
            v2.push_back(word);
        }
        int i1 = 0;
        int i2 =0;
        int j1 = v1.size()-1;
        int j2 = v2.size()-1;
        while(i1<=j1 and i2<=j2)
        {
            if(v1[i1] == v2[i2])
            {
                i1++;
                i2++;
            }
            else if(v1[j1]==v2[j2])
            {
                j1--;
                j2--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};