#include <stdio.h>
#define five 5
#define three 3

int main()
{
  int N;
  scanf("%d",&N);  
  int cnt=0;
  int quot;
  quot = N/5;
  if(N<5)
  {
    if(N==3) printf("1");
    else printf("-1");
  }
else{
  if(N%5==0) printf("%d",quot);
  else{
    while(quot>=0)
    {
    if((N-(quot*five)) % 3 == 0)
    {
    break;
    }
    else{
        quot--;
    }
  }
  if(quot<0) printf("-1");
  else
  printf("%d",quot+((N-(quot*five))/3));
}
}
  return 0;
  }

  




