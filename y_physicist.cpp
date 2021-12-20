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
    int x, y, z;
    int sx = 0, sy = 0, sz = 0;
    while (n--)
    {
        cin >> x >> y >> z;
        sx += x;
        sy += y;
        sz += z;
    }

    if (sx == 0 && sy == 0 && sz == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}