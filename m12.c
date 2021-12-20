#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14
int Edistance(int x1, int y1, int x2, int y2)
{
    int a = pow(x1 - x2, 2);
    int b = pow(y1 - y2, 2);
    return sqrt(a + b);
}

float areaOfCircle(int x1, int y1, int x2, int y2, int (*distance)(int x1, int y1, int x2, int y2))
{
    return distance(x1, y1, x2, y2);
}
int main()
{
    int x1, y1, x2, y2;
    printf("Enter the value of x1 = ");
    scanf("%d", x1);
    printf("Enter the value of x1 = ");
    scanf("%d", y1);
    printf("Enter the value of x1 = ");
    scanf("%d", x2);
    printf("Enter the value of x1 = ");
    scanf("%d", y2);

    printf("The area of the Circle is %f", PI * pow(areaOfCircle(x1, y1, x2, y2),2));

    return 0;
}