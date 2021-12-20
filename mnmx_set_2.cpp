#include <bits/stdc++.h>
using namespace std;

int main()
{   ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<long int> s;
        for (int i = 0; i < n; i++)
        {   int k;
            cin >> k;
            s.insert(k);
        }
        long int x=*s.begin();        
        cout << x *(n-1) << endl;
    }
    return 0;
}