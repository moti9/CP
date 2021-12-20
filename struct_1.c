#include <stdio.h>
#include <stdlib.h>

struct aadhar
{
    int dob;
    char name[20];
    float height;
} person1, person2;

int main()
{
    system("cls");
    printf("Name :: ");
    fgets(person1.name, 20, stdin);
    printf("DOB :: ");
    scanf("%d", &person1.dob);
    printf("Height :: ");
    scanf("%f", &person1.height);

    printf("Name :: ");
    fgets(person2.name, 20, stdin);
    printf("DOB :: ");
    scanf("%d", &person2.dob);
    printf("Height :: ");
    scanf("%f", &person2.height);

    printf("\n\nName : %s  DOB : %d  Height : %f", person1.name, person1.dob, person1.height);
    printf("\n\nName : %s  DOB : %d  Height : %f", person2.name, person2.dob, person2.height);

    return 0;
}