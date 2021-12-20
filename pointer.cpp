#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int main()
{
    fastio();
    int a = 10;
    int *aptr = &a;
    cout << &a << "\n";
    cout << aptr << "\n";
    cout << *aptr << "\n";
    cout << ++a << "\n";
    aptr++;
    cout << aptr << "\n";
    cout << *aptr << "\n";
    cout << &a << "\n";
    return 0;
}