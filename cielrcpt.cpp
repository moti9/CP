#include <bits/stdc++.h>

using namespace std;
int main()
{
    short t;
    cin >> t;
    int p;
    while (t--)
    {
        cin >> p;
        int count = 0;
        while (p > 0)
        {
            int lg = log2(p);
            if (lg <= 11)
            {
                count++;
                p -= pow(2, lg);
            }
            else
            {
                int x = lg / 11;
                int y = x * 11;
                p -= pow(2, y);
                count += x;
            }
        }
        cout << count << endl;
    }

    return 0;
}