#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll g;
    cin >> g;
    ll a[g];
    for (ll i = 0; i < g; i++)
    {
        a[i] = i + 1;
    }
    ll i = 0, j = 0, count = 0, sum = 0;
    while (i < g)
    {
        sum += a[j];
        if (sum == g)
        {
            count++;
            i++;
            j = i - 1;
            sum = 0;
        }
        j++;
        if (j == g)
        {
            i++;
            j = i;
            sum = 0;
        }
    }
    cout << count << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, x = 1;
    cin >> t;
    while (t--)
    {

        cout << "Case #" << x << ": ";
        solve();
        x++;
    }
    return 0;
}