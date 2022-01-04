#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
void solve(){
    ll n ;
    cin >> n ;
    ll count = 0;
    while(n)
    {
        ll k = n%10;
        if(k==4)
        {
            count++;
        }
        n = n/10;
    }
    cout<<count<<endl;

}
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        solve();
    }
}