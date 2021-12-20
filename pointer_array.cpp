#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int main()
{
    fastio();
    int a[] = {63, 81, 6, 3, 8, 1};
    // cout << *a << "\n";
    // int *ptr = a;
    for (int i = 0; i < 6; i++)
    {
        // cout << *ptr << "\n";
        // ptr++;
        cout << *(a + i) << "\n";
    }

    return 0;
}