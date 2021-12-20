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
    if (!(n & 1))
        cout << "YES\n";
    else
    {
        for (ll i = 0; i < n - 1; i++)
        {
            if (a[i] >= a[i + 1])
            {
                cout << "YES\n";
                return;
            }
        }
        cout << "NO\n";
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

    ll ttt = 1;
    cin >> ttt;
    while (ttt--)
    {
        solve();
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define mod 1000000007

// void solve()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     vector<int> v;
//     int ct=1;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {

//         }

//     }

// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     //#ifndef ONLINE_JUDGE
//     //freopen("input.txt", "r", stdin);
//     //freopen("output.txt", "w", stdout);
//     //#endif

//     ll ttt=1;
//     cin>>ttt;
//     while(ttt--)
//     {
//         solve();
//     }
//     return 0;
// }
