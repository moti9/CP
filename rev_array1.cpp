#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
//for reverse
void revarr(int a[], int st, int end)
{
    if (st >= end)
        return;
    int temp = a[st];
    a[st] = a[end];
    a[end] = temp;
    revarr(a, st + 1, end - 1);
}
//for printing
void printarr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}

int main()
{
    fastio();
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printarr(a, 9);
    revarr(a, 0, 8);
    printarr(a, 9);
    return 0;
}