#include <iostream>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    short t, n, m, k;
    int i = 0;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> k;
        if (n > m)
        {
            if (m + k >= n)
            {
                cout << i << endl;
            }
            else
            {
                cout << n - (m + k) << endl;
            }
        }
        else if (n < m)
        {
            if (n + k >= m)
            {
                cout << i << endl;
            }
            else
            {
                cout << m - (n + k) << endl;
            }
        }
        else
        {
            cout << i << endl;
        }
    }

    return 0;
}