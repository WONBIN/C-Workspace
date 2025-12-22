#include <stdio.h>
void print_with_comma(long long n)
{
   int stack[16];
   int top = 0;
   //int top = -1
   if(n<0)
   {
       
       n = -n;
   }
   if(n<1000)
   {
       printf("%d",n);
       return;
   }
   
   while(n>1000)
   {
       stack[top++] = n%1000;
       //stack[++top] = n%1000;
       n/=1000;
       
   }
   printf("%d",n);
   while(top>0) printf(",%03lld",stack[--top]);
   //while(top>=0)printf(",03%lld",stack[top--]);
}
int main()
{
   
long long num;
scanf("%lld",&num);
print_with_comma(num);
    return 0;
}