#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int num;
    int count=0;
    int i=0;
    int j=0;

    for(i=0; i<n; i++)
    {
        scanf("%d",&num);
       for(j=2; j<num; j++)
         {
           if(num%j==0)
                break;
         }
               if(j==num)
                {
                    count++;
                }
               
             }         
            printf("%d\n",count);
             return 0;
         }  

   
            
    
