#include <stdio.h>
#include <string.h>


int main()
{
char str[15];
int count = 0;

scanf("%s",str);
int num_len = strlen(str);
for(int i=0; i<num_len; i++)
{
    if(str[i] == 'A' || str[i] == 'B' || str[i] == 'C')
        {count+=3;}
    else if (str[i] == 'D' || str[i] == 'E' || str[i] == 'F')
        {count+=4;}
    else if (str[i] == 'G' || str[i] == 'H' || str[i] == 'I')
        {count+=5;}    
    else if (str[i] == 'J' || str[i] == 'K' || str[i] == 'L')
        {count+=6;}
    else if (str[i] == 'M' || str[i] == 'N' || str[i] == 'O')
        {count+=7;}
    else if (str[i] == 'P' || str[i] == 'Q' || str[i] == 'R' || str[i] == 'S')
        {count+=8;}
    else if (str[i] == 'T' || str[i] == 'U' || str[i] == 'V')
        {count+=9;}
    else if (str[i] == 'W' || str[i] == 'X' || str[i] == 'Y' || str[i] == 'Z')
        {count+=10;}                
}
printf("%d",count);

return 0;
}
