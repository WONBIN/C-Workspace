#include <stdio.h>
#define stack_size 10
typedef struct stack
{
    long long int arr[11];
    int top; // 왜 stack *s 가 아니지? 

}stack;

int initstack(stack *s)
{
    return s->top = -1;
}
int empty(stack *s)
{
    return s->top == -1;
    // return s->top == -1 이건 s->top 의 값이 -1이 실제로 맞는지 비교를 하는 뜻임. 
    // 만약 s->top == -1이면 1을 반환할것이고 , 그렇지 않으면 return 0을 반환할 것임 
}
int full(stack *s)
{
    return s->top == stack_size;
}
int push(stack *s, int val)
{
    if(full(s)) return -1; // if 문은 0이 아닌 모든 값을 참으로 반환함 . 
    s->arr[++(s->top)] = val;
    return 1; // 정상적으로 동작이 되었음을 알려줄 수 있는 코드 
    //근데 만약 void 함수로 바꾼다면 stack이 꽉 찼을 때 알려 줄 수 있는 방법이 없다.
    //void push(stack *s, int val){if(full(s)) return ; s->arr[++(s->top)] = val;}  
    
}
int pop(stack *s)
{
    if(empty(s)) return -1;
    return s->arr[(s->top)--];
    // push
}
int sum(stack *s)
{
    int sum = 0;
    while(!empty(s))
    {
        sum+=pop(s);
    }
    return sum;
}
stack s;
int main()
{
 long long int K;
 scanf("%lld",&K);
 
 initstack(&s);
 for(int i=0; i<K; i++)
 {
    int num;
    scanf("%d",&num);
    if(num != 0)
    {
        push(&s,num);
    }
    else
    {
        pop(&s);
    }
 }
 //printf("%d\n",sum(&s));

    return 0;
}
    