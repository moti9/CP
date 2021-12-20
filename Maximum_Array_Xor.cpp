#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

#define rep(i, a, b) for (int i = a; i < b; i++)
#define repi(i, a, b) for (int i = b - 1; i >= a; i--)
#define setDig(n) setprecision(int n)
#define li long int
#define ll long long
#define lli long long int
#define uli unsigned long int
#define ull unsigned long long
#define M 1000000007
using namespace std;

int main()
{
    fastio();
    lli n, k;
    cin >> n >> k;
    lli p = pow(2, n);
    cout << min(n * (n - 1), k * 2 * (n - 1)) << "\n";

    return 0;
}