#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
bool pairsum(int a[], int n, int k)
{
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        if (a[low] + a[high] == k)
        {
            cout << a[low] << " " << a[high] << "\n";
            return 1;
        }
        else if (a[low] + a[high] < k)
        {
            low++;
        }
        else
        {
            high--;
        }
    }
    return 0;
}

int main()
{
    fastio();
    int a[] = {2, 4, 7, 11, 14, 16, 20, 21};
    int k = 31;
    sort(a, a + 8);
    cout << pairsum(a, 8, k);
    return 0;
}