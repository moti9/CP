#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    ll m, c;
    ll ctm = 0, ctc = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> m >> c;
        if (m > c)
            ctm++;
        else if (m < c)
            ctc++;
    }
    // cout << ctc << " " << ctm << "\n";
    if (ctc > ctm)
        cout << "Chris";
    else if (ctc < ctm)
        cout << "Mishka";
    else
        cout << "Friendship is magic!^^";
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
    //cin>>test;
    while (test--)
    {
        solve();
    }
    return 0;
}
