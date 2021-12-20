#include <iostream>

using namespace std;
int main()
{
    int t, si, ti, temp, win;
    int s = 0, s1 = 0, s2 = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> si >> ti;
        s1 += si;
        s2 += ti;
        if (s1 > s2)
        {
            temp = s1 - s2;
            if (temp > s)
            {
                s = temp;
                win = 1;
            }
        }
        else
        {
            temp = s2 - s1;
            if (temp > s)
            {
                s = temp;
                win = 2;
            }
        }
    }
        cout << win << " " << s << endl;

    return 0;
}