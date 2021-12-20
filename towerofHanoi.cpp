#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
void toweroh(int n, char src, char dest, char helper)
{
    if (n == 0)
        return;
    toweroh(n - 1, src, helper, dest);
    cout << "Move from " << src << " to " << dest << endl;
    toweroh(n - 1, helper, dest, src);
}
int main()
{
    fastio();
    toweroh(3, 'A', 'C', 'B');

    return 0;
}