#include <iostream>
#include <algorithm>
using namespace std;

bool check_num(int arr[], int size, int idx, int num)
{
    sort(arr, arr + size);
    if (arr[idx + 1] == num)
        return 1;
    return 0;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (check_num(arr, n, i, arr[i]))
        {
            cout << arr[i] << "\n";
            return 0;
        }
    }
    cout << "Not repeating number found\n";
    return 0;
}