#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int unique(int a[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum ^= a[i];
    }
    return xorsum;
}
int setBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
void unique2(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum ^= arr[i];
    }
    int temp = xorsum;
    int setbit = 0;
    int pos = 0;
    while (setbit != 1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum >>= 1;
    }
    int newxor = 0;
    for (int i = 0; i < n; i++)
    {
        if (setBit(arr[i], pos - 1))
        {
            newxor ^= arr[i];
        }
    }
    cout << (newxor ^ temp) << "\n";
    cout << newxor << "\n";
}
bool getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
int set_Bit(int n, int pos)
{
    return (n | (1 << pos));
}
int unique3(int a[], int n)
{
    int result = 0;
    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (getBit(a[j], i))
            {
                sum++;
            }
        }
        if (sum % 3 != 0)
        {
            result = set_Bit(result, i);
        }
    }
    return result;
}
int main()
{
    fastio();
    // int arr[] = {1, 2, 3, 4, 1, 2, 3};
    // cout << unique(arr, 7) << "\n";

    // int a[] = {1, 2, 3, 1, 2, 3, 7, 5};
    // unique2(a, 8);

    int a[] = {1, 2, 3, 1, 2, 3, 4, 1, 2, 3};
    cout << unique3(a, 10) << "\n";
    return 0;
}