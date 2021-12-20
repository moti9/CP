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
            /* for(int i=0; i<n ;i++)
           {
               cout<<arr[i]<<" ";
           }*/
            //   cout<<"\n";
            ll sum0 = 0, sum1 = 0;
            for (ll i = 0; i < n; i++)
            {
                if (i >= 0 && i < n - 1)
                    sum0 += abs(arr[i] - arr[(n - 1) / 2]);
                if (i > 0 && i < n)
                    sum1 += abs(arr[i] - arr[(n + 1) / 2]);
            }
            ll temp = min(sum0, sum1);
            bool check = false;
            int i = 0, j = 1;
            ll mindif = 10000000000;

            while (i < n - 1 && j < n)
            {
                ll dif1 = arr[i] - arr[0];
                ll dif2 = arr[n - 1] - arr[j];
                //cout<<dif1<<" "<<dif2<<"\n";
                if (dif1 == dif2)
                {
                    check = true;
                    break;
                }
                else
                {
                    mindif = min(mindif, abs(dif1 - dif2));
                    //cout<<mindif<<" ";
                }
                i++;
                j++;
            }
            if (check == true)
                cout << 0 << "\n";
            else
            {
                if (arr[n - 2] == arr[n - 1] && n > 3)
                {
                    // mindif = min(mindif, arr[1] - arr[0]);
                    mindif = min(mindif, temp);
                    cout << mindif << "\n";
                }
                else
                    cout << mindif << "\n";
            }
        }
    }
    return 0;
}