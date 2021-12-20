#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
bool pairsum(int a[], int n, int k)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == k)
            {
                cout << i << " " << j << "\n";
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    fastio();
    int a[] = {2, 4, 7, 11, 14, 16, 20, 21};
    int k = 23;
    cout << pairsum(a, 8, k);
    return 0;
}