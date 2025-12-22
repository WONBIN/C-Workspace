#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b)
{
int *pa = (int *)a;
int *pb = (int *)b;
    if(*pa > *pb)
        return 1;
    else
        return -1;
}
int main()
{
int N;
scanf("%d",&N);    
int arr[N];

for(int i=0; i<N; i++)
{
    scanf("%d",&arr[i]);
}
qsort(arr,N,sizeof(int),compare);
for(int j=0; j<N; j++)
{
    printf("%d\n",arr[j]);
}
    return 0;
}