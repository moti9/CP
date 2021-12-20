#include <bits/stdc++.h>

using namespace std;

void solution()
{
    int n;
    cin >> n;

    vector<pair<int, int>> x;
    vector<pair<int, int>> y;
    multiset<int> X;
    multiset<int> Y;
    for (int i = 0; i < n; ++i)
    {
        int a, b;
        cin >> a >> b;
        x.push_back({a, b});
        y.push_back({b, a});
        X.insert(a);
        Y.insert(b);
    }
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    int l1 = 0;
    int l2 = 0;
    int lMax = 0;
    int lMin = LONG_MAX;
    int area = LONG_MAX;
    for (int i = 0; i < n - 1; ++i)
    {

        lMax = max(lMax, x[i].second);
        lMin = min(lMin, x[i].second);
        l1 = lMax - lMin;
        auto it = Y.find(x[i].second);
        Y.erase(it);
        l2 = *Y.rbegin() - *Y.begin();
        int nArea = (x[i].first - x[0].first) * l1 + (x[n - 1].first - x[i + 1].first) * l2;
        area = min(area, nArea);
    }
    int b1 = 0;
    int b2 = 0;
    int bMax = 0;
    int bMin = LONG_MAX;
    for (int i = 0; i < n - 1; ++i)
    {
        bMax = max(bMax, y[i].second);
        bMin = min(bMin, y[i].second);
        b1 = bMax - bMin;
        auto it = X.find(y[i].second);
        X.erase(it);
        b2 = *X.rbegin() - *X.begin();
        int nArea = (y[i].first - y[0].first) * b1 + (y[n - 1].first - y[i + 1].first) * b2;
        area = min(area, nArea);
    }
    if (area == LONG_MAX)
        area = 0;
    cout << area << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    int _ = 1;
    while (t--)
    {
        solution();
    }
    return 0;
}