#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int main()
{
    fastio();
    string s;
    cin >> s;
    sort(s.begin(), s.end());

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '+')
        {
            cout << s[i];
            if (i < s.size() - 1)
                cout << "+";
        }
    }

    return 0;
}