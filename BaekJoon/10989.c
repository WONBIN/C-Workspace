#include <stdio.h>

int main()
{
int n;
scanf("%d",&n);
int num[n];
int temp;
int k=0;
int j=0;
for(int i=0; i<n; i++)
    scanf("%d",&num[i]);


for(k=0; k<n; k++)
{

for( j=0; j<n-1; j++)
    {
    if(num[j]>num[j+1])
        {
            temp = num[j];
            num[j] = num[j+1];
            num[j+1] = temp;
        }
    }
    
            }
for(j=0; j<n; j++)
{
    printf("%d\n",num[j]);
}
return 0;
        }



