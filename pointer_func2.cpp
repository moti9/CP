#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
// void swapfunc(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
void swapfunc(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    fastio();
    int a = 63;
    int b = 81;
    // swapfunc(&a, &b);///81 63
    int *aptr = &a;
    int *bptr = &b;
    swapfunc(aptr, bptr);
    cout << a << " " << b << "\n";

    return 0;
}