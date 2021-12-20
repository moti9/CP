#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
#define ll long long int

int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        if (k % (n - 1) == 0)
        {
            cout << (n * k - 1) / (n - 1) << endl;
        }
        else
        {
            cout << k + k / (n - 1);
        }
    }

    return 0;
}