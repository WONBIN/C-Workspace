#include <stdio.h>
#include <string.h>
#define ZERO 0
int main()
{
   int a;
   int b=0; 
   int sum=0;
   int temp;
   scanf("%d",&a);
   while(b<a)
   {
    temp=b;
    while(temp>0)
    {
        sum+=temp%10;
        temp=temp/10;
    }
    
    if(a==(b+sum))
    {
        printf("%d\n",b);
        return 0;
    }
    else b++;
    sum=0;
    if(b==a)
    {
        printf("%d",ZERO);
        return 0;
    }
   }
    
   return 0; 
}