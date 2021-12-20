#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, w, T, l;
        cin >> x >> y;
        if (y*2 > x )
        {
            if (y >= x)
            {
                T = x;
                l = (y - x);
                w = 0;
            }
            else
            {
                w = (x % y);
                T = (x - y);
            }
            cout << w << endl;
        }
        
    }
    return 0;
}