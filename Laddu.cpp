#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int act;
    string origin;
    cin >> act;
    cin >> origin;
    int sum = 0;
    while (act--)
    {
        string s;
        cin >> s;
        if (s == "CONTEST_WON")
        {
            sum += 300;
            int rank;
            cin >> rank;
            if (rank < 20)
                sum += (20 - rank);
        }
        else if (s == "TOP_CONTRIBUTOR")
        {
            sum += 300;
        }
        else if (s == "BUG_FOUND")
        {
            int sev;
            cin >> sev;
            sum += sev;
        }
        else if (s == "CONTEST_HOSTED")
        {
            sum += 50;
        }
    }
    (origin == "INDIAN") ? cout << (sum / 200) : cout << (sum / 400);
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

    ll ttt = 1;
    cin >> ttt;
    while (ttt--)
    {
        solve();
    }
    return 0;
}
