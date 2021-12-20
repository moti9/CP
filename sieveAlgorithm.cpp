#include <iostream>

using namespace std;

bool isPrime[1000001];

void sieveAlgo()
{
    int maxN = 1000000;
    for (int i = 0; i <= maxN; i++)
    {
        isPrime[i] = true;
    }
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= maxN; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= maxN; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    sieveAlgo();
    if (isPrime[n])
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}