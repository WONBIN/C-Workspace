#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d",&N);
    if(N % 4 == 0)
    {
        for(int i = 0; i<N; i=i+4)
            printf("long ");
    }
        printf("int");
return 0;    
}