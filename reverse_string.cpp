#include <bits/stdc++.h>
#include <cstring>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;

void rev(string s)
{
    if (s.length() == 0)
        return;
    string ros = s.substr(1);
    rev(ros);
    cout << s[0];
}

int main()
{
    fastio();
    string s = "MotiV";
    rev(s);
    return 0;
}