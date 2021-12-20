#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int main()
{
    fastio;
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    while (t--)
    {

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'G' && s[i - 1] == 'B')
            {
                s[i] = 'B';
                s[i - 1] = 'G';
                i++;
            }
        }
    }
    cout << s << endl;

    return 0;
}