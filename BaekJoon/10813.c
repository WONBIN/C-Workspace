#include <stdio.h>

int main()
{
int N,M;
int i,j;
scanf("%d",&N);
scanf("%d",&M);

int arr[100]={0,};

for(int i=1; i<=N; i++)
{
    arr[i] = i;
}

for(int h = 0; h<M; h++)
{
    scanf("%d",&i);
    scanf("%d",&j);

    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
    


for(int b = 1; b<=N; b++)
    printf("%d ",arr[b]);

    
  return 0;  
}
