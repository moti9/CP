#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    string s;
    cin >> s;
    int a[200], j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
        {
            a[j] = 0;
            ++j;
        }
        else if (s[i] == '-')
        {
            if (s[i + 1] == '.')
            {
                a[j] = 1;
                ++j;
                ++i;
            }
            else
            {
                a[j] = 2;
                ++j;
                ++i;
            }
        }
    }
    for (int i = 0; i < j; i++)
    {
        cout << a[i];
    }
    cout << "\n";
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
    //cin>>test;
    while (test--)
    {
        solve();
    }
    return 0;
}
