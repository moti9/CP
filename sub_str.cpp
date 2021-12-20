#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
void subseq(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << "\n";
        return;
    }

    char ch = s[0];
    string ros = s.substr(1);
    subseq(ros, ans);
    subseq(ros, ans + ch);
}
int main()
{
    fastio();
    subseq("ABC", "D");

    return 0;
}