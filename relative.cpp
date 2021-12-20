#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
#define ll long long int

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll c = 0, g = 0;
        cin >> g >> c;
        c *= c;
        g *= 2;
        ll result = c / g;
        cout << result << endl;
    }

    return 0;
}