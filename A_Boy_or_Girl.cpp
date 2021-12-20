#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int remove(char str[], int n)
{
    set<char> s(str, str + n);
    int ct = 0;
    for (set<char>::iterator it = s.begin(); it != s.end(); it++)
    {
        ct++;
    }
    return ct;
}
int main()
{
    fastio();
    char str[100];
    cin >> str;
    int n = strlen(str);
    if (remove(str, n) % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }

    return 0;
}