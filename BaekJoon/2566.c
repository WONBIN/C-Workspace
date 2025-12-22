#include <stdio.h>

int main()
{
    int arr[9][9];
    int max=0;
    int i;
    int j;
    int h;
    int k;
    int hang=0;
    int yeol=0;
    for(i=0; i<9; i++)
    {
        for(j=0; j<9; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    } 
    
    for(h=0; h<9; h++)
    {
        for(k=0; k<9; k++)
        {
         if(arr[h][k]>=max)
            {
                max = arr[h][k];
                hang = h+1;
                yeol = k+1;
            }
         else
            {
                max = max;
            }
        }
    }  
     printf("%d\n",max);

    printf("%d %d",hang,yeol); 

    return 0; 
    }
 