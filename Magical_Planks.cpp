#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    s.resize(n);
    // vector<pair<char, int>> w;
    // vector<pair<char, int>> b;
    int ctw = 0, ctb = 0;
    char temp = s[0];
    if (temp == 'W')
        ctw += 1;
    else
        ctb += 1;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == temp)
            continue;
        else if (s[i] == 'B')
            ctb += 1;
        else
            ctw += 1;
        temp = s[i];
    }
    // sort(w.begin(), w.end());
    // int ctw = 0;
    // for (int i = 0; i < w.size(); i++)
    // {
    //     int temp = abs(w[i].second - w[i - 1].second);
    //     if (temp > 1)
    //     {
    //         ctw++;
    //     }
    // }
    // sort(b.begin(), b.end());
    // int ctb = 0;
    // for (int i = 0; i < b.size(); i++)
    // {
    //     int temp = abs(b[i].second - b[i - 1].second);
    //     if (temp > 1)
    //     {
    //         ctb++;
    //     }
    // }
    // if (ctw > 0 && ctb > 0)
    cout << min(ctb, ctw) << "\n";
    // else
    //     cout << 0 << "\n";
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

    ll ttt = 1;
    cin >> ttt;
    while (ttt--)
    {
        solve();
    }
    return 0;
}
