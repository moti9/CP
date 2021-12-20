#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll c, d, l;
        cin >> c >> d >> l;
        ll maxlegs = (c + d) * 4;
        ll minlegs;
        if (c >= (2 * d))
        {
            minlegs = (d + (c - (2 * d))) * 4;
        }
        else
        {
            minlegs = (d * 4);
        }
        if (l >= minlegs && l <= maxlegs && (l - minlegs) % 4 == 0)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}
