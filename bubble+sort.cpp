#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

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
    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (a[i] > a[i + 1])
            {
                int temp = a[i + 1];
                a[i + 1] = a[i];
                a[i] = temp;
            }
        }
        counter++;
    }
    cout << counter;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}