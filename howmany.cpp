#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int main()
{
    fastio;
    long int n, count = 0;
    cin >> n;
    while (n != 0)
    {
        count++;
        n /= 10;
    }
    if (count == 1)
    {
        cout << "1\n";
    }
    else if (count == 2)
    {
        cout << "2\n";
    }
    else if (count == 3)
    {
        cout << "3\n";
    }
    else if (count > 3)
    {
        cout << "More than 3 digits\n";
    }

    return 0;
}