#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *next;
} * Node;

struct node *tail, *p, *q, *store;

void createClist(int n);
void insertEnd(int num);
void printClist(int a);
void insertBegin(int num);
void deleteBegin();
void deleteEnd();

int main()
{
    int n, num1, a, insPlc;
    Node = NULL;
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createClist(n);
    a = 1;
    printClist(a);
    int choice;
    printf("\nChoices for different operation\n1.Insert at begin\n2.Insert at end\n3.Delete at begin\n4.Delete at end\nFor others enter except choice\n");
    do
    {
        printf("\n\nEnter your choice\n");

        scanf("%d", &choice);
        if (choice == 1)
        {
            printf(" Input data to be inserted at the beginning : ");
            scanf("%d", &num1);
            insertBegin(num1);
        }
        else if (choice == 2)
        {
            printf(" Input the data to be inserted : ");
            scanf("%d", &num1);
            insertEnd(num1);
        }
        else if (choice == 3)
        {
            deleteBegin();
        }

        else if (choice == 4)
        {
            deleteEnd();
        }
    } while (choice == 1 || choice == 2 || choice == 3 || choice == 4);

    a = 2;
    printClist(a);
    return 0;
}

void createClist(int n)
{
    int i, num;
    struct node *preptr, *newnode;
    if (n >= 1)
    {
        Node = (struct node *)malloc(sizeof(struct node));
        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        Node->num = num;
        Node->next = NULL;
        preptr = Node;
        for (i = 2; i <= n; i++)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            printf(" Input data for node %d : ", i);
            scanf("%d", &num);
            newnode->num = num;
            newnode->next = NULL;   // next address of new node set as NULL
            preptr->next = newnode; // previous node is linking with new node
            preptr = newnode;       // previous node is advanced
        }
        preptr->next = Node; //last node is linking with first node
    }
}

void insertEnd(int num1)
{
    int a;
    a = num1;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->num = a;
    p = Node;
    while (p->next != Node)
    {
        p = p->next;
    }
    p->next = temp;
    temp->next = Node;
}

void printClist(int m)
{
    struct node *tmp;
    int n = 1;
    if (Node == NULL)
    {
        printf(" No data found in the List yet.");
    }
    else
    {
        tmp = Node;
        if (m == 1)
        {
            printf("\n Data entered in the list are :\n");
        }
        else
        {
            printf("\n After insertion the new list are :\n");
        }
        do
        {
            printf(" Data %d = %d\n", n, tmp->num);

            tmp = tmp->next;
            n++;
        } while (tmp != Node);
    }
}

void insertBegin(int num)
{
    struct node *newnode, *curNode;
    if (Node == NULL)
    {
        printf(" No data found in the List yet.");
    }
    else
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->num = num;
        newnode->next = Node;
        curNode = Node;
        while (curNode->next != Node)
        {
            curNode = curNode->next;
        }
        curNode->next = newnode;
        Node = newnode;
    }
}

void deleteBegin()
{
    p = Node;
    while (p->next != Node)
    {
        p = p->next;
    }
    store = Node;
    Node = Node->next;
    printf("\n The deleted node is -> %d", store->num);
    p->next = Node;
    free(store);
}

void deleteEnd()
{
    p = Node;
    while (p->next != Node)
    {
        q = p;
        p = p->next;
    }
    q->next = Node;
    printf("\n The deleted node is : %d", p->num);
    free(p);
}
