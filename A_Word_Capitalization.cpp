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
    int asciiVal = s[0];
    if (asciiVal >= 97)
    {
        s[0] = asciiVal - 32;
    }
    cout << s << "\n";

    return 0;
}