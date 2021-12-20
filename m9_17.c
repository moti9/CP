#include <stdio.h>
#include <stdlib.h>
#define ll long long

int main()
{
    char *s =u8"%" "Hello"
              "World!!" "Moti";
    for (int i = 0; s[i]!='\0'; i++)
    {
        printf("%c ", s[i]);
    }

    // free(s);
    return 0;
}