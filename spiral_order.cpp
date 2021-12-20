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
    // spiral order
    int rst = 0, red = n - 1, cst = 0, ced = m - 1;
    while (rst <= red && cst <= ced)
    {    //for row start
        for (int col = cst; col <= ced; col++)
        {
            cout << a[rst][col] << " ";
        }
        rst++;
        // for column start
        for (int row = rst; row < red; row++)
        {
            cout << a[row][red] << " ";
        }
        ced--;
        //for row end
        for (int col = ced; col >=cst; col--)
        {
            cout<<a[red][col]<<" ";
        }
        red--;
        //for column end
        for (int row = red; row >= rst; row--)
        {
            cout<<a[row][cst]<<" ";
        }
        cst++;
    }

    return 0;
}