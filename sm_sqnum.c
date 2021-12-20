#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
#include <complex.h>
#define M 1e9 + 7
#define lli long long int
#define li long int
#define rep(i, a, b) for (int i = a; i < b; i++)

int main()
{
    int n;
    scanf("%d", &n);
    li sum = 0;
    rep(i, 1, n + 1)
    {
        sum += pow(i, 2);
    }
    printf("%ld\n", sum);

    return 0;
}