#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

bool check(ll n)
{
    ll temp = sqrt(n);
    if (temp * temp == n)
    {
        return 1;
    }
    else
        return 0;
}

ll digit(ll n)
{
    ll sum = 0;
    while (n != 0)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

void solve()
{
    ll l, r;
    cin >> l >> r;
    ll ct = 0;
    for (ll i = l; i <= r; i++)
    {
        ll temp = digit(i);
        if (check(temp))
        {
            // ct++;
            cout << i << "\n";
        }
    }
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

    ll ttt = 1;
    cin >> ttt;
    while (ttt--)
    {
        solve();
    }
    return 0;
}