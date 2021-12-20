// // #include <bits/stdc++.h>
// // using namespace std;
// // #define ll int
// // #define mod 1000000007

// // void solve()
// // {
// //     ll n;
// //     cin >> n;
// //     string s;
// //     cin >> s;
// //     s.resize(n);
// //     if (n == 1)
// //     {
// //         cout << -1 << " " << -1 << "\n";
// //         return;
// //     }
// //     for (ll i = 0; i < n; i++)
// //     {
// //         if ((s[i] == 'a' && s[i + 1] == 'b') || (s[i] == 'b' && s[i + 1] == 'a'))
// //         {
// //             cout << i + 1 << " " << i + 2 << "\n";
// //             return;
// //         }
// //     }
// //     cout << -1 << " " << -1 << "\n";
// // }
// // int main()
// // {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     cout.tie(NULL);
// //     //#ifndef ONLINE_JUDGE
// //     //freopen("input.txt", "r", stdin);
// //     //freopen("output.txt", "w", stdout);
// //     //#endif

// //     ll test = 1;
// //     cin >> test;
// //     while (test--)
// //     {
// //         solve();
// //     }
// //     return 0;
// // }
// #include <bits/stdc++.h>
// #define fastio()             \
//     ios::sync_with_stdio(0); \
//     cin.tie(0);              \
//     cout.tie(0);

// using namespace std;

// int_fast32_t main(void)
// {
//     fastio();
//     int test = 0;
//     cin >> test;
//     while (test--)
//     {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         for (int i = 0; i < n; i++)
//         {
//             if ((s[i] == 'b' && s[i + 1] == 'a') || (s[i] == 'a' && s[i + 1] == 'b'))
//             {
//                 cout << i + 1 << " " << i + 2 << "\n";
//                 return 0;
//             }
//         }
//         cout << "-1"
//              << " "
//              << "-1";
//         cout << "\n";
//         // test--;
//     }

//     return 0;
// }
#include <iostream>
using namespace std;
signed main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool flag = 0;
        int i = 0;
        for (i = 0; i < n; i++)
        {
            if ((s[i] == 'a' && s[i + 1] == 'b') || (s[i] == 'b' && s[i + 1] == 'a'))
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            cout << i + 1 << " " << i + 2 << "\n";
        }
        else
        {
            cout << "-1"
                 << " "
                 << "-1\n";
        }
    }
    return 0;
}