#include <iostream>
#include <string.h>

#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int main()
{
    fastio;
    short t;
    cin >> t;
    string s;
    while (t--)
    {
        getline(cin >> ws, s);
        if (s.size() > 10)
        {
            cout << s[0] << s.size() - 2 << s[s.size() - 1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }

    return 0;
}