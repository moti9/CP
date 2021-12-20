#include <stdio.h>
 
int main()
{
    int n;
    scanf("%d", &n);
    int a1[2 * n];
    for (int i = 0; i < 2 * n; i++)
    {
        scanf("%d", &a1[i]);
    } // Enter Like 1,2,1,4,5,6
    int a2[2 * n];
    for (int j = 0; j < 2 * n; j++)
    {
        scanf("%d", &a2[j]);
    } //Enter like 1,4,2,5,1,6
    for (int j = 0; j < 2 * n; j++)
    {
        for (int i = 0; i < 2 * n; i++)
        {
            if (a2[j] == a1[i])
            {
                printf("%d ", a1[i]);
                break;
            }
            else if (a2[j] != a1[i] && i == j)
            {
                int temp = a2[j];
                a2[j] = a1[i];
                a1[i] = temp;
                printf("%d ", temp);
                break;
            }
        }
    }

    return 0;
}