#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
#define ll long long

int main()
{
    fastio();
    ll n, s;
    cin >> n >> s;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll i = 0, j = 0, st = -1, en = -1, sum = 0;
    while (j < n && sum + a[j] <= s)
    {
        sum += a[j];
        j++;
    }
    if (sum == s)
    {
        cout << i + 1 << " " << j << "\n";
        return 0;
    }
    while (j < n)
    {
        sum += a[j];
        while (sum > s)
        {
            sum - +a[i];
            i++;
        }
        if (sum == s)
        {
            st = i + 1;
            en = j + 1;
            break;
        }
        j++;
    }
    cout << st << " " << en << "\n";

    return 0;
}
//Google,amazon,visa
//O(n2)