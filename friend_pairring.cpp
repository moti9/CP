#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int fpairing(int n)
{
    if (n == 0 || n == 1 || n == 2)
        return n;
    return fpairing(n - 1) + fpairing(n - 2) * (n - 1);
}
int main()
{
    fastio();
    cout << fpairing(14);

    return 0;
}