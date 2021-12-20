#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int sDigit(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
void solve()
{
    int k;
    cin >> k;
    int i;
    for (i = 1; i<10000 & k> 0; i++)
    {
        if (sDigit(i) % 3 != 0 && i % 10 != 3)
            k--;
    }
    cout << i - 1 << "\n";
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
