/*
Sample Input
3
10 1
9 2
8 7
Sample Output
10
7 8
1 2 3 4 5 6 8
*/
#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long int
using namespace std;

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(k);
        ll xorVal = INT_MIN, val = 0;
        for (ll i = n; i >= 1; i--)
        {
            for (ll j = n; j >= i; j--)
            {
                val = i ^ j;
            }
            if (val >= xorVal)
            {
                v.push_back(i);
            }
        }
        for (auto k : v)
            cout << v[k] << " ";
    }

    return 0;
}