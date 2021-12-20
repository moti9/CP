#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

#define rep(i, a, b) for (int i = a; i < b; i++)
#define repi(i, a, b) for (int i = b - 1; i >= a; i--)
#define setDig(n) setprecision(int n)
#define li long int
#define ll long long
#define lli long long int
#define uli unsigned long int
#define ull unsigned long long
#define M 1000000007
using namespace std;

int main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int x = s.length();
        int ct = 0, index = 0;
        for (int i = 0; i < x; i++)
        {
            for (int j = i + 1; j < x; j++)
            {
                if (s[i] == s[j])
                {
                    s[i] = s[j + 1];
                    ct++;
                }
            }
        }
        cout << s << " " << ct;
    }

    return 0;
}