#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n, k;
        cin >> x >> y >> k >> n;
        int p[n], c[n];
        int ct = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> p[i] >> c[i];
            if ((x - y) <= p[i] && c[i] <= k)
            {
                ct++;
            }
        }
        if (ct >= 1)
        {
            cout << "LuckyChef\n";
        }
        else
        {
            cout << "UnluckyChef\n";
        }
    }

    return 0;
}