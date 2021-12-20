#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
#define llt long int
int i, MD, MR, ML;

int main()
{
    fastio;
    llt t;
    cin >> t;
    while (t--)
    {
     llt n, m;
     cin >> n >> m;
     int a[n];
     for (i = 0; i < n; i++)
     {
        cin >> a[i];
     }
       int b[m];
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
        else if (ML != -1)
        {
            if (a[i] == 0)
            {
                mp[i] = min(mp[i], ML - i);
            }
        }
       }
    for (i = 0; i < m; i++)
    {
       int k = b[i] - 1;
        if (mp[k] != MD)
        {
            cout << mp[k] << endl;
        }
        else
        {
            cout << -1 << " ";
        }
    }
}

   return 0;
}