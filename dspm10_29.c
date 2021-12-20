// #include <iostream.h>
#include <conio.h>
#include <stdio.h>
// #include <alloc.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *next;
} *start = NULL;

void main()
{
    clrscr();
    typedef struct node NODE;

    NODE *q, *p, *temp;
    int count = 0;
    char choice;

    do
    {
        p = (NODE *)malloc(sizeof(NODE));
        printf("ENter the data \n");
        scanf("%d", &p->num);
        if (p == NULL)
        {
            p->next = start;
            start = p;
        }
        else
        {
            q = start;
            while (q->next != NULL)
            {
                q = q->next;
            }
            p->next = q->next;
            q->next = p;
        }
        printf("Do you want to coninue(type y/n?)\n");
        scanf("%c", &choice);

    } while ((choice == 'y') || (choice == 'Y'));

    printf("\nThe complete linked list\n");
    while (temp != NULL)
    {
        printf("%d\n", temp->num);
        count++;
        temp = temp->next;
    }

    printf("Number of nodes in the list=%d", count);

    getch();
}