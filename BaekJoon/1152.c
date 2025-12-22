#include <stdio.h>
#include <string.h>
int main()
{
 char str[1000000];
 scanf("%[^\n]s",str);
 int count=0;
 int len;
 len = strlen(str);

 if(len==1 && str[0]==' ')
 {
     printf("%d",count);

     return 0;
 }

for(int i=1  ; i<len-1; i++)
{
 if(str[i]==' '){
     count++;     
 }
}
 
printf("%d",count+1);

    return 0;
}