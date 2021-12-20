#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int pathCt(int n, int i, int j)
{
    if (i == n - 1 && j == n - 1)
    {
        return 1;
    }
    if (i >= n || j >= n)
    {
        return 0;
    }
    return pathCt(n, i + 1, j) + pathCt(n, i, j + 1);
}
int main()
{
    fastio();
    cout << pathCt(3, 0, 0);
    return 0;
}