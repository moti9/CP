#include <stdio.h>
void fun();
int main()
{
    int a[] = {26, 77, 86, 98, 100}, *ptr;
    ptr = a;
    fun(ptr);
    return 0;
}
void fun(int *add)
{
    for (int i = 0; i < 5; i++)
        printf(" %p\n", (add + i));
}