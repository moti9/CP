#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
#include <complex.h>
#include <stdlib.h>
#define int long long

void d2bo(int n, int nb, int tb)
{
    int a[64], i;
    for (i = 0; n != 0; i++)
    {
        a[i] = n % tb;
        n /= tb;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%lld", a[j]);
    }
}
void d2h(int n, int nb, int tb)
{
    char c[64], i, temp;
    for (i = 0; n != 0; i++)
    {
        temp = n % tb;
        if (temp < 10)
            c[i] = temp + 48;
        else
            c[i] = temp + 55;
        n /= tb;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", c[j]);
    }
}
void b2hod(int n, int nb, int tb)
{
    int dec = 0, i = 0;

    while (n != 0)
    {
        dec += (n % 10) * pow(nb, i);
        i++;
        n /= 10;
    }
    if (tb == 10)
        printf("%lld", dec);
    else if (tb == 8)
        d2bo(dec, 10, tb);
    else if (tb == 16)
        d2h(dec, 10, tb);
}
void o2bdh(int n, int nb, int tb)
{
    int dec = 0, i = 0;
    while (n != 0)
    {
        dec += (n % 10) * pow(nb, i);
        i++;
        n /= 10;
    }
    if (tb == 10)
        printf("%lld", dec);
    else if (tb == 2)
        d2bo(dec, 10, tb);
    else if (tb == 16)
        d2h(dec, 10, tb);
}
void h2bdo(char n[], int nb, int tb)
{
    int dec = 0, i = 0;
    int len;
    for (len = 0; n[len] != '\0'; len++)
        ;
    len -= 1;
    for (i = 0; n[i] != '\0'; i++)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            dec += (n[i] - 48) * pow(16, len);
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            dec += (n[i] - 55) * pow(16, len);
        }
        len--;
    }
    if (tb == 10)
        printf("%d", dec);
    else if (tb == 2 || tb == 8)
        d2bo(dec, 10, tb);
}
void convert_num(char n[], int nb, int tb)
{
    if (nb != 16)
    {
        int x = atol(n);

        switch (nb)
        {
        case 10:
            if (tb == 2 || tb == 8)
                d2bo(x, nb, tb);
            else
                d2h(x, nb, tb);
            break;
        case 2:
            b2hod(x, nb, tb);
            break;
        case 8:
            o2bdh(x, nb, tb);
            break;

        default:
            break;
        }
    }
    else
        h2bdo(n, nb, tb);
}

int main()
{
    system("cls");
    char n[16];
    int nb, tb;
    printf("Enter required value\n");
    gets(n);
    printf("Enter Native base\n");
    scanf("%lld", &nb);
    printf("Enter tranfer base\n");
    scanf("%lld", &tb);
    convert_num(n, nb, tb);
    return 0;
}