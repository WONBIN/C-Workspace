#include <stdio.h>
#include <math.h>
#define First 1
#define Second 2
#define Third 3
void hanoi_recursive(int n, int from, int to, int aux)
{
    if(n==1)
    {
        printf("%d %d\n",from,to);
        return;
    }
    hanoi_recursive(n-1,from,aux,to); // 제일 먼저 작은 놈을 보조로 옮기고 from->aux
    printf("%d %d\n",from,to); //큰 놈이 도착지에 안착을 하면  큰 형님이 from->to를 하면 
    hanoi_recursive(n-1,aux,to,from); //보조에서 도착지로 aux->to
    return;
}
// 제일 먼저 작은 놈을 보조로 옮기고 
//큰 놈
int main()
{
int n;
scanf("%d",&n);
printf("%d\n",(int)pow(2,n)-1);
hanoi_recursive(n,First,Third,Second);

return 0;
}