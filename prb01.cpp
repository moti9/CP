#include <iostream>

using namespace std;
int main()
{
    short t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        int count = 0;
        if (n==1)
        {
           cout << "no" << endl; 
          continue; 
        }
         
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
            else
            {
                continue;
            }
        }
        if (count == 0)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}