#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define setDig(n) setprecision(int n)
#define vi vector<int>
#define v vector<char>
#define vii vector<int, int>
#define vli vector<long int>
#define vll vector<long long, long long>
#define pii pair<int, int>
#define vpii vector<pii>
#define pll pair<long, long>
#define vpll vector<pll>
#define ff first
#define ss second
#define li long int
#define ll long long
#define lli long long int
#define uli unsigned long int
#define ull unsigned long long
#define M 1000000007
/*ll mod(ll n)
{
    return (n%M + M)%M;
}
ll mml(ll a,ll b)
{
    return mod(mod(a)*mod(b));
}
ll mad(ll a,ll b)
{
    return mod(mod(a)+mod(b));
} */

int main()
{
    fastio();
    int n;
    cin >> n;
    int a[n];
    rep(i, 0, n) cin >> a[i];
    int curr = 0;
    rep(i, 0, n)
    {
        curr = 0;
        rep(j, i, n)
        {
            curr += a[j];
            cout << curr << " ";
        }
    }

    return 0;
}