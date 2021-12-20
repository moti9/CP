#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int getbit(int n, int position)
{
    return ((n & (1 << position)) != 0);
}
int setbit(int n, int pos)
{
    return (n | (1 << pos));
}
int clearbit(int n, int pos)
{
    int mask = ~(1 << pos);
    return (n & mask);
}
int updatebit(int n, int pos, int value)
{
    int mask = ~(1 << pos);
    n &= mask;
    return (n | (value << pos));
}
int main()
{
    fastio();
    // cout << getbit(-10, 5) << "\n";
    // cout << setbit(5, 1) << "\n";
    // cout << clearbit(5, 1) << "\n";
    cout << updatebit(5, 1, 1) << "\n";
    return 0;
}