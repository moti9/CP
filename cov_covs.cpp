#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll I;
    cin >> I;
    ll x, a, b, c, d;
    cin >> x >> a >> b >> c >> d;
    ll p, q, r, s, t, m;
    cin >> p >> q >> r >> s >> t >> m;
    ll ans[I] = {0};
    for (ll i = 0; i < I; i++)
    {
        ll cash = x;
        ll j = 1;
        while (j > 0)
        {
            ll cx = a + (j - 1) * b;
            // cout << "cx: " << cx << "\n";
            if (cash >= cx)
            {
                cash = cash - cx;
                ans[i]++;
            }
            ll cs = c + (j - 1) * d;
            // cout << "cs: " << cs << "\n";
            if (cash >= cs)
            {
                cash = cash - cs;
                ans[i]++;
            }
            if (cash < cx && cash < cs)
            {
                break;
            }
            j++;
        }
        cout << ans[i] << "\n";
        if (ans[i] > 0)
        {
            a = ((a + ans[i] * t) % m) + p;
            b = ((b + ans[i] * t) % m) + q;
            c = ((c + ans[i] * t) % m) + r;
            d = ((d + ans[i] * t) % m) + s;
            // cout << a << " " << b << " " << c << " " << d << "\n";
        }
    }
    return 0;
}