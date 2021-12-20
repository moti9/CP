#include <stdio.h>
#include <stdlib.h>
#define ll long long
union stdn
{
    int roll;
    char name[20];
    float age;
} student;

struct student
{
    int roll;
    char name[20];
    float age;
} students;
int main()
{
    system("cls");
    struct student a;
    printf("%ld\n", sizeof(a));
    printf("%ld\n", sizeof(students.roll));
    printf("%ld\n", sizeof(students.name));
    printf("%ld\n", sizeof(students.age));

    printf("%ld\n", sizeof(student));
    printf("%ld\n", sizeof(student.roll));
    printf("%ld\n", sizeof(student.name));
    printf("%ld\n", sizeof(student.age));

    return 0;
}