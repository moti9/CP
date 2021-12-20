#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        char c[n + 1][m + 1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> c[i][j];
            }
        }
        int ct = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if ((c[i][j] == '.' && c[i][j + 1] == '#') || (c[i][j] == '#' && c[i][j + 1] == '.'))
                    ct++;
            }
        }
        cout << ct << "\n";
    }
}