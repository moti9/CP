#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
using namespace std;

int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a <= (b + 2) / 2)
        {
            cout << (b - 1) / 2 << "\n";
        }
        else
            cout << (b - a) << "\n";
    }

    return 0;
}