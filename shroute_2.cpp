#include <bits/stdc++.h>
using namespace std;
#define llt long long int
int i, MD, MR, ML;

int main()
{
    llt t;
    // cout<<"Type No of TestCase: ";
    cin >> t;

    while (t--)
    {
        llt n, m;
        // cout<<"Type N and M : ";
        cin >> n >> m;

        int a[n];

        // cout<<"Type Train Station Status: ";

        for (i = 0; i < n; i++)
        {

            cin >> a[i];
        }

        int b[m];

        // cout<<"Destination City : ";

        for (i = 0; i < m; i++)
        {

            cin >> b[i];
        }

        MD = 1e6;
        map<int, int> mp;

        for (i = 0; i < n; i++)
        {
            if (i == 0)
            {
                mp[i] = 0;
            }

            else if (a[i] != 0)
            {
                mp[i] = 0;
            }

            else
            {
                mp[i] = MD;
            }
        }

        MR = -1;

        for (i = 0; i < n; i++)
        {

            if (a[i] == 1)
            {
                MR = i;
            }

            if (MR != -1)
            {

                if (a[i] == 0)
                {
                    mp[i] = min(mp[i], i - MR);
                }
            }
        }

        ML = -1;

        for (i = n; i >= 0; i--)
        {

            if (a[i] == 2)
            {
                ML = i;
            }

            if (ML != -1)
            {

                if (a[i] == 0)
                {
                    mp[i] = min(mp[i], ML - i);
                }
            }
        }

        // cout<<"\n";
        // cout<<"Output : "<<"\n";

        for (i = 0; i < m; i++)
        {

            int k = b[i] - 1;

            if (mp[k] != MD)
            {

                cout << mp[k] << " ";
            }

            else
            {
                cout << -1 << " ";
            }
        }

        cout << "\n";
    }
    return 0;
}