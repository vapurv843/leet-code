// Question link:- https://leetcode.com/problems/kth-missing-positive-integer/
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        for (auto a : arr) if (a <= k) k++;
        return k;
        
    }
};