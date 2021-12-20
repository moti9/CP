#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    string s[n];
    vector<string> vs;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        vs.push_back(s[i]);
    }

    sort(vs.begin(), vs.end());
    for (auto x : vs)
    {
        cout << x << endl;
    }
    return 0;
}