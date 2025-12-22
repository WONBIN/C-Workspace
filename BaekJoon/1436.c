#include <stdio.h>

int main()
{
 int n;
 scanf("%d",&n);
 int num = 666;
 int cnt=0;

 while(1)
 {
    int temp = num;
    int check = 0;
    while(temp>0)
    {
        if(temp % 1000 == 666)
        {
            check=1;
            break;
        }
        temp/=10;
    }
        if(check)
        {
         cnt++;
        }
        if(cnt == n)
        {
            printf("%d\n",num);
            break;
        }
        num++;
 }


return 0;
    }
