/*
                      .....NUMBER THEORY.....                           

                      .....NUMBER THEORY.....           

                      .....NUMBER THEORY.....           

                      .....NUMBER THEORY.....           
                      */

/*
                                 Square Method
                                 O(sqrt(n))
                                 */

/*
#include <iostream>
using namespace std;

bool primarilyTest(int n)
{
    if (n == 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 1;
            break;
        }
    }
    return 0;
}
int main()
{
    int n;
    // cout<<"Enter number to check primarily= ";
    cin >> n;
    cout << primarilyTest(n);
    return 0;
}

*/

/*
                                       Sieve Method
                                       O(nlogn)
                                       */

/*
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool f[n + 1];
    for (int i = 2; i <= n; i++)
    {
        f[i] = 1;
    }
    f[0] = f[1] = 0;

    for (int i = 2; i <= n; i++)
    {
        if (f[i])
        {
            cout << i << ' ';
            for (int j = 2 * i; j <= n; j += i)
            {
                f[j] = 0;
            }
        }
    }

    return 0;
}

*/