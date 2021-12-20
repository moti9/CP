#include <iostream>
#include <math.h>

using namespace std;

void decTobin(int n)
{
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int dig = n & 1;
        ans += (dig * pow(10, i));
        n = n >> 1;
        i += 1;
    }
    cout << ans;
}
void binTodec(int n)
{
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int dig = n % 10;
        ans += (dig * pow(2, i));
        i += 1;
        n /= 10;
    }
    cout << ans;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    binTodec(n);
    return 0;
}
