#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

string keypadArr[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
void keyp(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << "\n";
        return;
    }
    char ch = s[0];
    string code = keypadArr[ch - '0'];
    string ros = s.substr(1);
    for (int i = 0; i < code.length(); i++)
    {
        keyp(ros, ans + code[i]);
    }
}

int main()
{
    fastio();
    keyp("23", "");

    return 0;
}