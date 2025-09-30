#include <stdio.h>

int main(void)
{
    int n;
    int sum = 0;
    scanf("%d",&n);
    if(n>=1 && n<=10000)
    {
    for(int i=1; i<=n; i++)
    {
        sum += i;
    }
    }
    printf("%d",sum);
    return 0;
}
/*이 정도는 되실게요 ㅋㅋ*/