#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char *operation;
    int num1, num2;
    operation = argv[1];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);

    //printf("Operation is %s\n", operation);
    //printf("Num1 is %d\n", num1);
    //printf("Num2 is %d\n", num2);
    
    // printf("Enter add for addition,subs for subtraction, mult for multiplication , div for dividion,mod for mod operation\n ");

    if (strcmp(operation, "add") == 0)
        printf("\"__%d__\" \n", num1 + num2);
    else if (strcmp(operation, "subs") == 0)
        printf("\"__%d__\" \n", num1 - num2);
    else if (strcmp(operation, "mult") == 0)
        printf("\"__%d__\" \n", num1 * num2);
    else if (strcmp(operation, "div") == 0)
        printf("\"__%d__\" \n", num1 / num2);
    else if (strcmp(operation, "mod") == 0)
        printf("\"__%d__\" \n", num1 % num2);

    return 0;
}