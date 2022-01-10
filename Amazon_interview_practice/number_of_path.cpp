long long solve(int m,int n,int i,int j)
{
    if(i>=m-1 or j>=n-1)
    {
        return 1;
    }
    int path1 = solve(m,n,i+1,j);
    int path2 = solve(m,n,i,j+1);
    return path2+path1;
}
long long numberOfPaths(int m, int n)
{
    long long k = solve(m,n,0,0);
    return k;
}