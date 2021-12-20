#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void display(map<int, string> &mp)
{
    for (auto &v : mp)
        cout << v.first << " " << v.second << endl;
    
}

int32_t main()
{
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
    fastio;
    map<int, string> mp;
    mp[5] = "moti";
    mp[63] = "mv";
    mp[81] = "vm";
    mp[6] = "Moti";
    mp[1] = "MV";
    display(mp);
    return 0;
}