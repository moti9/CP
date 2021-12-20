#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> v;
    char ch[n + 1][n + 1];
    ll ct2 = 0;
    for (ll i = 0; i < n; i++)
    {
        ct2 += (s[i] == '2');
        if (s[i] == '2')
        {
            v.push_back(i);
        }
    }
    memset(ch, '.', sizeof ch);
    if (ct2 <= 2 && ct2)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                for (ll j = 0; j < n; j++)
                {
                    ch[i][j] = '=';
                    ch[j][i] = '=';
                }
            }
        }
        for (ll i = 0; i < v.size(); i++)
        {
            for (ll j = 0; j < v.size(); j++)
            {
                if (i == j)
                {
                    continue;
                }
                if (ch[v[i]][v[j]] == '.')
                {
                    ch[v[i]][v[j]] = '=';
                    ch[v[i]][v[j]] = '=';
                }
            }
            if (i == v.size() - 1)
            {
                ch[v[i]][v[0]] = '+';
                ch[v[0]][v[i]] = '-';
            }
            else
            {
                ch[v[i]][v[i + 1]] = '+';
                ch[v[i + 1]][v[i]] = '-';
            }
        }
        for (ll i = 0; i < n; i++)
        {
            ch[i][i] = 'X';
            for (ll j = 0; j < n; j++)
            {
                cout << ch[i][j];
            }
            cout << '\n';
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

    ll test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
