#include <stdio.h>
// *#include <stdio.h>
// *// #include<stdbool.h> Not use this otherwise it will be clash with define bool
// *
// *#define bool int
// *#define true 1
// *#define false 0
// *int main(void)
// *{
// *    bool x = true;  /* Equivalent to int x = 1; */
// *    bool y = false; /* Equivalent to int y = 0; */
// *    if (x)          /* Functionally equivalent to if (x != 0) or if (x != false) */
// *    {
// *        puts("This will print!");
// *    }
// *    if (!y) /* Functionally equivalent to if (y == 0) or if (y == false) */
// *    {
// *        puts("This will also print!");
// *    }
// *}

// int main(void)
// {
//     _Bool x = 1;
//     _Bool y = 0;
//     if (x) /* Equivalent to if (x == 1) */
//     {
//         puts("This will print!");
//     }
//     if (!y) /* Equivalent to if (y == 0) */
//     {
//         puts("This will also print!");
//     }
// }

// *int main(int argc, char *argv[])
// *{
// *    if (argc % 4)
// *    {
// *        puts("arguments number is not divisible by 4");
// *    }
// *    else
// *    {
// *        puts("argument number is divisible by 4");
// *    }
// *    return 0;
// *}

//
//#include <stdlib.h>
//int main(void)
//{
//    int n =.5;
//    double *A = malloc(n * sizeof *A);
//    if (!A)
//    {
//        perror("allocation problems");
//        exit(EXIT_FAILURE);
//    }
//}