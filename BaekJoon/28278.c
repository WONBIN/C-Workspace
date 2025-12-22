#include <stdio.h>
#define Top_stack 1000000
typedef struct {
    int data[10000001];
    int top;
}stack;

void initStack(stack *s)
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
    return s->top == Top_stack;
}
int push(stack *s, int val)
{
    if(full(s)) return -1;
    s->data[++(s->top)] = val;
    return 1; // 근데 이건 왜하는걸까? 
}
int pop(stack *s)
{
if(empty(s)) return -1;
return s->data[(s->top)--];      
}
int peek(stack *s)
{
    if(ckempty(s)) return -1;
    return s->data[s->top];
}
int size(stack *s)
{
    return s->top + 1;
}
stack s;
int main()
{
 
    
    initStack(&s);
    int N;
    scanf("%d",&N);

    for(int i=0; i<N; i++)
    {
    int num;
    scanf("%d",&num);
    int x;
    if(num == 1)
    {
        scanf("%d",&x);
        push(&s,x);
    }
    else if(num == 2)
    {
        printf("%d\n",pop(&s));
    }
    else if(num == 3)
    {
     printf("%d\n",size(&s));   
    }
    else if(num == 4)
    {
        printf("%d\n",ckempty(&s));
    }
    else if(num == 5)
    {
        printf("%d\n",peek(&s));
    }
/*
    switch(num)
    {
        
        case 1:
            scanf("%d",&x);
            push(&s,x);
            break;
        case 2:
            pop(&s);
            break;
        case 3:
            size(&s);
            break;
        case 4: 
            ckempty(&s);
            break;
        case 5:
            peek(&s);
            break;     
    }
*/
    }


    return 0;
}