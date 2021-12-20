#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
void mergeArr(int a1[], int a2[], int n, int m, int a3[])
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (a1[i] < a2[j])
        {
            a3[k++] = a1[i++];
        }
        else
        {
            a3[k++] = a2[j++];
        }
    }
    while (i < n)
    {
        a3[k++] = a1[i++];
    }
    while (j < m)
    {
        a3[k++] = a2[j++];
    }
}

int main()
{
    fastio;
    int n, m;
    cin >> n >> m;
    int a1[n], a2[m], a3[m + n];
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> a2[i];
    }
    mergeArr(a1, a2, n, m, a3);
    for (int i = 0; i < m + n; i++)
    {
        cout << a3[i] << " ";
    }

    return 0;
}