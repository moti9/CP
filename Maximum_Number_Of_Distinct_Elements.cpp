#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

struct sort_pred
{
    bool operator()(const pair<int, int> &left, const pair<int, int> &right)
    {
        return left.second < right.second;
    }
};

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(make_pair(x, i));
    }
    sort(v.begin(), v.end());
    ll temp = 0;
    for (ll i = 0; i < n; i++)
    {
        if (v[i].first > temp)
        {
            v[i].first = temp;
            temp++;
        }
        else if (v[i].first == temp)
            v[i].first = temp;
    }
    sort(v.begin(), v.end(), sort_pred());
    for (ll i = 0; i < n; i++)
    {
        cout << v[i].first << " ";
    }
    cout << "\n";
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
