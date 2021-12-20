#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int main()
{
    fastio;
    int n;
    cin >> n;
    int a[n];
    int sum_b = 0, sum_g = 0;
    char ch;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i % 2 == 0)
        {
            sum_b += a[i];
        }
        else
        {
            sum_g += a[i];
        }
    }
    cin >> ch;
    if (ch == 'b')
    {
        cout << sum_b << endl;
    }
    else if (ch == 'g')
    {
        cout << sum_g << endl;
    }

    return 0;
}