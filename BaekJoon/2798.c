#include <stdio.h>

int main()
{
   int n,m;
   scanf("%d %d",&n,&m);
   int arr[100];
   int max=0;
   for(int i=0; i<n; i++)
    {
         scanf("%d",&arr[i]);
    }
    for(int k=0; k<n; k++)
     {
        for(int j=k+1; j<n; j++)
        {
            for(int l=j+1; l<n; l++)
            {
               if(((arr[k]+arr[j]+arr[l])<=m)&&(max<(arr[k]+arr[j]+arr[l])))
               {
                   max=arr[k]+arr[j]+arr[l];
               }            
        }
     } 
    }  
   printf("%d",max);
    return 0;
}