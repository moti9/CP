#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007

void solve()
{
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    int x = a[0];
    int y = a[1];
    int z = a[2];
    sort(a, a + 3);
    if (a[0] == z)
        cout << "Alice\n";
    else if (a[0] == y)
        cout << "Bob\n";
    else
        cout << "Draw\n";
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
