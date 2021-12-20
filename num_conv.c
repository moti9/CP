#include <stdio.h>

void conversion(int n, int i, int f)
{

    int z = 1, arr[255], dec = 0;

    if (i != 10)
    {

        while (n > 0)
        {

            dec += (n % 10) * z;

            z *= i;

            n /= 10;
        }
    }

    else
    {

        dec = n;
    }

    if (f == 10)
    {

        printf("%d", dec);
    }

    else
    {

        int j = 0;

        while (dec > 0)
        {

            arr[j] = (dec % f);

            dec /= f;

            j++;
        }

        while (j--)
        {

            switch (arr[j])

            {

            case 10:

                printf("A");

                break;

            case 11:

                printf("B");

                break;

            case 12:

                printf("C");

                break;

            case 13:

                printf("D");

                break;

            case 14:

                printf("E");

                break;

            case 15:

                printf("F");

                break;

            default:

                printf("%d", arr[j]);

                break;
            }
        }
    }
}

int main()
{

    int i_base, f_base;

    int n;

    scanf("%d %d %d", &n, &i_base, &f_base);

    conversion(n, i_base, f_base);

    return 0;
}