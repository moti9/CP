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
    if (n % 2 == 1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << "2 1";
        for (int i = 3; i < n; i += 2)
        {
            cout << " " << i + 1 << " " << i;
        }
        cout << endl;

        return 0;
    }
}