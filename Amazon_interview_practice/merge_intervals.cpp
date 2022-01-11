class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        vector<vector<int>> result;
        sort(arr.begin(),arr.end());
        result.push_back(arr[0]);
        int j = 0;
        for(int i = 1;i<arr.size();i++)
        {
            if(arr[i][0]<=result[j][1])
            {
                result[j][1] = max(result[j][1],arr[i][1]);
            }
            else
            {
                j++;
                result.push_back(arr[i]);
            }
        }
        return result;
        
    }
};