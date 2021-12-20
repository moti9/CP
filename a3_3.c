#include <stdio.h>
#include <stdlib.h>
#define ll long long

struct employee
{
    char empId[20];
    float basic;
    char empName[25];
    float DA;
    float TA;
    float HRA;
    float Gross;
} emp;

int main()
{
    printf("\nEnter the required details of employee\n\n");
    printf("Id:: ");
    scanf("%s", &emp.empId);
    getchar();
    printf("Name:: ");
    fgets(emp.empName, 25, stdin);
    printf("Basic salary:: ");
    scanf("%f", &emp.basic);
    emp.DA = emp.basic * 25 / 100;
    emp.HRA = emp.basic * 15 / 100;
    emp.TA = emp.basic / 10;
    emp.Gross = emp.basic + emp.DA + emp.HRA + emp.TA;

    printf("\nDetails of employee is:\n\t----------\t\n");
    printf("Id:: %s\n", emp.empId);
    printf("Name:: %s", emp.empName);
    printf("Basic salary:: %.2f\n", emp.basic);
    printf("DA:: %.2f\n", emp.DA);
    printf("HRA:: %.2f\n", emp.HRA);
    printf("TA:: %.2f\n", emp.TA);
    printf("Gross salary:: %.2f\n", emp.Gross);
    printf("\n");

    return 0;
}