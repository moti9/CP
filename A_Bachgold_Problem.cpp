#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2 << "\n";
        for (int i = 0; i < n / 2; i++)
        {
            cout << 2 << " ";
        }
    }
    else
    {
        cout << n / 2 << "\n";
        for (int i = 0; i < n / 2 - 1; i++)
        {
            cout << 2 << " ";
        }
        cout << 3;
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
    // cin>>test;
    while (test--)
    {
        solve();
    }
    return 0;
}
