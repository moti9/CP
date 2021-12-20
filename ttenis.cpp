#include <iostream>
#include <string.h>

using namespace std;
int main()
{   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   
    int t;
    cin >> t;
    while (t--)
    {
        string st;
        cin >> st;

        int c1 = 0, c0 = 0;
        for (int i = 0; i < st.size(); i++)
        {
            if (st[i] == '1')
            {
                c1++;
            }
            else if (st[i] == '0')
            {
                c0++;
            }
        }
        if (c1 >= 11 && c1 > c0)
        {
            cout << "WIN" << endl;
        }
        else
        {
            cout << "LOSE" << endl;
        }
    }

    return 0;
}