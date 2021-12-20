// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// #define SIZE 100

// struct node
// {
//     char info;
//     struct node *link;
// } * start;

// void create(char[]);
// void display();
// void insert_end(char[]);

// int main()
// {

//     int i;
//     start = NULL;
//     char data[SIZE];

//     printf("Please enter a word: ");
//     fgets(data, SIZE, stdin);
//     create(data);

//     for (i = 0; i < 5; i++)
//     {
//         printf("Please enter a word: ");
//         fgets(data, SIZE, stdin);
//         insert_end(data);
//     }

//     display();

//     return 0;
// }

// void create(char data[])
// {
//     struct node *temp;
//     temp = (struct node *)malloc(sizeof(struct node));

//     if (start == NULL)
//     {
//         strcpy(temp->info, data);
//         temp->link = NULL;
//         start = temp;
//     }
// }

// void display()
// {
//     struct node *ptr;
//     ptr = start;

//     while (ptr != NULL)
//     {
//         printf("%c", ptr->info);
//         ptr = ptr->link;
//     }
// }

// void insert_end(char data[])
// {
//     struct node *ptr, *tempnode;
//     ptr = start;

//     while (1)
//     {
//         if (ptr->link != NULL)
//         {
//             ptr = ptr->link;
//         }
//         else
//             break;
//     }
//     tempnode = (struct node *)malloc(sizeof(struct node));
//     strcpy(tempnode->info, data);
//     tempnode->link = NULL;
//     ptr->link = tempnode;
// }
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    char value;
    struct node *next;
} Node;

typedef struct linkedlist
{
    struct node *head;
    struct node *tail;
    int length;
} sLL;
void insertBegin(struct linkedlist *list, char value);
void insertEnd(struct linkedlist *list, char value);
struct node *deleteBegin(struct linkedlist *list);
struct node *deleteEnd(struct linkedlist *list);
void printList(struct linkedlist *list);

int main()
{
    struct linkedlist *list = (struct linkedlist *)malloc(sizeof(struct linkedlist));
    list->head = NULL;
    list->tail = NULL;
    list->length = 10;
    insertEnd(list, 'M');
    printList(list);
    insertBegin(list, 'V');
    printList(list);
    deleteBegin(list);
    printList(list);
    deleteEnd(list);
    printList(list);

    return 0;
}
void insertBegin(struct linkedlist *list, char value)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    if (list->length == 0)
    {
        insertBegin(list, value);
    }
    else
    {
        newnode->value = value;
        newnode->next = list->head;
        list->head = newnode;
        list->length++;
        printf("Insertion completed at beginning\n");
    }
}

void insertEnd(struct linkedlist *list, char value)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    newnode->value = value;
    newnode->next = NULL;

    if (list->length == 0)
    {
        list->head = newnode;
        list->tail = newnode;
    }
    else
    {
        list->tail->next = newnode;
        list->tail = newnode;
    }
    list->length++;
    printf("Insertion completed at end\n");
}

struct node *deleteBegin(struct linkedlist *list)
{
    if (list->length == 0)
    {
        printf("List is empty\n");
        return NULL;
    }
    struct node *temp = list->head;
    if (list->length == 1)
    {
        list->head = NULL;
        list->tail = NULL;
    }
    else
    {
        list->head = list->head->next;
    }
    list->length--;
    return temp;
}

struct node *deleteEnd(struct linkedlist *list)
{
    if (list->length == 0)
    {
        printf("List is empty\n");
        return NULL;
    }
    struct node *otail;
    if (list->length == 1)
    {
        list->head = NULL;
        list->tail = NULL;
    }
    else
    {
        struct node *temp = list->head;
        while (temp->next != list->tail)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        list->tail = temp;
    }
    list->length--;
    return otail;
}

void printList(struct linkedlist *list)
{
    struct node *curnode = list->head;
    for (; curnode != NULL; curnode = curnode->next)
    {
        printf("%c->", curnode->value);
    }
    printf("NULL\n length= %d\n", list->length);
}