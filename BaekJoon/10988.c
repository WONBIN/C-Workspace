#include <stdio.h>
#include <string.h>

int isPalindrome_recursive(char* str,int left, int right)
{
   if(str[left]!=str[right]) return 0;
    if(left>=right) return 1;

    return isPalindrome(str,left+1,right-1);
}
int isPalindrome(char* str)
{
int len = strlen(str);
int left = 0;
int right = len-1;

while(left<=right)
{
    if(str[left]!=str[right]) return 0;
    
    else{
        left++;
        right--;
        if(left>=right) return 1;
    }
}
}
int main()
{
char str[101];
scanf("%s",str);
int left = 0;
int right = strlen(str)-1;
if(isPalindrome(str,left,right))
{
    printf("1");
}
else
{
    printf("0");
}
    return 0;
}