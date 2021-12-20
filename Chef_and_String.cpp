#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int x = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if ((s[i] == 'x' && s[i + 1] == 'y') || (s[i] == 'y' && s[i + 1] == 'x'))
            {
                x++;
                i++;
            }
        }
        cout << x << "\n";
    }

    return 0;
}