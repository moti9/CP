#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int countDigit(long long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}
bool checkNum(ll n)
{
    while (n != 0)
    {
        ll temp = n % 10;
        if (temp % 2 == 0)
            return 1;
        n /= 10;
    }
    return 0;
}

void solve()
{
    ll n;
    cin >> n;
    if (n % 2 == 0)
        cout << 0 << "\n";
    else
    {
        ll div = pow(10, countDigit(n) - 1);
        ll temp = (n / div);
        if (temp % 2 == 0)
            cout << 1 << "\n";
        else if (checkNum(n))
            cout << 2 << "\n";
        else
            cout << -1 << "\n";
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
