#include <stdio.h>

int main()
{
int A;
int B;
int gcd;
int lcm;
int temp;
int mux;

scanf("%d%d",&A,&B);
mux = A*B;
while(B!=0)
{
    temp = A % B;
    A=B;
    B=temp;
    if(B==0)
        gcd=A;
}


printf("%d\n",gcd);
printf("%d\n",mux/gcd);

    return 0;
}