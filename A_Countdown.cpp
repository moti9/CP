#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    s.resize(n);
    int ct = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        ct += (s[i] - '0');
        (s[i] - '0' >= 1) ? (ct += 1) : (ct += 0);
    }
    cout << (ct + (s[n - 1] - '0')) << "\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //#endif

    ll tst = 1;
    cin >> tst;
    while (tst--)
    {
        solve();
    }
    return 0;
}
