#include <stdio.h>
#include <string.h>

int main()
{
    int gil;
    char count[100];
    scanf("%d",&gil);
    
    scanf("%s",count);
    
   int sum=0;

    for(int i=0; i<gil; i++)
        sum+=count[i]-'0';
              
        printf("%d\n",sum);

    return 0;
}

// str을 int 형태로 바꿔주니까 아스키 코드 '0'을 빼줘야한다