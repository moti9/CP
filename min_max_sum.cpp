#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int main()
{
    fastio;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int s_min = 0, s_max = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sort(a, a + n);
        s_min += a[i];
        sort(a, a + n, greater<int>());
        s_max += a[i];
    }

    cout << s_min << " " << s_max;

    return 0;
}