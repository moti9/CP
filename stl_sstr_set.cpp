#include <iostream>
#include <set>
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
        set<string> s;
        // cout << "Enter required words\n";
        for (int i = 0; i < n; i++)
        {
            cin >> st;
            s.insert(st);
        }

        cout << endl;
        // cout << "Words in Lexiographical order\n";
        for (auto x : s)
        {
            cout << x << endl;
        }
    }

    return 0;
}