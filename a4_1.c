#include <stdio.h>
#include <stdlib.h>
#define ll long long

struct mobile
{
    char prodName[30];
    char prodcode[30];
    float prodPrice;
    float prodScrsize;
    char prodColor[30];
} mob[5];

int main()
{
    printf("Enter details of mobiles\n");
    for (int i = 0; i < 5; i++)
    {
        printf("{%d}.", i + 1);
        printf("Product name= ");
        fflush(stdin);
        fgets(mob[i].prodName, 30, stdin);
        printf("Product code= ");
        fflush(stdin);
        fgets(mob[i].prodcode, 30, stdin);
        printf("Product color= ");
        fflush(stdin);
        fgets(mob[i].prodColor, 30, stdin);
        printf("Product screen size= ");
        scanf("%f", &mob[i].prodScrsize);
        printf("Product price= ");
        scanf("%f", &mob[i].prodPrice);
    }
    printf("\nDetails of mobile's product: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("[%d].", i + 1);
        printf("Product name= %s", mob[i].prodName);
        printf("Product code= %s", mob[i].prodcode);
        printf("Product color= %s", mob[i].prodColor);
        printf("Product screen size= %.2f\n", mob[i].prodScrsize);
        printf("Product price= %.2f\n", mob[i].prodPrice);
        printf("\n");
    }

    return 0;
}