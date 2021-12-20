#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int pow2(int n)
{
    return (n && !(n & n - 1));
}
int count1s(int n)
{
    int ct = 0;
    while (n)
    {
        n &= n - 1;
        ct++;
    }
    return ct;
}
void subset(int arr[], int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << "\n";
    }
}
int main()
{
    fastio();
    // cout << count1s(11) << "\n";
    int a[4] = {1, 2, 3, 4};
    subset(a, 4);

    return 0;
}