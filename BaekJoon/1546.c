#include <stdio.h>

int main()
{
int n;
scanf("%d",&n);
int num[n];
int max=0;
float sum=0;
for(int i=0; i<n; i++)
    {scanf("%d",&num[i]);
    if(num[i]>=max)
        max=num[i];
    }
    for(int j=0; j<n; j++)
    {
        sum+=(float)num[j] / max * 100;

    }
    sum=sum/n;
    printf("%f\n",sum);
    return 0;
}