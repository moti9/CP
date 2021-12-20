#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int main()
{
    fastio;
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int a[n];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if ((a[i] + k) % 7 == 0)
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}