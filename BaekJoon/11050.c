#include <stdio.h>

int main()
{
    int N;
    int K;
    int temp=1;
    int tmp=1;
    scanf("%d",&N);
    scanf("%d",&K);

    for(int i=0; i<K; i++)
    {
        temp*=(N-i);
        tmp*=(K-i);
    }
    printf("%d",temp/tmp);
    return 0;    
}