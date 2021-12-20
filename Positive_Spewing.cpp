#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007

void solve()
{
    ll n,k;
    cin>>n>>k;
    ll a[n+1];
    ll sum=0;
    for (ll i = 1; i < n+1; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //#endif

    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
