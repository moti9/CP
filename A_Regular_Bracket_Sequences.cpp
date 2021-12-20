#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    string s = "";
    for (int i = 0; i < n; i++)
    {
        s += "()";
    }
    cout << s << "\n";
    int temp = n - 1;
    int idx = 4, idd = 0;
    while (temp--)
    {
        for (int i = 0; i < idx; i++)
        {
            if (i < idx / 2)
            {
                s[i] = '(';
            }
            else
            {
                s[i] = ')';
            }
        }
        cout << s << "\n";
        idx += 2;
    }
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
