#include <bits/stdc++.h>
using namespace std;

int main()
{   ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long int> v;
        for (int i = 0; i < n; i++)
        {   int k;
            cin >> k;
            v.push_back(k);
        }
        sort(v.begin(),v.end());        
        cout << v[0]*(n-1) << endl;
    }
    return 0;
}