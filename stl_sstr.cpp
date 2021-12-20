#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    // cout << "Enter value for testcase:\n";
    cin >> t;
    while (t--)
    {
        int n;
        // cout << "Enter required number od words\n";
        cin >> n;
        string st;
        vector<string> vs;
        // cout << "Enter required words\n";
        for (int i = 0; i < n; i++)
        {
            cin >> st;
            vs.push_back(st);
        }
        sort(vs.begin(), vs.end());
        cout << endl;
        // cout << "Words in Lexiographical order\n";
        for (auto x : vs)
        {
            cout << x << endl;
        }
    }

    return 0;
}