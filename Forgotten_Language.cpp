#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n, k;
    cin >> n >> k;
    string n_str[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> n_str[i];
    }
    vector<string> k_str[k];
    ll l;
    for (ll i = 0; i < k; i++)
    {
        cin >> l;
        for (ll j = 0; j < l; j++)
        {
            string s;
            cin >> s;
            k_str[i].push_back(s);
        }
    }
    string checkLang;
    for (ll i = 0; i < n; i++)
    {
        checkLang = "NO";
        for (ll j = 0; j < n; j++)
        {
            for (ll k = 0; k < l; k++)
            {
                if (n_str[i] == k_str[j][k])
                {
                    checkLang = "YES";
                }
            }
        }
        cout << checkLang << (i == n - 1) ? "\n" : " ";
    }
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
