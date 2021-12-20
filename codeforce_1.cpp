#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
void erase_ele(vector<int> x)
{
    int maxv = 0;
    int minv = 0;
    minv = *min(x.begin(), x.end());
    maxv = *max(x.begin(), x.end());
}

int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            v.push_back(a);
        }
    }

    return 0;
}
//incomplete stone game