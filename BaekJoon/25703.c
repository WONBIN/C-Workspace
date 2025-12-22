#include <stdio.h>

int main()
{

    int count;
    scanf("%d",&count);
    int i=0;
    printf("int a;\n");
    printf("int *ptr = &a;\n");
    if(count>=2)
        printf("int **ptr2 = &ptr;\n");

    if(count>=3)
    {
    for(i=1; i<count-1; i++)
    {
         printf("int ");
        for(int j=0; j<i+2; j++)
           {printf("*");}
           printf("ptr%d",i+2);
           printf(" = &ptr%d;\n",i+1); 
           
        }
    }    
        return 0;
}

// 이중 for문 작성이 어려웠다 ......