#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int val;
    struct node *link;
} _node;
_node *start = NULL;

void printlinkedlist()
{
    _node *temp;
    if (start == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        temp = start;
        while (temp != NULL)
        {
            printf("%d->", temp->val);
            temp = temp->link;
        }
        printf("NULL\n");
    }
}

void insertatFirst()
{
    int data;
    _node *temp;
    temp = malloc(sizeof(struct node));
    printf("Enter number to be inserted\n");
    scanf("%d", &data);
    temp->val = data;
    temp->link = start;
    start = temp;
}
void insertatLast()
{
    int data;
    _node *temp, *head;
    temp = malloc(sizeof(struct node));
    printf("Enter number to be inserted\n");
    scanf("%d", &data);
    temp->link = 0;
    temp->val = data;
    head = start;
    while (head->link != NULL)
    {
        head = head->link;
    }
    head->link = temp;
}
void insertatPos()
{
    _node *temp, *newnode;
    int pos, data, i = 1;
    newnode = malloc(sizeof(struct node));
    printf("Enter the index after which the element will be inserted\n");
    scanf("%d", &pos);
    printf("Enter the data to be inserted\n");
    scanf("%d", &data);
    temp = start;
    newnode->val = data;
    newnode->link = 0;
    while (i < pos + 1)
    {
        temp = temp->link;
        i++;
    }
    newnode->link = temp->link;
    temp->link = newnode;
}

int main()
{
    int c;
    while (1)
    {
        printf("1.To see list\n");
        printf("2.For insertion at starting\n");
        printf("3.For insertion at end\n");
        printf("4.Foe insertion at any position\n");
        printf("5.EXIT\n");
        printf("Enter choice\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printlinkedlist();
            break;
        case 2:
            insertatFirst();
            printlinkedlist();
            break;
        case 3:
            insertatLast();
            printlinkedlist();
            break;
        case 4:
            insertatPos();
            printlinkedlist();
            break;
        case 5:
            return 0;
        default:
            printf("Invalid Choice\n");
        }
    }
}