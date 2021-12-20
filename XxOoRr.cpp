#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
#define ll long long int
void solve(vector<ll> &r, ll n)
{
    string s = "";
    ll i, j = 31;
    while (n > 0)
    {
        s += to_string(n % 2);
        n /= 2;
    }
    ll n1 = s.size();
    for (i = 0; i < n1; i++)
    {
        if (s[i] == '1')
        {
            r[j] += 1;
        }

        j--;
    }
}
int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        vector<ll> r(32, 0);
        for (ll i = 0; i < n; i++)
        {
            solve(r, a[i]);
        }
        ll sum = 0;
        for (ll i = 0; i < 32; i++)
        {
            if (r[i] == 0)
                continue;
            else if (r[i] % k == 0)
            {
                sum += (r[i] / k);
            }
            else
            {
                sum += (r[i] / k + 1);
            }
        }
        cout << sum << "\n";
    }

    return 0;
}