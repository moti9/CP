#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int postfix(char *exp);
void prefix(char *exp);
//stack type
struct stk
{
    int top;
    unsigned longint;
    int *array;
};
//stack operations
struct stk *createstk(unsigned longint)
{
    struct stk *stk = (struct stk *)malloc(sizeof(struct stk));

    if (!stk)
        return NULL;

    stk->longint = longint;
    stk->top = -1;
    stk->array = (int *)malloc(stk->longint * sizeof(int));
    return stk;
}
//When stack is empty
int empty(struct stk *stk)
{
    return stk->top == -1;
}
//return top
char peek(struct stk *stk)
{
    return stk->array[stk->top];
}
//remove an item and decrease top by 1
char pop(struct stk *stk)
{
    if (!empty(stk))
        return stk->array[stk->top--];
}
//insert value and increase top by 1
char push(struct stk *stk, char o)
{
    stk->array[++stk->top] = o;
}
//funcn to check if the character is an operator
int operator(char s)
{
    if (s == '+' || s == '-')
        return 1;
    else if (s == '*' || s == '/')
        return 2;
    else if (s == '^')
        return 3;
    else
        return -1;
} //higher order of preference==higher returned value

//funcn to check if the character is an operand
int operand(char s)
{
    return (s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z');
}

//infix to postfix
int postfix(char *exp)
{
    int i, j;
    struct stk *stk = createstk(strlen(exp)); //for safety, stack size==exp size
    for (i = 0, j = -1; exp[i]; ++i)
    {
        //if scanned item is operand, adding it to output
        if (operand(exp[i]))
            exp[++j] = exp[i];
        //if '(' is scanned, add it to the stack
        else if (exp[i] == '(')
            push(stk, exp[i]);
        //if ')' is scanned, pop out the operators until '('
        else if (exp[i] == ')')
        {
            while (!empty(stk) && peek(stk) != '(')
                exp[++j] = pop(stk);
            if (!empty(stk) && peek(stk) != '(')
                return -1;
            else
                pop(stk);
        }
        else //operator is scanned
        {
            while (!empty(stk) && operator(exp[i]) <= operator(peek(stk)))
                exp[++j] = pop(stk);
            push(stk, exp[i]);
        }
    }
    while (!empty(stk)) //pop all the operators after all operands are scanned
        exp[++j] = pop(stk);

    exp[++j] = '\0';
}
// algo for prefix
// first we need to reverse the given expression, with '(' changing into ')' and vice versa
// then we need to reverse the postfix expression obtained from the above expression
// inorder to get the prefix expression
void rev(char *exp)
{
    int size = strlen(exp);
    int j = size, i = 0;
    char temp[size];

    temp[j--] = '\0';
    while (exp[i] != '\0')
    {
        temp[j] = exp[i];
        j--;
        i++;
    }
    strcpy(exp, temp);
}
void parentheses(char *exp)
{
    int i = 0;
    while (exp[i] != '\0')
    {
        if (exp[i] == '(')
            exp[i] = ')';
        else if (exp[i] == ')')
            exp[i] = '(';
        i++;
    }
}
void prefix(char *exp)
{
    int size = strlen(exp);
    rev(exp);
    parentheses(exp);
    postfix(exp);
    rev(exp);
    printf("PREFIX Expression: %s\n", exp);
}
int main()
{
    char exp[100];
    printf("INFIX Expression: ");
    scanf("%s", exp);
    postfix(exp);
    printf("POSTFIX Expression: %s\n", exp);
    prefix(exp);
    return 0;
}