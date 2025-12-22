#include <stdio.h>
typedef struct stack
{
    char data[51];
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
int full(stack *s)
{
    return s->top == 50;
}
int pop(stack *s)
{
if(empty(s)) return -1;
 s->data[(s->top)--];
 return 1;
}


int push(stack *s, char val)
{
   if(full(s)) return -1;
   s->data[++(s->top)] = val;
   return 1;
}
int isVps(stack *s, char *str)
{
   // 1. 문자열을 끝까지 순회하며 괄호 짝을 맞춘다.
   for(int i = 0; str[i] != '\0'; i++)
   {
    if(str[i] == '(')
    {
        push(s, str[i]);
    }
    else // ')'를 만났을 때
    {
        if(empty(s)) return 0; // ')'를 pop해야 하는데 스택이 비어있으면 실패
        pop(s);
    }
   }
   // 2. 모든 과정을 마쳤을 때, 스택이 비어있어야 성공이다.
   return empty(s); // empty(s)가 참이면 1(성공), 거짓이면 0(실패)을 반환
}

int main()
{
 int N;
 scanf("%d",&N);
   

 for(int i=0; i<N; i++)
 {
     stack s;
    initStack(&s);
    char str[51];
    scanf("%s",str);
    if(isVps(&s,str)) printf("YES\n");
    else printf("NO\n");
   
 }

    return 0;
}