#include <iostream>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int main()
{
    fastio;
    int w, v = 0;
    cin >> w;

    for (int i = 1; i <= w; i++)
    {
        if (i % 2 == 0 && (w - i) % 2 == 0 && w > 2)
        {
            v = 1;
        }
    }
    if (v == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;

}