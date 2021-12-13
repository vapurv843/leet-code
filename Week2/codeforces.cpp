#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;
void solve(){
    ll n,l,r,k;
    cin>>n>>l>>r>>k;
    vector<ll> v(n);
    
    for(int i=0;i<n;i++){
        cin>>v[i];
        

    }
    sort(v.begin(),v.end());
    
    ll ans = 0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>=l && v[i]<=r)
        {
            if(v[i]>=k)
            {
                
                k =k-v[i];
                ans++;
            }
            
            
        }
    }
    cout<<ans<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}