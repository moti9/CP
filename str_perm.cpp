#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
void permut(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << "\n";
        return;
    }
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string ros = s.substr(0, i) + s.substr(i + 1);
        permut(ros, ans + ch);
    }
}
int main()
{
    fastio();
    permut("ABC", "");

    return 0;
}