#include <stdio.h>
#define Max_Size 500001
typedef struct queue
{
    long long int data[Max_Size];
    int front;
    int rear;
}queue;
void initqueue(queue *q)
{
    q->front = q->rear = -1;
}
int empty(queue *q)
{
    return q->front == -1 || q->front > q->rear;
}
int full(queue *q)
{
  return q->rear == Max_Size - 1;
}
 int enqueue(queue *q, long long int val)
{
    if(full(q)) return -1;
    q->data[++(q->rear)] = val;
    if(q->front == -1) q->front = 0;
    return 1;
}
 int dequeue(queue *q)
{
    if(empty(q)) return -1;
    q->data[(q->front)++];
    return 1;
}
int pushback(queue *q)
{
    if(empty(q)) return -1;
    q->data[++(q->rear)] = q->data[(q->front)++];
    return 1;
}

long long int N;
queue q;
int main()
{
    scanf("%d",&N);
    initqueue(&q);
    for(long long int i=0; i<N; i++)
    {
     enqueue(&q,i+1);
    }
    while(q.rear - q.front + 1 > 1)
    {
        dequeue(&q);
        pushback(&q);
    }
    printf("%lld\n",q.data[q.front]);
    

    return 0;
}