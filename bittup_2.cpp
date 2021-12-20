#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define mod 1000000007
#define ll long long int
using namespace std;
ll bits(ll a, ll b)
{
    ll result = 1;
    while (b > 0)
    {
        if (b % 2)
            result = (result * a) % mod;
        a = (a * a) % mod;
        b = b / 2;
    }
    return result;
}
int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll x = bits(2, n) - 1;
        cout << bits(x, m) << endl;
    }

    return 0;
}