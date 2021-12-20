#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
string movech(string s)
{
    if (s.length() == 0)
        return "";
    char ch = s[0];
    string ans = movech(s.substr(1));
    if (ch == 'x')
    {
        return ans + ch;
    }
    return ch + ans;
}
int main()
{
    fastio();
    string s;
    cin >> s;
    cout << movech(s);

    return 0;
}