#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int rev(int n)
{
    int temp = 0;
    while (n != 0)
    {
        temp = temp * 10 + (n % 10);
        n /= 10;
    }
    return temp;
}

void solve()
{
    int n;
    cin >> n;
    cout << rev(n) << "\n";
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
