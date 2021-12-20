/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

vector<int> dp;

int fibon(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2 || n == 3)
        return 1;
    else if (dp[n] != -1)
        return dp[n];
    else
        return dp[n] = (fibon(n - 1) + fibon(n - 2)) % mod;
}

void solve()
{
    int n;
    cin >> n;

    dp.resize(n + 1, -1); // * denotes this fibonacci number is not calculated

    for (int i = 1; i <= n; i++)
    {
        cout << fibon(i);
        if (i == n)
            cout << "\n";
        else
            cout << " ";
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

/*
 *NEXT
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void Miden(ll **p1, ll n)
{
    ll(*x)[n] = (ll(*)[n])p1;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            x[i][j] = 0;
        }
        x[i][i] = 1;
    }
    return;
}
void Mult(ll **p1, ll **p2, ll **ans, ll x, ll y, ll z, ll m)
{
    ll(*a)[y] = (ll(*)[y])p1;
    ll(*b)[z] = (ll(*)[z])p2;
    ll(*c)[z] = (ll(*)[z])ans;
    for (ll i = 0; i < x; i++)
    {
        for (ll j = 0; j < z; j++)
        {
            c[i][j] = 0;
            for (ll k = 0; k < y; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
                c[i][j] %= mod;
            }
        }
    }
    return;
}

void Mpow(ll **p1, ll **ans, ll n, ll y, ll m)
{
    if (y == 0) // Base case covered
    {
        Miden(ans, n);
        return;
    }
    ll t[n][n];
    Mpow(p1, (ll **)t, n, y / 2, m); // t=p1^(y/2)
    ll z[n][n];
    Mult((ll **)t, (ll **)t, (ll **)z, n, n, n, m); // z=t*t
    if (y % 2)
    {
        Mult((ll **)z, p1, ans, n, n, n, m); // ans=z*p1
    }
    else
    {
        Miden((ll **)t, n);                        // t=I
        Mult((ll **)z, (ll **)t, ans, n, n, n, m); // ans=z*t
    }
    return;
}

void solve()
{
    ll n;
    cin >> n;
    ll mat[2][2] =
        {
            {1, 1}, {1, 0}};

    ll ans[2][2];
    int x;
    // x is a type of int
    int *p;
    // p is of type int*
    // ans is of type (ll (*)[2])

    Mpow((ll **)mat, (ll **)ans, 2, n - 1, mod);
    cout << (ans[0][0] + ans[0][1]) % mod;
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
