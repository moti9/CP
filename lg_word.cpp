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
    cin.ignore();

    char arr[n + 1];
    cin.getline(arr, n);
    cin.ignore();
    // int i = 0;
    // int currlen = 0, maxlen = 0;
    // while (1)
    // {
    //     if (arr[i] == ' ' || arr[i] == '\0')
    //     {
    //         if (currlen > maxlen)
    //         {
    //             maxlen = currlen;
    //         }
    //         currlen = 0;
    //     }
    //     else
    //         currlen++;
    //     if (arr[i] == '\0')
    //     {
    //         break;
    //     }
    //     i++;
    // }
    // cout << maxlen << "\n";

    int i = 0;
    int currlen = 0, maxlen = 0;
    int st = 0, maxst = 0;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currlen > maxlen)
            {
                maxlen = currlen;
                maxst = st;
            }
            currlen = 0;
            st = i + 1;
        }
        else
            currlen++;
        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }
    cout << maxlen << "\n";
    for (int i = 0; i < maxlen; i++)
    {
        cout << arr[i + maxst];
    }

    return 0;
}