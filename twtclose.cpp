#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int main()
{
    fastio;
    int n, k;
    cin >> n >> k;
    int a[n] = {0};
    for (int i = 0; i < k; i++)
    {
        string click;
        cin >> click;
        if (click == "CLICK")
        {
            int x;
            cin >> x;
            if (a[x - 1] == 0)
            {
                a[x - 1] = 1;
            }
            else
            {
                a[x - 1] = 0;
            }
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == 1)
                {
                    sum += 1;
                }
            }
            cout << sum;
        }
        else if (click == "CLOSEALL")
        {
            for (int i = 0; i < n; i++)
            {
                a[i] = 0;
            }
            cout << "0";
        }
        cout << endl;
    }

    return 0;
}