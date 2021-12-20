#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    int a[100000];
    int index = 0, rem = 0;
    if (n >= 1000)
    {
        rem = n % 1000;
        a[index++] = n - rem;
        n %= 1000;
    }
    if (n >= 100)
    {
        rem = n % 100;
        a[index++] = n - rem;
        n %= 100;
    }
    if (n >= 10)
    {
        rem = n % 10;
        a[index++] = n - rem;
        n %= 10;
    }
    if (n < 10 && n > 0)
    {
        a[index++] = n;
    }
    vector<int> v;
    for (int i = 0; i < index; i++)
    {
        v.push_back(a[i]);
    }
    cout << v.size() << "\n";
    for (auto x : v)
        cout << x << " ";
    cout << "\n";
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
