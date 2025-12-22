#include <stdio.h>
#include <stdlib.h>

int main()
{
 long long int num;
   scanf("%lld",&num);
  int two=0;
  int five=0;
  int ans;
  long long int temp=num;

  while(num>0)
  { 
    
    while(temp%2==0 && temp>0)
    {
      two++;
      temp=temp/2;
    }
    temp = num;
    while(temp%5==0 && temp>0)
    {
      five++;
      temp=temp/5;
    }
    temp = num--;
  }
if(two<five) ans = two;
else ans = five;
  return 0;
}