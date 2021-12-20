#include <iostream>
#include <climits>
using namespace std;

void secondLarg(int arr[], int n, int larg)
{
    int larg2 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != larg)
        {
            if (larg2 == INT_MIN)
                larg2 = arr[i];
            else if (arr[i] > larg2)
                larg2 = arr[i];
        }
    }
    if (larg2 == INT_MIN)
        cout << "Impossible to find second largest\n";
    else
        cout << "Second largest element= " << larg2 << "\n";
}

int main()
{
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;
    int arr[n];
    cout << "Enter array's elements\n";
    int larg1 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > larg1)
            larg1 = arr[i];
    }
    if (n < 2)
        cout << "Opps! please insert valid input";
    secondLarg(arr, n, larg1);
}