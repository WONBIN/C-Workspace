#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int age;
    int idx;
    char name[101];
}judge;
int compare(const void *a, const void *b)
{
    judge *pa = (judge*)a;
    judge *pb = (judge*)b;
    if(pa->age<pb->age)
        return -1;
        else if(pa->age>pb->age)
            return 1;
        else{
            if(pa->idx<pb->idx)
                return -1;
            else
                return 1;    
        }
        return 0;    
}
int main()
{
    int i,n;
    judge *list;
    scanf("%d",&n);
    list = malloc(sizeof(judge)*n);
    if (list == NULL) {
        // 메모리 할당 실패 시 프로그램 종료
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    for(i=0; i<n; i++)
    {
        scanf("%d %s",&list[i].age,list[i].name);
        list[i].idx = i;
    }
    qsort(list,n,sizeof(judge),compare);

    for(i=0; i<n; i++)
    {
        printf("%d %s\n",list[i].age,list[i].name);
    }

    free(list); // 할당된 메모리 해제
   
    return 0;
}