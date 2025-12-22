#include <stdio.h>
#include <math.h>

int main()
{
double a;
double b;
double c;
double d;
double e;
double f;
double exp = 2.0;

while(1)
{
    scanf("%lf%lf%lf",&d,&e,&f);
    if(d==0 && e==0 && f==0)
       {break;}

    a = pow(d,exp);
    b = pow(e,exp);
    c = pow(f,exp);
 if((a+b==c) || (c+b==a) || (a+c==b))
    printf("right\n");
else
    printf("wrong\n");
        
}

   return 0;
}