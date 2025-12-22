#include <stdio.h>
#include <stdlib.h>

typedef struct josephus
{
int num;
struct josephus *next;
}josephus;

int main()
{
int N;
int order;

scanf("%d %d",&N,&order);

josephus *arr = (josephus*)malloc(sizeof(josephus)*N);
for(int i=0; i<N-1; i++)
{
    arr[i].num = i+1;
    arr[i].next = &arr[i+1];
}    
arr[N-1].num = N;
arr[N-1].next = &arr[0];

josephus *cur = &arr[0];
josephus *prev = &arr[N-1];
printf("<");
while(cur!=prev)
{
    for(int i=0; i<order-1; i++)
    {
        prev = cur; // cur가 이동하기 전에 현재 위치르 prev에 저장해둠
        cur = cur->next; 
    }
    printf("%d, ",cur->num);
    prev->next = cur->next;
    cur = prev->next;
}
printf("%d>\n",cur->num);
    
    free(arr);
    return 0;
}