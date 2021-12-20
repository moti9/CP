#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int main()
{
    fastio;
    unsigned short int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int result = 0;
        for (int i = 0; i < n; i++)
        {
            long long int mult = 1, sum = 0;
            for (int j = i; j < n; j++)
            {
                mult *= arr[j];
                sum += arr[j];
                if (mult == sum)
                {
                    result++;
                }
            }
        }
        cout << result << endl;
    }

    return 0;
}