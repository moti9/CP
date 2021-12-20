#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll a, b, x;
    cin >> a >> b >> x;
    ll temp, temp2, nx, flag;
    if (a > b)
    {
        temp = (x / a);
        nx = x - (temp * a);
        temp2 = nx / b;
        if (a % 2 == 1 && temp % 2 == 1)
        {
            temp += 1;
        }
        if (b % 2 == 1 && temp2 % 2 == 1)
        {
            temp2 += 1;
        }
        flag = (temp * a) + (temp2 * b);
        // cout << (temp + temp2) << "\n";
        if (flag >= x)
        {
            cout << (temp + temp2) << "\n";
        }
        else
        {
            cout << (temp + temp2 + 2) << "\n";
        }
    }
    else
    {
        temp = x / b;
        nx = x - (temp * b);
        temp2 = nx / a;
        if (b % 2 == 1 && temp % 2 == 1)
        {
            temp += 1;
        }
        if (a % 2 == 1 && temp2 % 2 == 1)
        {
            temp2 += 1;
        }
        flag = (temp * b) + (temp2 * a);
        // cout << (temp + temp2) << "\n";
        if (flag >= x)
        {
            cout << (temp + temp2) << "\n";
        }
        else
        {
            cout << (temp + temp2 + 2) << "\n";
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
