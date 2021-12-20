// #include <stdio.h>
// #include <stdlib.h>

// typedef struct node
// {
//     int data;
//     Node *next;
// } Node;

// // Function to insert node
// void insert(Node **root, int item)
// {
//     Node *temp = new Node;
//     Node *ptr;
//     temp->data = item;
//     temp->next = NULL;

//     if (*root == NULL)
//         *root = temp;
//     else
//     {
//         ptr = *root;
//         while (ptr->next != NULL)
//             ptr = ptr->next;
//         ptr->next = temp;
//     }
// }

// void display(Node *root)
// {
//     while (root != NULL)
//     {
//         cout << root->data << " ";
//         root = root->next;
//     }
// }

// Node *arrayToList(int arr[], int n)
// {
//     Node *root = NULL;
//     for (int i = 0; i < n; i++)
//         insert(&root, arr[i]);
//     return root;
// }

// // Driver code
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     Node *root = arrayToList(arr, n);
//     display(root);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Node
// {
//     int data;
//     struct Node *next;
// } Node;

// void insertBeg(Node *current, int data);

// void printList(Node *current);
// int a[101];

// int main()
// {

//     Node *head = (Node *)malloc(sizeof(Node));
//     head->next = head;

//     int data = 0;
//     int usr_input = 0;
//     int i;
//     int m;

//     scanf("%d", &usr_input);

//     for (i = 0; i < usr_input; i++)
//     {

//         scanf("%d", &data);
//         insertBeg(head, data);
//     }

//     printf("The list is ");
//     printList(head);
//     printf("\n\n");

//     return 0;
// }

// void insertBeg(Node *current, int data)
// {
//     Node *head = current;

//     while (current->next != head)
//     {
//         current = current->next;
//     }
//     current->next = (Node *)malloc(sizeof(Node));
//     current = current->next;
//     current->data = data;
//     current->next = head;
// }

// void printList(Node *current)
// {

//     Node *head = current;
//     current = current->next;
//     while (current != head)
//     {
//         printf(" %d ", current->data);
//         current = current->next;
//     }
// }

// #include <stdio.h>
// #include<stdlib.h>

// struct node
// {
//     int nData;
//     struct node *pNode;
// };

// /*
// Function to create Linked List from Array elements.
// */
// struct node *createLL(int *nArr, int n)
// {
//     static int i = 0;
//     struct node *t = NULL;
//     if (n == 0)
//         return NULL;
//     // Create New Node
//     t = (struct node *)malloc(sizeof(struct node *));
//     t->nData = nArr[i++];
//     t->pNode = createLL(nArr, --n);
//     return t;
// }

// void displayLL(struct node *t)
// {
//     while (t)
//     {
//         printf("%d ", t->nData);
//         t = t->pNode;
//     }
// }

// int main()
// {
//     int n = 0, i = 0, arr[100] = {0};
//     struct node *t = NULL;
//     printf("\nEnter the number of elements: ");
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//         scanf("%d", &arr[i]);

//     printf("\nCreate linked list from array");
//     t = createLL(arr, n);
//     printf("\nDisplay Linked List : \n");
//     if (t)
//         displayLL(t);

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int n;
//     printf("Enter number of elements\n");
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",arr[i]);

//     }
//     printf("The linked list is created\n");

    
//     return 0;
// }