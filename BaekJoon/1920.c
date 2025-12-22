#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
      int *pa = (int *)a;
      int *pb = (int *)b;
      if(*pa > *pb)
      {
          return 1;
      }
      else if(*pa < *pb)
      {
          return -1;
      }

      else
      {
          return 0;
      }
}
void binary_tree(int *arr,int size,int target)
{
    int front=0;
    int end=size-1;
    int mid; 
    int flag = 0; // flag를 0으로 초기화
    while(front<=end)
    {
        flag = 0;
        mid = (front+end)/2;
        if(target == *(arr+mid))
        {
            flag = 1;
            break;
        }
        else if(target > *(arr+mid))
        {
            front = mid+1;
        }
        else if(target < *(arr+mid))
        {
            end = mid-1;
        }
    }
    if(flag)
    {
      printf("1\n");
    }
    else
    {
        printf("0\n");
    }
}

int main()
{
int n;
scanf("%d",&n);
int *A = (int *)malloc(sizeof(int)*n);
for(int i=0; i<n; i++)
{
    scanf("%d",&A[i]);
}
qsort(A,n,sizeof(int),compare);

// A 배열을 모두 입력받은 후 M을 입력받습니다.
int m;
scanf("%d",&m);
int *B = (int *)malloc(sizeof(int)*m);

for(int j=0; j<m; j++)
{
    scanf("%d",&B[j]);
}
/*
for(int k=0; k<m; k++)
{
    first = 0;
    end = n-1;
    flag = 0;
    while(first<=end)
    {
         mid = (first+end)/2;
        if(B[k]==A[mid]) 
        {flag = 1;
         break;  
    }
    else if(B[k]>A[mid])
    {
        first = mid+1;
    }
    else if(B[k]<A[mid])
    {
        end = mid-1;
    }
    }
    if(flag)printf("1\n");
    else printf("0\n");
}
*/
for(int k=0; k<m; k++)
{
  binary_tree(A,n,B[k]);  
}
free(A);
free(B);
return 0;
}
