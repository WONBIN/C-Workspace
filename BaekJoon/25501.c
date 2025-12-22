#include <stdio.h>
#include <string.h>
int cnt = 0;
int recursion(const char *s, int l, int r){  
    cnt++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}
int main(){
    long int tcase;
    scanf("%ld",&tcase);
    for(long int i=0; i<tcase; i++)
    {
        char str[1001];
        getchar();
        scanf("%s",str);
        cnt = 0;
        if(isPalindrome(str))
        {
            printf("%d %d\n",1,cnt);
        }
        else
        {
            printf("%d %d\n",0,cnt);        
        }
    }
    
    return 0;
}