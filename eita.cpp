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
        int d, x, y, z;
        cin >> d >> x >> y >> z;
        cout << max(x * 7, (y * d + z * (7 - d))) << endl;
    }

    return 0;
}