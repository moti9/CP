#include <iostream>

using namespace std;

void rev(int a[], int n)
{
    int i = 0, j = n - 1;
    while (i <= j)
    {
        swap(a[i], a[j]);
        i++;
        j--;
    }
}

void swapAdjacent(int a[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        int j = i + 1;
        if (j >= n)
            j = 0;
        swap(a[i], a[j]);
    }
}

int main(int argc, char const *argv[])
{
    /* code */

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // rev(a, n);
    swapAdjacent(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";

    return 0;
}
