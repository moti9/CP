#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100

char stack[SIZE];
int top = -1;
char postfix[SIZE], prefix[SIZE];

void push(char ch)
{
    if (top >= SIZE - 1)
    {
        printf("\nStack Overflow");
    }
    else
    {
        top++;
        stack[top] = ch;
    }
}
char pop()
{
    char ch;
    if (top == -1)
    {
        printf("\nStack Underflow");
    }
    else
    {
        ch = stack[top];
        top--;
        return ch;
    }
}
int isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '^')
        return 1;
    else
        return 0;
}

int prcd(char ch)
{
    if (ch == '^')
    {
        return 3;
    }
    else if (ch == '*' || ch == '/' || ch == '%')
    {
        return 2;
    }
    else if (ch == '+' || ch == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

char *revStr(char ch[])
{
    int i, j;
    char temp[SIZE];
    for (i = strlen(ch) - 1, j = 0; i + 1 != 0; --i, ++j)
    {
        temp[j] = ch[i];
    }
    temp[j] = '\0';
    strcpy(ch, temp);
    return ch;
}

void infix2postfix(char infix[])
{
    char ch, temp;
    int i = 0, j = 0;
    push('(');
    strcat(infix, ")");
    temp = infix[i];
    while (temp != '\0')
    {
        if (temp == '(')
        {
            push(temp);
        }
        else if (isdigit(temp) || isalpha(temp))
        {
            postfix[j] = temp;
            j++;
        }
        else if (isOperator(temp) == 1)
        {
            ch = pop();
            while (isOperator(ch) == 1 && prcd(ch) >= prcd(temp))
            {
                postfix[j] = ch;
                j++;
                ch = pop();
            }
            push(ch);
            push(temp);
        }
        else if (temp == ')')
        {
            ch = pop();
            while (ch != '(')
            {
                postfix[j] = ch;
                j++;
                ch = pop();
            }
        }
        else
        {
            printf("\nInvalid Infix Expression\n");
            exit(1);
        }
        i++;
        temp = infix[i];
    }
    if (top > 0)
    {
        printf("\nInvalid Infix Expression\n");
        exit(1);
    }
    postfix[j] = '\0';
}
void infix2prefix(char infix[])
{
    revStr(infix);
    int len = strlen(infix);
    for (int i = 0; i < len; i++)
    {
        if (infix[i] = ')')
            infix[i] = '(';
        else if (infix[i] = '(')
            infix[i] = ')';
    }
    infix2postfix(infix);
    revStr(prefix);
}
int main()
{
    char infix[SIZE];
    printf("Enter infix expression: ");
    scanf("%s", infix);

    printf("Enter choice for conversion\n");
    printf("1.Infix to Postfix\n");
    printf("2.Infix to Prefix\n");
    printf("3.Both\n");
    int choice;
    scanf("%d", &choice);
    
    switch (choice)
    {
    case 1:
        infix2postfix(infix);
        printf("Postfix: %s\n", postfix);
        break;
    case 2:
        infix2prefix(infix);
        printf("Prefix: %s\n", prefix);
        break;
    case 3:
        infix2postfix(infix);
        printf("Postfix: %s\n", postfix);
        infix2prefix(infix);
        printf("Prefix: %s\n", prefix);
        break;

    default:
        printf("Please enter correct choice\n");
        break;
    }
    return 0;
}