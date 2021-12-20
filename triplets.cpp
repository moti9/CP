#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int main()
{
    fastio;
    int a[3], b[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> b[i];
    }
    int ca = 0, cb = 0;
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
        {
            ca++;
        }
        else if (b[i] > a[i])
        {
            cb++;
        }
    }
    cout << ca << " " << cb;

    return 0;
}