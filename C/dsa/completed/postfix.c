#include <stdio.h>
#include <stdlib.h>

// MACRO DEFINITIONS
#define ITEM char
#define N 100
typedef struct
{
	int tos;
	ITEM arr[N];
} stack;

// functions
void init(stack *);
int isempty(stack *);
int isfull(stack *);
int pop(stack *);
void push(stack *, int);
int peek(stack *);
char *convert(char ip[]);
int pred(char ch);
float evaluate(char arr[]);
float calculate(float l, float r, char op);

// CONVERTION

int main()
{
	float ev;
	stack p;
	char ip[100], *op, tmp;
	ITEM d;
	printf("Enter the arithmatic expression: ");
	fgets(ip, 100, stdin);
	printf("The postfix form is: \n");
	op = convert(ip);
	puts(op);
	printf("\nThe evaluation: %f\n", evaluate(op));
	return 0;
}

// only stack
void init(stack *p)
{
	p->tos = -1;
}

int isempty(stack *ar)
{
	if (ar->tos == -1)
		return 1;
	else
		return 0;
}

int isfull(stack *f)
{
	if (f->tos == N - 1)
		return 1;
	else
		return 0;
}

int peek(stack *x)
{
	return x->arr[x->tos];
}

int pop(stack *q)
{
	int tmp;
	if (isempty(q) == 1)
		return 0;
	tmp = q->arr[q->tos];
	q->tos--;
	return tmp;
}
	

void push(stack *r, int ip)
{
	if (isfull(r) == 1)
		return;
	else
	{
		r->tos++;
		r->arr[r->tos] = ip;
	}
}
// stack part ends

int pred(char ch)
{ //  CHECKING PRECEDENCE
	if (ch == '*' || ch == '/')
		return 3;
	else if (ch == '+' || ch == '-')
		return 2;
	else
		return 1;
}

char *convert(char ip[])
{ // ARRAY CONVERSION TO POSTFIX FORM
	int i, j, tmp;
	stack s;
	static char op[100];
	init(&s);
	for (i = 0, j = 0; ip[i] != '\0'; i++)
	{
		if (ip[i] >= '0' && ip[i] <= '9')
			op[j++] = ip[i];
		else
		{
			if (ip[i] == '(')
				push(&s, ip[i]);
			else if (ip[i] == ')')
			{
				do
				{
					tmp = pop(&s);
					if (tmp != '(')
						op[j++] = tmp;
				} while (tmp != '(');
			}
			else
			{
				while (!isempty(&s) && pred(peek(&s)) >= pred(ip[i]))
					op[j++] = pop(&s);
				push(&s, ip[i]);
			}
		}
	}
	while (!isempty(&s))
		op[j++] = pop(&s);
	op[j] = '\0';
	return op;
}

// EVALUATION OF POSTFIX EXPRESSION
float evaluate(char arr[])
{
	int r, l, res;
	stack s;
	init(&s);
	for (int i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] >= '0' && arr[i] <= '9')
			push(&s, arr[i] - 48);
		else
		{
			r = pop(&s);
			l = pop(&s);
			res = calculate(l, r, arr[i]);
			push(&s, res);
		}
	}
	return pop(&s);
}

float calculate(float l, float r, char op)
{
	if (op=='-')
		return l-r;
	else if (op=='+')
		return l+r;
	else if(op=='*')
		return l*r;
	else if(op=='/')
		return l/r;
}
