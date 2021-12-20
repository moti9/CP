#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int minOperation(int arr[], int n)
{
    // Insert all elements in hash.
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
        hash[arr[i]]++;

    // find the max frequency
    int max_count = 0;
    for (auto i : hash)
        if (max_count < i.second)
            max_count = i.second;

    // return result
    return (n - max_count);
}
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int ct = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[i + 1])
        {
            ct++;
        }
    }
    if (ct == n)
    {
        cout << ct << "\n";
        return;
    }

    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
        hash[a[i]]++;

    // find the max frequency
    int max_count = 0;
    for (auto i : hash)
    {
        if (max_count < i.second)
            max_count = i.second;
    }
    // if (ct == n)
    // {
    //     cout << ct << "\n";
    //     ct = 0;
    // }
    // else
    cout << n - max_count << "\n";
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

    ll test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
