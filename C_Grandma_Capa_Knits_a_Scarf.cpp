#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

bool isPalindrome(string S)
{
    string P = S;
    reverse(P.begin(), P.end());
    if (S == P)
        return 1;
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    s.resize(n);
    if (isPalindrome(s))
    {
        cout<<"0\n";
    }
    else
    {
        
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
