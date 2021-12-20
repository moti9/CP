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
        long int x, y, sum = 0;
        cin >> x >> y;
        sum = x + y;
        for (int i = 1; i < sum; i++)
        {
            if (sum % i == 0)
            {
                i = 1;
                sum++;
            }
        }
        cout << (sum - (x + y)) << endl;
    }

    return 0;
}