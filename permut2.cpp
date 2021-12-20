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
    while (n != 0)
    {
        bool flag = true;
        int a[n + 1], i;
        for (i = 1; i <= n; i++)
            cin >> a[i];
        for (i = 1; i <= n; i++)
        {
            if (a[a[i]] != i)
                flag = false;
        }

        if (flag)
            cout << "ambiguous\n";
        else
            cout << "not ambiguous\n";
        cin >> n;
    }

    return 0;
}