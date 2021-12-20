                        /*                                   LINKED LIST                          */
                        
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertHead(node *&head, int val)
{
    node *n = new node(val);

    n->next = head;
    head = n;
}

void insertTail(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL\n";
}

bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
            return 1;

        temp = temp->next;
    }
    return 0;
}

void deleteHead(node *&head)
{
    node *todelete = head;
    head = head->next;

    delete todelete;
}

void deletion(node *&head, int val)
{

    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        deleteHead(head);
        return;
    }

    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}

int main()
{
    node *head = NULL;
    insertTail(head, 63);
    insertTail(head, 85);
    // insertTail(head, 63);
    // insertTail(head, 85);
    // insertHead(head, 96);

    display(head);
    cout << search(head, 63) << endl;
    deletion(head, 85);
    display(head);
    deleteHead(head);
    display(head);

    return 0;
}