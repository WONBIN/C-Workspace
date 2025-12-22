#include <stdio.h>
#include <string.h>

#define Max_Size 2000001
//만약 MAX_SIZE를 2000000으로 하면 rear가 2000000이 되었을 때는 (즉 idx 가 1999999까지 찼을 때) is_Full이 true가 되버림.
typedef struct queue
{
    long long int data[Max_Size];
    int front;
    int rear;
}queue;
void init_queue(queue *q)
{
    q->rear = q->front = 0;    
}
int is_empty(queue *q)
{
     return q->front == q->rear;
}
int is_full(queue *q)
{
  return q->rear == Max_Size; // 0부터 시작했으니까 max_size가 되면 다 찬거임
}
int enqueue(queue *q, long long int val)
{
    if(is_full(q)) return -1;
    q->data[(q->rear)++] = val; //어차피 배열은 0부터 시작하니까 후위연산자 사용
    return 0;
}
long long int dequeue(queue *q)
{
    if(is_empty(q)) return -1;
    return q->data[(q->front)++]; // 얘를 print하고 내보내야하니까 후위연산자 사용
}
long long int front(queue *q)
{
    if(is_empty(q)) return -1;
    return q->data[q->front]; // 지금 제일 앞에 있는 놈 반환
}

long long int back(queue *q)
{
if(is_empty(q)) return -1;
return q->data[q->rear - 1]; // rear는 다음에 넣을 위치가 되므로 -1을 해줘야함
}
int size(queue *q)
{
 return q->rear - q->front; // rear는 다음에 넣을 위치의 idx가 되니까 그냥 빼줘도 개수가 반영됨
}

queue q;
int main()
{
long long int N;
scanf("%lld",&N);
init_queue(&q);
for(long long int i=0; i<N; i++)
{
    char command[100];
    scanf(" %s",command);
    if(strcmp(command,"push")==0)
    {
        long long int val;
        scanf(" %lld",&val);
        enqueue(&q,val);
    }
    else if(strcmp(command,"pop")==0)
    {
        if(is_empty(&q)) printf("-1\n");
        else printf("%lld\n",dequeue(&q));
    }
    else if(strcmp(command,"size")==0)
    {
        printf("%d\n",size(&q));
    }
    else if(strcmp(command,"empty")==0)
    {
        if(is_empty(&q)) printf("1\n");
        else printf("0\n");
    }
    else if(strcmp(command,"front")==0)
    {
        if(is_empty(&q)) printf("-1\n");
        else printf("%lld\n",front(&q));
    }
    else if(strcmp(command,"back")==0)
    {
        if(is_empty(&q))printf("-1\n");
        else printf("%lld\n",back(&q));
    }
}
    return 0;
}
//제출은 idx가 -1에서 시작하는 버전으로 했음.