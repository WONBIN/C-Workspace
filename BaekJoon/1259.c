#include <stdio.h>
#include <string.h>

int main()
{   
int i,j;
char s[100000];


    
while(scanf("%s",s) && s[0]!='0')
{
    int len = 0;
    int flag = 1;

    while(s[len]!='\0')len++;

    for(int i=0; i<len/2; i++)
    {
        if(s[i]!=s[len-i-1])
        {
            flag = 0;
            break;
        }
    }
  flag ? printf("yes\n") : printf("no\n");
}

    return 0;
    }        
                      




