#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int main()
{
    fastio;
    // int row, col;
    // cin >> row >> col;

    // for pattern 1
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }

    // for pattern 2
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         if (i == 0 || i == row - 1 || j == 0 || j == col - 1)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << "\n";
    // }

    //Pattern 3
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = n; j > i; j--)
    //     {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }

    // pattern 4
    int n;
    cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (j <= i)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << "\n";
    // }

    //Pattern 5
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (j <= i)
    //         {
    //             cout << i;
    //         }
    //     }
    //     cout << "\n";
    // }

    //pattern 6
    // int k = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (j <= i)
    //         {
    //             cout << k;
    //             k++;
    //         }
    //     }
    //     cout << "\n";
    // }

    //Pattern Butterfly
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int space = 2 * n - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int space = 2 * n - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}