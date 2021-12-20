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
        string a, b;
        cin >> a;
        cin >> b;
        int min = 0, max = 0;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] != '?' && b[i] != '?' && a[i] != b[i])
            {
                min++;
            }
        }
        for (int j = 0; j < a.size(); j++)
        {
            if (a[j] != b[j])
            {
                max++;
            }
            if (a[j] == '?' && b[j] == '?')
            {
                max++;
            }
        }
        cout << min << " " << max << endl;
    }

    return 0;
}