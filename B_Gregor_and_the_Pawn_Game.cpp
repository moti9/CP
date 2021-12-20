#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int ct = 0;
    for (int i = 0; i < n; i++)
    {
        if (s2[i] == '1' && s1[i] == '0')
            ct++;

        else if (s2[i] == '1' && s1[i - 1] == '1')
        {
            ct++;
            s1[i - 1] = '2';
        }
        else if (s2[i] == '1' && s1[i + 1] == '1')
        {
            ct++;
            s1[i + 1] = '2';
        }
    }
    cout << ct << "\n";
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
