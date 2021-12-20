#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
const ll mod = 1e9 + 7;
void sv(vector<int> &v)
{
    sort(v.begin(), v.end());
}
bool chprime(int sum)
{
    bool chc = false;
    for (int i = 2; i * i <= sum; i++)
    {
        if (sum % i == 0)
        {
            chc = true;
            break;
        }
    }
    return chc;
}
/*ll min(ll a , ll b)
{   ll res=0;
    a>=b ? res=b : res=a;
    return res;
}*/
int main()
{
    int test;
    cin >> test;
    while (test--)
    {

        ll n;
        cin >> n;
        ll arr[n] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n == 2)
        {
            cout << 0 << "\n";
        }
        else
        {
            sort(arr, arr + n);

            int i = 0, j = n - 2;
            ll mindif = INT_MAX;
            while (i < j)
            {
                ll dif1 = arr[i] - arr[0];
                ll dif2 = arr[n - 1] - arr[j];
                mindif = min(mindif, abs(dif1 - dif2));
                if (dif1 > dif2)
                    j--;
                else
                    i++;
            }
            cout << mindif << "\n";
        }
    }
    return 0;
}