#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n, x;
    cin >> n >> x;
    ll a[n];
    bool b[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = INT_MIN, counter = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        ll sum = 1;
        ll op = 1;
        ll count = 0;
        if (b[i] == 0)
        {
            ll xr = a[i] ^ x;
            b[i] = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] == xr && b[j] == 0)
                {
                    b[j] = 1;
                    sum++;
                    count++;
                }
                if (a[j] == a[i] && x != 0 && b[j] == 0)
                {
                    op++;
                    sum++;
                    b[j] = 1;
                }
            }
        }
        if (sum > ans)
        {
            ans = sum;
            if (count < op)
            {
                counter = count;
            }
            else if (x == 0)
            {
                counter = 0;
            }
            else if (x > 0)
            {
                counter = op;
            }
        }
        else if (sum == ans)
        {
            if (count < counter)
            {
                counter = count;
            }
            else if (x == 0)
            {
                counter = 0;
            }
            else if (x > 0 && op < counter)
            {
                counter = op;
            }
        }
    }
    cout << ans << " " << counter << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //#endif

    ll test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
