#include <iostream>
using namespace std;

int main()
{

    short int T, i;
    cin >> T;
    for (i = 1; i <= T; i++)
    {
        short int N, M, X, Y, k;
        cin >> N >> M;
        cin >> X >> Y;
        char c[M];
        short int sum1[N], sum2[N];
        for (k = 0; k < N; k++)
        {
            sum1[k] = 0;
            sum2[k] = 0;
            for (int j = 0; j < M; j++)
            {
                cin >> c[j];
                if (c[j] == 'F')
                {
                    sum1[k]++;
                }
                else if (c[j] == 'P')
                {
                    sum2[k]++;
                }
            }
            if (sum1[k] >= X || (sum2[k] >= Y && sum1[k] == (X - 1)))
            {
                sum1[k] = 1;
            }
            else
            {
                sum1[k] = 0;
            }
        }
        for (k = 0; k < N; k++)
        {
            cout << sum1[k];
        }
        cout << endl;
    }
    return 0;
}