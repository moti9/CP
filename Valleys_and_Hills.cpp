#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n, m;
    cin >> n >> m;
    if (n == m)
    {
        string s = "";
        n += 1;
        while (n--)
        {
            s += "01";
        }
        cout << s.length() << "\n";
        cout << s << "\n";
    }
    else if (n > m)
    {

        string s = "";
        int temp = n - m;
        while (m--)
        {
            s += "01";
        }
        while (temp--)
        {
            s += "010";
        }
        cout << s.length() << "\n";
        cout << s << "\n";
    }
    else
    {
        string s = "";
        int temp = m - n;
        while (temp--)
        {
            s += "101";
        }
        while (n--)
        {
            s += "01";
        }
        cout << s.length() << "\n";
        cout << s << "\n";
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
