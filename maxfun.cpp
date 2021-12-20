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
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += (abs(a[i] - a[i + 1]) + abs(a[i + 1] - a[i + 2]) + abs(a[i + 2] - a[i]));
        }
        cout << sum << endl;
    }

    return 0;
}