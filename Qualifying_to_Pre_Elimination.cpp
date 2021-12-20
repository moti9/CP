#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007

void solve()
{
    ll n, k;
    cin >> n >> k;
    map<ll, ll, greater<>> mp;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mp[x]++;
    }
    int ct = 0;
    for (auto y : mp)
    {
        ct += y.second;
        k--;
        if (k == 0)
        {
            cout << ct << "\n";
            return;
        }
    }
    cout << ct << "\n";

    //* int s[n];
    //* for (int i = 0; i < n; i++)
    //* {
    //*     cin >> s[i];
    //* }
    //* sort(s, s + n, greater<>());
    //* int ct = 0;
    //* for (int i = 0; i < n && k > 0; i++)
    //* {
    //*     if (s[i] != s[i - 1])
    //*         k--;
    //*     if (s[i - 1] >= s[i])
    //*         ct++;
    //* }
    //* cout << ct << "\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //#endif

    ll tst = 1;
    cin >> tst;
    while (tst--)
    {
        solve();
    }
    return 0;
}
