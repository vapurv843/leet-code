#include<bits/stdc++.h>
using namespace std;
void solve()
{
   
    vector<int> v(7);
    for(int i=0;i<7;i++)
    {
        cin>>v[i];
    }
    int a = v[6];
    cout<<v[0] << " " << v[1]<< " " <<a-(v[0]+v[1])<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}