#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int tilling(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return tilling(n - 1) + tilling(n - 2);
}
int main()
{
    fastio();
    cout << tilling(4);

    return 0;
}