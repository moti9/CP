#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        v.push_back(d);
        sort(v.begin(), v.end());
        if (v[0] == v[1] && v[2] == v[3])
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}