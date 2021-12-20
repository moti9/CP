#include <bits/stdc++.h>
using namespace std;
#define ll int
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ct = 0, i = 0;
    while (!is_sorted(a, a + n))
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n - 1; j += 2)
            {
                if (a[j] > a[j + 1])
                {
                    swap(a[j], a[j + 1]);
                }
            }
            i++;
            ct++;
        }
        else
        {
            for (int j = 1; j < n - 1; j += 2)
            {
                if (a[j] > a[j + 1])
                {
                    swap(a[j], a[j + 1]);
                }
            }
            i++;
            ct++;
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

// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;

// int strange_sort(ll a[], int n)
// {

//     int count = 0;
//     while (!is_sorted(a, a + n))
//     {
//         for (int i = 0; i < n - 1; i++)
//         {
//             if (a[i] > a[i + 1])
//             {
//                 int temp = a[i];
//                 a[i] = a[i + 1];
//                 a[i + 1] = temp;
//                 break;
//             }
//         }
//         count++;
//     }
//     return count;
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         ll a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         cout << strange_sort(a, n) << endl;
//     }
//     return 0;
// }
// // #include <bits/stdc++.h>

// // using namespace std;

// // int main()
// // {
// //     int tt;
// //     cin >> tt;
// //     while (tt--)
// //     {
// //         int n;
// //         cin >> n;
// //         vector<int> a(n);
// //         for (int i = 0; i < n; i++)
// //         {
// //             cin >> a[i];
// //         }
// //         int ans = 0;
// //         while (!is_sorted(a.begin(), a.end()))
// //         {
// //             for (int i = ans % 2; i + 1 < n; i += 2)
// //             {
// //                 if (a[i] > a[i + 1])
// //                 {
// //                     swap(a[i], a[i + 1]);
// //                 }
// //             }
// //             ans += 1;
// //         }
// //         cout << ans << endl;
// //     }
// //     return 0;
// // }

// // int counter = 0;
// // while (!is_sorted(a, a + n))
// // {
// //     for (int i = counter % 2; i < n - 1; i += 2)
// //     {
// //         if (a[i] > a[i + 1])
// //         {
// //             int temp = a[i + 1];
// //             a[i + 1] = a[i];
// //             a[i] = temp;
// //         }
// //     }
// //     counter++;
// // }
// // return counter;