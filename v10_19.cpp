#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<int, int> ma;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        ma[a]++;
    }
    int m;
    cin >> m;
    unordered_map<int, int> mb;
    for (int i = 0; i < m; i++)
    {
        int b;
        cin >> b;
        mb[b]++;
    }
    int sum;
    cin >> sum;
    for (auto x : ma)
    {
        for (auto y : mb)
        {
            if (x.first + y.first == sum)
            {
                cout << x.first << " " << y.first << "\n";
            }
        }
    }

    return 0;
}