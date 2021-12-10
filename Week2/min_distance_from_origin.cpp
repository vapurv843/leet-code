class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<int,pair<int,int>>> v;
        int dist = 0;
        
       priority_queue<vector<int>, vector<vector<int>>, compare> pq;
        for(vector<int> &x:points)
        {
            pq.push(x);
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        vector<vector<int>> ans;
        while(!pq.empty())
        {
            ans.push_back(pq.top());
            pq.pop();
            
            
        }
        return ans;
    }
    
    private:
    struct compare {
        bool operator()(vector<int>& p, vector<int>& q) {
            return p[0] * p[0] + p[1] * p[1] < q[0] * q[0] + q[1] * q[1];
        }
    };
    
};