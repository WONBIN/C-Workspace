#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define queue_size 20000000
typedef struct queue
{
    int data[queue_size];
    int front;
    int rear;
}queue;
int initqueue(queue *q)
{
    q->front = -1;
    q->rear = -1;
}
int full(queue *q)
{
    return q->rear == queue_size - 1;
}
int empty(queue *q)
{
    return q->front == -1; 
}
int enqueue(queue *q,int val)
{
    if(full(q)) return -1;
    q->data[++(q->rear)] = val;
    if(q->front == -1) q->front = 0;
    return 1;
}
void dequeue(queue *q)
{
    if(empty(q)) return;
    printf("%d, ",q->data[(q->front)++]);
}
int queueback(queue *q)
{
    if(empty(q)) return -1;
    q->data[++(q->rear)] = q->data[(q->front)++];
    return 1;
}
queue q;
int main()
{
    long int N;
    long int K;
    scanf("%ld %ld",&N,&K);
    initqueue(&q);
    for(int i=0; i<N-1; i++)
    {
        enqueue(&q,i+1);
    }
    enqueue(&q,N);
    printf("<");
  while(q.rear-q.front + 1 > 1)
  {
    for(int i=0; i<K-1; i++)
    {
        queueback(&q);
    }
    dequeue(&q);
  }
  //
  printf("%d>\n",q.data[q.front]);

    return 0;
}

