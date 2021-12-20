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
    int a[3], ct = 0;
    while (n--)
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum >= 2)
        {
            ct++;
        }
    }
    cout << ct << endl;

    return 0;
}