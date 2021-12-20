#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n, least = INT_MAX, c = 0, temp;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (least > arr[i])
            {
                least = arr[i];
            }
        }
        temp = least;
        while (temp && c != n)
        {
            c = 0;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % temp == 0)
                {
                    c++;
                    continue;
                }
            }
            if (c == n)
            {
                break;
            }
            else
            {
                temp--;
            }
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i] / temp;
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}