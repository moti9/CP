#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
void plusMinus(int arr[], int n)
{
    int sp = 0, sn = 0, s0 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            sp++;
        }
        else if (arr[i] == 0)
        {
            s0++;
        }
        else
        {
            sn++;
        }
    }
    float x, y, z;
    x = sp * 1.0 / n;
    y = sn * 1.0 / n;
    z = s0 * 1.0 / n;
    cout << x << "\n"
         << y << "\n"
         << z;
}

int main()
{
    fastio;
    unsigned short n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    plusMinus(a, n);

    return 0;
}