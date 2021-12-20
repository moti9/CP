// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define mod 1000000007

// void solve()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int cev = 0, cod = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (i % 2 == 0 && a[i] % 2 == 1)
//             cod++;
//         else if (i % 2 == 1 && a[i] % 2 == 0)
//             cev++;
//     }
//     if (cev == cod)
//         cout << cev << "\n";
//     else
//         cout << -1 << "\n";
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     //#ifndef ONLINE_JUDGE
//     //freopen("input.txt", "r", stdin);
//     //freopen("output.txt", "w", stdout);
//     //#endif

//     ll test = 1;
//     cin >> test;
//     while (test--)
//     {
//         solve();
//     }
//     return 0;
// }

//Other Ways
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    int cev = 0, cod = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num % 2 != i % 2)
        {
            if (num % 2 == 0)
                cev++;
            else
                cod++;
        }
    }
    if (cod == cev)
        cout << cev << "\n";
    else
        cout << -1 << "\n";
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
