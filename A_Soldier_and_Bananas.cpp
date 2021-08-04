#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int main()
{
    fastio();
    long long k, n, w;
    cin >> k >> n >> w;
    long long p = (k * w * (w + 1)) / 2;
    if (p > n)
    {
        n = p - n;
    }
    else
    {
        n = 0;
    }

    cout << n << "\n";

    return 0;
}