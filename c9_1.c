#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    system("cls");
    char name[] = "Hello";
    int l = sizeof(name);
    for (int i = 0; i <= l + 10; i++)
    {
        printf("%d --- %c ---%p\n", i, name[i], &name[i]);
    }
    return 0;
}