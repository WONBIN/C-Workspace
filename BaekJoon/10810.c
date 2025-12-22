#include <stdio.h>

int main()
{
    int N;
    int M;
    int i,j,k;  
    int a;

    int basket[100] = {0,};
    scanf("%d",&N);
    scanf("%d",&M);

    //int basket[100];
   
    
    for(int h = 0; h<M; h++)
    {
        scanf("%d",&i);
        scanf("%d",&j);
        scanf("%d",&k);
    for(a = i; a<=j; a++)
    {
        basket[a] = k;
    }
    }
for(int b = 0; b<N; b++)
    printf("%d ",basket[b+1]);
    return 0;
}
