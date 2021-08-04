#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int main()
{
    fastio();
    int a, b;
    cin >> a >> b;
    int ct = 0;
    if (a > b)
    {
        cout << ct << "\n";
        return 0;
    }
    while (a <= b)
    {
        ct++;
        a *= 3;
        b *= 2;
    }
    cout << ct << "\n";

    return 0;
}