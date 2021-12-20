#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int kadane(int a[], int n)
{
    int currsum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currsum += a[i];
        if (currsum < 0)
        {
            currsum = 0;
        }
        maxsum = max(maxsum, currsum);
    }
    return maxsum;
}

int main()
{
    fastio();
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int wrapsum;
    int nonwrapsum;
    nonwrapsum = kadane(a, n);
    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        totalsum += a[i];
        a[i] = -a[i];
    }
    wrapsum = totalsum + kadane(a, n);
    cout << max(wrapsum, nonwrapsum) << "\n";

    return 0;
}