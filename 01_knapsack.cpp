#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int knapsack(int v[], int w[], int n, int wc)
{
    if (n == 0 || wc == 0)
        return 0;
    if (w[n - 1] > wc)
        return knapsack(v, w, n - 1, wc);
    return max(knapsack(v, w, n - 1, wc - w[n - 1]) + v[n - 1], knapsack(v, w, n - 1, wc));
}

int main()
{
    fastio();
    int wt[] = {10, 20, 30};
    int value[] = {100, 50, 150};
    int wc = 50;
    cout << knapsack(value, wt, 3, wc) << "\n";
    return 0;
}