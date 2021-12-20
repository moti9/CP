#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int main()
{
    fastio;
    int n;
    cin >> n;
    // pattern 1
    // for (int i = 1; i <= n; i++)
    // {   int k=1;
    //     for (int j = 1; j <= n + 1 - i; j++)
    //     {
    //         cout << k << " ";
    //         k++;
    //     }
    //     cout << "\n";
    // }

    // pattern 2
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if ((i + j) % 2 == 0)
    //             cout << "1 ";
    //         else
    //             cout << "0 ";
    //     }
    //     cout << "\n";
    // }

    //Pattern Rhombus
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n-i; j++)
    //     {
    //         cout << " ";
    //     }

    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }

    // Pattern Next
    // for (int i = 1; i <= n; i++)
    // {
    //     int k = 1;
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << " ";
    //     }

    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << k << " ";
    //         k++;
    //     }
    //     cout << "\n";
    // }

    //Next Pattern(Pallindromic)
    // for (int i = 1; i <= n; i++)
    // {
    //     int j;
    //     for (j = 1; j <= n - i; j++)
    //     {
    //         cout << "  ";
    //     }

    //     int k = i;
    //     for (; j <= n; j++)
    //     {
    //         cout << k-- << " ";
    //     }
    //     k = 2;
    //     for (; j <= n + i - 1; j++)
    //     {
    //         cout << k++ << " ";
    //     }

    //     cout << "\n";
    // }

    // Next Pattern
    // for (int i = 1; i <= n; i++)
    // {

    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << " ";
    //     }

    //     for (int j = 1; j <= 2 * i - 1; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }
    // for (int i = n; i >= 1; i--)
    // {

    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << " ";
    //     }

    //     for (int j = 1; j <= 2 * i - 1; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }

    // Next Pattern(zif-zag)
    for (int i = 1; i <= 3; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            if ((i + j) % 4 == 0 || (i == 2 && j % 4 == 0))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << "\n";
    }
    return 0;
}