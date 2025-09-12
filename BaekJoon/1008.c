#include<stdio.h>

int main(void)
{
    double A;
    double B;

    scanf("%lf %lf",&A,&B);
    if(A>0 && B>0 && A<10 && B<10)
        printf("%.9lf",A/B);
    else
        return 1;

    return 0;
}