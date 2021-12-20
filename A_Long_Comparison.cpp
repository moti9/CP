#include <bits/stdc++.h>
using namespace std;
#define ll int
#define mod 1000000007

ll power(ll x, ll y)
{
    if (y == 0)
        return 1;
    else if (y & 1)
        return x * power(x, y / 2) * power(x, y / 2);
    else
        return power(x, y / 2) * power(x, y / 2);
}

void solve()
{
    ll x, y, a, b;
    cin >> x >> y;
    cin >> a >> b;

    /*        1                */

    if (y >= b)
    {
        ll temp = 1L * x * power(10, y - b);
        if (temp > a)
        {
            cout << ">\n";
        }
        else if (temp < a)
        {
            cout << "<\n";
        }
        else
        {
            cout << "=\n";
        }
    }
    else
    {
        ll temp = 1L * a * power(10, b - y);
        if (x > temp)
        {
            cout << ">\n";
        }
        else if (temp > x)
        {
            cout << "<\n";
        }
        else
        {
            cout << "=\n";
        }
    }

    /*           2                */

    // if (y == b)
    // {
    //     if (x > a)
    //         cout << ">\n";
    //     else if (x == a)
    //         cout << "=\n";
    //     else
    //         cout << "<\n";
    // }
    // else if (y > b)
    // {
    //     if (x >= a)
    //         cout << ">\n";
    //     else
    //     {
    //         ll temp = power(10, y - b);
    //         ll flag = 1L * x * temp;
    //         if (flag > a)
    //             cout << ">\n";
    //         else if (flag == a)
    //             cout << "=\n";
    //         else
    //             cout << "<\n";
    //     }
    // }
    // else
    // {
    //     ll temp = power(10, b - y);
    //     ll flag = 1L * a * temp;
    //     if (x > flag)
    //         cout << ">\n";
    //     else if (flag == x)
    //         cout << "=\n";
    //     else
    //         cout << "<\n";
    // }

    /*          3         */

    // ll p1 = pow(10, y);
    // ll p2 = pow(10, b);
    // ll num1 = x * power(10, y);
    // ll num2 = a * power(10, b);
    // // cout << num1 << " " << num2 << "\n";
    // // cout << power(10, y) << " " << power(10, b) << "\n";
    // if (num1 > num2)
    //     cout << ">\n";
    // else if (num1 < num2)
    //     cout << "<\n";
    // else if (num1 == num2)
    //     cout << "=\n";

    /*             4             */

    // if (x > a)
    // {
    //     if (y >= b)
    //         cout << ">\n";
    //     else
    //     {
    //         ll temp = power(10, b - y);
    //         ll flag = temp * a;
    //         if ((x / flag) >= 1 && x != flag)
    //             cout << ">\n";
    //         else if (flag == x)
    //             cout << "=\n";
    //         else
    //             cout << "<\n";
    //     }
    // }
    // else if (a > x)
    // {
    //     if (b >= y)
    //         cout << "<\n";
    //     else
    //     {
    //         ll temp = power(10, y - b);
    //         ll flag = temp * x;
    //         if ((flag / a) >= 1 && flag != a)
    //             cout << ">\n";
    //         else if (flag == a)
    //             cout << "=\n";
    //         else
    //             cout << "<\n";
    //     }
    // }
    // else
    // {
    //     if (y > b)
    //         cout << ">\n";
    //     else if (y == b)
    //         cout << "=\n";
    //     else
    //         cout << "<\n";
    // }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    //#endif

    ll ttt = 1;
    cin >> ttt;
    while (ttt--)
    {
        solve();
    }
    return 0;
}
