#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int func(int n)
{
    return ++n;
}

int main()
{
    fastio();
    int n = 63;
    // func(n);
    cout << func(n) << "\n";

    return 0;
}