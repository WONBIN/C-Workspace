#include <stdio.h>

int main()
{
    int N;
    int min = 1000000;
    int max = -1000000;

    scanf("%d",&N);
    int arr[N] = {}; // 이런 표현 쓰면 안됨(compile error) . 선언만 해야함 int arr[n]; 처럼 
    for(int i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>max)
            max = arr[i];
        if(arr[i]<min)
            min = arr[i];    
    }
printf("%d %d",min,max);

    return 0;
}

//와 어쩌면 ,, ai가 발전한게 다행이다 .
/// max 를 -1000000 으로 설정해서 for 문 돌면서 들어오는 수가 커지면 커지는대로 max가 최신화 된 값을 
//가지게 할 수 있도록 하는 게 포인트구나 ... !!!!
//min 은 반대가 될 거고 
// 문제의 조건을 잘 읽어야한다는 것 !!!!