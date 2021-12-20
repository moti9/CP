#include <bits/stdc++.h>
#define l long int
using namespace std;
void solve()
{
    l n, k;
    cin >> n >> k;
    string st;
    vector<string> vs;
    for (int i = 0; i < n; i++)
    {
        cin >> st;
        vs.push_back(st);
    }
    
    vector<string> bs[k];
    /////////////////////////////////////////////////////////////////////////////////
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, x = 1;
    cin >> t;
    while (t--)
    {
        cout << "Case #" << x << ": ";
        solve();
        x++;
    }

    return 0;
}