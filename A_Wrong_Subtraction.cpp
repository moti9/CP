#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int main()
{
    fastio();
    long long n, k;
    cin >> n >> k;
    int lastd = 0;
    for (int i = 1; i <= k; i++)
    {
        if (n % 10 == 0)
        {
            n /= 10;
        }
        else
        {
            n -= 1;
        }
    }

    cout << n << "\n";

    return 0;
}