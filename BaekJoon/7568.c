#include <stdio.h>
#include <stdlib.h>

typedef struct size
{
    int weight;
    int height;
    
}size;

int main()
{
 int num;
 scanf("%d",&num);
 int rank[num];
 for(int l=0; l<num; l++)
 {
    rank[l]=1;
 }
 int i,j;

size *list =(size*)malloc(sizeof(size)*num);

for(int k=0; k<num; k++)
{
scanf("%d %d",&list[k].weight,&list[k].height);    
}
for(i=0; i<num; i++)
{
    for(j=0; j<num; j++)
    {
       if(list[i].weight<list[j].weight && list[i].height<list[j].height)
        {
            rank[i]++;   
        }
    }
}
for(i=0; i<num; i++)
{
    printf("%d ",rank[i]);
}
free(list);
    return 0;
}