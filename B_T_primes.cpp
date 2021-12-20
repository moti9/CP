#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
int t, n;
bool check[1000001];

void sieve()
{
    for (int i = 0; i <= 1000001; i++)
    {
        check[i] = 1;
    }
    check[0] = 0;
    check[1] = 0;
    for (int i = 2; i <= 100001; i++)
    {
        if (check[i] == 1)
        {
            for (int j = i * i; j <= 1000001; j += i)
            {
                check[j] = false;
            }
        }
    }
}

void sol()
{
    cin >> n;
    int s = sqrt(n);
    if (s * s == n && check[s])
        cout << "YES\n";
    else
        cout << "NO\n";
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    sieve();
    cin >> t;
    while (t--)
    {
        sol();
    }
}