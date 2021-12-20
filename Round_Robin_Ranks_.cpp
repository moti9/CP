#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll temp = (2 * n - k - 1);
    cout << (temp / 2) * 2 << "\n";
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

// struct stct
// {
//     ll n;
//     ll k;
//     ll ans;
// } sttt;

// void solve()
// {
//     cin >> sttt.n >> sttt.k;
//     sttt.ans = (2 * sttt.n - sttt.k - 1);
//     cout << (sttt.ans / 2) * 2 << "\n";
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

//     ll ttt = 1;
//     cin >> ttt;
//     while (ttt--)
//     {
//         solve();
//     }
//     return 0;
// }
