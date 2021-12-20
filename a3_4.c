#include <stdio.h>
#include <stdlib.h>
#define ll long long

struct data
{
    char studName[20];
    char enrollmentNo[10];
    ll regNo;
    char studSem[10];
    float studCGPA;

} stud[4];

int main()
{
    printf("Enter the details of the students.\n");
    printf("___________________________________\n");
    for (int i = 1; i <= 3; i++)
    {
        printf("(%d).", i);
        printf("Name:: ");
        fgets(stud[i].studName, 20, stdin);
        printf("Enrollment No.:: ");
        scanf("%s", &stud[i].enrollmentNo);
        printf("Registration No.:: ");
        scanf("%lld", &stud[i].regNo);
        printf("Semester:: ");
        scanf("%s", &stud[i].studSem);
        printf("Marks(Per/CGPA):: ");
        scanf("%f", &stud[i].studCGPA);
        printf("\n");
        getchar();
    }

    printf("\nDetails of the given students are as follow: \n");
    printf("_________________________________________________\n");
    for (int i = 1; i <= 3; i++)
    {
        printf("[%d].", i);
        printf("Name:: %s", stud[i].studName);
        printf("Enrollment No.:: %s", stud[i].enrollmentNo);
        printf("\nRegistration No.:: %lld", stud[i].regNo);
        printf("\nSemester:: %s", stud[i].studSem);
        printf("\nMarks(Per/CGPA):: %.2f", stud[i].studCGPA);
        printf("\n\n");
    }

    return 0;
}