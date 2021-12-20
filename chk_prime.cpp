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

        int n;
        cin >> n;
        int div = 2, ct = 0;
        if (n == 2)
        {
            cout << "Prime\n";
        }
        else if (n == 1)
        {
            cout << "Not Prime";
        }

        do
        {
            if (n % div == 0 && n > 2)
            {
                ct = 1;
            }
            div++;

        } while (div < n);
        if (ct)
        {
            cout << "Not Prime\n";
        }
        else
        {
            cout << "Prime\n";
        }
    }
    return 0;
}