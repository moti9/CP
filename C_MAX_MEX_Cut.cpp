#include <bits/stdc++.h>
using namespace std;
#define ll int
#define ld long double
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    string s1, s2;
    cin >> s1;
    cin >> s2;
    ll ct = 0;
    for (ll i = 0; i < n; i++)
    {
        // if (s1[i] == '0' && s2[i] == '0' && temp==1)
        // {
        //     ct += 1;
        //     temp=0;
        // }
        // else if ((s1[i] == '0' && s2[i] == '1') || (s1[i] == '1' && s2[i] == '0'))
        // {
        //     ct += 2;
        // }
        // else if (s1[i] == '1' && s2[i] == '1')
        // {
        //     if (s1[i + 1] == '0' && s2[i + 1] == '0')
        //     {
        //         ct += 2;
        //         i += 1;
        //         s1[i + 1] == '2';
        //         s2[i + 1] == '2';
        //     }
        //     else if (s1[i - 1] == '0' && s2[i - 1] == '0')
        //     {
        //         ct += 1;
        //     }
        // }
        // // if (s1[i] == s2[i])
        // //     ct += 1;
        // // else if (s1[i] != s2[i])
        // //     ct += 2;
        if (s1[i] != s2[i])
        {
            ct += 2;
        }
        else
        {
            if (s1[i] == '0' && s2[i] == '0')
            {
                // if (s1[i - 1] == '1' && s2[i - 1] == '1')
                //     ct += 0;
                if (s1[i + 1] == '1' && s2[i + 1] == '1')
                {
                    ct += 2;
                    i += 1;
                }
                else
                    ct += 1;
            }
            else if (s1[i] == '1' && s2[i] == '1')
            {
                // if (s1[i - 1] == '0' && s2[i - 1] == '0')
                //     ct += 1;
                if (s1[i + 1] == '0' && s2[i + 1] == '0')
                {
                    ct += 2;
                    i += 1;
                }
            }
        }
    }
    cout << ct << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //#endif

    ll test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
