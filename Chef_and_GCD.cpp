#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

#define ll long int
int main()
{

    fastio();
    int test = 1;
    cin >> test;
    while (test--)
    {
        ll x, y, ct = 0;
        cin >> x >> y;
        if (__gcd(x, y) > 1)
        {
            ct = 0;
        }
        else if (__gcd(x + 1, y) > 1 || __gcd(x, y + 1) > 1)
        {
            ct = 1;
        }
        else
        {
            ct = 2;
        }

        cout << ct << "\n";
    }
    return 0;
}
