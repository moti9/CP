#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;
        long long int sum = 0;
        int count = 0;
        for (int i = 1; sum <= n; i++)
        {
            sum += i;
            count++;
        }
        cout << count - 1 << endl;
    }

    return 0;
}