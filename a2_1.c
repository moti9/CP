/*
1. Accept an integer NUM from the user and display its address and value using the
pointer methodologies.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    int *ptr;
    ptr = &num;
    printf("Value: %d ,Address: %x", *ptr, ptr);
    free(ptr);
    return 0;
}
