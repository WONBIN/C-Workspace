#include <stdio.h>

int main()
{
 int A,B,V;
 scanf("%d%d%d",&A,&B,&V);
 int day = V-B-1/ (A-B);
 
 printf("%d",day+1);
return 0;
}