#include <stdio.h>

int main(void)
{
    int N;
    int s;
    int sum = 0;
    
    scanf("%d",&N);
    int arr[100];
    for(int i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&s);
    for(int j=0; j<N; j++)
    {if(arr[j]==s)
        sum+=1;
    }
    printf("%d",sum);    
    return 0;
}