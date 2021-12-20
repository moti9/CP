#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long int
using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        int temp = 0;
        while (x % 10 != 0)
        {
            if (x % 5 == 0)
            {
                temp++;
                x *= 2;
            }
            else
            {
                temp = -1;
                break;
            }
        }
        cout << temp << " \n";
    }

    return 0;
}