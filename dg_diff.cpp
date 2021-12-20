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
    int arr[n][n];
    int s1 = 0, s2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (i == j)
            {
                s1 += arr[i][j];
            }
            if ((i + j) == n - 1)
            {
                s2 += arr[i][j];
            }
        }
    }
    cout << abs(s1 - s2);

    return 0;
}