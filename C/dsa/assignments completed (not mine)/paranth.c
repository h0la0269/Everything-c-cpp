#include <stdio.h>
#include <stdlib.h>

#define s 100

typedef struct
{
    char arr[s];
    int tos;
} stack;

void init(stack *pts)
{
    pts->tos = -1;
}

void push(stack *pts, char c)
{
    if (pts->tos == s - 1)
        return;
    pts->tos++;
    pts->arr[pts->tos] = c;
}

char pop(stack *pts)
{
    if (pts->tos == -1)
        return 0;
    return pts->arr[pts->tos--];
}

int match(char temp, char exp)
{
    if (temp == '[' && exp == ']')
        return 1;
    if (temp == '{' && exp == '}')
        return 1;
    if (temp == '(' && exp == ')')
        return 1;
    return 0;
}

int check(stack *pts, FILE *exp)
{
    char temp;
    char ch;
    while ((ch = fgetc(exp)) != EOF)
    {

        if (ch == '(' || ch == '{' || ch == '[')
            push(pts, ch);
        if (ch == ')' || ch == '}' || ch == ']')
        {
            if (pts->tos == -1)
                return 0;
            else
            {
                temp = pop(pts);
                if (!match(temp, ch))
                    return 0;
            }
        }
    }

    if (pts->tos == -1)
        return 1;
    else
        return 0;
}

int main()
{
    FILE *fp;
    stack S;
    init(&S);
    int c;
    fp = fopen("file_to_read.c", "r");
    c = check(&S, fp);
    if (c == 1)
        printf("Valid expression\n");
    else
        printf("\nInvalid expression\n");
    fclose(fp);

    return 0;
}