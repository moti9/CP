#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    string s[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        if (s[i] == "Tetrahedron")
            sum += 4;
        else if (s[i] == "Cube")
            sum += 6;
        else if (s[i] == "Octahedron")
            sum += 8;
        else if (s[i] == "Dodecahedron")
            sum += 12;
        else if (s[i] == "Icosahedron")
            sum += 20;
    }
    cout << sum;
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
    //cin>>test;
    while (test--)
    {
        solve();
    }
    return 0;
}
