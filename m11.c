#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

void greetHelloAndExecute(int (*fptr)(int, int))
{
    printf("Hello User\n");
    printf("The sum of 63 and 81 is %d\n", fptr(63, 81));
}

void greetGmAndExecute(int (*fptr)(int, int))
{
    printf("Good Morning User\n");
    printf("The sum of 81 and 63 is %d\n", fptr(81, 63));
}

int main()
{
    int (*ptr)(int, int);
    ptr = sum;
    greetHelloAndExecute(ptr);

    return 0;
}