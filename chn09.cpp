#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int main()
{
    fastio;
    short t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int ca = 0, cb = 0;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == 'a')
            {
                ca++;
            }
            else
            {
                cb++;
            }
        }
        cout << min(ca, cb) << endl;
    }

    return 0;
}