#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int countPath(int s, int e)
{
    if (s == e)
    {
        return 1;
    }
    if (s > e)
    {
        return 0;
    }
    int ct = 0;
    for (int i = 1; i <= 6; i++)
    {
        ct += countPath(s + i, e);
    }
    return ct;
}
int main()
{
    fastio();
    cout << countPath(0, 3);
    return 0;
}