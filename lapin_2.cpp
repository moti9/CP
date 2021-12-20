#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    while (t--)
    {
        int i;
        cin >> s;
        getchar();
        if (s.length() % 2 == 0)
        {
            sort(s.begin(), s.end());
            for (i = 0; i < s.length(); i += 2)
            {
                if (s[i] == s[i + 1])
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
        }
        else if (s.length() % 2 != 0)
        {
            s.erase(s.length() / 2, 1);
            sort(s.begin(), s.end());
            for (i = 0; i < s.length(); i += 2)
            {
                if (s[i] == s[i + 1])
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
        }
        if (i == s.length())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}