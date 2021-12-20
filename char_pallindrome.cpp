#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int main()
{
    fastio();
    int n;
    cin >> n;
    char ch[n + 1];
    cin >> ch;
    bool flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (ch[i] != ch[n - 1 - i])
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        cout << "Pallindrome\n";
    }
    else
    {
        cout << "Non Pallindrome\n";
    }

    return 0;
}