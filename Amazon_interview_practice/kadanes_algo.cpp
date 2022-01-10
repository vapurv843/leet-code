int Solution::maxSubArray(const vector<int> &A) {
    int sum = A[0];
    int best = A[0];
    for(int i = 1;i<A.size();i++)
    {
        sum = max(sum+A[i],A[i]);
        best = max(best,sum);
    }
    return best;
}
