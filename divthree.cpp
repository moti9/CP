#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
#define ll long long int

int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ll k, d;
        cin >> n >> k >> d;
        ll a[n];
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum < k)
        {
            cout << "0\n";
        }
        else if (sum >= (k * d))
        {
            cout << d << endl;
        }
        else if (sum >= k && sum < (k * d))
        {
            cout << sum / k << endl;
        }
    }

    return 0;
}