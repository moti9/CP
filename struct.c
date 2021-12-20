#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct mv
{
    char name[20];
    float height;
    long long aadhar;
    char dob[11];
} p1, p2;

int main()
{
    system("cls");
    printf("Enter the name of first person\n");
    fgets(p1.name, 20, stdin);
    // gets(p1.name);
    printf("Enter the height of person\n");
    scanf("%f", &p1.height);
    printf("Enter the aadhar number of person\n");
    scanf("%lld", &p1.aadhar);
    printf("Enter the date of birth of that person\n");
    // fgets(p1.dob, 11, stdin);
    scanf("%s", &p1.dob);

    printf("Enter the name of second person\n");
    getchar();
    fgets(p2.name, 20, stdin);
    // scanf("%s", &p2.name);
    // gets(p2.name);
    printf("Enter the height of person\n");
    scanf("%f", &p2.height);
    printf("Enter the aadhar number of person\n");
    scanf("%lld", &p2.aadhar);
    printf("Enter the date of birth of that person\n");
    // fgets(p2.dob, 11, stdin);
    scanf("%s", &p2.dob);

    printf("The details of first person\n");
    printf("Name: %s\nAadhar Number: %lld\nDOB: %s\nHeight: %.3f\n", p1.name, p1.aadhar, p1.dob, p1.height);

    printf("The details of second person\n");
    printf("Name: %s\nAadhar Number: %lld\nDOB: %s\nHeight: %.3f\n", p2.name, p2.aadhar, p2.dob, p2.height);
    return 0;
}