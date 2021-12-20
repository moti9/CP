#include <bits/stdc++.h>
using namespace std;
int main()
{

    // write your code here
    int n;
    cin >> n;
    string s;
    s.resize(n);
    cin >> s;
    int g[10];
    for (int i = 1; i < 10; i++)
        cin >> g[i];
    for (int i = 0; i < n; i++)
    {
        int x = s[i] - '0';
        if (g[x] > x)
            s[i] = g[x] + '0';
    }
    cout << s;
    return 0;
}