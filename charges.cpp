#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int main()
{
    fastio;
    unsigned short t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        char s[n];
        cin >> s;
        int b[k];
        for (int i = 0; i < k; i++)
        {
            cin >> b[i];
            for (int j = 0; j < n; j++)
            {
                if (j + 1 == b[i])
                {
                    if (s[i] == '0')
                    {
                        s[i] = '1';
                    }
                    else
                    {
                        s[i] = '0';
                    }
                }
            }
            cout << s;
        }
    }

    return 0;
}
// incomplete
// incomplete
