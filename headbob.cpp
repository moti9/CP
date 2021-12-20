#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cy = 0, cn = 0, ci = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'Y')
            {
                cy++;
            }
            else if (s[i] == 'I')
            {
                ci++;
            }
            else
            {
            }
        }
        if (ci > 0 && cy == 0)
        {
            cout << "INDIAN\n";
        }
        else if (cy > 0 && ci == 0)
        {
            cout << "NOT INDIAN\n";
        }
        else
        {
            cout << "NOT SURE\n";
        }
    }

    return 0;
}