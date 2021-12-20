#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int g, s, b;
    cin >> g >> s >> b;
    int s1 = g + s + b;
    cin >> g >> s >> b;
    int s2 = g + s + b;
    if (s1 > s2)
        cout << "1\n";
    else if (s1 < s2)
        cout << "2\n";
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
