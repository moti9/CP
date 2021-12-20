#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

string removeDup(string s)
{
    // sort(s.begin(), s.end());
    if (s.length() == 0)
        return "";
    char ch = s[0];
    string ans = removeDup(s.substr(1));
    if (ch == ans[0])
    {
        return ans;
    }
    return ch + ans;
}
int main()
{
    fastio();
    string s;
    cin >> s;
    cout << removeDup(s);

    return 0;
}