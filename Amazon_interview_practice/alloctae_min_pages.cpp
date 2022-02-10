#include<bits/stdc++.h>
using namespace std ;
bool is_valid(int mid,int m,vector<int>&arr)
{
    int sum = 0;
    int st = 1;
    for(int i = 0;i<arr.size();i++) {
        sum+=arr[i];
        if(sum>mid){
            st++;
            sum = arr[i];
        }
    }
    return st<=m;
}
int solve(vector<int> &arr,int m)
{
    int mn = 0;
    int sum = 0;
    for(int i =0;i<arr.size();i++)
    {
        mn = max(arr[i],mn);
        sum+=arr[i];
    }
    int low = mn;
    int high = sum;
    int ans = 0;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(is_valid(mid,m,arr))
        {
            ans = mid;
            high = mid-1;

        }
        else{
            low = mid+1;
        }
    }
    return ans;

}
int main()
{
    vector<int> arr= {10,30,20,40};
    int m;
    cin>>m;
    int k = solve(arr,m);
    cout<<k<<endl;

}