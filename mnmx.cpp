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
        long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);        
        cout << a[0]*(n-1) << endl;
    }
    return 0;
}