#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    int a[n];
    unordered_map<int, int> mp;
    int maxx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        if (maxx < a[i])
            maxx = a[i];
    }
    // cout<<maxx<<"\n";
    for (auto x : mp)
    {
        if (x.second > 2 || (x.first == maxx && x.second > 1))
        {
            cout << -1 << "\n";
            return;
        }
        // else if (x.second > 2)
        // {
        //     cout << -1 << "\n";
        //     return;
        // }
    }
    // if (mp.size() == n)
    // {
    //     sort(a, a + n, greater<int>());
    //     for (int i = 0; i < n; i++)
    //     {
    //         cout << a[i] << " ";
    //     }
    //     cout << "\n";
    //     return;
    // }

    // int temp;
    // sort(a, a + n);
    vector<int> left;
    vector<int> right;
    for (auto x : mp)
    {
        if (x.second == 2)
        {
            left.push_back(x.first);
            right.push_back(x.first);
        }
        else if (x.first == maxx)
        {
            left.push_back(maxx);
            // cout << maxx << "\n";
            // continue;
        }
        else
        {
            right.push_back(x.first);
        }
    }
    vector<int> v;
    sort(left.begin(), left.end());
    for (int i = 0; i < left.size(); i++)
    {
        v.push_back(left[i]);
    }

    // for (auto x : left)
    // {
    //     cout << x << " ";
    // }
    // cout << maxx << " ";
    sort(right.begin(), right.end(), greater<int>());
    // for (auto x : right)
    // {
    //     cout << x << " ";
    // }
    for (int i = 0; i < right.size(); i++)
    {
        v.push_back(right[i]);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
        if (i < v.size() - 1)
            cout << " ";
        else
            cout << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //#endif

    ll ttt = 1;
    cin >> ttt;
    while (ttt--)
    {
        solve();
    }
    return 0;
}
