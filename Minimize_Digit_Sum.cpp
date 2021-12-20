#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll sum(ll n, ll i)
{
    ll sm = 0;
    while (n > 0)
    {
        sm += n % i;
        n /= i;
    }
    return sm;
}
ll minBase(ll n, ll l, ll r)
{
    if (n < l)
    {
        return l;
    }
    if (r >= n && l <= n)
    {
        return n;
    }
    ll minn = INT_MAX, base = 0;
    for (ll i = r; i >= l; i--)
    {
        if (r >= n && n % i == 0)
        {
            return i;
        }
        ll sdigit = sum(n, i);
        if (sdigit <= minn)
        {
            minn = sdigit;
            base = i;
        }
    }
    return base;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //#endif

    ll test = 1;
    cin >> test;
    while (test--)
    {
        ll n, l, r;
        cin >> n >> l >> r;
        cout << minBase(n, l, r)
             << "\n";
    }
    return 0;
}
