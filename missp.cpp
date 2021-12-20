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
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n; i += 2)
        {
            if (a[i] != a[i + 1])
            {
                cout << a[i] << endl;
                break;
            }
        }
    }

    return 0;
}