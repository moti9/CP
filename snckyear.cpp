#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int main()
{
    fastio;
    short t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 2010 || n == 2015 || n == 2016 || n == 2017 || n == 2019)
        {
            cout << "HOSTED\n";
        }
        else
        {
            cout << "NOT HOSTED\n";
        }
    }

    return 0;
}