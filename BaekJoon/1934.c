#include <stdio.h>

int gcd(int a, int b)
{
    int temp;
    while(b!=0)
    {
        temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b)
{
    return (a*b)/gcd(a,b);
}


int main()
{
    int T;
    scanf("%d",&T);
    int x,y;
for(int i=0; i<T; i++)
{
    scanf("%d %d",&x,&y);
    printf("%d\n",lcm(x,y));
}    

    return 0;
}