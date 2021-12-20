#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int main()
{
    fastio;
    short int t;
    cin >> t;

    while (t--)
    {
        int n, k, x = INT_MIN;
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
        {
            int rem = n % i;
            if (rem > x)
            {
                x = rem;
            }
        }

        cout << x << endl;
    }

    return 0;
}