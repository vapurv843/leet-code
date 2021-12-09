//query link:- https://leetcode.com/problems/top-k-frequent-words/
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> dict;
        for(const string& s:words) dict[s]++;
        
        priority_queue<pair<string,int>, vector<pair<string,int>>, Comp> pq;
        for(const auto& pa:dict) {
            pq.push(pa);
            if(pq.size()>k) pq.pop();
        }    
        
        vector<string> result;
        while(!pq.empty()) {
            result.push_back(pq.top().first);
            pq.pop();
        }
        reverse(result.begin(),result.end());    
        return result;    
    }
private:
    struct Comp {
        Comp() {}
        ~Comp() {}
        bool operator()(const pair<string,int>& a, const pair<string,int>& b) {
            return a.second>b.second || (a.second==b.second && a.first<b.first);
        }
    };

};