#include <stdio.h>

int main(void)
{
    int X; // 총 합
    int N; // 산 물건의 종류
    int a; // 산 물건의 가격
    int b; // 해당 물건의 갯수 
    int sum = 0;
    scanf("%d",&X);
    scanf("%d",&N);
    for(int i=0; i<N; i++)
    {
        scanf("%d %d",&a,&b);
        sum += a*b;
    }
    if(sum == X)
        printf("Yes\n");
        else
        printf("No\n");
   
return 0;
}

/*작은 꿈이 큰 소망을 이룬다. */