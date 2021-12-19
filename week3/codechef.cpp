#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
void solve()
{
    ll n;
      cin >> n;
      n -= 1;
      ll cnt = 0;
      for (auto i = 1; i * i < n; i++)
      {
         if (n % i == 0)
            cnt += 2;
      }
      if (pow((ll)sqrt(n), 2) == n)
      {
         cnt += 1;
      }
      cout << cnt << endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}
