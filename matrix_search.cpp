#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int main()
{
    fastio();
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int target;
    cin >> target;
    int flag = 0;
    int r = 0, c = m - 1;

    while (r < n & c >= 0)
    {
        if (a[r][c] == target)
        {
            flag = 1;
        }
        if (a[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if (flag==1)
        cout << "Element Found\n";
    else
        cout << "Element doesn't found\n";

    return 0;
}