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
#define mod 1000000007
/*ll mmod(ll n)
{
    return (n%mod +mod)%mod;
}
ll mmul(ll a,ll b)
{
    return mmod(mmod(a)*mmod(b));
}
ll madd(ll a,ll b)
{
    return mmod(mmod(a)+mmod(b));
} */
int bnSearch(int a[], int n, int key)
{
    sort(a, a + n);
    int s = 0;
    int e = n;
    while (s <= e)
    {
        int m = (s + e) / 2;
        if (a[m] == key)
        {
            return m;
        }
        else if (a[m] > key)
        {
            e = m - 1;
        }
        else
        {
            s = m + 1;
        }
    }
    return -1;
}

int main()
{
    fastio();
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int key;
    cin >> key;
    cout << bnSearch(a, n, key);
    return 0;
}