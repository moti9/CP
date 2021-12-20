#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
                swap(a[i], a[j]);
        }
    } //for sorting array a
    // we can use sort function also...
    // sort(a,a+n);
    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            if (b[j] < b[i])
                swap(b[i], b[j]);
        }
    }
    //for sorting array b
    // we can use sort function also...
    // sort(b,b+m);

    int k = 0;
    int c[m + n];
    int i = 0;
    int j = 0;
    while (i < n || j < m)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else if (a[i] > b[j])
        {
            c[k] = b[j];
            j++;
            k++;
        }
        else if (a[i] == b[j])
        {
            c[k] = b[j];
            j++;
            k++;
            i++;
        }
    }

    for (int i = 0; i < k; i++)
    {
        cout << c[i] << " ";
    }
    cout << "\n";

    return 0;
}