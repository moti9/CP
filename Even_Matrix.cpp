#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int total = n * n;
        int st = 1;
        if (n % 2 != 0)
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {

                    cout << st << " ";
                    st++;
                }
                cout << "\n";
            }
        }
        else
        {
            int end = n * n;
            for (int i = 1; i <= n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i % 2 != 0)
                    {
                        cout << st << " ";
                        st++;
                    }
                    else
                    {
                        cout << end << " ";
                        end--;
                    }
                }
                cout << "\n";
            }
        }
    }

    return 0;
}