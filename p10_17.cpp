// Finding pair=Sum
/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll sum;
    cin >> sum;
    sort(a, a + n);
    ll i = 0, j = n - 1;
    while (i < j - 1)
    {
        if (a[i] + a[j] == sum)
        {
            cout << a[i] << " " << a[j] << "\n";
            j--;
        }
        else if (a[i] + a[j] < sum)
            i++;
        else
            j--;
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
    // cin>>ttt;
    while (ttt--)
    {
        solve();
    }
    return 0;
}

*/

// Hash Map

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    unordered_map<ll, char> mp;
    mp[100] = 'M';
    mp[200] = 'V';
    cout << mp.size();
    cout << "\n";
    map<ll, char> mpp;
    mpp[100] = 'M';
    mpp[200] = 'V';
    cout << mpp.size();
    cout << "\n";
    mp.erase(mp[100]);
    for (auto i : mp)
    {
        if (i.second == 1)
            mp.erase(i.first);
        else
            cout << i.first << " " << i.second << ": ";
    }
    cout << "\n";
    for (auto j : mpp)
    {
        cout << j.first << " " << j.second << ": ";
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
    // cin>>ttt;
    while (ttt--)
    {
        solve();
    }
    return 0;
}
