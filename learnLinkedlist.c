#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void insertHead(struct Node **head, int ndata)
{
    struct Node *nNode = (struct Node *)malloc(sizeof(struct Node));

    nNode->data = ndata;
    nNode->next = (*head);

    *head = nNode;
}

void insertAfter(struct Node *pNode, int ndata)
{
    if (pNode == NULL)
    {
        printf("You can't push\n");
        return;
    }
    struct Node *nNode = (struct Node *)malloc(sizeof(struct Node));
    nNode->data = ndata;
    nNode->next = pNode->next;
    pNode->next = nNode;
}

void insertEnd(struct Node **head, int ndata)
{
    struct Node *nNode = (struct Node *)malloc(sizeof(struct Node));

    struct Node *last = *head;
    nNode->data = ndata;
    nNode->next = NULL;

    if (*head == NULL)
    {
        *head = nNode;
        return;
    }
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = nNode;
    return;
}

void deleteNode(struct Node **head, int key)
{
    struct Node *temp = *head, *pNode;
    if (temp != NULL && temp->data == key)
    {
        *head = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != key)
    {
        pNode = temp;
        temp = temp->next;
    }
    if (temp == NULL)
        return;

    pNode->next = temp->next;
    free(temp);

    return;
}

void deletePos(struct Node **head, int pos)
{
    if (*head == NULL)
    {
        return;
    }
    struct Node *temp = *head;

    if (pos == 0)
    {
        *head = temp->next;
        free(temp);
        return;
    }
    for (int i = 0; temp != NULL && i < pos - 1; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL)
        return;

    struct Node *next = temp->next->next;
    free(temp->next);

    temp->next = next;
}

void deleteList(struct Node **head)
{
    struct Node *current, *next;
    current = (*head);

    while (current != NULL)
    {
        next = current->next;
        free(current);
        current->next = next;
    }
    *head = NULL;
}

int lengthList(struct Node *head)
{
    int ct = 0;
    while (head != NULL)
    {
        ct += 1;
        head = head->next;
    }
    return ct;
}

int searchKey(struct Node *head, int key)
{
    if (head == NULL)
        return 0;

    if (head->data == key)
        return 1;

    return searchKey(head->next, key);
}

int nthNode(struct Node *head, int index)
{
    struct Node *temp = head;
    int ct = 0;
    while (temp != NULL)
    {
        if (ct == index)
            return (temp->data);

        ct++;
        temp = temp->next;
    }

    // assert(0);
}

void display(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d->", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main()
{

    struct Node *head = NULL;
    head = (struct Node *)malloc(sizeof(struct Node));

    struct Node *second = NULL;
    second = (struct Node *)malloc(sizeof(struct Node));

    struct Node *third = NULL;
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;

    display(head);

    insertHead(&head, 96);
    insertHead(&head, 63);
    display(head);

    insertAfter(head, 85);
    insertAfter(third, 63);
    display(head);

    insertEnd(&head, 85);
    display(head);

    deleteNode(&head, 85);
    display(head);
    deleteNode(&head, 85);
    display(head);

    deletePos(&head, 4);
    display(head);

    // deleteList(&head);
    // display(head);

    printf("Length of linkedList %d\n", lengthList(head));
    printf("%d\n", searchKey(head, 63));
    printf("%dth node= %d\n", 4, nthNode(head, 4));

    // display(head);

    return 0;
}