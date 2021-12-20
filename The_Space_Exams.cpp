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
        int n, m;
        cin >> n >> m;
        int a[n];
        int ct = 0, sum;
        float avg[m];
        for (int i = 0; i < m; i++)
        {
            sum = 0;
            for (int j = 0; j < n; j++)
            {
                cin >> a[j];
                sum += a[j];
            }
            avg[i] = (sum * 1.0) / n;
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[j] >= avg[i])
                {
                    ct++;
                }
            }
        }
        cout << ct << "\n";
    }

    return 0;
}