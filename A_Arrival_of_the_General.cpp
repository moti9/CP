#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int main()
{
    fastio();
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int mm = 0, mi = 101;
    for (int i = 0; i < n; i++)
    {
        mm = max(a[i], mm);
        mi = min(a[i], mi);
    }
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == mm)
        {
            x = i;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == mi)
        {
            y = i;
        }
    }
    if (x < y)
        cout << (x) + (n - y - 1);
    else
        cout << (x + (n - y - 2));

    return 0;
}