#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
#define ll long long int
#define mod 1e9 + 7
#define f first
#define s second

int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<pair<ll, ll>> x;
        vector<pair<ll, ll>> y;
        multiset<ll> x1;
        multiset<ll> y1;
        for (int i = 0; i < n; ++i)
        {
            ll a, b;
            cin >> a >> b;
            x.push_back({a, b});
            y.push_back({b, a});
            x1.insert(a);
            y1.insert(b);
        }
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        ll l1 = 0;
        ll l2 = 0;
        ll lMax = 0;
        ll lMin = LONG_MAX;
        ll area = LONG_MAX;
        for (int i = 0; i < n - 1; ++i)
        {

            lMax = max(lMax, x[i].second);
            lMin = min(lMin, x[i].second);
            l1 = lMax - lMin;
            auto it = y1.find(x[i].second);
            y1.erase(it);
            l2 = *y1.rbegin() - *y1.begin();
            ll nArea = (x[i].first - x[0].first) * l1 + (x[n - 1].first - x[i + 1].first) * l2;
            area = min(area, nArea);
        }
        ll b1 = 0;
        ll b2 = 0;
        ll bMax = 0;
        ll bMin = LONG_MAX;
        for (int i = 0; i < n - 1; ++i)
        {
            bMax = max(bMax, y[i].second);
            bMin = min(bMin, y[i].second);
            b1 = bMax - bMin;
            auto it = x1.find(y[i].second);
            x1.erase(it);
            b2 = *x1.rbegin() - *x1.begin();
            ll nArea = (y[i].first - y[0].first) * b1 + (y[n - 1].first - y[i + 1].first) * b2;
            area = min(area, nArea);
        }
        if (area == LONG_MAX)
            area = 0;
        cout << area << endl;
    }

    return 0;
}