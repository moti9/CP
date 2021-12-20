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
#define repi(i, b, a) for (int i = b - 1; i >= a; i--)

int main()
{

    int a, b, c;
    printf("Enter 3 sides\n");
    scanf("%d %d %d", &a, &b, &c);
    float s = (a + b + c) / 2.;
    float ar = s * (s - a) * (s - b) * (s - c);
    float area = sqrt(ar);
    printf("Area= %f", area);

    return 0;
}