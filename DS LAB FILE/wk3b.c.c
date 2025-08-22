#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack 
{
    int size;
    int top;
    char *s;
};

void create(struct stack *st, int size) 
{
    st->size = size;
    st->top = -1;
    st->s = (char *)malloc(st->size * sizeof(char));
}

void push(struct stack *st, char x) {
    if(st->top == st->size - 1) 
    {
        printf("Stack overflow\n");
    } 
    else 
    {
        st->top++;
        st->s[st->top] = x;
    }
}

char pop(struct stack *st) {
    char x = '\0';
    if(st->top == -1) 
    {
        printf("Stack underflow\n");
    } 
    else 
    {
        x = st->s[st->top];
        st->top--;
    }
    return x;
}

int isEmpty(struct stack *st) 
{
    return st->top == -1;
}

int isValidParentheses(char *expr) 
{
    int length = strlen(expr);
    struct stack st;
    create(&st, length);

    for(int i = 0; i < length; i++) 
    {
        if(expr[i] == '(' || expr[i] == '{' || expr[i] == '[') 
        {
            push(&st, expr[i]);
        } 
        else if(expr[i] == ')' || expr[i] == '}' || expr[i] == ']') 
        {
            if(isEmpty(&st)) 
            {
                return 0; 
            }
            char left = pop(&st);
            char right = expr[i];
            
             if(left=='(')
             {
                 if(right!=')')
                 {
                     return 0;
                 }
             }
             if(left=='[')
             {
                 if(right!=']')
                 {
                     return 0;
                 }
             }
             if(left=='{')
             {
                 if(right!='}')
                 {
                     return 0;
                 }
             }
        }
    }
    return isEmpty(&st); 
}

int main() 
{
    char expr[100];
    printf("Enter an expression with parentheses: ");
    scanf("%s", expr);

    if(isValidParentheses(expr)) 
    {
        printf("The parentheses are balanced.\n");
    } 
    else 
    {
        printf("The parentheses are not balanced.\n");
    }
    return 0;
}