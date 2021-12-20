#include <iostream>

using namespace std;
/*     BTUTE FORCE APPROACH          */
void primeFact(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            int ct = 0;
            while (n % i == 0)
            {
                ct++;
                n /= i;
            }
            cout << i << " ^ " << ct << "\n";
        }
    }
}
/*     OPTIMIZE APPROACH          */

void primeFactor(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            int ct = 0;
            while (n % i == 0)
                ct++, n /= i;
            cout << i << " ^ " << ct << "\n";
        }
    }
    if (n > 1)
        cout << n << " ^ " << 1 << "\n";
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << "BRUTE FORCE APPROACH\n";
    primeFact(n);
    cout << "OPTIMIZE APPROACH\n";
    primeFactor(n);
    return 0;
}
