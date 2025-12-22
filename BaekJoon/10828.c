#include <stdio.h>
#include <string.h>
#define Stack_size 100001

typedef struct {
int data[Stack_size];
int top;  
}stack;
int initStack(stack *s)
{
    s->top = -1;
}
int empty(stack *s)
{
    return s->top == -1;
}
int ckempty(stack *s)
{
if(empty(s)) return 1;
else return 0;
}
int full(stack *s)
{
    return s->top ==Stack_size-1;
}
int push(stack *s, int val)
{
    if(full(s)) return -1;
    s->data[++(s->top)] = val;
    return 1; 
}
int pop(stack *s)
{
    if(empty(s)) return -1;
    return s->data[(s->top)--];
}
int top(stack *s)
{
    if(empty(s)) return -1;
    return s->data[s->top];
}
int size(stack *s)
{
    return s->top + 1;
}
int main()
{
int N;
scanf("%d",&N);
char command[20];
stack s;
initStack(&s);
for(int i=0; i<N; i++)
{
    scanf("%s",command);
    if(strcmp(command,"push")==0)
    {
        int val;
        scanf("%d",&val);
        push(&s,val);
    }
    else if(strcmp(command,"pop")==0)
    {
        if(ckempty(&s)) printf("-1\n");
        else printf("%d\n",pop(&s));
    }
    else if(strcmp(command,"size")==0)
    {
        printf("%d\n",size(&s));
    }
    else if(strcmp(command,"empty")==0)
    {
        if(ckempty(&s)) printf("1\n");
        else printf("0\n");
    }
    else if(strcmp(command,"top")==0)
    {
        if(ckempty(&s)) printf("-1\n");
        else printf("%d\n",top(&s));
    }
}


    return 0;
}