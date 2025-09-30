#include <stdio.h>

int main(void)
{
    int a,b,t_case;
    scanf("%d",&t_case);
    
    for(int i=0; i<t_case; i++)
    {
         scanf("%d %d",&a,&b);
        if(a>0 && a<10 && b>0 && b<10)
        {
        printf("%d\n",a+b);
        }
    }
   
    return 0;
}


/*정진하자.이상*/